#include "Engine.h"
#include "SDL3/SDL.h"


#pragma comment(lib, "SDL3")

int main()
{
	SDL_Window* MyWindow = SDL_CreateWindow("Sample", 640, 480, SDL_WINDOW_OPENGL); // 창의 생성

	UEngine* Engine = new UEngine();
	


	Engine->Initiailze();

	Engine->Run();



	SDL_DestroyWindow(MyWindow);
	SDL_Quit();


	return 0;
}