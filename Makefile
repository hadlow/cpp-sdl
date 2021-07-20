OBJS = src/main.cpp src/game.cpp

# CC specifies which compiler we're using
CC = clang++

# COMPILER_FLAGS specifies the additional compilation options we're using
COMPILER_FLAGS = 

# LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

# OBJ_NAME specifies the name of our exectuable
OBJ_NAME = cppsdl

# This is the target that compiles our executable
cppsdl: $(OBJS)
	$(CC) $(COMPILER_FLAGS) $(LINKER_FLAGS) $(OBJS) -o $(OBJ_NAME)
