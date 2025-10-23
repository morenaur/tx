CC = gcc
FLAGS = -Wall -Wextra -std=c11 -Iinclude
SRC = $(wildcard src/*.c)
OUT = tx

$(OUT): $(SRC)
	$(CC) $(FLAGS) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT)

run: $(OUT)
	./$(OUT)
