#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice ();
		Ice (const Ice &);
		~Ice ();

		Ice *clone () const;
		void use(ICharacter &target);

		Ice &operator= (const Ice &);

	private:
		std::string _type;
};

#endif