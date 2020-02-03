#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	cout << " hello!";
	vector<string> games;
	games.push_back("diablo");
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Now you have " << games.capacity() << " games" << endl;
	cout << "What do you want?\n";
	cout << "1) Add your favorite games.\n2)Delete your games.\n3)Show all your games\n";
	int choice;
	
	cin >> choice;

	if (choice == 1) {
		cout << "Please type a game's name you want to add to the list: ";
		string game;
		cin >> game;
		games.push_back(game);
	}

	if (choice == 2) {
		cout << "What game do you want to remove? ";
		string game;
		cin >> game;
		if ( find(games.begin(), games.end(), game ) != games.end()) {
			
		}
	}

	cout << "Now you have " << games.capacity() << " games" << endl;
	for (iter = games.begin(); iter != games.end(); ++iter) {
		cout << *iter << endl;
	}

	return 0;
}