CC=gcc
SOURCES=trees.c
CFLAGS=-g -D_USE_FIXED_PROTOTYPES__ -std=c18

all: trees.c
	make trees

trees: trees.c
	$(CC) $(CFLAGS) -o trees trees.c

clean:
	rm trees.exe