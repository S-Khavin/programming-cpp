 /*Do exercise 6, but with three string values.So, if the user
enters the values Steinbeck, Hemingway, Fitzgerald, the output
should be Fitzgerald, Hemingway, Steinbeck.*/

import PPP;
using namespace std;

int main()
{
	cout << "Enter 3 words (followed by 'space' and press 'enter): ";
	string word1;
	string word2;
	string word3;
	cin >> word1 >> word2 >> word3;

	string small;
	string middle;
	string large;

	// The chapter 2 does not introduces to if, blocks {}. 
	// So I am writing this logic on my own from so far learnt syntax
	if (word1 <= word2)
		if (word1 <= word3)
			small = word1;

	if (word2 <= word1)
		if (word2 <= word3)
			small = word2;

	if (word3 <= word1)
		if (word3 <= word2)
			small = word3;

	if (small == word1)
		if (word2 <= word3)
			middle = word2;

	if (small == word1)
		if (word2 <= word3)
			large = word3;

	if (small == word1)
		if (word2 >= word3)
			large = word2;

	if (small == word1)
		if (word2 >= word3)
			middle = word3;

	if (small == word2)
		if (word1 <= word3)
			middle = word1;

	if (small == word2)
		if (word1 <= word3)
			large = word3;

	if (small == word2)
		if (word1 >= word3)
			large = word1;

	if (small == word2)
		if (word1 >= word3)
			middle = word3;

	if (small == word3)
		if (word1 <= word2)
			middle = word1;

	if (small == word3)
		if (word1 <= word2)
			large = word2;

	if (small == word3)
		if (word1 >= word2)
			large = word1;

	if (small == word3)
		if (word1 >= word2)
			middle = word2;

	cout << "The numerical sequence is " << small << ", " << middle << ", " << large << ".\n";

}