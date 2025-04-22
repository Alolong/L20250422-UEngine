#pragma once
#include "Vector2D.h"



class AActor
{
public:
	AActor();
	virtual~AActor();


	void AddActorWorldOffset(FVector2D  offset); // vecter2D를 매개변수로 받아 offset만큼 location 만큼 이동시킨다
	FVector2D Location;

	virtual void Tick();
	virtual void Render();

	char Shape;
};

