#include "Vector2D.h"

FVector2D::FVector2D() // 초기화
{
	X = 0;
	Y = 0;
}

FVector2D::FVector2D(int InX, int InY) // 받은 매개변수 값으로 초기화 정보 받아오면 여기서 갱신
{
	X = InX;
	Y = InY;

}

FVector2D::~FVector2D()
{
}