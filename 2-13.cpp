#include<iostream>
using namespace std;

int main() {
	int a,b;
  cout<< "整数a:";
  cin >> a;
  cout<< "整数b:";
  cin >> b;

  if (a == b) {
    cout << "二つの値は同値です" << endl;
  } 
  else {
    int min,max; 
    if (a > b){
    min = b;
    max = a;
    } else {
    min = a;
    max = b;
    }
    cout << "大きい方の値は" << max << "です" << endl;
    cout << "小さい方の値は" << min << "です" << endl;
  }

	return 0;
}