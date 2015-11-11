#ifndef ITEM_INCLUDE
#define ITEM_INCLUDE

#include <string>
class Item{
public:
	Item(std::string description, bool isKey);
	bool getIsKey() const;
	std::string getDescription() const;


private:
	std::string description;
	bool isKey;

};	

bool Item::getIsKey() const{
	return this->isKey;
}

std::string Item::getDescription() const{
	return this->description;

}

bool operator==(Item i1, Item i2){
	return i1.getDescription()==i2.getDescription();
}

#endif