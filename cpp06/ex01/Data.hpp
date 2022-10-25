#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
	
		int one;
		int two;
		int three;

	public:

		Data();
		Data(Data const &other);
		~Data();
		Data &operator=(Data const &rhs);
		void	printMembers();
};

Data* deserialize(uintptr_t raw);

#endif /* DATA_HPP */
