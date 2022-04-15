#include<iostream>
#include<iomanip> //iomanipは不明

using namespace std;

int main() {
  int n;
  cout << "１からNまでの和を求めます" << endl;
  cout << "nの値:"; cin >> n;
  int sum = 0;
  cout << "    i   sum" << endl;
  cout << "----------------" << endl;
  for (int i = 0; cout << setw(5) << i << setw(5) << sum << '\n',i <= n; i++) { //なんかcout出力のフォーマットを決めている気がするけどこの記法は初見
    sum += i;
  }
  cout << "----------------" << endl;
  cout << "1から" << n << "までの和は" << sum << "です" << endl;
}