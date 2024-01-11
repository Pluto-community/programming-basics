#include <iostream>
using namespace std; 

int main(){
    char x; 
    cin >> x;
    int small_count = 0 , capital_count = 0; 
    while(x != '.'){
        bool small_condition = (
            x == 'a' || 
            x == 'o' || 
            x == 'u' || 
            x == 'i' || 
            x == 'e' 
        );
        bool capital_condition = (
            x == 'A' || 
            x == 'O' || 
            x == 'U' || 
            x == 'I' || 
            x == 'E' 
        );
        if(small_condition){
            small_count++; 
        } else if(capital_condition){
            capital_count++; 
        }
        cin >> x;
    }
    cout << "capital : " << capital_count << " small : " << small_count;
}