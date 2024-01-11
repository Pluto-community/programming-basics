#include <iostream> 
using namespace std; 

int main(){
    int n , temp , input;
    cin >> n; 
    if (n < 1){
        cout << "n is out of range"; 
        return false;
    }
    cin >> temp;
    for(int i = 2; i <= n ; i++){
        cin >> input; 
        if(input < temp) temp = input;
    }
    cout << temp;
    return 0;
}