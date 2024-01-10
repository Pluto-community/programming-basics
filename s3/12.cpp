#include <iostream>
using namespace std;

int main()
{
    int m, d, count = 0;
    cin >> m >> d;
    if(m < 1 || m > 12){
        cout << "month is out of range";
        return; 
    } 
    if(d < 1 || d > 31){
        cout << "day is out of range";
        return;
    }

    if (m <= 3)
    {
        count += (m - 1) * 31;
    }
    else if (m <= 6)
    {
        count += 2 * 31;
        count += (m - 3) * 30;
    }
    else if (m <= 9)
    {
        count += 2 * 31;
        count += 3 * 30;
        count += (m - 6) * 31;
    }
    else if (m <= 12)
    {
        count += 2 * 31;
        count += 3 * 30;
        count += 3 * 31;
        count += (m - 9) * 30;
    }
    count += d;
    cout << count;
}