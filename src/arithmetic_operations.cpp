 /*Write a program that prompts the user to enter two integer
values.Store these values in int variables named val1 and val2.
Write your program to determine the smaller, larger, sum,
difference, product, and ratio of these values and report them
to the user.*/

import PPP;
using namespace std;

int main()
{
	cout << "Enter two integer values (followed by 'space'): ";
	double val1 = -1;
	double val2 = -1;
	cin >> val1 >> val2;

	cout << "val1 == " << val1
		<< " val2 == " << val2
		<< " smaller == ";

	// checks and print the smaller value
	if (val1 < val2)
		cout << val1;
	if (val1 > val2)
		cout << val2;

	cout << " larger == ";

	// checks and print the larger value
	if (val1 > val2)
		cout << val1;
	if (val1 < val2)
		cout << val2;

	cout << " sum == " << val1 + val2
		<< " difference == " << val1 - val2
		<< " product == " << val1 * val2
		<< " ratio == ";

	// ratio of 2 numbers : The smaller number is 1 part and larger number is 1 * x = larger number
	if (val1 < val2)
		cout <<  "1 : " << val1 / val2 << "\n";
	if (val1 > val2)
		cout << val1 / val2 << " : 1\n";
	if (val1 == val2)
		cout << "1 : 1\n"; // if both values are equal then outputs 1 : 1 ratio

}