#include "Item.hpp"

Item::Item()
{
	name = "item";
	description = "unknown";
	this->name = name;
	this->description = description;
}


Item::Item(const std::string& name, const std::string& desc)
{

	this->name = name;
	this->description = desc;
}


std::string Item::GetName()
{
	return name;
}

void Item::Interact()
{
	std::cout << "you interacted with the " << name << std::endl;
	std::cout << description;

}
