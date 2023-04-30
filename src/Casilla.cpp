#include "Casilla.h"
#define FILA 8
#define COLUMNA 8

void Casilla::dibuja()
{
		for (int i = 0; i < FILA; i++) {
			for (int j = 0; j < COLUMNA; j++) {
				int suma = i + j;
				if ((suma % 2) != 0) {
					glBegin(GL_POLYGON);
					glColor3ub(_rojo, _verde, _azul);
					glVertex3d(i - 0.5 , j - 0.5, 0);
					glVertex3d(i + 0.5, j - 0.5, 0);
					glVertex3d(i + 0.5, j + 0.5 , 0);
					glVertex3d(i - 0.5, j + 0.5, 0);
					glEnd();
					glEnable(GL_LIGHTING);
				}

				if ((suma % 2) == 0) {
					glBegin(GL_POLYGON);
					glColor3ub(rojo, verde, azul);
					glVertex3d(i - 0.5, j - 0.5, 0);
					glVertex3d(i + 0.5, j - 0.5, 0);
					glVertex3d(i + 0.5, j + 0.5, 0);
					glVertex3d(i - 0.5, j + 0.5, 0);
					glEnd();
					glEnable(GL_LIGHTING);
				}

			}
		}
	}

void Casilla::setColor(BYTE r, BYTE v, BYTE a, BYTE _r, BYTE _v, BYTE _a)
{
	rojo = r;	 _rojo = _r;
	verde = v;  _verde = _v;
	azul = a;	 _azul = _a;
}