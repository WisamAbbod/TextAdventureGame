#pragma once

#include <iostream>
#include <string>
class Item {
private:
	std::string name;
	std::string description;
public:
	Item();
	Item(const std::string& name, const std::string& desc);
	void Interact();
	std::string GetName();
	std::string GetDescription() const { return description; }
};

// Example usage:
Item key("Key", "A shiny key that looks important.");
