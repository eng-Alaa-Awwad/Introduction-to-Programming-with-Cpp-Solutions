#include<iostream>
#include<cstdlib>
#include<ctime>
#include <iomanip>
using namespace std;

int main(){
  
  int count = 0;
  int number = 2;
  
  while(count < 50)
  {
    bool isPrime = true;
    for(int i = 2; i <= (number / 2) ; i++)
    {
      if(number % i == 0)
      {
        isPrime = false;
        break;
      }
    }

    if(isPrime)
    {
      cout << setw(5) << number;
      count++;
      if(count % 10 == 0) 
        cout <<endl;
    }

    number++;
  }

  return 0;
}