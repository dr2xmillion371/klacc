/**************************************************************************************

   Klacc.c
   Author:
   Twirlybird software -- public domain
   Copyright:
   (C) The Klacc math interpreter/calculator. -- public domain -- Borrowed source code from programiz.com
   Link/Credit:
   https://www.programiz.com/cpp-programming/examples/calculator-switch-case
   Creation date:
   April 9th, 2023 at 8:12 AM.
   
**************************************************************************************/



#include <iostream>
using namespace std;

int main() {
  // the start
  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      // If the operator is other than +, -, * or /, then this error message is shown
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}








/* END */