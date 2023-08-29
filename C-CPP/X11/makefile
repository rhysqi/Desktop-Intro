CC = clang14
CCL = clang-14

File = src/main.c
Out_File = -o build/Program

LIBS1 = -I/usr/local/include -L/usr/local/lib
LDFLAGS = -lX11

OPT1 = -fno-strict-aliasing -fstack-protector-strong -fslp-vectorize -fvectorize
OPT2 = -std=c2x -stdlib=libc++ -pthread -flto -O2 -H -v

Compile_1 = $(CC) $(File) $(Out_File) $(LIBS1) $(LDFLAGS) $(OPT1) $(OPT2)
Compile_2 = $(CCL) $(File) $(Out_File) $(LIBS1) $(LDFLAGS) $(OPT1) $(OPT2)

BUILD_DIR := build

.PHONY: all check_dir

all: check_dir
	@echo "Compilling...."
	$(Compile_1)
	@echo "Finished !!"

linux: check_dir
	@echo "Compilling...."
	$(Compile_2)
	@echo "Finished !!"

check_dir:
	@if [ ! -d "$(BUILD_DIR)" ]; then mkdir -p $(BUILD_DIR); fi
