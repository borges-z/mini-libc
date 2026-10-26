TARGET = minilibc
OBJECTS = main.o functions.o
CPPFLAGS = -Iinclude

$(TARGET): ${OBJECTS}
	gcc ${OBJECTS} -o $(TARGET)

main.o: src/main.c include/functions.h
	gcc ${CPPFLAGS} -c src/main.c -o main.o

functions.o: src/functions.c include/functions.h
	gcc ${CPPFLAGS} -c src/functions.c -o functions.o