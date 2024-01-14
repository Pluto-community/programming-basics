#include <iostream>
#include <math.h>
using namespace std;

int fuc(int num){
    int fuctorial = 1;
    for(int i = num ; i > 1 ; i--){
        fuctorial *= i;
    }
    return fuctorial;
}
double pow(float a , int b){
    float res = 1;
    for(int i = 0; i < b ; i++){
        res *= a;
    }
    return res;
}
float deg_to_rad(float deg){
    return M_PI*deg/180;
}
double sin_tylor(float rad,int num){
    return pow(rad , (num*2)-1)/fuc((num*2)-1);
}
double sin(float rad , double eps){
    int is = -1 , count = 2;
    double res = rad , delta = rad;
    while(eps < delta){
        delta = sin_tylor(rad,count);
        res += is * delta;
        is = -is;
        count++;
    }
    return res;
}
int main(){
    float deg;
    cout << "what's degree ?" << endl;
    cin >> deg;
    double eps;
    cout << "what's eps ?" << endl;
    cin >> eps;
    cout << sin(deg_to_rad(deg) , eps);
}