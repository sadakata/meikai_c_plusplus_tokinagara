#include<iostream>
using namespace std;

int main() {
  int n,sum=0;
  cout << "１からnまでの和を求めます。" << endl;
  cout << "nの値:"; cin >> n;

  for (int i = 1; i < n; i++){
    sum += i;
    cout << i << " + ";
  }
  cout << n;
  sum += n;
  cout << " = " << sum << endl;
}