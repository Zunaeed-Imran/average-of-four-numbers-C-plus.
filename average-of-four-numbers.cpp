#include <iostream>

using namespace std;

int main() {
  int number1, number2, number3, number4, result;

  cout << "Enter 1st number: ";
  cin >> number1;
  cout << "Enter 2nd number: ";
  cin >> number2;
  cout << "Enter 3rd number: ";
  cin >> number3;
  cout << "Enter 4th number: ";
  cin >> number4;

  result = (number1 + number2 + number3 + number4) / (float) 4;

  cout << "The Average ofFour Numbers is: " << result << endl;

  return 0;
}