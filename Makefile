OBJS = src/main.cpp

#CC specifies which compiler we're using
CC = clang

#COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
COMPILER_FLAGS = 

#LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lSDL2

#OBJ_NAME specifies the name of our exectuable
OBJ_NAME = cppsdl

#This is the target that compiles our executable
all : $(OBJS)
	$(CC) $(COMPILER_FLAGS) $(LINKER_FLAGS) $(OBJS) -o $(OBJ_NAME)
