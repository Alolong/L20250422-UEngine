#pragma once
struct FVector2D// 구조체 
{
	FVector2D();// 생성자

	FVector2D(int InX, int InY);//생성자 - 매개변수를 받을 수 있도록 오버로딩(매개변수 타입 다르게 가능하도록, 대신 함수명이 같다.)

	virtual ~FVector2D();//소멸자

	int X;
	int Y;
};