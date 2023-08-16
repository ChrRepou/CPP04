#ifndef CAT_H_
#define CAT_H_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *catBrain;
    public:
        Cat( void ); //constructor
		~Cat( void ); //destructor
		Cat(const Cat& obj); //copy constructor
		Cat& operator=(const Cat& obj); //copy assignment operator overload

        void makeSound( void ) const;
		void setIdea(std::string _idea, unsigned int index);
		std::string getIdea( unsigned int index );
};

#endif