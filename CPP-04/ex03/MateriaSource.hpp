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

		MateriaSource &operator= (const MateriaSource &);

	private :
		AMateria *storage[2];
};

#endif