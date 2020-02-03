#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;


// Step 1 : change the countCharacters function so it properly counts the characters in your sentence.
// For example. "Hello World" should total 11 characters (including the space).
// Tip : strings are null terminated in C++, "Hello World", [ H , e , l , l , o , _ , W , o , r , l , d , \0 ] , make sure not to count the null character at the end! 
int countCharacters(const char str[])
{
	int count = 0; //Variable to count the number of characters in the array.

	//Your code goes here!

	return count;
}

// Step 2 : remove the spaces from the sentence!
// For example. "Hello World" would become "HelloWorld".
// Tip : You can compare a character to the ' ' space character in an 'if' statement.
void removeSpaces(const char str[])
{
	int charCount = countCharacters(str) + 1;

	char* resultArray = new char[charCount];

	//Your code goes here!

	cout << resultArray;
}

// Step 3 : Reverse the sentence!
// For example. "Hello World" would become "dlroW olleH".
// This is a tough challenge, but you can do it!
void reverseCharacters(const char str[])
{
	int charCount = countCharacters(str) + 1;

	char* reversedArray = new char[charCount];

	//Your code goes here!

	cout << reversedArray;
}

int main(void)
{
	cout << "Hello! Welcome to the advanced challenge!" << endl;
	
	cout << "Please enter a short sentence : " << endl;
	string userInput;
	getline(cin, userInput);

	cout << "You entered : " << userInput << endl;

	// Step 1 : change the countCharacters function so it properly counts the characters in your sentence.
	// For example. "Hello World" has 11 characters (including the space).
	
	int numCharacters = countCharacters(userInput.c_str());
	cout << "The number of characters is : " + numCharacters << endl;

	// Step 2 : remove the spaces from the sentence!
	// For example. "Hello World" would become "HelloWorld".
	removeSpaces(userInput.c_str());

	// Step 3 : Reverse the sentence!
	// For example. "Hello World" would become "dlroW olleH".
	reverseCharacters(userInput.c_str());

	//Have fun!
	system("pause");
}