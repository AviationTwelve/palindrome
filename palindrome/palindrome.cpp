// palindrome.cpp : Checks whether a string is a palindrome or not.
//

#include "palindrome.h"
#include <string>

std::string strrev(std::string str) { // reverse the provided string for palindrome check later
	if (str.empty()) return "";

	std::string revstr;
	for (int i = str.length() - 1; i >= 0; i--)
		revstr += str.at(i);
	return revstr;
}

int palindrome_check(std::string str) { // checks for palindrome string
	return str == strrev(str);
}

int main()
{
	std::string a;
	std::getline(std::cin, a);
	std::cout << strrev(a) << palindrome_check(a);
	return 0;
}
