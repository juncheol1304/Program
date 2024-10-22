#include "Knuckles.h"

Knuckles::Knuckles()
{
	attack = 8;
	intersection = 0;
}

void Knuckles::Attack()
{
	cout << "Knuckles" << endl;
	cout << "공격력 : " << attack << endl;
	cout << "사거리 : " << intersection << endl;
}
