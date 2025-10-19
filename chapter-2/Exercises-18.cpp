// ******** QUESTION ******** 
/*
(Print a table) Write a program that displays the following table:
x     y     pow(x, y)
2.5   1.2     3.00281
5.0   2.4     47.5913
1.2   3.6     1.92776
2.4   5.0     79.6262
3.6   2.5     24.5899
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){

  cout << "x     y     pow(x, y)"<<endl;
  cout << "2.5   1.2     "<<pow(2.5,1.2)<<endl;
  cout << "5.0   2.4     "<<pow(5.0,2.4)<<endl;
  cout << "1.2   3.6     "<<pow(1.2,3.6)<<endl;
  cout << "2.4   5.0     "<<pow(2.4,5.0)<<endl;
  cout << "3.6   2.5     "<<pow(3.6,2.5)<<endl;
  return 0;
}