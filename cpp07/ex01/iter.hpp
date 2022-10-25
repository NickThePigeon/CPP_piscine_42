#ifndef ITER_HPP
# define ITER_HPP

template < typename T >
void	iter(T *adress, int length, void (*func)(T&))
{
	for (int i = 0; i < length; i++) {
		func(adress[i]);
	}
}

#endif /* ITER_HPP */
