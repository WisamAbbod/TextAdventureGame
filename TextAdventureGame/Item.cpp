#include "Item.hpp"

Item::Item(const std::string& name, const std::string& desc)
{
	this->name = name;
	this->description = desc;
}


std::string Item::GetName()
{
	return name;
}

void Item::Interact(const std::string& inter)
{
	
	std::cout << inter;

}
