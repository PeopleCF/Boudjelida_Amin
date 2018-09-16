#pragma once
#include "IProcessor.h"
class ProcessorB :
	public IProcessor
{
public:
	ProcessorB();
	std::string Process(std::string s) override;
	char getType() override;
	~ProcessorB();
};

