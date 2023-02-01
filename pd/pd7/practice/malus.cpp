#include <iostream>
#include <cmath>
using namespace std;
int calculate(int num);
bool isMalus(int num);
main()
{
    int num;
    cout << "Enter a num=";
    cin >> num;
    int result = isMalus(num);
    cout << result;
}
int calculate(int num)
{
    int count = 0;
    for (int x = num; x > 0; x = x / 10)
    {
        count++;
        cout <<"count=" << count << endl;
    }
    return count;
}
bool isMalus(int num)
{
    int count = calculate(num);
    float sum = 0;
    for (int x = num; x != 0; x = x / 10)
    {
        int power = pow(x % 10, count);
        cout << "power" << power << endl;
        sum = sum + power;
        cout << "sum = " << sum << endl;
        count--;
    }
    if (sum == num)
        return true;
    else
        return false;
}