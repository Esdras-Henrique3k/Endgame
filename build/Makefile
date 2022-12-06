# cc and flags
CC = g++
CXXFLAGS = -std=c++11 -g -Wall
#CXXFLAGS = -std=c++11 -O3 -Wall

# folders
INCLUDE_FOLDER = ./include/
BIN_FOLDER = ./bin/
OBJ_FOLDER = ./obj/
SRC_FOLDER = ./src/

# all sources, objs, and header files
MAIN = Main
TARGET = run

EXTENSION_FILES_OBJECT = .o
EXTENSION_FILES_SRC = .cpp

SRC = $(wildcard $(SRC_FOLDER)*$(EXTENSION_FILES_SRC))
OBJ = $(patsubst $(SRC_FOLDER)%$(EXTENSION_FILES_SRC), $(OBJ_FOLDER)%$(EXTENSION_FILES_OBJECT), $(SRC))

$(OBJ_FOLDER)%$(EXTENSION_FILES_OBJECT): $(SRC_FOLDER)%$(EXTENSION_FILES_SRC)
	$(CC) $(CXXFLAGS) -c $< -o $@ -I$(INCLUDE_FOLDER)

all: $(OBJ)
	$(CC) $(CXXFLAGS) -o $(BIN_FOLDER)$(TARGET) $(OBJ)

clean:
	@rm -rf $(OBJ_FOLDER)* $(BIN_FOLDER)*

windows_clean:
	del /S .\bin\*.exe
	del /S .\obj\*.o
