#pragma once
struct FVector2D// ����ü 
{
	FVector2D();// ������

	FVector2D(int InX, int InY);//������ - �Ű������� ���� �� �ֵ��� �����ε�(�Ű����� Ÿ�� �ٸ��� �����ϵ���, ��� �Լ����� ����.)

	virtual ~FVector2D();//�Ҹ���

	int X;
	int Y;
};