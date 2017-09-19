#ifndef Ch1Q4

#define Ch1Q4

#include <string>
#include <vector>
#include "functionsForStrings.h"
#include "bitOperations.h"
#include <iostream>

class SolutionToCh1Q4 {	
	long long int getCharsCountBitVector(std::string inputString) {
		long long int resultBitVector = 0;
		int charIndex;
		for (int i = 0; i < inputString.length(); ++i) {
			charIndex = (int)inputString[i] - (int)'a';
			resultBitVector = toggleBit(resultBitVector, charIndex);
		}
		return resultBitVector;
	}
public:
	bool isPalindromePermutation(std::string inputString) {
		std::string cleanedString = getStringWithoutNonEnglishChars(inputString);
		cleanedString = stringToLower(cleanedString);
		long long int charsCountBitVector = getCharsCountBitVector(cleanedString);
		return (charsCountBitVector == 0 || ((charsCountBitVector & (charsCountBitVector - 1)) == 0));
	}
};

#endif