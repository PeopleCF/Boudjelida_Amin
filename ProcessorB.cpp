#include "stdafx.h"
#include "ProcessorB.h"
#include <algorithm>

ProcessorB::ProcessorB()
{
}

std::string ProcessorB::Process(std::string s)
{
	std::string s1 = s;
	std::replace(s1.begin(), s1.end(), ',', '.');
	return s1;
}
char ProcessorB::getType()
{
	return 'B';
}

ProcessorB::~ProcessorB()
{
}
