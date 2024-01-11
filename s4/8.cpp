#include <iostream> 
using namespace std; 

int main(){
    int num; 
    cin >> num; 
    if(num < 1){
        cout << "num is out of  range";
        return false;
    }
    for(int i = 1 ; i <= num ; i++){
        cout << i << " ";
    }
    return 0;
}