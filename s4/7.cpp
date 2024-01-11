#include <iostream>
using namespace std;

int main(){
    int n;
    float x;
    long double res;
    // get input
    cin >> n >> x; 
    // input validation 
    if(n < 0){
        cout << "n is out of range"; 
        return false;
    } 
    res = x;
    // logic 
    for(int i = 2 ; i <= n ; i++){
        long double multiple = x , fac = 1; 
        for(int j = 2; j <= 2*(i-1)+1 ; j++){
            fac *= j;
        }
        for(int j = 2*(i-1)+1; j > 1; j--){
            multiple *= x;
        }
        if(i % 2 == 0){
            res -= double(multiple/fac);
        } else {
            res += double(multiple/fac);
        }
    }
    cout << res;
    return 0;
}