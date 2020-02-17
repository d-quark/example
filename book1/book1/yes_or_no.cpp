#include <iostream>
#include <string>

using namespace std;

char askYesNo1();
char askYesNo2(string);

int main()
{
	char answer1 = askYesNo1();
	cout << "Thanks for answering: " << answer1 << "\n\n";

	char answer2 = askYesNo2("Do you wish to save your game?");
	cout << "Thanks for answering: " << answer2 << "\n";

	return 0;
}

char askYesNo1()
{
	char responce1;
	do
	{
		cout << "Please enter 'y' or 'n': ";
		cin >> responce1;
	} while (responce1 != 'y' && responce1 != 'n');

	return responce1;
}

char askYesNo2(string question)
{
	char responce2;
	do
	{
		cout << question << " (y\n): ";
		cin >> responce2;
	} while (responce2 != 'y' && responce2 != 'n');

	return responce2;
}