#include <iostream>
#include <string>

using namespace std; 

int main(){
    for(int i = 1 ; i <= 4; i++){
        string stuff(4-i , ' ');
        cout << stuff;
        for(int j = 1 ; j <= (2*i)-1 ; j++){
            cout << i;
        }
        cout << endl;
    }
}