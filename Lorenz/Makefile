CC = gcc

#flags
CFLAGS = -oWall
GLUTFLGS = -lglut -lGL -lGLU -lGLEW -Wno-write-strings -lm

#target
TARGET = lorenz

all: $(TARGET)

#compile
$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp -o $(TARGET) $(GLUTFLGS)

#remove
clean:
	$(RM) $(TARGET)
