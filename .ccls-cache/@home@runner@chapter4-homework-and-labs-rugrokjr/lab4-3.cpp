//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by Kendra>

#include <iostream>
using namespace std;

int main()
{
  //declare named constant and variables
  double COMM_RATE = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input item
  cout << "Sales amount: ";
  cin >> sales;
  cout << "Enter commission rate in decimal form: ";
  cin >> COMM_RATE;

  //calculate and display the commision
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;



} //end of main function
