CC = gcc
SRC = src/main.c
TARGET = bin/main

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET)
