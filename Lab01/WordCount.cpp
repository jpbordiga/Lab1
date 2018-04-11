#define _CRT_SECURE_NO_WARNINGS
#define NDEBUG

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdio>
#include "WordCount.h"

WordCount::WordCount(const std::string &filename) {

	std::ifstream iF(filename, std::ios::in);

	if (!iF.fail()) {

		std::runtime_error("ERROR: failed to associate fstream");

	} else {

		std::string currentLine;
		uint32_t currentWords = 0;

		while (std::getline(iF, currentLine)) {
			
			currentWords = computeWordCount(currentLine);
			numWords += currentWords;
			numLines += 1;

			/*std::cout << currentLine << "\n";
			std::cout << currentWords << "\n";
			std::cout << numWords << "\n";
			std::cout << numLines << "\n";
			std::cout << maxWords << "\n";*/

			if (currentWords >= maxWords) {
				maxWords = currentWords;
			}

		}

	}

	iF.close();
	
}

WordCount::~WordCount() {
	// explicit
}

uint32_t WordCount::computeWordCount(std::string s) {

	uint32_t result = 0;
	std::string sHolder;
	std::istringstream sstream(s, std::ios::in);

	while (sstream >> sHolder) {
		result++;
	}

	return result;

}

uint32_t WordCount::getWordCount() {
	return numWords;
}

uint32_t WordCount::getLineCount() {
	return numLines;
}

uint32_t WordCount::getMaxWordsInLine() {
	return maxWords;
}
