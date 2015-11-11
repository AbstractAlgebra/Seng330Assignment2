#include "Door.h"

Door::Door(){
	this->locked = true;
}

void Door::unlock(){
	this->locked = false;
}

bool Door::isLocked(){
	return locked;
}