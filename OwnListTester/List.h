#include "ListItem.h";
#pragma once
class List
{
public:

	ListItem* FirstItem;
	int Count;
	
	List(void);
	List(void* object);

	~List(void);

	void Add(void* object);
	void Remove(void* object);
	void* FirstOrDefault();
	void* LastOrDefault();
	bool Any();
};

