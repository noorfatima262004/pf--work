#include <iostream>
using namespace std;
main(){
int num;
int num1;
int num2;
int num3;
int num4;
int rem1;
int rem2;
int rem3;
int rem4;
int total;
cout << "enter a four digit number:";
cin >>num;
rem1= num%10;
num1= num/10;
rem2= num1%10;
num2= num1/10;
rem3= num2%10;
num3= num2/10;
rem4= num3%10;
num4= num3/10;
cout << "postion 1 is:"<<rem4<< endl;
cout << " postion 2 is:"<< rem3<< endl;
cout << "postion 3 is:"<<rem2<< endl;
cout << " postion 4 is:"<< rem1<< endl;
total= (rem4+rem2) + (rem3 * rem1) ;
cout << " total sum is:"<< total;
}

