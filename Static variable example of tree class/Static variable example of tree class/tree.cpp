#include"tree.h"
int Tree::objectCounter = 0;

int Tree::getObjectCount()
{
	return objectCounter;
}

Tree::Tree()
{
	objectCounter++;
}
