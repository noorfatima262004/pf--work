#include <iostream>
using namespace std;
main()
{
    char word;
    string letter;
    bool ispresent = false;
    cout << "Enter a word=";
    cin >> word;
    cout << "Enter the letter =";
    cin >> letter;
    // to write a line with space;
    //getline(cin, variable in which we have to store);
    //cout << variable;

    for (int x = 0; letter[x] != '\0'; x++)
    {
        if (word == letter[x])
            ispresent = true;
    }
    if (ispresent == true)
        cout << "The word is PRESENT in  " << letter << endl;
    else
        cout << "The word is NOT PRESENT in " << letter  << endl;
}