#include "World.h"
#include "Vector2D.h"

#include "Player.h"
#include "Wall.h"

UWorld::UWorld()// 월드 로딩

{
	SpawnActor(new APlayer());
	SpawnActor(new AWall());

	AWall* NewWall = new AWall();
	NewWall->Location.X = 1;
	NewWall->Location.Y = 0;
	SpawnActor(NewWall);

	NewWall = new AWall();
	NewWall->Location.X = 2;
	NewWall->Location.Y = 0;
	SpawnActor(NewWall);
}

UWorld::~UWorld()
{
	for (auto Actor : Actors)
	{
		delete Actor;
	}

	Actors.clear();
}



void UWorld::Tick()
{
	for (auto Actor : Actors) 
	{
		Actor->Tick();


	}
		FVector2D Location;  


}

void UWorld::Render()
{
	//system("cls");
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}






void UWorld::SpawnActor(AActor* NewActor)// 추가
{
	Actors.push_back(NewActor);

}

void UWorld::DestroyActor(AActor* DestroyedActor)//삭제
{
		Actors.erase(find(Actors.begin(), Actors.end(), DestroyedActor));
}

std::vector<AActor*>& UWorld::GetAllActors()// 들고 오기
{
	// TODO: insert return statement here
	return Actors;
}
