#pragma once
#define MAX_PEONES 20
#include "Peon.h"

class ListaPeones
{
public:
	ListaPeones();
	//virtual ~ListaPeones();
	bool agregar(Peon* p);
	void dibuja();

private:
	Peon* lista[MAX_PEONES];
	int numero;
};

