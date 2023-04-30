//Desbordamiento aritmético: uso del operador "operator" en un valor de byte de tamaño-a y, a continuación,
//conversión del resultado en un valor de byte de tamaño-b.
//Convierta el valor en el tipo más amplio antes de llamar al operador "operator"para evitar el desbordamiento
#pragma warning( disable : 26451 )
#include "Tablero.h"

void Tablero::rotarOjo()
{
	float dist = (float)sqrt(x_ojo * x_ojo + z_ojo * z_ojo);
	float ang = (float)atan2(z_ojo, x_ojo);
	ang += 0.05f;
	x_ojo = dist * (float)cos(ang);
	z_ojo = dist * (float)sin(ang);
}

void Tablero::dibuja()
{
	//PARA MIRAR AL CENTRO DE LA ESCENA
	gluLookAt(x_ojo, y_ojo, z_ojo,  // posicion del ojo
		x_ojo, y_ojo, 0.0,      // hacia que punto mira  (0,0,0) 
		0.0, 1.0, 0.0);      // definimos hacia arriba (eje Y)    

//aqui es donde hay que poner el codigo de dibujo

	peon1.dibuja();
	peon2.dibuja();

	fondo.dibuja();
	casilla.dibuja();

}

void Tablero::mueve()
{



}

void Tablero::inicializa()
{
	x_ojo = 3.5;
	y_ojo = 3.5;
	z_ojo = 16;


	peon1.setPos(0, 2);
	peon1.setRadio(0.5);
	peon2.setPos(1, 1);
	peon2.setRadio(0.5);
	

	fondo.setColor(100, 125, 16);
	fondo.setPos(-1, -1, 8, 8);

	casilla.setColor(119, 79, 56, 230, 181, 126);
}

void Tablero::tecla(unsigned char key)
{

}

void Tablero::teclaEspecial(unsigned char key)
{

}

//Tablero::~Tablero()
//{
// chessboard.destruirContenido();
//}

void Tablero::cursor(int button, int state, int _x, int _y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

	//Se obtienen coordenadas relativas a la pantalla
	//Cursor_x y Cursor_y representan las posiciones
		for (int i = 0; i < 8; i++)
		{
			if (_x > i * 50 + 194  && _x < (i+1) * 50+194) {
				cursor_x = i+1;
				for (int j = 0; j < 8; j++)
				{
					if (_y > j * 50 + 94  && _y < (j+1) * 50 + 94)
						cursor_y = 8 - j;
				}
			}
		}
		cout << _x << "," << _y << endl;
		cout << cursor_x << "," << cursor_y << endl;

	}
}