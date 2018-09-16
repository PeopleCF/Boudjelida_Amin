
#include "stdafx.h"
#include <iostream>
#include "FileReader.h"
#include "IProcessor.h"
#include "FileWriter.h"
#include "Factory.h"
#include "WrongCharException.h"
int main(int argc, char **argv)
{
	FileReader FileIn;
	std::string inputString = FileIn.readFile("C:/out/input.txt");
	Factory factory;
	char inputChar;
	std::cin >> inputChar;
	try {
		IProcessor *processor = factory.getProcessor(inputChar);
		std::string outputString = processor->Process(inputString);
		FileWriter FileOut;
		FileOut.writeFile(outputString, "C:/out/output.txt");
	}	
	catch (WrongCharException e) {
		std::cout << "Forbidden input Argument " << std::endl;
		return 0;
	}
	
	return 0;
}

