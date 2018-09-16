#pragma once
#include "IProcessor.h"
class ProcessorC :
	public IProcessor
{
public:
	ProcessorC();
	std::string Process(std::string s) override;
	char getType() override;
	~ProcessorC();
};

