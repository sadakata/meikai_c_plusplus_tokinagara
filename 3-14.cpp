#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "何個*を表示しますか:"; cin >> n;

  for (int i = 1; i <= n; i++) {
    if (i%5 == 0) {
      cout << "*" << endl;
    } else {
      cout << "*";
    }
  }
  cout << endl;
}