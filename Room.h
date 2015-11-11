#ifndef ROOM_INCLUDE
#define ROOM_INCLUDE

#include "Item.h"
#include <string>
#include <vector>
#include "Door.h"

class Room
{
public:
	Room(const std::string& description);

	void addDoorToRoom(Door door);

	void removeFromRoomInventory(const Item& item);
	
	void addItemToRoomInventory(const Item& item);
	
	const std::string& getDescription() const;


private:
	std::vector<Item> inventory;
	std::vector<Door> doors;
	std::string description;
};


#endif