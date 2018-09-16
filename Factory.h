#pragma once
#include "ProcessorA.h"
#include "ProcessorB.h"
#include "ProcessorC.h"
class Factory
{
public:
	Factory();
	IProcessor* getProcessor(char c);
	~Factory();
};

