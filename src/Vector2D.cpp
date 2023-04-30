//Desbordamiento aritmético: uso del operador "operator" en un valor de byte de tamaño-a y, a continuación,
//conversión del resultado en un valor de byte de tamaño-b.
//Convierta el valor en el tipo más amplio antes de llamar al operador "operator"para evitar el desbordamiento
#pragma warning( disable : 26451 )
#include "Vector2D.h"
#include<math.h>

Vector2D::Vector2D(float xv, float yv) //definicion del constructor
{ 
	//inicializadores
	x = xv;
	y = yv;
}

float Vector2D::modulo()
{
	return (float) sqrt(x * x + y * y);
}

float Vector2D::argumento()
{
	return (float)atan2(y, x);
}

Vector2D Vector2D::unitario()
{
	Vector2D retorno(x, y);
	float mod = modulo();
	if (mod > 0.00001)
	{
		retorno.x /= mod;
		retorno.y /= mod;
	}
	return retorno;
}

Vector2D Vector2D::operator - (Vector2D v)
{
	Vector2D res;
	res.x = x - v.x;
	res.y = y - v.y;
	return res;
}

Vector2D Vector2D::operator + (Vector2D v)
{
	Vector2D res;
	res.x = x + v.x;
	res.y = y + v.y;
	return res;
}


float Vector2D::operator * (Vector2D v)
{
	return (float)(x * v.x + y * v.y);

}

Vector2D Vector2D::operator * (float f)
{
	Vector2D ret;
	ret.x = x * f;
	ret.y = y * f;
	return ret;
}



