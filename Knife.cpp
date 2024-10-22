#include "Knife.h"

Knife::Knife()
{
	attack = 10;
	intersection = 1;
}

void Knife::Attack()
{
	cout << "Knife" << endl;
	cout << "공격력 : " << attack << endl;
	cout << "사거리 : " << intersection << endl;
}
