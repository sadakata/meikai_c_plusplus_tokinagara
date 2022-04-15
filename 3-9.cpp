#include<iostream>

using namespace std;

int main() {
  int n;
  cout << "カウントダウンします\n";
  do {
    cout << "正の整数値"; cin >> n;
  } while ( n < 0);

  for (int i = n; 0 <= i; i--){ //i は要らんね。直接nを操作して良い
    cout << i << endl;
  }
}