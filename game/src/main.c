#include "raylib.h"

int main()
{
    InitWindow(800,600,"raylib");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        {
            ClearBackground(RAYWHITE);
        }
    }
    CloseWindow();
    return 0;
}