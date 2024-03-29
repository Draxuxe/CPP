#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure ();
		~Cure ();

		Cure *clone () const;
		void use(ICharacter &target);

		Cure &operator= (const Cure &);

	private:
		std::string _type;
};

#endif