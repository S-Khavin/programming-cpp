 /*Write a program that produces a simple form letter based on
user input.Begin by typing the code from §2.1 prompting a
user to enter his or her first name and writing “Hello,
first_name” where first_name is the name entered by the
user.Then modify your code as follows : change the prompt
to “Enter the name of the person you want to write to” and
change the output to “Dear first_name, ”.Don’t forget the
comma.*/

// read and write a first name
import PPP;
using namespace std;
using namespace PPP;

int main()
{
	cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name

	cout << "Enter the name of the another friend:\n";
	string friend_name;
	cin >> friend_name;

	cout << "Enter the age of the " << first_name << ":\n";
	int age = -1;
	cin >> age;
	if (age <= 0)
	{
		simple_error("you're kidding!\n");
	}
	if (age >= 110)
	{
		simple_error("you're kidding!\n");
	}

	cout << "Dear " << first_name << ",\n	How are you? I am fine. I miss you. I am planning to go on a trip to Kerala. I would like you to join the trip.\n"
		 << "Have you seen " << friend_name << " lately? " 
		 << "I hear you just had a birthday and you are " << age << " years old.";

	if (age < 12)
	{
		cout << " Next year you will be " << age + 1 << ".\n";
	}
	if (age == 17)
	{
		cout << " Next year you will be able to vote.\n";
	}
	if (age > 70)
	{
		cout << " Are you retired?\n";
	}

	cout << "Yours sincerely\n\nKhavin\n";
}