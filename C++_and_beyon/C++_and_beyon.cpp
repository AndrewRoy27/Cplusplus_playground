#include <iostream>


using namespace std;

int main()
{
	const int smallRoom{ 25 };
	const int largeRoom{ 35 };
	const int expiringDay{ 30 };
	const double tax{ 0.06 };
	const double priceSmallRoom{ 25.0 };
	const double priceLargeRoom{ 35.0 };

	int numberSmallRoom{ 0 };
	int numberLargeRoom{ 0 };

	cout << "How many rooms would you like cleaned ? \n";

	cout << "Number of small room:\n ";
	cin >> numberSmallRoom;

	cout << "Number of large rooms:\n ";
	cin >> numberLargeRoom;

	cout << "Estimate for carpet cleaning service:\n ";
	cout << "Number of small room typed: " << numberSmallRoom << endl;
	cout << "Number of large room typed: " << numberLargeRoom << endl;
	cout << "Price per small room: $ " << priceSmallRoom << endl;
	cout << "price per large room: $ " << priceLargeRoom << endl;
	cout << "Cost: $" << (numberSmallRoom * priceSmallRoom) + (numberLargeRoom * priceLargeRoom) << endl;
	cout << "Tax: $" << ((numberSmallRoom * priceSmallRoom) + (numberLargeRoom * priceLargeRoom)) * tax << endl;
	cout << "===============================================================================" << endl;
	cout << "Total Estimate: $ " << ((numberSmallRoom * priceSmallRoom) + (numberLargeRoom * priceLargeRoom)) + 
		((numberSmallRoom * priceSmallRoom) + (numberLargeRoom * priceLargeRoom)) * tax << endl;

	cout << "This estimate is valid for " << expiringDay << " days" << endl;


	
	
	
	
	
	return 0;

}
