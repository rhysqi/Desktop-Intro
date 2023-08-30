// Logical function

#include <stdio.h>
#include <stdlib.h>

#include "core.h"

inline void ServeInit(){
	// Service initialization
	while (!WindowShouldClose()) {
		BeginDrawing();
		temp();
		EndDrawing();
	}
}
