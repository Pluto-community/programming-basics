#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    bool run = true;
    int target = num - 1, count = 3;
    if (target == 2)
    {
        cout << 2;
    }
    while (target > 2)
    {
        while (target % 2 == 1 && target % count != 0)
        {
            count++;
        }
        if (target % count == 0)
        {
            cout << target;
            run = false;
        }
        target--;
    }

    return 0;
}