#include "Item.h"

/*! Item constructor, takes in a string for description and a boolean that determines whether or not the item is a key*/
Item::Item(const std::string& description, bool isKey)
	:description(description)
	,isKey(isKey)
{
}

/*! Returns whether the specified item is a key*/
bool Item::getIsKey() const
{
	return isKey;
}

/*! Returns the description of the specified item*/
const std::string& Item::getDescription() const
{
	return description;
}


/*! Items can be compared with the == operator*/
bool operator==(const Item& i1, const Item& i2)
{
	return i1.getDescription() == i2.getDescription();
}
