#include <iostream> 
using namespace std; 

int main(){
    float a,b,c; 
    cin>>a>>b>>c; 
    if(a==b && b==c){
        cout << "motesavi azla ast"; 
    } else if (a==b || b==c){
        cout << "motesavi saghein ast"; 
    } else {
        bool is_ghaemzavie = (
            a*a == b*b + c*c || 
            b*b == a*a + c*c || 
            c*c == a*a + b*b
        ); 
        is_ghaemzavie ? cout << "ghaem zavie ast" : cout << "i don't know what is this";
    }
}