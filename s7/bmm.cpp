#include <iostream>
using namespace std;
int bmm(int a , int b){
    int temp = a % b;
    // 72 % 30 = 12
    // 30 % 12 = 6
    // 12 % 6 = 0
    while(temp != 0){
        a = b;
        b = temp;
        temp = a % b;
    }
    return b;
}
int kmm (int a , int b){
    return (a * b)/bmm(a,b);
}
int main(){
    int a , b;
    cin >> a >> b;
    cout << "BMM : " << bmm(a,b) << " KMM : " << kmm(a,b);
}