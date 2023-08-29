CC = clang14

File = main.c
Out_File = -o build/Program

LIBS1 = -I/usr/local/include -L/usr/local/lib
LDFLAGS = -lX11

OPT1 = -fno-strict-aliasing -fstack-protector-strong -fslp-vectorize -fvectorize
OPT2 = -target x86_64-pc-freebsd-13.2 -std=c17 -stdlib=libc++ -pthread -flto -O2 -H -v

Compile_1 = $(CC) $(File) $(Out_File) $(LIBS1) $(LDFLAGS) $(OPT1) $(OPT2)

BUILD_DIR := build

.PHONY: all check_dir

all: check_dir
	@echo "Compilling...."
	$(Compile_1)
	@echo "Finished !!"

check_dir:
	@if [ ! -d "$(BUILD_DIR)" ]; then mkdir -p $(BUILD_DIR); fi
