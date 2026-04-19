#include "audio.h"

// Simple delay (temporary)
void delay(int time) {
    for (int i = 0; i < time * 1000; i++);
}

void play_shoot_sound(void) {
    delay(50);
}

void play_hit_sound(void) {
    delay(100);
}

void play_gameover_sound(void) {
    delay(300);
}