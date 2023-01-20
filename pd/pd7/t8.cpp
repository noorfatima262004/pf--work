#include <iostream>
using namespace std;
main()
{
    int rows;
    int doublerows;
    int columns;
    cout << "Enter rows=";
    cin >> rows;
    doublerows = rows * 2;
    for(int r = 1; r <= rows; r++)
    {
        for(int c =1 ;c < doublerows ; c++)
        {
            columns = doublerows - r;
            if(c <= r)
            cout << "*";
            else if((c >= columns) && (c< doublerows))
            cout << "*";
            else 
            cout << " ";
        }
        cout << endl;

    }
}