int rest = n % 5;
  if (rest > 0) {
    for (int i = 0; i < rest; i++){
      cout << "*";
    }
    cout << endl;
  }