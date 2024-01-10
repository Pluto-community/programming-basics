#include <iostream>
using namespace std; 

int main(){
    float a,b,c; 
    cin>>a>>b>>c; 
    if(a == b && b == c){
        cout << "mesavi azla ast";
    } else if(a == b || b == c){
        cout << "metavi saghein ast"; 
    } else {
        cout << "mosavi azla/saghein nist";
    }
    return 0;
}