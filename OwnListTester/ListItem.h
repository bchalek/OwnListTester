#pragma once
class ListItem
{
public:
	void* Object;
	ListItem* NextItem;

	ListItem(void);
	ListItem(void* object);
	~ListItem(void);
};

