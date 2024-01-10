#include <iostream>
using namespace std; 

int main(){
    int number; 
    cin >> number; 
    int n1 = number/100; 
    int n2 = (number-n1*100)/10;
    int n3 = number%10;
    cout << n3 << n2 << n1;
}