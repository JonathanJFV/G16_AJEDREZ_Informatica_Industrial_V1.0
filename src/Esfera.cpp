#include "Esfera.h"
#include"freeglut.h"

Esfera::Esfera()
{
	rojo = verde = azul = 255; //blanco
	radio = 1.0f;
	//aceleracion.y = -9.8f;
}

Esfera::Esfera(float rad, float x, float y, float vx, float vy)
{
	radio = rad;
	posicion.x = x;
	posicion.y = y;
	//velocidad.x = vx;
	//velocidad.y = vy;

	rojo = verde = 255;
	azul = 100; //color distinto
	//aceleracion.y = -9.8;
}

// funcion principal de dibujo de la Esfera
void Esfera::dibuja()
{
	glColor3ub(rojo, verde, azul);
	glTranslatef(posicion.x, posicion.y, 0);
	glutSolidSphere(radio, 20, 20);
	glTranslatef(-posicion.x, -posicion.y, 0);
}


// movimiento de las esferas
void Esfera::mueve(float t)
{
	//posicion = posicion + velocidad * t + aceleracion * (0.5f * t * t);
	//velocidad = velocidad + aceleracion * t;
}

void Esfera::setColor(Byte r, Byte v, Byte a)
{
	rojo = r;
	verde = v;
	azul = a; 
}

void Esfera::setRadio(float r)
{
	if (r < 0.1f)
		radio = 0.1f;
	radio = r;
}

void Esfera::setPos(float _x, float _y)
{
	posicion.x = _x;
	posicion.y = _y;
}

void Esfera::setVel(float _x, float _y)
{
	//velocidad.x = _x;
	//velocidad.y = _y;
}