#include "stdafx.h"
#include "ProcessorA.h"
#include <iostream>


ProcessorA::ProcessorA()
{
}

std::string ProcessorA::Process(std::string s)
{
	std::string reversed;
	int prev = -1;
	for (int i = s.length() - 1; i >=0 ; i--) {
		if (i < 0) continue;
		if (s[i] != ' ' && (s[i + 1] == ' ' || i == s.length() - 1)) prev = i;
		if (s[i] == ' ' && prev!=-1 ) {
			for (int j = i + 1; j <= prev; j++) {
				reversed += s[j];
				}
			reversed += ' ';
			prev = -1;
			
			
			}
		
		}
	for (int i = 0; i <= prev; i++) reversed += s[i];
	return reversed;

}
ProcessorA::~ProcessorA()
{
}
char ProcessorA::getType()
{
	return 'A';
}