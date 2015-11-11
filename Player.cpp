#include "Player.h"
Player::Player(const std::string& name)
	:name(name)
{	
	this->inventory = std::vector<Item>();
}

void Player::addItemToPlayerInventory(const Item& item){
	inventory.push_back(item);
}

void Player::removeItemFromPlayerInventory(const Item& item)
{
	std::remove(inventory.begin(), inventory.end(), item);
}

std::string Player::getName(){
	return this->name;
}