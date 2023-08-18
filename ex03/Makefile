CC = c++
CFLAGS  = -g -Wall -Wextra -Werror -std=c++98

TARGET = main
SOURCES = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp MateriaSource.cpp
OBJ = main.o AMateria.o Character.o Cure.o Ice.o ICharacter.o IMateriaSource.o MateriaSource.o
HEADER_F = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

all: exec

exec: $(OBJ)
	$(CC) $(CFLAGS) -o main $(OBJ)

$(TARGET).o: $(TARGET).cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c $(TARGET).cpp

AMateria.o: AMateria.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c AMateria.cpp

Character.o: Character.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c Character.cpp

Cure.o: Cure.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c Cure.cpp

Ice.o: Ice.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c Ice.cpp

ICharacter.o: ICharacter.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c ICharacter.cpp

IMateriaSource.o: IMateriaSource.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c IMateriaSource.cpp

MateriaSource.o: MateriaSource.cpp $(HEADER_F)
	$(CC) $(CFLAGS) -c MateriaSource.cpp

clean:
	$(RM) main $(OBJ)

fclean:
	make clean

re: fclean all