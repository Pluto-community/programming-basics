#include <iostream> 
using namespace std; 

int main(){
    int n , c , count=0; 
    cin >> c >> n; 
    for(int i = c; i <= n; i++){
        int j = 2;
        while(i % j != 0){
            j++; 
        }
        if(i == j){
            cout << ">> " << i << endl;
        }
    }
}