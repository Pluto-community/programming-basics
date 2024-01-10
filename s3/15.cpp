#include <iostream> 
using namespace std; 

int main(){
    int m , d , count = 0;
    cin >> m >> d; 
    if(m < 1 || m > 12){
        cout << "month is out of range"; 
    } 
    if(d < 1){
        cout << "day is out of range";
    }
    if(m >= 4){
        if(m % 2 == 0 && d >= 31){
            cout << "day is out of range"; 
            return false;
        }
        count += ((m-2)/2)*31; 
        count += ((m-3)/2)*30;
    }
    if(m >= 3){
        count += 28;
    } 
    if(m >= 2){
        count += 31;
    }
    count += d; 
    cout << count;
}