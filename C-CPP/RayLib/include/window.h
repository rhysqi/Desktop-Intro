// Window Function

#include <stdint.h>
#include <sys/types.h>

#include <raylib.h>

// Window function
inline void Window(uint32_t width, u_int32_t height, const char *Title){
	InitWindow(width, height, Title);
}
