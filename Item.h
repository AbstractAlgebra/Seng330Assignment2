#ifndef ITEM_INCLUDE
#define ITEM_INCLUDE

#include <string>

class Item
{
public:
	Item(const std::string& description, bool isKey);

	
	bool getIsKey() const;

	const std::string& getDescription() const;


private:
	std::string description;
	bool isKey;

};	

bool operator==(const Item& i1, const Item& i2);

#endif