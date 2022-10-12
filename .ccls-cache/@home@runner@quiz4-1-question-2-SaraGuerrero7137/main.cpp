#include <iostream>
using namespace std;

int main() {
  const double rate1 = 1.10;
  const double rate2 = 2.20;
  const double rate3 = 3.70;
  const double rate4 = 4.80;
  double total_charge;
  double weight, distance, rate;

  cout << "Enter the package weight and distance: ";
  cin >> weight >> distance;

  if (weight > 20 || distance < 10 || distance > 3000) {
    cout << "Wrong values\n";
    return 0;
  }

  if (weight > 10)
    rate = rate1;

  else if (weight > 6)
     rate = rate3;

  else if (weight > 2)
    	rate = rate2;
  else
      	rate = rate1;
	total_charge = (distance / 500.00) * rate;
	cout << total_charge << endl;

}
