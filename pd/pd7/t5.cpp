#include <iostream>
using namespace std;
main()
{
    int patients;
    int days;
    int treatedpat = 0, untreatedpat = 0;
    int doc = 7;
    cout << "Enter the days for calculations= ";
    cin >> days;
    for (int x = 1; x <= days; x++)
    {

        cout << "Enter the number of patients=";
        cin >> patients;

        if (patients <= doc)
        {
            treatedpat = patients + treatedpat;
        }
        else if (patients > doc)
        {
            treatedpat = treatedpat + doc;
            untreatedpat = untreatedpat + (patients - doc);
        }
        if (days % 3 == 0)
        {

            if (untreatedpat > treatedpat)
            {
                doc++;
            }
        }
    }
    cout << "TREATED PATIENTS=" << treatedpat  << endl;
    cout << "UNTREATED PATIENTS=" << untreatedpat  << endl;
}