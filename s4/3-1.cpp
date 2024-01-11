#include <iostream>
using namespace std; 

int main(){
    int n; 
    cin >> n; 
    double res = 0.0;
    for(int i = 1 ; i <= n ; i++){
        res += (double)((2*i)+1) / ((3*i)+5);
    }
    cout << res;
}