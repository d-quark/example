// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	enum fields{WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{
			"wall", "do you feel you're banging your head against something?"},
	{"glasses","These might help you see the answer."},
	{"labored"," Going slowly, is it?"},
	{"persistent", "Keep at it."},
	{"jumble", "It's what the game is all about."}
	};

	srand(static_cast<unsigned int>(time(0))); // ?
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD]; //word to guess
	string theHint = WORDS[choice][HINT]; //hint for word

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

}