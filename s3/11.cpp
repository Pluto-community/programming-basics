#include <iostream> 
using namespace std; 

int main(){
    int m , d , count=0;
    cin >> m >> d;
    // input validation 
    if(m > 12 || m < 1){
        cout << "month is out of range";
        return false;
    }
    if(d > 31 || d < 1){
        cout << "day is out of range";
        return false;
    }
    // logic 
    count = (m <= 6) ? (m-1)*31 : (5*31 + (m-6)*30);
    count += d;
    int what_day = count % 7; 
    switch(what_day){
        case 0: 
            cout << "jomeh";
        break;
        case 1: 
            cout << "shanbeh";
        break;
        case 2: 
            cout << "yekshanbeh";
        break;
        case 3: 
            cout << "doshanbeh";
        break;
        case 4: 
            cout << "seshanbeh";
        break;
        case 5: 
            cout << "charshanbeh";
        break;
        case 6: 
            cout << "panjshanbeh";
        break;
    }
}