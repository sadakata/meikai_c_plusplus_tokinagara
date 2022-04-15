#include<iostream>

using namespace std;

int main() {
  int a;
  cout << "何個表示しますか:";
  cin >> a;
  if ( a > 0){
    int i = 0;
    // 2個セットなので2で割った数を借り換えして最後1残ったら+を表示すると同じになる
    while (i < a / 2){
        cout << "+-";
        i++;
      } 
    if( a % 2 == 1) {
        cout << "+";
      }
    cout << endl;
  }

}