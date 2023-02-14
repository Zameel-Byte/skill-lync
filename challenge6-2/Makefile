CC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJS = main.o addition.o subtraction.o multiplication.o division.o

calculator: $(OBJS)
    $(CC) $(CFLAGS) -o calculator $(OBJS)

main.o: main.c addition.h subtraction.h multiplication.h division.h
    $(CC) $(CFLAGS) -c main.c

addition.o: addition.c addition.h
    $(CC) $(CFLAGS) -c addition.c

subtraction.o: subtraction.c subtraction.h
    $(CC) $(CFLAGS) -c subtraction.c

multiplication.o: multiplication.c multiplication.h
    $(CC) $(CFLAGS) -c multiplication.c

division.o: division.c division.h
    $(CC) $(CFLAGS) -c division.c

clean:
    rm -f *.o calculator
