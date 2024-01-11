#include <iostream> 
using namespace std; 

int main(){
    unsigned long int n,z,i=1,j=1; 
    cin >> n; 
    cout << i << "," << j<< ",";
    for(int k = 0 ; k <= n ; k++){
        z = i + j;
        i = j;
        j = z;
        cout << z << ",";
    }
}