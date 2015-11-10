#include <iostream>
#include <string>
#include <vector>

#include "Item.h"
#include "Room.h"
#include "Player.h"
#include "Door.h"


int main(){
	Room* room1 = new Room("Room with a key on the floor");

	std::cout << room1->getDescription();

}