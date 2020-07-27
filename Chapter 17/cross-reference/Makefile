CC=gcc
SOURCES=cross_ref.c
CFLAGS=-g -D_USE_FIXED_PROTOTYPES__ -std=c18

all: cross_ref.c
	make cross_ref


cross_ref: cross_ref.c
		$(CC) $(CFLAGS) -o cross_ref cross_ref.c

clean:
	rm cross-ref.exe