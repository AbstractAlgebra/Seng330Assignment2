#include <string>
#include <vector>

class Room{
public:
	Room(std::string description);

	void removeFromRoomInventory(Item item);
	void addItemToRoomInventory(Item item);
	std::string getDescription() const;


private:
	std::vector<Item> inventory;
	std::string description;

};



