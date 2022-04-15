#include<iostream>
using namespace std;

int main() {
  int from,to,every;
  cout << "何cmから:"; cin >> from;
  cout << "何cmまで:"; cin >> to;
  cout << "何cmごと:"; cin >> every;
  cout << "身長  標準体重" << endl;
  cout << "---------------" << endl;
  for( ; from <= to; from += every){
    cout << from << "   " << (from-100) * 0.9 << endl;
  }
  cout << "---------------" << endl;

}