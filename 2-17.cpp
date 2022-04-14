#include<iostream>
#include<cmath>
using namespace std;

int main() {
  double a,b;
	cout << "実数値:" << endl;
  cin >> a;
  b = fmod(a, 2.5);
	if (b == 0){
    cout << "その値は3で割り切れます" << endl;
  } else {
    cout << "その値は3で割り切れません" << endl;
    cout << "剰余は" << b << "です" << endl;
  }

	return 0;
}