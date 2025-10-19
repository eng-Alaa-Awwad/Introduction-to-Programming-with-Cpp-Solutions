// ******** QUESTION ******** 
/*
  (Financial application: monetary units) Rewrite Listing 2.12, ComputeChange.cpp,
  to fix the possible loss of accuracy when converting a float value to an int value.
  Enter the input as an integer whose last two digits represent the cents. For example,
  the input 1156 represents 11 dollars and 56 cents.
*/

// ******** SOLUTION ******** 

#include<iostream>
using namespace std;

int main(){
  int amount,numberOfOneDollars,numberofRemainingCents, numberOfQuarters, numberOfDimes, numberOfNickels;
  
  cout << "Enter the input as an integer whose last two digits represent the cents for example 1156 represents 11 dollars and 56 cents: ";
  cin >> amount;
  
  numberOfOneDollars = amount / 100;
  numberofRemainingCents = amount % 100;

  numberOfQuarters = numberofRemainingCents / 25;
  numberofRemainingCents %= 25;

  numberOfDimes = numberofRemainingCents / 10;
  numberofRemainingCents %= 10;

  numberOfNickels = numberofRemainingCents / 5;
  numberofRemainingCents %= 5;

  cout << "Your amount " << amount <<  " consists of "<< endl;
  cout << numberOfOneDollars << " dollars" << endl;
  cout << numberOfQuarters << " Quarters" << endl;
  cout <<  numberOfDimes << " Dimes" << endl;
  cout <<  numberOfNickels << " Nickels" << endl;
  cout << numberofRemainingCents << " cents" << endl;


  return 0;
}