#include <raylib.h>

int main() {
  const int w = 900, h = 600;

  InitWindow(w, h, "Raylib Tutorial");

  Image img = LoadImage("test.jpg");
  if (!img.data) {
    TraceLog(LOG_ERROR, "Failed to load image");
    CloseWindow();
    return 1;
  }

  Texture2D texture = LoadTextureFromImage(img);
  UnloadImage(img);

  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawTexture(texture, 0, 0, WHITE);
    EndDrawing();
  }

  UnloadTexture(texture);
  CloseWindow();
  return 0;
}
