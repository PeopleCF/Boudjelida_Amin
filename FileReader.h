#pragma once

#include <fstream>
class FileReader
{
public:
	FileReader();
	std::string readFile(std::string s);
	~FileReader();
};

