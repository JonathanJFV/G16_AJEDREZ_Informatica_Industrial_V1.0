#include "ListaPeones.h"

ListaPeones::ListaPeones()
{
	numero = 0;
	for (int i = 0; i < MAX_PEONES; i++)
		lista[i] = 0;
}

bool ListaPeones::agregar(Peon *p)
{
	if (numero < MAX_PEONES)
		lista[numero++] = p;
	else
		return false;
	return true;
}

void ListaPeones::dibuja()
{
	for (int i = 0; i < numero; i++)
	
		lista[i]->dibuja();
	
}