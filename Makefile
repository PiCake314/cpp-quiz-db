
CC = g++
CFLAGS = -std=c++20

all: main

main: main.cpp
	$(CC) $(CFLAGS) -o main main.cpp

run: main
	./main

update:
	./update.sh

clean:
	rm -f main