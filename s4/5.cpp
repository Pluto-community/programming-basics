#include <iostream>
using namespace std; 

int main(){
    unsigned long int a=1,b=1,n,temp,sum=0;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){ 
        temp = a + b; 
        a = b; 
        b = temp; 
        sum += temp;
    }
    temp -= 1;
    cout << temp;
}