#include <iostream> 
using namespace std; 

int main(){
    int d,m,count=0;
    cin>>m>>d;
    if(m>6){
        count += ((m-5)*30 + 5*31);
    } else if(m<6){
        count += (m-1)*31;
    } else {
        cout << "error month can't be zaro"; 
        return false;
    }
    count += d;
    cout << count;
    return 0;
}