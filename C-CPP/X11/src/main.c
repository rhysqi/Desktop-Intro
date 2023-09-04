#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	// Declare variable
	Display *d;
	Window w;
	XEvent e;
	const char *msg = "Hello, World!";
	int s;

	// Check display
	d = XOpenDisplay(NULL);
	if (d == NULL) {
		fprintf(stderr, "Cannot open display\n");
		exit(1);
	}

	// Create window function
	s = DefaultScreen(d);
	w = XCreateSimpleWindow(d, RootWindow(d, s), 10, 10, 800, 500, 1,
							BlackPixel(d, s), WhitePixel(d, s));
	XSelectInput(d, w, ExposureMask | KeyPressMask);
	XMapWindow(d, w);

	// Service init
	while (1) {
		XNextEvent(d, &e);
	}

	// Close display
	XCloseDisplay(d);
	return 0;
}
