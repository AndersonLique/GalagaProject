#pragma once
#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>

#define IZQUIERDA 75
#define DERECHA 77
#define ESPACIO 32

using namespace std;
using namespace System;

char nave[3][5] = { {' ',' ',206,' ',' '},
					{' ',40,178,41,' '},
					{174,203,223,203,175} };

char mariposon[2][5] = { {200,205,177,205,188},
						{201,205,178,205,187} };

void ubicacion(int x, int y)
{
	Console::SetCursorPosition(x, y);
}

void dibujarN(int x, int y) //esta funcion dibuja al tiburon
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (nave[i][j]) {
				Console::SetCursorPosition(x + j, y + i);
				cout << nave[i][j];
			}
		}
	}
}

void dibujarM(int x, int y) //esta funcion dibuja al tiburon
{

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (mariposon[i][j]) {
				Console::SetCursorPosition(x + j, y + i);
				cout << mariposon[i][j];
			}
		}
	}
}

void borrarN(int x, int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			Console::SetCursorPosition(x + j, y + i);
			cout <<" ";
		}
	}

}

void borrarM(int x, int y)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			Console::SetCursorPosition(x + j, y + i);
			cout << " ";
		}
	}

}

void MoverN(int &x,int &y)
{
	bool contar=false;
	float algo=0;

	char tecla;



	if (_kbhit())
	{
		tecla = _getch();

		borrarN(x, y);
		if (tecla == DERECHA && x + 3 < 78) x ++;
		if (tecla == IZQUIERDA && x - 3 > 1) x --;
	
		ubicacion(x, y);
		dibujarN(x, y);
	}
	
	
	
}


void moverM(int& x, int& dy, int& y) //esta funcion mueve a la mariposa
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (mariposon[i][j]) {
				Console::SetCursorPosition(x + j, y + i);
				cout << " ";
			}
		}
	}

	if (y + dy < 0 || y + dy + 1>29)
	{
		dy = -dy;
	}
	y += dy;
}

void Mover_Mariposon(int xM,int dM, int yM)
{
	
	while (true)
	{

		moverM(xM, dM, yM);
		dibujarM(xM,yM);
		break;
	
	}


}