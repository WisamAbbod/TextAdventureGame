#pragma once


#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Item.hpp"

class Room {
private:
	std::string description;
	std::map<std::string, Room*> exits;
	std::vector<Item> items;
public:
	Room(const std::string& desc);
	void AddItem(const Item& item);
	void RemoveItem(const Item& item);
	void AddExit(const std::string compass);
};

// Example usage:
Room startRoom("You are in a dimly lit room.");
