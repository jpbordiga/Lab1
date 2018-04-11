#include <iostream>
#include <string>
#include "WordCount.h"

using namespace std;

int main(int argc, char** argv) {

	std::string filename; // input file

	std::cout << "Enter File Name: " << "\n";

	std::cin >> filename;

	WordCount wC(filename);

	std::cout << wC.getWordCount() << " words, " << wC.getLineCount() << " lines, " << wC.getMaxWordsInLine() << " max words in line" << "\n";

	return 0;

}