#pragma once
#include"Vector2D.h"
#include"ColorRGB.h"

class Peon
{
public:

	Peon();
	Peon(float rad, float x=0.0f, float y=0.0f,
		   float vx=0.0f, float vy=0.0f);

	//virtual ~Esfera();

	void dibuja(); // funcion principal de dibujo de la Esfera
	void mueve(float t); 	// movimiento de las esferas
	void setColor(Byte r, Byte v, Byte a);
	void setRadio(float r);
	void setPos(float _x, float _y);
	void setVel(float _x, float _y);


private:
	Byte rojo;
	Byte verde;
	Byte azul;
	float radio;
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;

	friend class Interaccion;
};

