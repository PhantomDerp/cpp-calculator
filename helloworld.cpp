#include <iostream>

//cl.exe /EHsc /Zi /Fe: helloworld.exe helloworld.cpp

using namespace std;

int main() {
  cout << "use + - * /\n";
  
  double n1;
  double n2;
  string op;
  
  cout << "number: ";
  cin >> n1;
  cout << "operator: ";
  cin >> op;
  cout << "number: ";
  cin >> n2;

  if (op == "+") {
    cout << n1 + n2;
  } else if (op == "-") {
    cout << n1 - n2;
  } else if (op == "*") {
    cout << n1 * n2;
  } else if (op == "/") {
    cout << n1 / n2;
  } else {
    cout << "retard can't even use a calculator right";
  }
  
  cout << "\npress enter to close";
  cin  >> op;
  return 0;
}