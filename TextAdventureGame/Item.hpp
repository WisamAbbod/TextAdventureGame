#pragma once

#include <iostream>
#include <string>
class Item {
private:
	std::string name;
	std::string description;
public:
	Item(const std::string& name, const std::string& desc);
	void Interact();
	std::string GetName();
};

// Example usage:
Item key("Key", "A shiny key that looks important.");
