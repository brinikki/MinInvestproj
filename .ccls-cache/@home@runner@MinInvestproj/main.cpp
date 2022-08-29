#include <iostream>
using namespace std;
#include <cmath>
int main() {
  
double i;
int y;
int n;
double p;
float r;

cout << endl;
cout << "Amount of regular withdrawal: $" ;
cin >> r ;
cout << endl;

cout << "Nominal interest rate: $" ;
cin >> i;
cout << endl;

cout << "Number of withdrawals per year: " ;
cin >> n;
cout << endl;

cout << "Number of years: ";
cin >> y;
cout << endl;
  
p = ((r * n) / i) * (1 - (1 / pow((1 + i/n), (n * y)))) ;

cout << "Minimum Investment Project: $" << p << endl;

return 0;
}