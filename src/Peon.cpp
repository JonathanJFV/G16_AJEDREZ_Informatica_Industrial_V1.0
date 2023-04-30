#include "Peon.h"
#include"freeglut.h"
#include "ETSIDI.h"

Peon::Peon()
{
	posicion.x = posicion.y;
}

Peon::Peon(float x, float y)
{
	posicion.x = x;
	posicion.y = y;
}

// funcion principal de dibujo de la Esfera
void Peon::dibuja()
{
	if (blanco==1)
	{
		glEnable(GL_TEXTURE_2D);
		glBindTexture(GL_TEXTURE_2D, ETSIDI::getTexture("imagenes/peon_blanco.png").id);
		glDisable(GL_LIGHTING);
		glBegin(GL_POLYGON);
		glColor3f(1, 1, 1);
		glTexCoord2d(0, 0);   glVertex2f(posicion.x - 0.5, posicion.y + 0.5);
		glTexCoord2d(1, 0); glVertex2f(posicion.x + 0.5, posicion.y + 0.5);
		glTexCoord2d(1, 1); glVertex2f(posicion.x + 0.5, posicion.y - 0.5);
		glTexCoord2d(0, 1);   glVertex2f(posicion.x - 0.5, posicion.y - 0.5);
		glEnd();
		glEnable(GL_LIGHTING);
		glDisable(GL_TEXTURE_2D);
	}
	
	

	//glutSolidSphere(0.5, 20, 20);
}



// movimiento de las esferas
void Peon::mueve(float t)
{

}

void Peon::setColor(Byte b, Byte n)
{
	blanco = b;
	negro = n;
}

/*void Peon::setRadio(float r)
{
	if (r < 0.1f)
		radio = 0.1f;
	radio = r;
}*/


void Peon::setPos(float _x, float _y)
{
	posicion.x = _x;
	posicion.y = _y;
}
