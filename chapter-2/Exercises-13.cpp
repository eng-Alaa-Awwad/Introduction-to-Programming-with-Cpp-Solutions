// ******** QUESTION ******** 
/*
  (Financial application: compound value) Suppose you save $100 each month into a
  savings account with the annual interest rate 5%. Thus, the monthly interest rate is
  0.05/12 = 0.00417. After the first month, the value in the account becomes
  100 * (1 + 0.00417) = 100.417
  After the second month, the value in the account becomes
  (100 + 100.417) * (1 + 0.00417) = 201.252
  After the third month, the value in the account becomes
  (100 + 201.252) * (1 + 0.00417) = 302.507
  and so on.
  Write a program that prompts the user to enter a monthly saving amount and displays
  the account value after the sixth month. (In Programming Exercise 5.32, you will use
  a loop to simplify the code and display the account value for any month.)
*/

// ******** SOLUTION ******** 

#include<iostream>
#include<cmath>
using namespace std;

int main(){
  const double monthlyInterestRate = 0.00417;
  double amount;
  double accountValue = 0;

  cout << "Enter the monthly saving amount: ";
  cin >> amount;
  // 1st month
  accountValue = (accountValue + amount) * (1 + monthlyInterestRate);
  // 2ed month
  accountValue = (accountValue + amount) * (1 + monthlyInterestRate);
  // 3ed month
  accountValue = (accountValue + amount) * (1 + monthlyInterestRate);
  // 4th month
  accountValue = (accountValue + amount) * (1 + monthlyInterestRate);
  // 5th month
  accountValue = (accountValue + amount) * (1 + monthlyInterestRate);
  // 6th month
  accountValue = (accountValue + amount) * (1 + monthlyInterestRate);
  
  cout << "After the sixth month, the account value is $" << accountValue;
  return 0;
}