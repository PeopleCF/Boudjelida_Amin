#include "stdafx.h"
#include "FileReader.h"
#include <string>
#include <sstream>
#include <iostream>

FileReader::FileReader()
{
}

std::string FileReader::readFile(const std::string path)
{
	std::ifstream file;
	std::stringstream stream;
	
		file.open(path);
		if (!file.is_open()) {
			return std::string("Cannot Read file");
		}
	
	std::string line;
	while (getline(file, line)) {
		stream << line;
	}

	return stream.str();
}


FileReader::~FileReader()
{
}
