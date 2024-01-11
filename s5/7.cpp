#include <iostream> 
#include <math.h>
using namespace std; 

int main(){
    int num; 
    cin >> num; 
    int temp = num , length = 0 , res = 0; 
    while(temp != 0){
        temp /= 10; 
        length++;
    }
    temp = num;
    for(int i = length; i >= 0; i--){
        int multiple = 1;
        for(int j = 1 ; j < i; j++){
            multiple *= 10;
        }
        res += (temp %10)*multiple; 
        temp /= 10;
    }
    cout << res;
}