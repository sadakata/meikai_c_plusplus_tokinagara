#include<iostream>
using namespace std;

int main() {
  string flag;
  do {
    int a;
    cout << "整数値:";
    cin >> a;
    if (a > 0) {
      cout << "その値は正です" << endl;
    } else {
    cout << "その値は負です" << endl;
    }
    cout << "もう一度? Y・・・Yes/ N・・・No :";
    cin >> flag;
  } while (flag == "y" || flag == "Y");

	return 0;
}