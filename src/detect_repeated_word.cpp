 /*Try This
Get the “repeated word detection program” to run.Test
it with the sentence She she laughed "he he he!" because
what he did did not look very very good good.How many
repeated words were there ? Why ? What is the definition
of word used here ? What is the definition of repeated
word ? (For example, is She she a repetition ? )*/

import PPP;
using namespace std;

int main()
{
	string previous; // previous word; initialized to ""
	string current; // current word
	while (cin >> current) { // read a stream of words
		if (previous == current) // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}

// repeated words count : 2 (did, very)
// word : a single group of characters without any spaces.