#include <iostream>
#include "Windows.h"//COORD
#include "Actor.h"

AActor::AActor()
{
	Shape = ' ';
}

AActor::~AActor()
{
}
void AActor::AddActorWorldOffset(FVector2D offset) // offset�� �Ű�����(����)
{
	Location.X += offset.X;  // ���� ��ġ(location.x)�� offset.x ��ŭ ���Ͽ� ���� ��Ų��?
	Location.Y += offset.Y;
}

void AActor::Tick()
{
}

void AActor::Render()
{
	COORD Position = { static_cast<SHORT>(Location.X), (SHORT)Location.Y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Position);

	std::cout << Shape;
}