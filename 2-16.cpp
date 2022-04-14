#include<iostream>
using namespace std;

int main() {
  int a,b;
	cout << "整数値:" << endl;
  cin >> a;
  b = a % 3;
	if (b == 0){
    cout << "その値は3で割り切れます" << endl;
  } else {
    cout << "その値は3で割り切れません" << endl;
    cout << "剰余は" << b << "です" << endl;
  }

	return 0;
}