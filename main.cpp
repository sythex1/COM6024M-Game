// COM6024M assessment starter template
// A blank raylib window - no game logic yet. This is where your project begins.
//
// PollInputEvents() below is required to keep the window responsive on some
// hardware (Intel+NVIDIA dual-GPU laptops especially). Always keep this call,
// even if your own machine doesn't seem to need it - someone testing or
// marking your work might be on affected hardware.

#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "My Game");   // TODO: change the title
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        PollInputEvents();   // keep this - see comment above

        // --- update your game state here ---

        BeginDrawing();
        ClearBackground(RAYWHITE);

        // TODO: replace this placeholder with your own drawing code
        DrawText("It works! Start building your game here.", 40, 200, 20, DARKGRAY);


        EndDrawing();

        
        SwapScreenBuffer();

    }

    CloseWindow();
    return 0;
}
