/* GameObject.h ::: Luke Harper */

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "soundclass.h"
#include "gamemodel.h"
#include "arraylist.h"

class GameObject
{
	public:
		GameObject();
		GameObject(float, float, float, GameModel* m=0);
		~GameObject();
		virtual void giveSoundObject(SoundClass*);
		virtual bool isLit();
		virtual bool isWinTile();
		virtual void setWinTile();
		virtual bool doAction();
		virtual bool getRenderValue();
		virtual void setRenderValue(bool);
		virtual int getSourceX();
		virtual int getSourceY();
		virtual float getLocationX();
		virtual float getLocationY();
		virtual float getLocationZ();
		virtual bool getStatus();
		virtual void toggleLight(bool);
		virtual void translate(float, float, float);
		/************
		*	Function:	getLocation
		*	in:			x and z locations
		*	Purpose:	To determine if the location is what your looking for.
		*/
		bool getLocation(int, int);
		GameModel* getModel();
		virtual ArrayList<GameModel> GetGameModels();

	protected:
		void initialize();
		void shutdown();

		//whether or not the end of the level.
		bool winTile;

		SoundClass* sound;

		GameModel* myModel;
		float xLocation;
		float yLocation;
		float zLocation;
};



#endif