#ifndef Ch1Q3

#define Ch1Q3

#include <string>

class SolutionToCh1Q3 {
	int countSpaces(std::string inputString, int trueLength) {
		int spaces = 0;
		for (int i = 0; i < trueLength; ++i) {
			if (inputString[i] == ' ') {
				spaces++;
			}
		}
		return spaces;
	}
public:
	std::string getModifiedString(std::string inputString, int trueLength) {
		int spaces = countSpaces(inputString, trueLength);
		int finalLength = trueLength + 2 * spaces;
		int currentIndex = finalLength - 1;
		for (int i = trueLength - 1; i > 0; --i) {
			if (inputString[i] == ' ') {
				inputString[currentIndex--] = '0';
				inputString[currentIndex--] = '2';
				inputString[currentIndex--] = '%';
			}
			else {
				inputString[currentIndex--] = inputString[i];
			}
		}
		return inputString.substr(0, finalLength);
	}
};

#endif