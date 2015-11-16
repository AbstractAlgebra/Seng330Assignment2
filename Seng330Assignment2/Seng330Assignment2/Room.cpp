#include "Item.h"	
#include "Room.h"
#include "Door.h"

#include <algorithm>
#include <string>
#include <vector>


/*! Construct a room by passing in the description of the room*/
Room::Room(const std::string& description)
	:description(description)
{
	this->inventory = std::vector<Item>();
	this->doors = std::vector<Door>();
}

/*! This method adds a door to the room */
void Room::addDoorToRoom(Door door){
	doors.push_back(door);

}

/*! Removes an item passed in from the room inventory*/
void Room::removeFromRoomInventory(const Item& item)
{
	std::remove(inventory.begin(), inventory.end(), item);
}

/*! Adds a passed in item to the room's inventory */
void Room::addItemToRoomInventory(const Item& item){
	inventory.push_back(item);
}

/*! Returns the description of the room specified */
const std::string& Room::getDescription() const
{
	return description;
}
/*! Sets the description of the room specified*/
void Room::setDescription(const std::string& newDescription){
	this->description = newDescription;
}
