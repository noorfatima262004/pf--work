#include <iostream>
using namespace std;
main()
{
    string word;
    int count = 0;
    cout << "Enter a word=";
    cin >> word;
    for (int x = 0; word[x] != '\0'; x++)
    {
        count++;
    }
     // cout << count << endl;
     if (count % 2 == 0)
            cout << "Even";
        else
            cout << "ODD";   
}
