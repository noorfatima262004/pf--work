#include <iostream>
using namespace std;
main()
{
    int num;
    int sum = 0;
    for (int i = 1; i >= 0; i++)
    {
        cout << "Enter a num=";
        cin >> num;
        if(num > 0)
        {
        sum = sum + num;
        }
        if(num<0)
        {
            break;
        }
    }
    cout << sum;
}
