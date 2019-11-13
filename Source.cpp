#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include "Header.h"

using namespace System::Threading;
using namespace std;
using namespace System;

#define IZQUIERDA 75
#define DERECHA 77

void main()
{

	Console::CursorVisible = false;char tecla;

	int xM, yM, dM;

	int x = 20, y = 20, dx;

	xM = 5;yM = 5;dM = 1;int tiempo;tiempo = 1;

	while (1)
	{

		if (tiempo%2000==0)
		{

			moverM(xM, dM, yM);
			dibujarM(xM, yM);
			
			tiempo = 1;
		}
		tiempo++;

			MoverN(x, y);
		

	}

}
