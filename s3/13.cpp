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
    count += (m/2)*31; 
    count += ((m-1)/2)*30; 
    count += d; 
    cout << count;
}