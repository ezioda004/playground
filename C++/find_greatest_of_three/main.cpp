#include <iostream>

using namespace std;
int main() {

  double num1, num2, num3;
  double greatest = 0;

  cout << "Enter num1:\n";
  cin >> num1;
  cout << "Enter num2:\n";
  cin >> num2;
  cout << "Enter num3:\n";
  cin >> num3;

  greatest = num1;
  if (greatest < num2) {
    greatest = num2;
  }
  if (greatest < num3) {
    greatest = num3;
  }

  
  cout << "greatest number is: " << greatest;
  return 0;
}