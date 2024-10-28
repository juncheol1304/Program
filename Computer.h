#pragma once
#include <iostream>
#include "KeyBoard.h"
#include "Mouse.h"

using namespace std;

class Computer : public KeyBoard, Mouse
{
public:
	Computer();

	void Use();

	~Computer();
};

