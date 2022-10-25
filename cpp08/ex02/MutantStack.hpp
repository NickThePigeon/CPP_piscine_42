#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <stack>
# include <algorithm>
# include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
	private:

	public:
		MutantStack<T>() {};
		MutantStack<T>(MutantStack<T> const &other) {this->c = other.c;};
		~MutantStack<T>() {};
		MutantStack<T> &operator=(MutantStack<T> const &rhs) {this->c = rhs.c; return (*this);}
		typedef typename MutantStack<T>::container_type::iterator iterator;
		iterator begin() { return std::begin(this->c); }
    	iterator end() { return std::end(this->c); }
};

#endif /* MUTANTSTACK_HPP */
