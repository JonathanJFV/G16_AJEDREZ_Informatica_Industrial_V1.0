#pragma once
#include"Vector2D.h"
#include"ColorRGB.h"

class Peon
{
public:
	Peon();
	Peon(float x, float y);

	
	//virtual ~Esfera();

	void dibuja(); // funcion principal de dibujo de la Esfera
	void mueve(float t); 	// movimiento de las esferas
	void setColor(Byte b, Byte n);
	//void setRadio(float r);
	void setPos(float _x, float _y);



private:
	Byte blanco;
	Byte negro;
	float radio;
	Vector2D posicion;


	friend class Interaccion;
};

