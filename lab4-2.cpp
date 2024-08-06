//Lab4-2.cpp - displays a salesperson's commission
//Kendra Ruggiero
#include <iostream>
using namespace std;
int main {
  double comm_rate = 0.1;
  double sales = 0.0;
  double commission = 0.0;

  cout << "Enter sales amount: ";
  cin >> sales;

  commission = sales * comm_rate;
  cout << "Commission: $" << commission << endl;
  return 0;
};
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/
