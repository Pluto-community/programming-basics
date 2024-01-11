#include <iostream>
#include <math.h>
using namespace std; 

int fuc(int num){
    int res = 1;
    for(int i = num; i > 0 ; i--){
        res *= i; 
    }
    return res;
}
double cos(double rad , double eps){
    long double res = 1 , delta=1;
    // logic
    int fuctorial = 2 , multiple=2 , is = -1;
    while(delta > eps){
        delta = pow(rad , multiple)/fuc(fuctorial);
        res += is * delta;
        fuctorial += 2; multiple += 2; is=-is;
        // cout << delta << "     ";
    }
    return res;
}
int main(){
    // get a first degree
    double deg; 
    cout << "enter degree : ";
    cin >> deg; 
    cout << endl;
    // convert degree to radian
    double rad = deg / 180 * M_PI; 
    // get eps
    long double eps;
    cout << "enter eps : ";
    cin >> eps;  
    cout << endl; 
    cout << cos(rad , eps);
}