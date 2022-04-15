#include<iostream>

using namespace std;

int main() {
  int a;
  do {
    cout << "何個*を表示しますか:" ;
    cin >> a;
  } while (a < 0);
  do {
    cout << "*";
    a--;
  } while (a > 0);
  cout << endl;
	return 0;
}