#include "List.h"


List::List(void)
{
	FirstItem = nullptr;
	Count=0;
}

List::List(void* object)
{
	FirstItem = new ListItem(object);
	Count=1;
}

List::~List(void)
{
	ListItem* LastItem = FirstItem;
	while (LastItem !=nullptr)
	{
		ListItem* toRemove = LastItem;
		LastItem = LastItem->NextItem;
		toRemove->~ListItem();
	}
}

void List::Add(void* object)
{
	if(FirstItem !=nullptr)
	{
		ListItem* LastItem = FirstItem;
		while (LastItem !=nullptr && LastItem->NextItem != nullptr)
		{
			LastItem = LastItem->NextItem;
		}
		LastItem->NextItem=new ListItem(object);
		Count++;
	}
	else
	{
		FirstItem =new ListItem(object);
		Count++;
	}
}

void List::Remove(void* object)
{
	if(FirstItem !=nullptr && FirstItem->Object!=object)
	{
		ListItem* LastItem = FirstItem;
		while (LastItem !=nullptr && LastItem->NextItem!=nullptr  && LastItem->NextItem->Object != object)
		{
			LastItem = LastItem->NextItem;
		}
		ListItem* toRemove = LastItem->NextItem;

		if(toRemove!=nullptr)
		{
			LastItem->NextItem=toRemove->NextItem;
			toRemove->~ListItem();
			Count--;
		}
	}
	else
	{
		ListItem* toRemove = FirstItem;

		if(toRemove!=nullptr)
		{
			FirstItem =toRemove->NextItem;
			toRemove->~ListItem();
			Count--;
		}
	}
}

void* List::FirstOrDefault()
{
	if(FirstItem!=nullptr)
		return FirstItem->Object;
	return nullptr;
}

void* List::LastOrDefault()
{
	ListItem* LastItem = FirstItem;
	while (LastItem !=nullptr && LastItem->NextItem != nullptr)
	{
		LastItem = LastItem->NextItem;
	}
	if(LastItem !=nullptr)
		return LastItem->Object;
	return nullptr;
}

bool List::Any()
{
	return Count != 0;
}
