#ifndef WORDCOUNT_H
#define WORDCOUNT_H

#include <iostream>
#include <fstream>

class WordCount {

public:

	WordCount();
	WordCount(const std::string &filename);
	~WordCount();
	uint32_t computeWordCount(std::string s);
	uint32_t getWordCount();
	uint32_t getLineCount();
	uint32_t getMaxWordsInLine();

private:

	uint32_t numWords = 0;
	uint32_t numLines = 0;
	uint32_t maxWords = 0;

};

#endif