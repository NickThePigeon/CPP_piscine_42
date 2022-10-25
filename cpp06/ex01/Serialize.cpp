#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t retPtr;
	
	retPtr = reinterpret_cast<uintptr_t>(ptr);
	return (retPtr);
}
