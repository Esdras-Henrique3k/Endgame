COMPILADOR = g++
FLAGS = -std=c++11 -g -Wall

INCLUDE_FOLDER = ./include/
BUILD_FOLDER = ./build/
SRC_FOLDER = ./src/

MAIN = Main
TARGET = run

EXTENSION_FILES_OBJECT = .o
EXTENSION_FILES_SRC = .cpp

SRC = $(wildcard $(SRC_FOLDER)*$(EXTENSION_FILES_SRC))
OBJ = $(patsubst $(SRC_FOLDER)%$(EXTENSION_FILES_SRC), $(BUILD_FOLDER)%$(EXTENSION_FILES_OBJECT), $(SRC))

$(BUILD_FOLDER)%$(EXTENSION_FILES_OBJECT): $(SRC_FOLDER)%$(EXTENSION_FILES_SRC)
	$(COMPILADOR) $(FLAGS) -c $< -o $@ -I$(INCLUDE_FOLDER)

all: $(OBJ)
	$(COMPILADOR) $(FLAGS) -o $(BUILD_FOLDER)$(TARGET) $(OBJ)

clean:
	@rm -rf $(BUILD_FOLDER)*

windows_clean:
	del /S .\build\*.exe
	del /S .\build\*.o
