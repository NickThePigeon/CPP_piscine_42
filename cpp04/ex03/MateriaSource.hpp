/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:24:23 by nicky         #+#    #+#                 */
/*   Updated: 2022/08/25 15:24:24 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

		AMateria *_sources[4];
		int	_source_count;

	public:

		MateriaSource();
		MateriaSource(AMateria &other);
		~MateriaSource();
		MateriaSource &operator=(MateriaSource const &rhs);
		virtual void learnMateria(AMateria *materia);
		virtual AMateria* createMateria(std::string const & type);
};

#endif /* MATERIASOURCE_HPP */