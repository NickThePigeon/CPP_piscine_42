#include "Data.hpp"
#include "Serialize.hpp"

int		main()
{
	uintptr_t ptr;
	uintptr_t second_ptr;
	Data *data;
	Data *second_data;

	data = new Data();
	ptr = serialize(data);
	second_data = deserialize(ptr);
	std::cout << "Pointer value: " << std::hex << ptr << std::endl;
	std::cout << "Data value: " << std::hex << data << std::endl;
	std::cout << "Second data value: " << std::hex << second_data << std::endl;
	second_data->printMembers();
	std::cout << "Second_Pointer before serialize value: " << std::hex << second_ptr << std::endl;
	second_ptr = serialize(second_data);
	std::cout << "Second_Pointer after serialize value: " << std::hex << second_ptr << std::endl;
	delete data;
	return (0);
}