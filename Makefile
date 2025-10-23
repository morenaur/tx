CC = gcc
FLAGS = -Wall -Wextra -std=c11 -Iinclude
SRC = $(wildcard src/*.c)
OUT = tx

$(OUT): $(SRC)
	$(CC) $(SRC) -o $(OUT) $(FLAGS)
