﻿#include <iostream>
#include "Weapon.h"
#include "Knife.h"
#include "Hammer.h"
#include "Knuckles.h"

using namespace std;

int main()
{
#pragma region 다형성
	// 여려 개의 서로 다른 객체가 동일한 기능을 서로
	// 다른 방법으로 처리할 수 있는 작업입니다.

	Knife knife;
	Weapon weapon;
	Hammer hammer;
	Knuckles knuckles;

	weapon.Attack();
	knife.Attack();
	hammer.Attack();
	knuckles.Attack();

	// 다형성은 컴파일 시점에 함수와 속성이 결정되는
	// 정적 바인딩을 하지 않고, 실행 시간에 함수와
	// 속성이 결정될 수 있는 동적 바인딩을 가능하게 합니다. 


#pragma endregion



	return 0;
}
