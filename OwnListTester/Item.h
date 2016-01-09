#pragma once
class Item
{
public:
	void* Object;
	Item* NextItem;

	Item(void);
	Item(void* object);
	~Item(void);
};

