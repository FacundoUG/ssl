CC = gcc
CFLAGS = -std=c23 -Wall -Wextra

all: hello

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello

run: hello
	./hello

outputFile: hello
	./hello > output.txt

clean: hello output.txt
	rm -f hello output.txt