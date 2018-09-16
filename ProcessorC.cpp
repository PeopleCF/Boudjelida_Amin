#include "stdafx.h"
#include "ProcessorC.h"

ProcessorC::ProcessorC()
{
}
	
std::string ProcessorC::Process(std::string s)
{
	std::string s1;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ')  s1 += s[i];
	}
	return s1;
}
char ProcessorC::getType()
{
	return 'C';
}
ProcessorC::~ProcessorC()
{
}
