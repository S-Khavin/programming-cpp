 /*Write a program that converts spelled - out numbers such as
“zero” and “two” into digits, such as 0 and 2. When the user
inputs a number, the program should print out the
corresponding digit.Do it for the values 0, 1, 2, 3, and 4 and
write out not a number I know if the user enters something that
doesn’t correspond, such as stupid computer!.*/

import PPP;
using namespace std;

int main()
{
	cout << "Type in the spelled-out number (followed by 'enter'): ";
	string spelled_number;
	cin >> spelled_number;

	if (spelled_number == "one")
		cout << "The corresponding digit of '" << spelled_number << "' is 1.\n";
	if (spelled_number == "two")
		cout << "The corresponding digit of '" << spelled_number << "' is 2.\n";
	if (spelled_number == "three")
		cout << "The corresponding digit of '" << spelled_number << "' is 3.\n";
	if (spelled_number == "four")
		cout << "The corresponding digit of '" << spelled_number << "' is 4.\n";
	if (spelled_number != "one")
		if (spelled_number != "two")
			if (spelled_number != "three")
				if (spelled_number != "four")
					cout << spelled_number << " is not a number I know.\n";
}