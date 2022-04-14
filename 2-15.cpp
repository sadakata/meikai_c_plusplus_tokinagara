#include <iostream>
using namespace std;
int main(){
  int a,b,tmp;
  cin >> a >> b;
  if (a < b) { tmp = b, b = a, a = tmp;}
  cout << "a≧bとなるようにソートしました" << endl;
  cout << "変数aは" << a << "です" << endl;
  cout << "変数bは" << b << "です" << endl;
}