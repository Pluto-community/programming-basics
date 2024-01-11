#include <iostream>
using namespace std; 

int main(){
    int n , x; 
    cin >> n >> x; 
    double res = 0;
    for(int i=1; i <= n; i++){
        int fac = 1;
        for(int j = (i+1) ; j > 0 ; j--){
            fac *= j;
        }
        if(i % 2 == 1){
            res += double((i+1)*x/fac);
        } else {
            res -= double((i+1)*x/fac);
        }
    }
    cout << res;
}