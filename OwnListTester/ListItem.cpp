#include "ListItem.h"


ListItem::ListItem(void)
{
	Object=nullptr;
	NextItem=nullptr;
}

ListItem::ListItem(void* object)
{
	Object=object;
	NextItem =nullptr;
}

ListItem::~ListItem(void)
{
}
