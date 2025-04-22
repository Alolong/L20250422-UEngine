#pragma once
class UInput
{
public:
	UInput();
	virtual~UInput();
	void Tick();

	static int KeyCode;//실행시 데이터 영역에 만들어짐-
};

