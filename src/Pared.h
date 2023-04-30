#pragma once
#include"Vector2D.h"
#include"ColorRGB.h"

class Pared
{

public:
	Pared();
	//virtual ~Pared();

	// funcion principal de dibujo de Paredes
	void dibuja();
	void setColor(Byte r, Byte v, Byte a);
	void setPos(float x1, float y1, float x2, float y2);
	
	float distancia(Vector2D punto, Vector2D* direccion = 0);

private:
	Byte rojo;
	Byte verde;
	Byte azul;  
	Vector2D limite1;
	Vector2D limite2;

	friend class Interaccion;
};

