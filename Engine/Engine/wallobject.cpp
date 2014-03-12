/**************************
*	Project:	Snatch
*	Name:		Luke Harper
*	Program:	wallObject
*	Date:		feb. 22/14
**************************/

#include "wallobject.h"

WallObject::WallObject()
{
}

WallObject::WallObject(WALL_TYPE t, float x, float z, WCHAR* textures[]):GameObject((new CubeTexturedModel(10.0f, 15.0f, 10.0f, textures)), x, 2.0f,z)
{
	myType = t;
}