#include <iostream>
#include <cmath>
using namespace std;
//int square(int num);
main()
{
   int num;
   cout << "Enter a num=";
   cin >> num; 
   //int result = square(num);
//}
//int square(int num)
//{
    if(num > 0)
    {
        int positivesq = sqrt(num);
        if(positivesq < 10)
        {
            cout << "isqrt=" << positivesq << endl;
        }
        if(positivesq >= 5)
        {
            int secondsq = sqrt(positivesq);
            cout << "isqrt=" << secondsq << endl;
        }
    
    }
    if(num <= 0)
    {
        cout << "  -1  " << endl;
    }

}