 /*Write a program that takes an operation followed by two
operands and outputs the result.For example :
+100 3.14
* 45
Read the operation into a string called operation and use an ifstatement to figure out which operation the user wants, for
example, if (operation == "+").Read the operands into variables
of type double.Implement this for operations called + , −, *, / ,
plus, minus, mul, and div with their obvious meanings.*/

import PPP;
using namespace std;

int main()
{
	cout << "Enter the operation that you want to perform followed by 2 values: ";
	string operation;
	double val1 = -1;
	double val2 = -1;
	cin >> operation >> val1 >> val2;

	if (operation == "+")
		cout << "The addition of " << val1 << " and " << val2 << " is: " << val1 + val2 << ".\n";
	if (operation == "-")
		cout << "The subtraction of " << val1 << " and " << val2 << " is: " << val1 - val2 << ".\n";
	if (operation == "*")
		cout << "The multiplication of " << val1 << " and " << val2 << " is: " << val1 * val2 << ".\n";
	if (operation == "/")
		cout << "The division of " << val1 << " and " << val2 << " is: " << val1 / val2 << ".\n";
	if (operation == "plus")
		cout << "The addition of " << val1 << " and " << val2 << " is: " << val1 + val2 << ".\n";
	if (operation == "minus")
		cout << "The subtraction of " << val1 << " and " << val2 << " is: " << val1 - val2 << ".\n";
	if (operation == "mul")
		cout << "The multiplication of " << val1 << " and " << val2 << " is: " << val1 * val2 << ".\n";
	if (operation == "div")
		cout << "The division of " << val1 << " and " << val2 << " is: " << val1 / val2 << ".\n";

}