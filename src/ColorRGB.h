#pragma once
#include "freeglut.h"
typedef unsigned char Byte;

struct ColorRGB
{
	ColorRGB(Byte red = 255, Byte green = 255, Byte blue = 255) {
		set(red, green, blue);
	};

	void set(Byte red = 255, Byte green = 255, Byte blue = 255) {
		red = r, green = g; blue = b;
	}

	void ponColor() {
		glColor3ub(r, g, b);
	};

	Byte r, g, b;
};