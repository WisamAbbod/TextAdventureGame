#include "Character.hpp"

using namespace std;
Character::Character(const std::string& name, int health)
{
	this->name = name;
	this->health = health;
}

int Character::getHealth()
{
	return health;
}

void Character::setHealth(int health)
{
	this->health = health;

}


void Character::TakeDamage(int damage)
{
	health = health - damage;

}