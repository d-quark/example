// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	enum fields{WORD, HINT, NUM_FIELDS}; //uses for better understanding,that is, it's more convenient to see a word instead of just a number such a 0,1... 
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{
			"wall", "do you feel you're banging your head against something?"},
	{"glasses","These might help you see the answer."},
	{"labored"," Going slowly, is it?"},
	{"persistent", "Keep at it."},
	{"jumble", "It's what the game is all about."}
	}; // array for a pair of strings

	srand(static_cast<unsigned int>(time(0))); // функция rand сработает один раз, если убрать строчку

	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //word to guess
	string theHint = WORDS[choice][HINT]; //hint for word
	int score = theWord.size();

	string jumble = theWord; //jumbled version of word
	int length = jumble.size();
	for (int i = 0; i < length; ++i)
	{
		int index1 = (rand() % length); //uses to define a random number, but no more then length 
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "\t\t\tWelcome to Word Jumble!\n\n";  
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter 'hint' for a hint.\n";  
	cout << "Enter 'quit' to quit the game.\n\n"; 
	cout << "The jumble is: " << jumble;
	string guess;   
	cout << "\n\nYour guess: "; 
	cin >> guess;

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << theHint;
		}
		else
		{
			cout << "Sorry, that's not it.";
		}

		cout << "\n\nYour guess: ";
		cin >> guess;
		score--;
	}
		if (guess == theWord) 
		{ 
			cout << "\nThat's it! You guessed it!\n";
			cout << "You have score " << score << " points!\n";
		}  
		cout << "\nThanks for playing.\n";  
		return 0;
	
}