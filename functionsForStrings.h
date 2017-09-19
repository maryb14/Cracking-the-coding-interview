#ifndef FunctionsForStrings

#define FunctionsForStrings

#include <string>

bool isEnglishChar(char ch) {
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

std::string stringToLower(std::string inputString) {
	for (int i = 0; i < inputString.length(); ++i) {
		inputString[i] = tolower(inputString[i]);
	}
	return inputString;
}

std::string getStringWithoutNonEnglishChars(std::string inputString) {
	std::string resultString = "";
	for (int i = 0; i < inputString.length(); ++i) {
		if (isEnglishChar(inputString[i])) {
			resultString.append(1, inputString[i]);
		}
	}
	return resultString;
}

std::vector <int> getCharsCount(std::string inputString) {
	std::vector <int> charsCount(256, 0);
	for (int i = 0; i < inputString.length(); ++i) {
		charsCount[(int)inputString[i]]++;
	}
	return charsCount;
}

#endif