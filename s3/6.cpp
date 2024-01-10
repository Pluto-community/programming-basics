#include <iostream>
using namespace std; 

int main(){
    float x; 
    cin >> x; 
    if(x > 0){
        cout << x * x;
    } else if (x < 0){
        cout << 2 * x;
    } else {
        cout << 0;
    }  
}