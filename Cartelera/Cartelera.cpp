#include <iostream>
#include <stdio.h>
#include "Film.h"

Film_t askInfo()
{
	char title[MAX_SIZE];
	printf("Dime el nombre de tu pelicula:\n");
	gets_s(title);
	
	char description[MAX_SIZE];
	printf("Dime una breve descripcion de tu pelicula:\n");
	gets_s(description);

	int maxAge;
	printf("Dime la edad minima para ver tu pelicula:\n");
	scanf("%d", &maxAge);

	int oscars;
	printf("Dime el numero de oscars de tu pelicula:\n");
	scanf("%d", &oscars);

	Film_t film(title, maxAge, oscars, description);

	return film;
}

int main()
{
	
	int dimension;
	printf("Dime la dimension de tu array: \n");
	scanf("%d", &dimension);

	Film_t t[2];

	Film_t film = askInfo();
	film.printInfo();
}
