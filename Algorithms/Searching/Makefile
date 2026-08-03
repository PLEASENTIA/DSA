CC = gcc
CFLAGS = -I ../headers

COMMON = ../headers/UserInput.c

PROGRAMS = LinearSearch BinarySearch 
all: $(PROGRAMS)

%: %.c $(COMMON)
	$(CC) $(CFLAGS) $< $(COMMON) -o $@

clean:
	rm -f $(PROGRAMS)
