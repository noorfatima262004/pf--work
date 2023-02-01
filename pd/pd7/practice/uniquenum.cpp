#include <iostream>
using namespace std;
int moud(int num);
main()
{
    int num;
    cout << "Enter a num=";
    cin >> num;
    int result = moud(num);
}
int moud(int num)
{
    for (int x = 1111; x <= 9999; x++)
    {
        int rem1, num1, rem2, num2, rem3 ,num3;
        rem1 = x % 10;
        num1 = x / 10;
        rem2 = num1 % 10;
        num2 = num1 / 10;
        rem3 = num2 % 10;
        num3 = num2 / 10;

        if ((num % rem1 == 0) &&(num % rem2 == 0) && (num % rem3 == 0) && (num % num3 == 0))
        {
            cout << "NUM=" << x;
        }
    }
}