#pragma once
#include <fstream>
#include <string>
class FileWriter
{
public:
	FileWriter();
	int writeFile(std::string s, std::string Path); 
	~FileWriter();
};

