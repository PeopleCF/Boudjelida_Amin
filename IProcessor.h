#pragma once
#include <string>
class IProcessor
{
public:
	IProcessor();
	virtual char getType();
	virtual std::string Process(std::string s) = 0;
	~IProcessor();
};

