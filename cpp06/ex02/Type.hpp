#ifndef TYPE_HPP
# define TYPE_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif /* TYPE_HPP */