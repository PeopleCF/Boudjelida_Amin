#pragma once
#include "IProcessor.h"
class ProcessorA :
	public IProcessor
{
public:
	ProcessorA();
	std::string Process(std::string s) override;
	char getType() override;
	~ProcessorA();
};

