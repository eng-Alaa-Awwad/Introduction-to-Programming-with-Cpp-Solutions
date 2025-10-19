// ******** QUESTION ******** 
/*
  (Financial application: calculate tips) Write a program that reads the subtotal and
  the gratuity rate, then computes the gratuity and total. For example, if the user enters
  10 for subtotal and 15% for gratuity rate, the program displays $1.5 as gratuity and
  $11.5 as total.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double subtotal, rate, gratuity, total;

  cout << "Enter the subtotal and a gratuity rate ";
  cin >> subtotal >> rate;

  gratuity = subtotal * ( rate / 100.0 );
  total = subtotal + gratuity;

  cout << "The gratuity is $"<< gratuity<< " and total is $"<< total;

  return 0;
}