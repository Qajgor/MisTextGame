#include <iostream>
#include "Gracz.h"

using namespace std;

gracz::gracz(string nazwa, int zycie, int mana, int lvl, int exp, int atk, int def, int mdef, int inteligencja, int dex)
{
	name = nazwa;//Inicjowanie statystyk gracza
	HP = zycie;
	MP = mana;
	EXP = exp;
	LVL = lvl;
	ATK = atk;
	DEF = def;
	M_DEF = mdef;
	INT = inteligencja;
	DEX = dex;
	miejsce = 0;
}
