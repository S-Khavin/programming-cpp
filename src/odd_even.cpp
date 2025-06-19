 /*Write a program to test an integer value to determine if it is
odd or even.As always, make sure your output is clear and
complete.In other words, don’t just output yes or no.Your
output should stand alone, like The value 4 is an even number.
Hint: See the remainder(modulo) operator in §2.4.*/

import PPP;
using namespace std;

int main()
{
	cout << "Enter a value and press 'enter' : ";
	int value = -1;
	cin >> value;

	if (value % 2 == 0)
		cout << "The value " << value << " is an even number.\n";
	if (value % 2 != 0)
		cout << "The value " << value << " is an odd number.\n";
}