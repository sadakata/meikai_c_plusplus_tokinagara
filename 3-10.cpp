#include<iostream>

using namespace std;

int main() {
  cout << "カウントアップします" << endl;
  int n;
  do {
    cout << "正の整数値:"; cin >> n;
  } while (n<0);

  for (int i = 0; i <= n; i++)
  cout << i << endl;
}