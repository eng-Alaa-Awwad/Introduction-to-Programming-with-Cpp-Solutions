// ******** QUESTION ******** 
/*
  (Financial application: calculate interest) If you know the balance and the annual
  percentage interest rate, you can compute the interest on the next monthly payment
  using the following formula:
  interest = balance x (annualInterestRate/1200)
  Write a program that reads the balance and the annual percentage interest rate and
  displays the interest for the next month.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  double interest, annualInterestRate, balance;
  cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
  cin >> balance >> annualInterestRate;

  interest = balance * (annualInterestRate / 1200);

  cout << "The interest is " << interest;
  return 0;
}