// This program calculates the user's pay.

#include <iostream>

int main()
{
  double bars, price, earned;

  // Get the number of hours worked.
  std::cout << "Welcome to the Earnings Calulcator! " << std::endl;
  std::cout << "How many candy bars did you sell? ";
  std::cin >> bars;

  // Get the hourly pay rate.
  std::cout << "How much does the organization earn for each bar sold? ";
  std::cin >> price;

  // Calculate the pay.
  earned = bars * price;

  // Display the pay.
  std::cout << "Congratulations! You have earned $" << earned << " for the organization!" << std::endl;

  return 0;
}
