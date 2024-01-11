#include <iostream> 
using namespace std; 

int main(){
    int num; 
    cin >> num; 
    if(num < 2){
        cout << "num is out of range"; 
        return false;
    }
    int data[num] , counter = 0;
    bool so , no , mo , run = true; 
    while(run){
        if(counter < num){
            int in;
            cin >> in;
            data[counter] = in; 
        }
        if(counter >= 1){
            if(data[counter-1] > data[counter]){
                no = true;
            } else if(data[counter-1] < data[counter]){
                so = true;
            }
        }
        if(so && no){
            cout << "mokhtalet";
            run = false;
        } else if (counter == (num-1)){
            if(so){
                cout << "soodi";
            } else if (no){
                cout << "nozooli";
            } else { 
                cout << "khat";
            }
            run = false;
        }
        counter ++;
    }
}