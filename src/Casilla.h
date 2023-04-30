#pragma once
#include "freeglut.h"

class Casilla
{
public:
	void dibuja();
	void setColor(BYTE r, BYTE v, BYTE a, BYTE _r, BYTE _v, BYTE _a);

private:
	BYTE rojo, verde, azul;
	BYTE _rojo, _verde, _azul;
};

