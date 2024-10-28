#include "Computer.h"

Computer::Computer()
{
	cout << "Creater Computer" << endl;
}

void Computer::Use()
{
	Mouse::OnEnter();
	KeyBoard::OnEnter();
}

Computer::~Computer()
{
	cout << "Release Computer" << endl;
}
