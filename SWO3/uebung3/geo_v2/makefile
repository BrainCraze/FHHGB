CC = gcc
CFLAGS = -pedantic -Wall -Wextra -std=c11 -ggdb3

LD = gcc
LDFLAGS = -lm

OFILES = main.o geo.o weight.o
PROGRAM = geo

%.o: %.c #.o file hängt von cfile mit gleichem namen ab

	$(CC) $(CFLAGS) -c $<
# -c compile only (no linking)
# $< name of the first prerequisite

# first rule is default 
all: $(PROGRAM)

$(PROGRAM): $(OFILES)
	$(LD) -o $@ $(OFILES) $(LDFLAGS)

.PHONY: all allclean clean #never try to build a file named all allclean or clean

allclean:
	rm -f $(OFILES) $(PROGRAM)

clean: 
	rm -f $(OFILES)



#dependencies
weight.o: weight.c weight.h geo.h
geo.o: geo.c geo.h
main.o: main.c geo.h weight.h

