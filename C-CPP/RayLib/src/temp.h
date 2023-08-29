// Logical function

#include <stdio.h>
#include <stdlib.h>

#include "core.h"

void ServeInit(){
	// Service initialization
	while (!WindowShouldClose()) {
		BeginDrawing();
		temp();
		EndDrawing();
	}
}