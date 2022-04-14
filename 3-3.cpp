#include<iostream>

using namespace std;

int main() {
  int a,b,min,max,cnt;
  cout << "整数A:" ;
  cin >> a;
  cout << "整数B:" ;
  cin >> b;
  max = a;
  if (max < b) {
    max = b;
    min = a;
  } else {
    min = b;
  }
  cnt = min + 1;
  cout << min << " ";
  do{
    cout << cnt << " ";
    cnt++;
  } while (cnt <= max);

	return 0;
}