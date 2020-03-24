#pragma once
#include <cstdint>

#define MAX_SIZE 255

struct Film_t 
{
	char m_title[MAX_SIZE];
	int m_maxAge;
	int m_oscars;
	char m_description[MAX_SIZE];

	Film_t(const char* title, int maxAge, int oscars, const char* description);

	void printInfo();
};