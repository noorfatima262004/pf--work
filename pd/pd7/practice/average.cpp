#include <iostream>
#include <cmath>
using namespace std;
float power(int num);
bool isMalus(int num);
float average(int start, int end);
main()
{
    float num, start, end;
    cout << "Enter a num=";
    cin >> num;
    bool result = isMalus(num);
    cout << result << endl;
    float result1 = average(start, end);
    cout << result1;
}
float power(int num)
{
    float count = 0;
    for (int x = num; x > 0; x = x / 10)
    {
        count++;
        cout << "count=" << count << endl;
    }
    return count;
}
bool isMalus(int num)
{
    float count = power(num);
    float sum = 0;
    for (int x = num; x > 0; x = x / 10)
    {
        // int power = x%10;
        // for(int y=0; y<count-1; y++){
        //   power *= x%10;
        //}
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
float average(int start, int end)
{
    float sum = 0;
    float count = 0;
    cout << "enter first range=";
    cin >> start;
    cout << "enter secnd range=";
    cin >> end;
    for (int x = start; x <= end; x++)
    {
        bool check = isMalus(x);
        // cout << "x = " << x;
        if (check == true)
        {
            sum = sum + x;
            count++;
        }
    }
    return sum / count;
}   