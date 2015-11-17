#include "Door.h"

/*! Door constructor takes no argument. Doors start off locked*/
Door::Door(){
	this->locked = true;
}

/*! This method unlocks a door*/
void Door::unlock(){
	this->locked = false;
}
/*! This method will return whether or not a door is locked*/
bool Door::isLocked(){
	return locked;
}

