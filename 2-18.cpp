#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {
	srand(time(NULL));
	int hand = rand() % 3;
  switch (hand) {
    case 0: cout << "グー" << endl; break;
    case 1: cout << "チョキ" << endl; break;
    case 2: cout << "パー" << endl; break;
  }

	return 0;
}