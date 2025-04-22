#pragma once
#include "Vector2D.h"



class AActor
{
public:
	AActor();
	virtual~AActor();


	void AddActorWorldOffset(FVector2D  offset); // vecter2D�� �Ű������� �޾� offset��ŭ location ��ŭ �̵���Ų��
	FVector2D Location;

	virtual void Tick();
	virtual void Render();

	char Shape;
};

