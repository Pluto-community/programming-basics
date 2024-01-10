#include <iostream> 
using namespace std; 

int main(){
    float a,b,c; 
    cin>>a>>b>>c; 
    bool is_triangle = (
        a + b > c && 
        b + c > a && 
        a + c > b 
    ); 
    if(is_triangle) 
        cout << "this is triangle";
}