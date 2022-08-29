#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		~MateriaSource();

		void learnMateria (AMateria *);
		AMateria* createMateria (std::string const &type);

	private :
		AMateria *storage[4];
};

#endif