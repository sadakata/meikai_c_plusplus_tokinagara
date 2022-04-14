#include<iostream>

using namespace std;

int main() {
  int a;
  do {
    cout << "正の整数値:" ;
    cin >> a;
  } while (a < 0);
  do {
    cout << a << endl;
    a--;
  } while (a >= 0);
	return 0;
}