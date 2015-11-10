/*#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "Room.h"
#include "Item.h"
*/

#include "Room.h"
#include "Item.h"
#include <string>
#include <vector>

Room::Room(std::string description){
		this->description = description;
}

void Room::removeFromRoomInventory(Item item){
	for(int i = 0 ; i < inventory.size(); i++){
		if (inventory[i] == item){
			inventory.erase(inventory.begin()+i);
		}
	}
}

std::string Room::getDescription() const{
	return this->description;
}

//#endif 
// ROOM_H 