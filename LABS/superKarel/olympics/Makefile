# variables
CC = gcc
CFLAGS = -std=c11 -Wall -Werror
LDLIBS = -lsuperkarel -lcurses

# targets
%: %.c
	$(CC) $(CFLAGS) $< $(LDLIBS) -o $@

