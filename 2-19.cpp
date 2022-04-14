#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int hand = rand() % 7;
  cout << "本日の運勢" << endl;
  cout << hand << endl;
  switch (hand) {
    case 0: cout << "大吉" << endl; break;
    case 1: cout << "中吉" << endl; break;
    case 2: cout << "小吉" << endl; break;
    case 3: cout << "吉" << endl; break;
    case 4: cout << "末吉" << endl; break;
    case 5: cout << "凶" << endl; break;
    case 6: cout << "大凶" << endl; break;
  }

	return 0;
}