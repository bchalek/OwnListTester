#include "List.h"


List::List(void)
{
	FirstItem = nullptr;
	Count=0;
}

List::List(void* object)
{
	FirstItem = new Item(object);
	Count=1;
}

List::~List(void)
{
	Item* LastItem = FirstItem;
	while (LastItem !=nullptr)
	{
		Item* toRemove = LastItem;
		LastItem = LastItem->NextItem;
		toRemove->~Item();
	}
}

void List::Add(void* object)
{
	if(FirstItem !=nullptr)
	{
		Item* LastItem = FirstItem;
		while (LastItem !=nullptr && LastItem->NextItem != nullptr)
		{
			LastItem = LastItem->NextItem;
		}
		LastItem->NextItem=new Item(object);
		Count++;
	}
	else
	{
		FirstItem =new Item(object);
		Count++;
	}
}

void List::Remove(void* object)
{
	if(FirstItem !=nullptr && FirstItem->Object!=object)
	{
		Item* LastItem = FirstItem;
		while (LastItem !=nullptr && LastItem->NextItem!=nullptr  && LastItem->NextItem->Object != object)
		{
			LastItem = LastItem->NextItem;
		}
		Item* toRemove = LastItem->NextItem;

		if(toRemove!=nullptr)
		{
			LastItem->NextItem=toRemove->NextItem;
			toRemove->~Item();
			Count--;
		}
	}
	else
	{
		Item* toRemove = FirstItem;

		if(toRemove!=nullptr)
		{
			FirstItem =toRemove->NextItem;
			toRemove->~Item();
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
	Item* LastItem = FirstItem;
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
