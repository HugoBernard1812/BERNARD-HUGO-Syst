CC 	= gcc
OBJS 	= exo1.o
CFLAGS 	= -c -Wall -ansi -pedantic -g
LDFLAGS =
PGM 	= exo1

all: $(PGM)

$(PGM): $(OBJS)
	$(CC) -o $(PGM) $(OBJS) $(LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) $<

clean:
	rm -f $(PGM)
	rm -f $(OBJS)
	rm -f *~
