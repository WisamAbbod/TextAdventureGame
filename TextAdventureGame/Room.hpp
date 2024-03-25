#pragma once


#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Item.hpp"
using namespace std;


class Room {
private:
	std::string description;
	std::map<std::string, Room*> exits;
	std::vector<Item> items;

public:
	Room(const std::string& desc);
	std::map<std::string, Room*> getExits() const { return exits; }
	void AddItem(const Item& item);
	void RemoveItem(const Item& item);
	void AddExit(const std::string& compass,Room* Room);
	std::vector<Item> GetItems() const { return items; }
	std::string GetDescription() const { return description; }
	Room* GetExit(std::string direct);
	string GetOppositeDirection(const string& direction, string& opposite);

	};

/*
// Example usage:
Room startRoom("You are in a dimly lit room.");
*/