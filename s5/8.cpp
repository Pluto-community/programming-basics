#include <iostream>
#include <math.h>
using namespace std; 

int main(){
    int num; 
    cin >> num; 
    int temp = num , length = 0 , sum = 0 , res = 0; 
    while(temp != 0){
        length++; 
        sum += temp % 10;
        temp /= 10;
    }
    temp = num; 
    for(int i = length ; i > 0 ; i--){
        res += temp % 10 * pow(10 , i-1);
        temp /= 10;
    }
    cout << "--> " << res << endl << "--> " << length;
}