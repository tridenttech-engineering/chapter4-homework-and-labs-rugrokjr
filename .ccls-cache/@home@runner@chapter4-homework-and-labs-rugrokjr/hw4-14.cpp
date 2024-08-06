// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Kendra>

#include <iostream>
using namespace std;

int main() {
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  double smallperc = 0.0;
  double mediumperc = 0.0;
  double largeperc = 0.0;
  double familyperc = 0.0;
  int total = 0;
  cout << "Smalls sold: ";
  cin >> small;
  cout << "Mediums sold: ";
  cin >> medium;
  cout << "Larges sold: ";
  cin >> large;
  cout << "Familys sold: ";
  cin >> family;
  total = small + medium + large + family;

  if (total > 0) {
    smallperc = static_cast<double>(small) / total * 100;
    mediumperc = static_cast<double>(medium) / total * 100;
    largeperc = static_cast<double>(large) / total * 100;
    familyperc = static_cast<double>(family) / total * 100;
  }
  cout << "Total sold: " << total << endl;
  cout << "Percent Small: " << smallperc << "%" << endl;
  cout << "Percent Medium: " << mediumperc << "%" << endl;
  cout << "Percent Large: " << largeperc << "%" << endl;
  cout << "Percent Family: " << familyperc << "%" << endl;
  return 0;
} // end of main function