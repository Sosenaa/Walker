#include "raylib.h"


int main()
{
	//Screen size
	const int WinWidth{ 800 };
	const int WinHeight{ 600 };

	InitWindow(WinWidth, WinHeight, "The Walker");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {

		BeginDrawing();
		ClearBackground(WHITE);

		EndDrawing();

	}

	CloseWindow();


}

