#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Item.hpp"
#include "Room.hpp"

class Character {
private:
	std::string name;
	int health = 100;
	std::vector<Item> inventory;
public:
	Character(const std::string& name, int health);
	void TakeDamage(int damage);
	int getHealth();
	void setHealth(int health);


};
class Player : public Character {
private:
	Room* location;
public:
	Player(const std::string& name, int health);
	Room* GetLocation();   //getter for  player location
	void SetLocation(Room* locate);     //setter for player location
};

/*
// Example usage:
Player player1("Alice", 100);
player1.SetLocation(&startRoom); // Set the player's starting room

*/