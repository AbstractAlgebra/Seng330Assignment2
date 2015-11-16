#include "Player.h"

/*! Player constructor takes in a name*/
Player::Player(const std::string& name)
	:name(name)
{	
	this->inventory = std::vector<Item>();
}

/*! Pass in an item to be added to the player's inventory*/
void Player::addItemToPlayerInventory(const Item& item){
	inventory.push_back(item);
}

/*! Pass in an item to be removed from a player's inventory*/
void Player::removeItemFromPlayerInventory(const Item& item)
{
	std::remove(inventory.begin(), inventory.end(), item);
}

/*! Returns the name of the player specified*/
const std::string& Player::getName() const{
	return this->name;
}