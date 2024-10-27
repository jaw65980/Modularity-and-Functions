
#include <iostream>
#include <iomanip>
using namespace std;

//Outputs the changes in inflation.
float Priceoutput(float oneyearResult, float twoyearResult)
{
	cout << setprecision(2);
	cout << endl << "Inflation rate for your item changed by " << oneyearResult << "% one year ago and " << twoyearResult << "% two years ago." << endl;
	return 0;

}

//Calculates the changes of inflation from one and two years ago.
float priceChange(float currentPrice, float oneyearPrice, float twoyearPrice)
{
	float oneyearInflation = currentPrice - oneyearPrice;
	oneyearInflation = oneyearInflation / oneyearPrice;

	float twoyearInflation;
	twoyearInflation = currentPrice - twoyearPrice;
	twoyearInflation = twoyearInflation / twoyearPrice;
	Priceoutput(oneyearInflation, twoyearInflation);
	return 0;
}

//User input for the original price of an item as well as the prices the item was one and two years ago.
float Priceinput()
{
	float currentPrice;
	float oneyearPrice;
	float twoyearPrice;
	cout << "What is the current price of your chosen item? ";
	cin >> currentPrice;
	cout << endl << "What was the price of your item one year ago? ";
	cin >> oneyearPrice;
	cout << endl << "What was the price of your item two years ago? ";
	cin >> twoyearPrice;
	priceChange(currentPrice, oneyearPrice, twoyearPrice);
	return 0;
}

//Calls the price input function.
int main()
{
	Priceinput();
}
