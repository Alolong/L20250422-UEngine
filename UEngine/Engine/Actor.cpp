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
void AActor::AddActorWorldOffset(FVector2D offset) // offset은 매개변수(로컬)
{
	Location.X += offset.X;  // 현재 위치(location.x)를 offset.x 만큼 더하여 갱신 시킨다?
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