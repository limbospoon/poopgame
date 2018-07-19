#pragma once

#include "Graphics.h"
#include "Dude.h"

class Poo
{
public:
	void Init( int in_x,int in_y,float in_vx,float in_vy );
	void Update();
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	int x;
	int y;
	float vx;
	float vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	bool initialized = false;
};