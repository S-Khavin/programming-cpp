 /*Write a program in C++ that converts from miles to
kilometers.Your program should have a reasonable prompt for
the user to enter a number of miles.Hint: A mile is1.609
kilometers.*/

import PPP;
using namespace std;

int main()
{
	cout << "Enter the number of miles : ";
	double miles = 0;
	cin >> miles;

	double miles_in_kilometers = miles * 1.609;
	cout << miles << " miles in kilometer == " << miles_in_kilometers << ".\n";
}