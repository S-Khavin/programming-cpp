/*Try This
Compile the “Goodbye, cruel world!” program and
examine the error messages.Did the compiler find all
the errors ? What did it suggest as the problems ? Did the
compiler get confused and diagnose more than four
errors ? Remove the errors one by one, starting with the
lexically first, and see how the error messages change
(and improve).*/

import std;
int main()
{
	std::string s = "Goodbye, cruel world! ";
	std::cout << s << '\n';
}