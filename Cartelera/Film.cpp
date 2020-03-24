#include "Film.h"
#include <string.h>
#include <cstdio>

Film_t::Film_t(const char* title, int maxAge, int oscars, const char* description) : m_maxAge(maxAge), m_oscars(oscars)
{
	strcpy(&m_title[0], title);
	strcpy(&m_description[0], description);
}

void Film_t::printInfo()
{
	printf("Tu pelicula es: %s", m_title);
	printf("\nDescripcion: %s", m_description);
	printf("\nEdad minima: %d", m_maxAge);
	printf("\nOscars: %d", m_oscars);
}
