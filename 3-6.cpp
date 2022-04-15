#include<iostream>

using namespace std;

int main() {
  int a,cnt=1;
  cout << "何個表示しますか:";
  cin >> a;
  while (a > 0){
    if (cnt%2){
      cout << "+";
      a--;
      cnt++;
    } else {
      cout << "-";
      a--;
      cnt++;
    }
  }
  cout << endl;
	return 0;
}