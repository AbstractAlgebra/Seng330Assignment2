#include "Item.h"

Item::Item(const std::string& description, bool isKey)
	:description(description)
	,isKey(isKey)
{
}


bool Item::getIsKey() const
{
	return isKey;
}

const std::string& Item::getDescription() const
{
	return description;
}



bool operator==(const Item& i1, const Item& i2)
{
	return i1.getDescription() == i2.getDescription();
}
