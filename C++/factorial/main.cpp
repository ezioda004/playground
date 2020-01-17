#include <iostream>

using namespace std;

int factorial(int num);
int main() {

  cout << "Enter the number for factorial\n";
  int num;
  cin >> num;
  cout << "Factorial of " << num << " is " << factorial(num) << "\n";
  return 1;
}

int factorial(int num) {
  if (num == 1) return 1;
  return num * factorial(num - 1);
}