#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "何個*を表示しますか:"; cin >> n;

  for (int i = 0; i < n / 5; i++) {
    cout << "*****" << endl;
  }
  int rest = n % 5;
  if (rest > 0) {
    for (int i = 0; i < rest; i++){
      cout << "*";
    }
    cout << endl;
  }
}