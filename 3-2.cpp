#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
  srand(time(NULL));
  int no = rand() % 99 + 10;
  int a;
  cout << "数あてゲーム開始！！" << endl;
  cout << "10〜99の数を当ててください" << endl;
  do {
    cout << "いくつかな？:";
    cin >> a;
    if (no > a) {
      cout << "もっと大きな数だよ" << endl;
    } else if (no < a){
      cout << "もっと小さな数だよ" << endl;
    } else {
      cout << "正解です" << endl;
    }
  } while (a != no);

	return 0;
}