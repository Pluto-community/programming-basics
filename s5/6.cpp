#include <iostream>
using namespace std;

int main()
{
    int num, count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cin >> num;
        int temp = num , total = 0;
        while (temp != 0)
        {
            total += (temp % 10);
            temp /= 10;
        }
        cout << "->  " << total << endl;
    }
}