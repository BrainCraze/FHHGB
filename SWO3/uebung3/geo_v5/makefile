PROGRAM = geo

ARGUMENTS = 

CC = gcc
CFLAGS = -pedantic -Wall -Wextra -std=c11 -ggdb3

LD = gcc
LDFLAGS = -lm

CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)


# first rule is default 
all: depend $(PROGRAM) clean

$(PROGRAM): $(OFILES)
	$(LD) -o $@ $(OFILES) $(LDFLAGS)

.PHONY: all allclean depend clean #never try to build a file named all allclean or clean

allclean:
	rm -f $(OFILES) $(PROGRAM) $(DEPENDFILE)

clean: 
	rm -f $(OFILES) $(DEPENDFILE)

run:
	./$(PROGRAM) $(ARGUMENTS)

debug:
	gdb $(PROGRAM) $(ARGUMENTS)

DEPENDFILE = .depend

depend:
	$(CC) $(CFLAGS) -MM $(CFILES) > $(DEPENDFILE)


-include $(DEPENDFILE)

