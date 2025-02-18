# Definícia prekladača a parametrov
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main

# Kompilácia
$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

# Spustenie
run: $(TARGET)
	./$(TARGET)

# Vyčistenie kompilovaných súborov
clean:
	rm -f $(TARGET)
