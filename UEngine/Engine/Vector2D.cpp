#include "Vector2D.h"

FVector2D::FVector2D() // �ʱ�ȭ
{
	X = 0;
	Y = 0;
}

FVector2D::FVector2D(int InX, int InY) // ���� �Ű����� ������ �ʱ�ȭ ���� �޾ƿ��� ���⼭ ����
{
	X = InX;
	Y = InY;

}

FVector2D::~FVector2D()
{
}