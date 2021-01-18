.POSIX:
CC=gcc
CFLAGS=-march=native -O3 -pipe -flto -fno-fat-lto-objects -Wall

build: src/main.c
	$(CC) src/main.c -o pasgen $(CFLAGS)

clean: pasgen
	rm pasgen

install: pasgen
	chmod +x pasgen
	cp -f pasgen /usr/local/bin

remove: /usr/local/bin/pasgen
	rm /usr/local/bin/pasgen

.PHONY: clean install remove
