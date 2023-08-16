CC = c++
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

TARGET = main
SOURCES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJ = main.o Animal.o Cat.o Dog.o Brain.o
HEADER_F = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c $(TARGET).cpp

Animal.o: Animal.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c Animal.cpp

Cat.o: Cat.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c Cat.cpp

Dog.o: Dog.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c Dog.cpp

Brain.o: Brain.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c Brain.cpp

WrongAnimal.o: WrongAnimal.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c WrongAnimal.cpp

WrongCat.o: WrongCat.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c WrongCat.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all