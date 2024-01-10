#include <iostream>
using namespace std; 

int main(){
    int m , d , count = 0; 
    cin >> m >> d; 
    // input validation 
    if(m > 12 || m < 1){
        cout << "month is out of range"; 
    } 
    if(d > 31 || d < 1){
        cout << "day is out of range"; 
    }
    // logic 
    count += (m <= 6) ? (m-1)*30 : 5*30 + (m-6)*31; 
    count += d; 
    int which_day = count % 7; 
    switch(which_day){
        case 0: 
            cout << "shanbeh";
            break;
        case 1: 
            cout << "yekshanbeh";
            break;
        case 2: 
            cout << "doshanbeh";
            break;
        case 3: 
            cout << "seshanbeh";
            break;
        case 4: 
            cout << "charshanbeh";
            break;
        case 5: 
            cout << "panjshanbeh";
            break;
        case 6: 
            cout << "jomeh"; 
            break;
    }
}