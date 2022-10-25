/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nicky <nicky@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/25 15:20:38 by nicky         #+#    #+#                 */
/*   Updated: 2022/10/03 12:00:27 by nicky         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character;

class Character: public ICharacter
{
	private:

		Character();
		std::string _name;
		AMateria* _inventory[4];
		int _invent_count;
		int _idx;

	public:
		Character(std::string const &name);
		Character(Character const &other);
		virtual ~Character();
		Character &operator=(Character const &rhs);
		std::string const & getName() const;
		void equip(AMateria* materia);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif /* CHARACTER_HPP */
