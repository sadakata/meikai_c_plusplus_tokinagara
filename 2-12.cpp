#include<iostream>
using namespace std;

int main() {
	
  int a,b,c;
  int median;
	cin >> a >> b >> c ;
  if (a < b) {
    if (b > c) {
      if (a < c) {
        median = c; //1
      } else {
        median = a; //2
      }
    } else {
      median = b; //3
    }
  } else if (a > c) {
    if (b < c) {median = b;}
    else median = c;
  } else { median = a;}
  cout << "中央値は" << median << "です" << endl;
	return 0;
}