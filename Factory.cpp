#include "stdafx.h"
#include "Factory.h"
#include "WrongCharException.h"

Factory::Factory()
{
}

IProcessor* Factory::getProcessor(char c)
{
	switch (c)
	{
	default: {
		throw WrongCharException();
		return nullptr;
	}
	case ('A'): {
		IProcessor * result = new ProcessorA(); 
		return result;
		}
		break;
	case ('B'): {
		IProcessor * result = new ProcessorB();
		return result;
	}
				break;
	case ('C'): {
		IProcessor * result = new ProcessorC();
		return result;
	}
				break;
	}
}


Factory::~Factory()
{
}
