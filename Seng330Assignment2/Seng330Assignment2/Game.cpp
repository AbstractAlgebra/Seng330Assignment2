#include <iostream>
#include <string>
#include <vector>

#include "Item.h"
#include "Room.h"
#include "Player.h"
#include "Door.h"
#include "game.pb.h"


int main()
{
    game::Player p1;
	//setup of room
	Room room1("room with a key on the floor and a locked door on the wall");

	Item key1("Key",true);

	Door door1;

	room1.addDoorToRoom(door1);


	//Here we ask the player for their name and construct a player with that name
	std::cout << "What is your name? " << std::endl;

	std::string inputName;

	std::cin >> inputName;
	std::cout << std::endl;

    p1.set_name(inputName);
    
    Player* player = new Player(p1.name());

	//declaration of command string 
	std::string command;

	std::getline(std::cin,command);

	//Game loop
	while(true){
		std::cout << "You are in a " << room1.getDescription() << std::endl;
		std::cout << "What would you like to do?" << std::endl;	
	
		std::getline (std::cin, command);

		//handles command to pick up the key
		if (((command == "pick up key") || (command == "take key") || (command == "take key") || (command == "grab key")) && room1.getDescription()=="room with a key on the floor and a locked door on the wall"){
			room1.setDescription("room with a locked door on the wall");
			std::cout << std::endl;
			player->addItemToPlayerInventory(key1);
			
			continue;	
		}

		//handles command to unlock door
		else if (((command == "unlock door") || (command == "use key on door") || (command == "use key with door") || (command == "key door")) && room1.getDescription()=="room with a locked door on the wall"){
			door1.unlock();
			player->removeItemFromPlayerInventory(key1);
			room1.setDescription("room with an unlocked door on the wall");
			std::cout << std::endl;
			continue;
		}

		else if (((command == "open door") || (command == "go through door") || (command == "enter door")) && room1.getDescription() == "room with an unlocked door on the wall"){
			break;
		}



		else {
			std::cout << std::endl << "INVALID COMMAND" << std::endl << std::endl;
		}
	}

	std::cout << std::endl << "Congratulations " << player->getName() << " you escaped the room!" << std::endl;

	return 0;
}