CC=gcc
SOURCES=linkedlist.c find.c
CFLAGS=-g -D_USE_FIXED_PROTOTYPES__ -std=c18

all: linkedlist.c doublelinked.c
	make linkedlist find

linkedlist: linkedlist.c
	$(CC) $(CFLAGS) -o linkedlist linkedlist.c

find: doublelinked.c
	$(CC) $(CFLAGS) -o doublelinked doublelinked.c

clean:
	rm doublelinked.exe linkedlist.exe