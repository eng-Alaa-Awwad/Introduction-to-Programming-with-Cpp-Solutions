// ******** QUESTION ******** 
/*
(Algebra: solve 2 * 2 linear equations)
*/

// ******** SOLUTION ******** 
#include<iostream>
using namespace std;

int main(){
  double a, b, c, d, e, f;
  cout << "Enter a, b, c, d, e, f: ";
  cin >> a >> b >> c >> d >> e >> f;

  double denominator = (a * d) - (b * c);

  if (denominator != 0){
    double x = ((e * d) - (b* f))/denominator;
    double y = ((a * f) - (e* c))/denominator;
    cout << "x is " << x << " and y is " << y;
  }else{
    cout << "The equation has no solution";
  }
  return 0;
}