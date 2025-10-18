// ******** QUESTION ******** 
/*
(Print a table) Write a program that displays the following table:
  p     p*5   p*10
  5     25    50
  10    50    100
  25    125   250
  50    250   500
*/

// ******** SOLUTION-1 ******** 
/*
#include<iostream>
using namespace std;

int main(){
  cout << "p     p*5   p*10" << endl;
  cout << "5     25    50" << endl;
  cout << "10    50    100" << endl;
  cout << "25    125   250" << endl;
  cout << "50    250   500" << endl;
  return 0;
}
*/

// ******** SOLUTION-2 ******** 

#include<iostream>
using namespace std;

int main(){
  int p1=5, p2=10, p3=25, p4=50;
  cout << "p     p*5   p*10" << endl;
  cout << p1 <<"     "<<p1*5<<"    "<<p1*10<< endl;
  cout << p2 <<"    "<<p2*5<<"    "<<p2*10<< endl;
  cout << p3 <<"    "<<p3*5<<"   "<<p3*10<< endl;
  cout << p4 <<"    "<<p4*5<<"   "<<p4*10<< endl;
  return 0;
}