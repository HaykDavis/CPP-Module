#include <iostream>

struct Data {
	int index;
	std::string str;
};

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(){
	Data *strukt = new Data();
	Data *tmpStruct;
	uintptr_t tmp;

	strukt->index = 32;
	strukt->str = "Proverka";

	std::cout << "ADRESS struct " << strukt << "\n";
	std::cout << "tmpStruct index " << strukt->index << "\n";
	std::cout << "tmpStruct str " << strukt->str << "\n";

	std::cout << "---------- serialize ----------\n";
	tmp = serialize(strukt);
	std::cout << "ADRESS tmp " << &tmp << "\n";
	std::cout << "data tmp " << tmp << "\n";

	std::cout << "---------- deserialize ----------\n";
	tmpStruct = deserialize(tmp);
	std::cout << "ADRESS struct " << tmpStruct << "\n";
	std::cout << "tmpStruct index " << tmpStruct->index << "\n";
	std::cout << "tmpStruct str " << tmpStruct->str << "\n";

	delete strukt;
	return (0);
}