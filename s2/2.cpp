#include <iostream>
using namespace std; 
int main(){
    int time; 
    cin >> time; 
    int hours = time / 3600; 
    int minutes = (time % 3600) / 60; 
    int seconds = time % 60;
    cout << hours << ":" << minutes << ":" << seconds;
    return 0;
}