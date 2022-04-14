#include<iostream>
using namespace std;

int main() {
  int season;
  cout << "何月ですか？" << endl;
  cin >> season;

  switch (season)
  {
  case 3: case 4: case 5: cout << "春" << endl;  break;
  case 6: case 7: case 8: cout << "夏" << endl;  break;
  case 9: case 10: case 11: cout << "秋" << endl;  break;
  case 12: case 1: case 2: cout << "冬" << endl;  break;  
  default: cout << "そんな月はありません" << endl;  break;
  }
  cout << "修理用" << endl;

	return 0;
}