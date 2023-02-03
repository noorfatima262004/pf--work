#include <iostream>
using namespace std;
main()
{
    int arrsize = 4;
    int store = 0;
    int p =0;

    string dance[10] = {"Shimmy", "Shake", "Piroutte", "Slide", "BOx Step", "Headspin", "Dosado", "pop", "LOck ", "Arabesque"};
    int moves[arrsize];

    for (int index = 0; index < 4; index++)
    {
        cout << "Enter a number: ";
        cin >> moves[index];
         p = moves[index];
    }
  

    if (p > -1 && p < 10) 
    {
        for (int index = 0; index < 4; index++)
        {
            store = moves[index] + index;

            if (store > 9)
            {
                store = store - 10;
                
            }

            cout << dance[store] << " ,";
        }
    }
    else
        cout << "INVALID INPUT..";
}