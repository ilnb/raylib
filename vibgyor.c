#include <raylib.h>
#define INDIGO (Color){0x4B, 0x00, 0x82, 0xFF}

int main() {
  InitWindow(900, 600, "VIBGYOR");
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Rainbow Time!", 855, 350, 30, BLACK);
    DrawCircle(960, 540, 130, VIOLET);
    DrawCircle(960, 540, 110, INDIGO);
    DrawCircle(960, 540, 90, BLUE);
    DrawCircle(960, 540, 70, GREEN);
    DrawCircle(960, 540, 50, YELLOW);
    DrawCircle(960, 540, 30, ORANGE);
    DrawCircle(960, 540, 10, RED);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
