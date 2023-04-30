#pragma once
#include "freeglut.h"
#include <math.h>
#include "Pared.h"
#include"Peon.h"
#include "Casilla.h"
#include<iostream>
#include "Vector2D.h"
using namespace std;

class Tablero
{


public:
	//Vector2D posCursor;
	int cursor_x, cursor_y;

	Peon peon1, peon2;
	Pared fondo;
	Casilla casilla;


	void tecla(unsigned char key);
	void inicializa();
	void rotarOjo();
	void mueve();
	void dibuja();

	void cursor(int button, int state, int _x, int _y);

	//virtual ~Tablero();

	void teclaEspecial(unsigned char key);

	float x_ojo;
	float y_ojo;
	float z_ojo;



};

