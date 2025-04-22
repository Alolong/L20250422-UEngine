#include "Engine.h"
#include"World.h"
#include"Input.h"


UEngine::UEngine() //" : World=nullptr"로 쓰기도 한다.
{
	World = nullptr;
	InputDevice = nullptr;
}

UEngine::~UEngine()
{
	Terminate(); 
}

void UEngine::Initiailze()
{

	InputDevice = new UInput();
	World = new UWorld();
}

void UEngine::Run()
{
	while (true)// 켜진 경우 계속 진행
	{
		Input();
		Tick();
		Render();
	}
}

void UEngine::Terminate()
{
	if (World)
	{
		delete World;
		World = nullptr;
	}

	if (InputDevice)
	{
		delete InputDevice;
		InputDevice = nullptr;
	}
}

void UEngine::Input()// 입력
{
	InputDevice->Tick();
	//Engine has a Input
	//키보드, 마우스, 조이스틱, 터치, 자이로 센스
}

void UEngine::Tick()//처리
{
	World->Tick();
}

void UEngine::Render()//출력
{
	World->Render();
}
