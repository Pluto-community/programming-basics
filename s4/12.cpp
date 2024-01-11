#include <iostream> 
using namespace std; 

int main(){
    int n , num , fuc = 1; 
    cin >> n; 
    for(int i = 1 ; i <= n ; i++){
        fuc *= i; 
        cout << fuc << " ";
    }
}