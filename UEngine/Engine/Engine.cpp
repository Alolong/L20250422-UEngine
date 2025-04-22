#include "Engine.h"
#include"World.h"
#include"Input.h"


UEngine::UEngine() //" : World=nullptr"�� ���⵵ �Ѵ�.
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
	while (true)// ���� ��� ��� ����
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

void UEngine::Input()// �Է�
{
	InputDevice->Tick();
	//Engine has a Input
	//Ű����, ���콺, ���̽�ƽ, ��ġ, ���̷� ����
}

void UEngine::Tick()//ó��
{
	World->Tick();
}

void UEngine::Render()//���
{
	World->Render();
}
