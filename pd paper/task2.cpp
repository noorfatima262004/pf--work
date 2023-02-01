#include <iostream>
using namespace std;
main()
{
    int lines;
    int num;
    int sum1 =0 , sum2=0 , sum3 =0;
    cout << "Enter the num of lines=";
    cin >> lines;

    for (int x = 1; x <= lines; x++)
    {
      
     //  int count =0;
        cout << "Enter the num=";
        cin >> num;
        // count++;
       // cout << count << endl;
        for (int y = 1; y <= x; y = 3 + y)
        {
            sum1 = sum1 + y;
        }
        for (int y = 2; y <= x; y = 3 + y)
        {
            sum2 = sum2 + y;
        }
        for (int y = 3; y <= x; y = 3 + y)
        {
            sum3 = sum3 + y;
        }
    }
    cout << "SUM1= " << sum1 << endl;
    cout << "SUM2= " << sum2 << endl;
    cout << "SUM3= " << sum3 << endl;
}