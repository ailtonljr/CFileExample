# Makefile
CC=gcc

PROGRAM_NAME = savefiles

all: savefiles

main: $(PROGRAM_NAME).c 
        # O compilador faz a ligação entre os dois objetos
		$(CC) -o $(PROGRAM_NAME) $(PROGRAM_NAME).c
clean:
		rm -rf *.o $(PROGRAM_NAME)
