CC = gcc
CFLAGS = -I ../headers

COMMON = ../headers/UserInput.c

PROGRAMS = BubbleSort InsertionSort SelectionSort MergeSort
all: $(PROGRAMS)

%: %.c $(COMMON)
	$(CC) $(CFLAGS) $< $(COMMON) -o $@

clean:
	rm -f $(PROGRAMS)
