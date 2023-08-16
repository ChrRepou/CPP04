CC = c++
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

TARGET = main
SOURCES = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = main.o Animal.o Cat.o Dog.o WrongAnimal.o WrongCat.o

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c $(TARGET).cpp

Animal.o: Animal.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c Animal.cpp

Cat.o: Cat.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c Cat.cpp

Dog.o: Dog.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c Dog.cpp

WrongAnimal.o: WrongAnimal.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c WrongAnimal.cpp

WrongCat.o: WrongCat.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c WrongCat.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all