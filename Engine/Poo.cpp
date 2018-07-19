#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init( float in_x,float in_y,float in_vx,float in_vy )
{
	assert( initialized == false );
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
	initialized = true;
}

void Poo::Update()
{
	assert( initialized == true );
	x += vx;
	y += vy;

	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
		vx = -vx;
	}
	else if( right >= float(Graphics::ScreenWidth) )
	{
		x = float(Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
		vy = -vy;
	}
	else if( bottom >= float(Graphics::ScreenHeight) )
	{
		y = float(Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

bool Poo::TestCollision( const Dude& dude ) const
{
	assert( initialized == true );
	const float duderight = dude.GetX() + dude.GetWidth();
	const float dudebottom = dude.GetY() + dude.GetHeight();
	const float pooright = x + width;
	const float poobottom = y + height;

	return
		duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom;
}

void Poo::Draw( Graphics& gfx ) const
{
	assert( initialized == true );
	const int cx_int = int(x);
	const int cy_int = int(y);

	gfx.PutPixel( 14 + cx_int,0 + cy_int,138,77,0 );
	gfx.PutPixel( 7 + cx_int,1 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,1 + cy_int,138,77,0 );
	gfx.PutPixel( 20 + cx_int,1 + cy_int,138,77,0 );
	gfx.PutPixel( 6 + cx_int,2 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,2 + cy_int,138,77,0 );
	gfx.PutPixel( 20 + cx_int,2 + cy_int,138,77,0 );
	gfx.PutPixel( 6 + cx_int,3 + cy_int,138,77,0 );
	gfx.PutPixel( 6 + cx_int,4 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,4 + cy_int,138,77,0 );
	gfx.PutPixel( 21 + cx_int,4 + cy_int,138,77,0 );
	gfx.PutPixel( 7 + cx_int,5 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,5 + cy_int,138,77,0 );
	gfx.PutPixel( 21 + cx_int,5 + cy_int,138,77,0 );
	gfx.PutPixel( 7 + cx_int,6 + cy_int,138,77,0 );
	gfx.PutPixel( 20 + cx_int,6 + cy_int,138,77,0 );
	gfx.PutPixel( 6 + cx_int,7 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,7 + cy_int,51,28,0 );
	gfx.PutPixel( 15 + cx_int,7 + cy_int,51,28,0 );
	gfx.PutPixel( 20 + cx_int,7 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,8 + cy_int,51,28,0 );
	gfx.PutPixel( 13 + cx_int,8 + cy_int,51,28,0 );
	gfx.PutPixel( 14 + cx_int,8 + cy_int,51,28,0 );
	gfx.PutPixel( 7 + cx_int,9 + cy_int,138,77,0 );
	gfx.PutPixel( 11 + cx_int,9 + cy_int,51,28,0 );
	gfx.PutPixel( 12 + cx_int,9 + cy_int,102,57,0 );
	gfx.PutPixel( 13 + cx_int,9 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,9 + cy_int,138,77,0 );
	gfx.PutPixel( 15 + cx_int,9 + cy_int,51,28,0 );
	gfx.PutPixel( 21 + cx_int,9 + cy_int,138,77,0 );
	gfx.PutPixel( 10 + cx_int,10 + cy_int,51,28,0 );
	gfx.PutPixel( 11 + cx_int,10 + cy_int,51,28,0 );
	gfx.PutPixel( 12 + cx_int,10 + cy_int,102,57,0 );
	gfx.PutPixel( 13 + cx_int,10 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,10 + cy_int,138,77,0 );
	gfx.PutPixel( 15 + cx_int,10 + cy_int,51,28,0 );
	gfx.PutPixel( 20 + cx_int,10 + cy_int,138,77,0 );
	gfx.PutPixel( 9 + cx_int,11 + cy_int,51,28,0 );
	gfx.PutPixel( 10 + cx_int,11 + cy_int,138,77,0 );
	gfx.PutPixel( 11 + cx_int,11 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,11 + cy_int,51,28,0 );
	gfx.PutPixel( 13 + cx_int,11 + cy_int,51,28,0 );
	gfx.PutPixel( 14 + cx_int,11 + cy_int,51,28,0 );
	gfx.PutPixel( 15 + cx_int,11 + cy_int,51,28,0 );
	gfx.PutPixel( 16 + cx_int,11 + cy_int,51,28,0 );
	gfx.PutPixel( 9 + cx_int,12 + cy_int,51,28,0 );
	gfx.PutPixel( 10 + cx_int,12 + cy_int,138,77,0 );
	gfx.PutPixel( 11 + cx_int,12 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,12 + cy_int,111,62,0 );
	gfx.PutPixel( 13 + cx_int,12 + cy_int,102,57,0 );
	gfx.PutPixel( 14 + cx_int,12 + cy_int,102,57,0 );
	gfx.PutPixel( 15 + cx_int,12 + cy_int,102,57,0 );
	gfx.PutPixel( 16 + cx_int,12 + cy_int,51,28,0 );
	gfx.PutPixel( 9 + cx_int,13 + cy_int,51,28,0 );
	gfx.PutPixel( 10 + cx_int,13 + cy_int,109,61,0 );
	gfx.PutPixel( 11 + cx_int,13 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,13 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,13 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,13 + cy_int,138,77,0 );
	gfx.PutPixel( 15 + cx_int,13 + cy_int,138,77,0 );
	gfx.PutPixel( 16 + cx_int,13 + cy_int,51,28,0 );
	gfx.PutPixel( 5 + cx_int,14 + cy_int,51,28,0 );
	gfx.PutPixel( 7 + cx_int,14 + cy_int,51,28,0 );
	gfx.PutPixel( 8 + cx_int,14 + cy_int,51,28,0 );
	gfx.PutPixel( 9 + cx_int,14 + cy_int,51,28,0 );
	gfx.PutPixel( 10 + cx_int,14 + cy_int,51,28,0 );
	gfx.PutPixel( 11 + cx_int,14 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,14 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,14 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,14 + cy_int,138,77,0 );
	gfx.PutPixel( 15 + cx_int,14 + cy_int,138,77,0 );
	gfx.PutPixel( 16 + cx_int,14 + cy_int,51,28,0 );
	gfx.PutPixel( 4 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 5 + cx_int,15 + cy_int,138,77,0 );
	gfx.PutPixel( 6 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 7 + cx_int,15 + cy_int,116,65,0 );
	gfx.PutPixel( 8 + cx_int,15 + cy_int,138,77,0 );
	gfx.PutPixel( 9 + cx_int,15 + cy_int,138,77,0 );
	gfx.PutPixel( 10 + cx_int,15 + cy_int,138,77,0 );
	gfx.PutPixel( 11 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 12 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 13 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 14 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 15 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 16 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 17 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 18 + cx_int,15 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,16 + cy_int,51,28,0 );
	gfx.PutPixel( 2 + cx_int,16 + cy_int,51,28,0 );
	gfx.PutPixel( 3 + cx_int,16 + cy_int,51,28,0 );
	gfx.PutPixel( 4 + cx_int,16 + cy_int,51,28,0 );
	gfx.PutPixel( 5 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 6 + cx_int,16 + cy_int,51,28,0 );
	gfx.PutPixel( 7 + cx_int,16 + cy_int,116,65,0 );
	gfx.PutPixel( 8 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 9 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 10 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 11 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,16 + cy_int,109,61,0 );
	gfx.PutPixel( 14 + cx_int,16 + cy_int,51,28,0 );
	gfx.PutPixel( 15 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 16 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 17 + cx_int,16 + cy_int,138,77,0 );
	gfx.PutPixel( 18 + cx_int,16 + cy_int,123,69,0 );
	gfx.PutPixel( 19 + cx_int,16 + cy_int,51,28,0 );
	gfx.PutPixel( 0 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,17 + cy_int,87,49,0 );
	gfx.PutPixel( 2 + cx_int,17 + cy_int,87,49,0 );
	gfx.PutPixel( 3 + cx_int,17 + cy_int,87,49,0 );
	gfx.PutPixel( 4 + cx_int,17 + cy_int,87,49,0 );
	gfx.PutPixel( 5 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 6 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 7 + cx_int,17 + cy_int,43,24,0 );
	gfx.PutPixel( 8 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 9 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 10 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 11 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 12 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 13 + cx_int,17 + cy_int,40,22,0 );
	gfx.PutPixel( 14 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 15 + cx_int,17 + cy_int,138,77,0 );
	gfx.PutPixel( 16 + cx_int,17 + cy_int,138,77,0 );
	gfx.PutPixel( 17 + cx_int,17 + cy_int,138,77,0 );
	gfx.PutPixel( 18 + cx_int,17 + cy_int,123,69,0 );
	gfx.PutPixel( 19 + cx_int,17 + cy_int,51,28,0 );
	gfx.PutPixel( 0 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,18 + cy_int,138,77,0 );
	gfx.PutPixel( 2 + cx_int,18 + cy_int,138,77,0 );
	gfx.PutPixel( 3 + cx_int,18 + cy_int,138,77,0 );
	gfx.PutPixel( 4 + cx_int,18 + cy_int,138,77,0 );
	gfx.PutPixel( 5 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 6 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 7 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 8 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 9 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 10 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 11 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 12 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 13 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 14 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 15 + cx_int,18 + cy_int,138,77,0 );
	gfx.PutPixel( 16 + cx_int,18 + cy_int,138,77,0 );
	gfx.PutPixel( 17 + cx_int,18 + cy_int,138,77,0 );
	gfx.PutPixel( 18 + cx_int,18 + cy_int,123,69,0 );
	gfx.PutPixel( 19 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 20 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 21 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 22 + cx_int,18 + cy_int,51,28,0 );
	gfx.PutPixel( 0 + cx_int,19 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 2 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 3 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 4 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 5 + cx_int,19 + cy_int,51,28,0 );
	gfx.PutPixel( 6 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 7 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 8 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 9 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 10 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 11 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 15 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 16 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 17 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 18 + cx_int,19 + cy_int,123,69,0 );
	gfx.PutPixel( 19 + cx_int,19 + cy_int,51,28,0 );
	gfx.PutPixel( 20 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 21 + cx_int,19 + cy_int,138,77,0 );
	gfx.PutPixel( 22 + cx_int,19 + cy_int,65,36,0 );
	gfx.PutPixel( 23 + cx_int,19 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,20 + cy_int,51,28,0 );
	gfx.PutPixel( 2 + cx_int,20 + cy_int,51,28,0 );
	gfx.PutPixel( 3 + cx_int,20 + cy_int,51,28,0 );
	gfx.PutPixel( 4 + cx_int,20 + cy_int,51,28,0 );
	gfx.PutPixel( 5 + cx_int,20 + cy_int,51,28,0 );
	gfx.PutPixel( 6 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 7 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 8 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 9 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 10 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 11 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 12 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 13 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 14 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 15 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 16 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 17 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 18 + cx_int,20 + cy_int,123,69,0 );
	gfx.PutPixel( 19 + cx_int,20 + cy_int,51,28,0 );
	gfx.PutPixel( 20 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 21 + cx_int,20 + cy_int,138,77,0 );
	gfx.PutPixel( 22 + cx_int,20 + cy_int,65,36,0 );
	gfx.PutPixel( 23 + cx_int,20 + cy_int,51,28,0 );
	gfx.PutPixel( 0 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,21 + cy_int,138,77,0 );
	gfx.PutPixel( 2 + cx_int,21 + cy_int,138,77,0 );
	gfx.PutPixel( 3 + cx_int,21 + cy_int,138,77,0 );
	gfx.PutPixel( 4 + cx_int,21 + cy_int,138,77,0 );
	gfx.PutPixel( 5 + cx_int,21 + cy_int,138,77,0 );
	gfx.PutPixel( 6 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 7 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 8 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 9 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 10 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 11 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 12 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 13 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 14 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 15 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 16 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 17 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 18 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 20 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 21 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 22 + cx_int,21 + cy_int,51,28,0 );
	gfx.PutPixel( 0 + cx_int,22 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,22 + cy_int,65,36,0 );
	gfx.PutPixel( 2 + cx_int,22 + cy_int,65,36,0 );
	gfx.PutPixel( 3 + cx_int,22 + cy_int,65,36,0 );
	gfx.PutPixel( 4 + cx_int,22 + cy_int,65,36,0 );
	gfx.PutPixel( 5 + cx_int,22 + cy_int,65,36,0 );
	gfx.PutPixel( 6 + cx_int,22 + cy_int,51,28,0 );
	gfx.PutPixel( 1 + cx_int,23 + cy_int,51,28,0 );
	gfx.PutPixel( 2 + cx_int,23 + cy_int,51,28,0 );
	gfx.PutPixel( 3 + cx_int,23 + cy_int,51,28,0 );
	gfx.PutPixel( 4 + cx_int,23 + cy_int,51,28,0 );
	gfx.PutPixel( 5 + cx_int,23 + cy_int,51,28,0 );
	gfx.PutPixel( 6 + cx_int,23 + cy_int,51,28,0 );
}