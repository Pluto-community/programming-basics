#include <iostream> 
using namespace std; 

int main(){
    int count , m=0; 
    cin >> count; 
    if(count <= 365){
        if(count > 31*5){
            m = 6 + (count - 31*5)/30; 
        } else{
            m = count / 31;
        }
        m = (count % 31 == 0) ? m : m+1;
        cout << m;
    } else {
        cout << "out of range";
    }
}