CC = gcc
CFLAGS = -pedantic -Wall -Wextra -std=c11 -ggdb3

LD = gcc
LDFLAGS = -lm

.c.o: #suffix rle (old format)
	$(CC) $(CFLAGS) -c $<
# -c compile only (no linking)
# $< name of the first prerequisite

# first rule is default 
geo: main.o geo.o weight.o
	$(LD) -o $@ main.o geo.o weight.o

#dependencies
weight.o: weight.c weight.h geo.h
geo.o: geo.c geo.h
main.o: main.c geo.h weight.h
