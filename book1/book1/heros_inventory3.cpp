//demonstrates iterators 

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	vector<string>::iterator myIterator;//can access the element or even change it through the iterator
	vector<string>::const_iterator iter; /*You can think of a constant iterator as providing read - only access so
	you won't be changing any element to which it refers*/

	cout << "Your items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter) //return an iterator pointing to next to last element 
	{
		cout << *iter << endl; //value of the element to which the iterator refers
	}

	cout << "\nYou trade your sword for a battle axe.";
	myIterator = inventory.begin();
	*myIterator = "battle axe";
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << (*myIterator).size() << " letters in it.\n"; //take the result of dereferensing myIterator

	cout << "\nThe item name '" << *myIterator << "' has ";
	cout << myIterator->size() << " letters in it.\n";

	cout << "\nYou recover a crossbow from a slain enemy.";
	inventory.insert(inventory.begin(), "crossbow");
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nYour armor is destroyed in a fierce battle.";
	inventory.erase((inventory.begin() + 2));
	cout << "\nYour items:\n";
	for (iter = inventory.begin(); iter != inventory.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;


}