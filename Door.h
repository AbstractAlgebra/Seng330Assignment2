#ifndef DOOR_INCLUDE
#define DOOR_INCLUDE

class Door
{
public:
	Door();
	bool isLocked();
	void unlock();


private:
	bool locked;

};

#endif