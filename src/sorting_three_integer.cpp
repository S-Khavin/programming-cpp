 /*Write a program that prompts the user to enter three integer
values, and then outputs the values in numerical sequence
separated by commas.So, if the user enters the values 10 4 6,
the output should be 4, 6, 10. If two values are the same, they
should just be ordered together.So, the input 4 5 4 should give
4, 4, 5.*/

import PPP;
using namespace std;

int main()
{
	cout << "Enter 3 integer values (followed by 'space'): ";
	int val1 = -1;
	int val2 = -1;
	int val3 = -1;
	cin >> val1 >> val2 >> val3;

	int small = -1;
	int middle = -1;
	int large = -1;

	// The chapter 2 does not introduces to if, blocks {}. 
	// So I am writing this logic on my own from so far learnt syntax
	if (val1 <= val2)
		if (val1 <= val3)
			small = val1;

	if (val2 <= val1)
		if (val2 <= val3)
			small = val2;

	if (val3 <= val1)
		if (val3 <= val2)
			small = val3;

	if (small == val1)
		if (val2 <= val3)
			middle = val2;

	if (small == val1)
		if (val2 <= val3)
			large = val3;

	if (small == val1)
		if (val2 >= val3)
			large = val2;

	if (small == val1)
		if (val2 >= val3)
			middle = val3;

	if (small == val2)
		if (val1 <= val3)
			middle = val1;

	if (small == val2)
		if (val1 <= val3)
			large = val3;

	if (small == val2)
		if (val1 >= val3)
			large = val1;

	if (small == val2)
		if (val1 >= val3)
			middle = val3;

	if (small == val3)
		if (val1 <= val2)
			middle = val1;

	if (small == val3)
		if (val1 <= val2)
			large = val2;

	if (small == val3)
		if (val1 >= val2)
			large = val1;

	if (small == val3)
		if (val1 >= val2)
			middle = val2;

	cout << "The numerical sequence is " << small << ", " << middle << ", " << large << ".\n";
	
} 