#include <iostream>
using namespace std;

int main()
{
    int  count = 0;
    double greater , smaller , in , sum = 0 , num[100] , smaller_than_average[100] , bigger_than_average[100];
    cin >> in;
    smaller = in;
    while (in != 0)
    {
        num[count] = in;
        sum += in;
        count++;
        cin >> in;
    }
    int less_than_average = 0;
    double average = sum / (count+1);
    int greater_than_average = 0;
    int equal_to_average = 0;
    for (int i = 0; i < count ; i++)
    {
        if (num[i] < average)
        {
            smaller_than_average[less_than_average] = num[i];
            less_than_average++;
            if(num[i] < smaller){
                smaller = num[i];
            }
        }
        else if (num[i] > average)
        {
            bigger_than_average[greater_than_average] = num[greater_than_average];
            greater_than_average++;
            if(num[i] > greater){
                greater = num[i];
            }
        }
        else
        {
            equal_to_average++;
        }
    }
    cout << "input count : " << (count + 1) << endl
         << "average : " << average  << endl
         << "count of less than average inputs : " << less_than_average << endl
         << "count of greater than average inputs : " << greater_than_average << endl
         << "count of equal to average inputs : " << equal_to_average << endl
         << "smaller number : " << smaller << endl
         << "greater number : " << greater << endl;
    cout << "smaller than average numbers : " << endl;
    for(int i = 0 ; i < less_than_average ; i++)
    {
        if(smaller_than_average[i] != 0) {
            cout << smaller_than_average[i] << " , ";
        }
    }
    cout << endl << "bigger than average numbers : " << endl;
    for(int i = 0 ; i < greater_than_average ; i++)
    {
        cout << bigger_than_average[i] << " , ";
    }
    return 0;
}