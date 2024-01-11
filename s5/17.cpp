#include <iostream> 
using namespace std; 

int main(){
    int start , end ; 
    cin >> start >> end; 
    start = start % 2 == 0 ? start + 1 : start;
    for(int i = start ; i <= end; i+=2){
        int count = 3;
        while(i%count != 0 && count <= i/2){
            count++; 
        }
        if((i+1) % count == 0){
            cout << i << " ";
        }
    }
    return 0;
}