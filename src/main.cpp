// Raylib
#include "../include/raylib/raylib.h"


#include <iostream>

int main() {
    InitWindow(800, 600, "Pekeclone");

    Camera2D camera;
    camera.offset = Vector2(GetScreenWidth() / 2, GetScreenHeight() / 2);
    camera.rotation = 0.f;
    camera.zoom = 0.5f;
    camera.target = Vector2(0, 0);

    SetExitKey(-1);
    while(!WindowShouldClose()) {
        // Updates here

        BeginDrawing();
        ClearBackground(BLACK);
        BeginMode2D(camera);
        // Moving with camera here

        EndMode2D();
        // Static drawing here
        EndDrawing();
    }

    return EXIT_SUCCESS;
}