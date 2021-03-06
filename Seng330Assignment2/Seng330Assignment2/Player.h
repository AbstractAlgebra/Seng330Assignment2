#ifndef PLAYER_INCLUDE
#define PLAYER_INCLUDE

#include "Item.h"
#include <vector>

class Player{
public:
	Player(const std::string& name);
	void addItemToPlayerInventory(const Item& item);
	void removeItemFromPlayerInventory(const Item& item);
	const std::string& getName() const;


private:
	std::string name;
	std::vector<Item> inventory;


};

#endif // PLAYER_INCLUDE