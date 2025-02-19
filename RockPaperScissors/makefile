# Makefile for rock_paper_scissors

# Default target: build the executable
all: rock_paper_scissors

# Run the executable
run: rock_paper_scissors
	./rock_paper_scissors

# Rule to build the executable
rock_paper_scissors: rockpaperscissors.o detwinner.o
	gcc -g -o $@ $^

# Rule to compile rockpaperscissors.c into an object file
rockpaperscissors.o: rockpaperscissors.c game.h
	gcc -g -c rockpaperscissors.c

# Rule to compile detwinner.c into an object file
detwinner.o: detwinner.c game.h
	gcc -g -c detwinner.c

# Clean up object files and the executable
clean:
	rm -f *.o rock_paper_scissors