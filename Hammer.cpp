#include "Hammer.h"

Hammer::Hammer()
{
	attack = 15;
	intersection = 1;
}

void Hammer::Attack()
{
	cout << "Hammer" << endl;
	cout << "공격력 : " << attack <<  endl;
	cout << "사거리 : " << intersection << endl;

}
