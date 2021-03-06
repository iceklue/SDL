#pragma once
#include <SDL.h>
#include "System.h"

class Display : public System, public Observer
{
public:

	Display(Engine& e, char* _title = "SDL", int w = 1280, int h = 720)
		:  title(_title), WIDTH(w), HEIGHT(h), System(e)
	{
	}
	void SetWindowAttributes(char* _title = "SDL", int w = 1280, int h = 720);

	void Resize(int w, int h);
	void Clear() const;
	void Close();

	void Update() override;
	bool Init() override;
	void SendMessage(Message msg) override;

	SDL_Window& GetWindow() const;
	bool IsOpen() const;

	int WIDTH = 1280;
	int HEIGHT = 720;
	char* title = "MolecularEngine";
private:
	
	// Our SDL window
	SDL_Window* window;
	// Our SDL screen
	SDL_Surface* screen;
	// Our OpenGL context handle
	SDL_GLContext windowContext;
	
	void SetOpenGLAttributes();

	void OnNotify(Message msg) override;
};

