CC := g++
SOURCE_FILES := $(wildcard *.cpp)
BUILD_FILE := main.o
LIB_FILE := libmain.so
LINKER_FLAGS := -shared -o

all:
	$(CC) -c -fPIC $(SOURCE_FILES) -o $(BUILD_FILE)
	$(CC) $(LINKER_FLAGS) $(LIB_FILE) $(BUILD_FILE)