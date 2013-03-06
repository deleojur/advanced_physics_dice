/*
 * The dice demo.
 *
 * Part of the Cyclone physics system.
 *
 * Copyright (c) Icosagon 2003. All Rights Reserved.
 *
 * This software is distributed under licence. Use of this software
 * implies agreement with all terms and conditions of the accompanying
 * software licence.
 */

#include <iostream>
#include <gl/glut.h>
#include <cyclone/cyclone.h>
#include "../app.h"
#include "../timing.h"

#include <stdio.h>
#include <cassert>

#define VECTOR			cyclone :: Vector3
#define RIGID_BODY		cyclone :: RigidBody

/**
 * The main demo class definition.
 */
class GameDie : public RigidBodyApplication
{   
    /**
     * Updates particle masses to take into account the mass
     * that's crossing the bridge.
     */
    void updateAdditionalMass();
	
	RIGID_BODY		*_tableTop;
	RIGID_BODY		*_diceSides;
	
protected:
	int _numberOfSides;	//D6, D8, etc.

public:
    /** Creates a new demo object. */
    GameDie( );
    virtual ~GameDie( );

    /** Returns the window title for the demo. */
    virtual const char* getTitle( );

    /** Display the particles. */
    virtual void display( );

    /** Update the particle positions. */
    virtual void update( );

    /** Handle a key press. */
    virtual void key( unsigned char key );

	virtual void mouse( int button, int state, int x, int y );

	virtual void mouseDrag( int x, int y );

	virtual void generateContacts( );

	virtual void updateObjects( cyclone :: real duration );

	virtual void reset( );
};

// Method definitions
GameDie :: GameDie( ) : RigidBodyApplication( )
{
	
}


GameDie :: ~GameDie( )
{
    
}

void GameDie :: updateAdditionalMass( )
{
   
}

void GameDie :: display( )
{
    RigidBodyApplication :: display( );
}

void GameDie :: update( )
{
    RigidBodyApplication :: update( );

    updateAdditionalMass();
}

const char* GameDie :: getTitle( )
{
    return "Jur's dice example";
}

void GameDie :: key( unsigned char key )
{
	
}

void GameDie :: mouse( int button, int state, int x, int y )
{

}

void GameDie :: mouseDrag( int x, int y )
{
	
}

void GameDie :: generateContacts( )
{

}

void GameDie :: updateObjects( cyclone :: real duration )
{

}

void GameDie :: reset( )
{

}

/**
 * Called by the common demo framework to create an application
 * object (with new) and return a pointer.
 */
Application* getApplication( )
{
    return new GameDie( );
}