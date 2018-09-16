#include "stdafx.h"
#include "FileWriter.h"
#include <iostream>

FileWriter::FileWriter()
{
}

int FileWriter::writeFile(std::string s, std::string Path)
{
	std::fstream file;
	file.open(Path);
	if (!file.is_open()) {
		return -1;

	}
	else{

		file << s;
	file.close();
	return 0;
	}
}


FileWriter::~FileWriter()
{
}
