#include <iostream>
using namespace std;
void upper(int rows);
 void lower(int rows);
main()
{
    int rows;
    cout << "Enter the num of rows=";
    cin >> rows;
    upper(rows);
    lower(rows);
}
void upper(int rows)
    {
        for(int i = 1; i <= rows ; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        cout << endl;
        }
    }
 void lower(int rows)
{
      for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            cout << "*";
        }
     cout << endl;
    }  
} 
