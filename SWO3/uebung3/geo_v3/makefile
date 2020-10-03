CC = gcc
CFLAGS = -pedantic -Wall -Wextra -std=c11 -ggdb3

LD = gcc
LDFLAGS = -lm

CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)
PROGRAM = geo


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

