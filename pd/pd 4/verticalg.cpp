#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int x, int y);
void playermove(int x, int y);
main()
{
system("cls");
printmaze();
int x=64;
int y= 2;
while(true)
{
playermove(x,y);
gotoxy(x,y);
if( y< 20)
{
  y = y+1;
}
if(y == 20)
{
   gotoxy(x,y-1);
   cout<< " ";
    y=2;
}

}

}
void printmaze()
{
cout << " ####################################################################################### " << endl;
cout << " ||..  ..........................................................    ........         ||" << endl;
cout << " ||..  %%%%%%%%%%%%%%%%%%%        ...    %%%%%%%%%%%%%%%%    |%|..    %%%%%%          || " << endl;
cout << " ||..          |%|     |%|     |%|...   |%|            |%|   |%|..       |%|          ||" << endl;
cout << " ||..          |%|     |%|     |%|...   |%|            |%|   |%|..       |%|.         ||" << endl;
cout << " ||..    %%%%%%%%%%%%%%%%%     |%|...   |%|            |%|               |%|.         ||" << endl;
cout << " ||..          |%|       . .   |%|...    %%%%%%%%%%%%%%%%    |%|..         %%%%%%.    ||" << endl;
cout << " ||..          |%|       . .   |%|...                        |%|..               .    || " << endl; 
cout << " ||..          %%%%%%%%%%. .   |%|...       ..............   |%|..               .    || " << endl;                 
cout << " ||..                 |%|.                    %%%%%%%%%%%%      ..         %%%%%%.    || " << endl;             
cout << " ||..     .........   |%|.                    |%|........       ..            |%|.    || " << endl;      
cout << " ||..|%|  |%|%%%%|%|. |%|.     |%|            |%|........|%|    ..|%|         |%|.    || " << endl;                                       
cout << " ||..|%|  |%|    |%|..         %%%%%%%%%%%%%     ........|%|    ..|%|   %%%%%%|%|.    ||" << endl;
cout << " ||..|%|  |%|    |%|..              .....|%|     ........|%|    ..|%|.           &&&&&||" << endl;
cout << " ||..|%|            .               .....|%|         %%%%%%%    ..|%|.           &    ||" << endl;
cout << " ||..|%|     $$$$$$$$$              .....|%|                    ..|%|.       &&&&&    ||" << endl;
cout << " ||..|%|              $$$$$$$$$$$   .....|%|%%%%%%%%%%     |%|  ..|%|&&&&&&&          ||" << endl;
cout << " ||.. ..................................................   |%|  ......................||" << endl;
cout << " ||..    ...............................................   |%|                        ||" << endl;
cout << " ||..   |%|    |%|   |%|..      &&&&&&&         ...........|%|  &&&&&&&           |%| ||" << endl;
cout << " ||..   |%|    |%|   |%|..             &                              &           |%| ||" << endl;
cout << " ||..   |%|              .               &&&&&& |%|     |%|            &&&&&&     |%| ||" << endl;
cout << " ||..   |%|        ###########    |%|           |%|     |%|          |%|          |%| ||" << endl;
cout << " ||..             |%|             |%|           |%|     |%|..........|%|      %%%%%%  ||" << endl;
cout << " ||..             |%|             |%|%%%%%%     |%|&&&&&&&&          |%|              ||" << endl;
cout << " ||.. ..............................................................................  ||" << endl;
cout << " ######################################################################################" << endl;
}
void playermove(int x, int y)
{ 
    gotoxy(x,y-1);
    cout << "  ";
     gotoxy(x,y);
     cout<<"P";
     Sleep(200);
}


void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}