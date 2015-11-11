#include <iostream>
#include <string>
#include <vector>

#include "Item.h"
#include "Room.h"
#include "Player.h"
#include "Door.h"


int main()
{
	//setup of room
	Room room1("room with a key on the floor and a door on the wall");

	Item key1("Key",true);

	Door door1;

	room1.addDoorToRoom(door1);


	//Here we ask the player for their name and construct a player with that name
	std::cout << "What is your name? " << std::endl;

	std::string inputName;

	std::cin >> inputName;
	std::cout << std::endl;

	Player player(inputName);

	//Game loop
	while(true){
		std::cout << "You are in a " << room1.getDescription() << std::endl;
		std::cout << "What would you like to do?" << std::endl;
		std::string cmd;
		
		std::cin >> cmd;

		if(cmd == "pick" || cmd == "up" || cmd == "key"){
			break;

		}
		std::cout << std::endl;
	}

	return 0;
}