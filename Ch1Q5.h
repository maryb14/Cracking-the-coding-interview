#include <string>

class SolutionToCh1Q5 {
public:
	bool areStringsOneEditAway(std::string firstString, std::string secondString) {
		int i = 0;
		while (i < firstString.length() && i < secondString.length() && firstString[i] == secondString[i]) i++;
		std::string firstSubstring = firstString.substr(i, firstString.length());
		std::string secondSubstring = secondString.substr(i, secondString.length());
		std::string firstSubstringWithoutDiffLetter = "";
		if (i < firstString.length()) {
			firstSubstringWithoutDiffLetter = firstString.substr(i + 1, firstString.length());
		}
		std::string secondSubstringWithoutDiffLetter = "";
		if (i < secondString.length()) {
			secondSubstringWithoutDiffLetter = secondString.substr(i + 1, secondString.length());
		}
		return (firstSubstringWithoutDiffLetter == secondSubstringWithoutDiffLetter || firstSubstring == secondSubstring 
			|| firstSubstring == secondSubstringWithoutDiffLetter || secondSubstring == firstSubstringWithoutDiffLetter);
	}
};