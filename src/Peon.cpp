#include "Peon.h"
#include"freeglut.h"

Peon::Peon()
{
	rojo = verde = azul = 255; //blanco
	radio = 1.0f;
	//aceleracion.y = -9.8f;
}

Peon::Peon(float rad, float x, float y, float vx, float vy)
{
	radio = rad;
	posicion.x = x;
	posicion.y = y;
	velocidad.x = vx;
	velocidad.y = vy;

	rojo = verde = 255;
	azul = 100; //color distinto
}

// funcion principal de dibujo de la Esfera
void Peon::dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}


// movimiento de las esferas
void Peon::mueve(float t)
{
	posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	velocidad = velocidad + aceleracion * t;
}

void Peon::setColor(Byte r, Byte v, Byte a)
{
	rojo = r;
	verde = v;
	azul = a; 
}

void Peon::setRadio(float r)
{
	if (r < 0.1f)
		radio = 0.1f;
	radio = r;
}

void Peon::setPos(float _x, float _y)
{
	posicion.x = _x;
	posicion.y = _y;
}

void Peon::setVel(float _x, float _y)
{
	velocidad.x = _x;
	velocidad.y = _y;
}