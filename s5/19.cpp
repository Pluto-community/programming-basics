#include <iostream> 
using namespace std; 

int bmm(int a,int b){
    int temp = a % b; 
    while(temp != 0){
        a = b; 
        b = temp;
        temp = a % b; 
    }
    return b;
}
int kmm(int a , int b){
    return (a*b)/bmm(a,b);
}
int main(){
    int a , b , temp; 
    cin >> a >> b;
    // largest number is a first argument 
    if(b > a){
        temp = a; 
        a = b; 
        b = temp;
    }
    // result 
    cout << "bmm : " <<  bmm(a,b) << " kmm : " << kmm(a,b);
    return 0;
}