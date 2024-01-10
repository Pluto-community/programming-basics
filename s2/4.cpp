#include <iostream>
using namespace std; 

int main(){
    int total_weight; 
    cin >> total_weight; 
    int weight_kilograms = total_weight / 1000;
    int weight_grams = total_weight % 1000; 
    cout << "total:" << total_weight << "g equals to " << weight_kilograms << "kg & " << weight_grams << "g";
}