﻿// AKOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int a = 0b11111111111111111111111111111111;
	a = a ^ (a << 31);

}