#include "Item.h"


Item::Item(void)
{
	Object=nullptr;
	NextItem=nullptr;
}

Item::Item(void* object)
{
	Object=object;
	NextItem =nullptr;
}

Item::~Item(void)
{
}
