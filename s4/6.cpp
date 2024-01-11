#include <iostream> 
using namespace std; 

int main(){
    int n;
    float x;
    long double res=1;
    cin >> n >> x; 
    for(int i = 2 ; i <= n ; i++){
        long double fac = 1 , multiple = x;
        for(int j = (i-1)*2; j > 0 ; j--){
            fac *= j;
        }
        for(int j = 1; j < (i-1)*2 ; j++){
            multiple *= x; 
        }
        if(i % 2 == 0){
            res -= double(multiple/fac);
        } else {
            res += double(multiple/fac);
        }
    }
    cout << res;
}