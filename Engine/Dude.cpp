#include "Dude.h"
#include "Graphics.h"

void Dude::ClampToScreen()
{
	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
	}
	else if( right >= float(Graphics::ScreenWidth) )
	{
		x = float(Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
	}
	else if( bottom >= float(Graphics::ScreenHeight) )
	{
		y = float(Graphics::ScreenHeight - 1) - height;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	const int cx_int = int(x);
	const int cy_int = int(y);

	gfx.PutPixel( 7 + cx_int,0 + cy_int,0,0,0 );
	gfx.PutPixel( 8 + cx_int,0 + cy_int,0,0,0 );
	gfx.PutPixel( 9 + cx_int,0 + cy_int,0,0,0 );
	gfx.PutPixel( 10 + cx_int,0 + cy_int,0,0,0 );
	gfx.PutPixel( 11 + cx_int,0 + cy_int,0,0,0 );
	gfx.PutPixel( 12 + cx_int,0 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,1 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,1 + cy_int,0,0,0 );
	gfx.PutPixel( 7 + cx_int,1 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,1 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,1 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,1 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,1 + cy_int,254,221,88 );
	gfx.PutPixel( 12 + cx_int,1 + cy_int,254,221,88 );
	gfx.PutPixel( 13 + cx_int,1 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,1 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,2 + cy_int,0,0,0 );
	gfx.PutPixel( 4 + cx_int,2 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 6 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 12 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 13 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 14 + cx_int,2 + cy_int,254,221,88 );
	gfx.PutPixel( 15 + cx_int,2 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,2 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,3 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 5 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 6 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 12 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 13 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 14 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 15 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 16 + cx_int,3 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,3 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,4 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 5 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 6 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 12 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 13 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 14 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 15 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 16 + cx_int,4 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,4 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 3 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 4 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 6 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 12 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 13 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 15 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 16 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,5 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,5 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,6 + cy_int,255,255,255 );
	gfx.PutPixel( 4 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,6 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,6 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,6 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,6 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 11 + cx_int,6 + cy_int,255,255,255 );
	gfx.PutPixel( 12 + cx_int,6 + cy_int,255,255,255 );
	gfx.PutPixel( 13 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 15 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,6 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,6 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,6 + cy_int,0,0,0 );
	gfx.PutPixel( 0 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,7 + cy_int,255,255,255 );
	gfx.PutPixel( 3 + cx_int,7 + cy_int,255,255,255 );
	gfx.PutPixel( 4 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,7 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,7 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,7 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,7 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 11 + cx_int,7 + cy_int,255,255,255 );
	gfx.PutPixel( 12 + cx_int,7 + cy_int,255,255,255 );
	gfx.PutPixel( 13 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 15 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,7 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,7 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,7 + cy_int,254,221,88 );
	gfx.PutPixel( 19 + cx_int,7 + cy_int,0,0,0 );
	gfx.PutPixel( 0 + cx_int,8 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,8 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,8 + cy_int,255,255,255 );
	gfx.PutPixel( 3 + cx_int,8 + cy_int,255,255,255 );
	gfx.PutPixel( 4 + cx_int,8 + cy_int,255,255,255 );
	gfx.PutPixel( 5 + cx_int,8 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,8 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,8 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,8 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,8 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,8 + cy_int,0,0,0 );
	gfx.PutPixel( 11 + cx_int,8 + cy_int,255,255,255 );
	gfx.PutPixel( 12 + cx_int,8 + cy_int,255,255,255 );
	gfx.PutPixel( 13 + cx_int,8 + cy_int,255,255,255 );
	gfx.PutPixel( 14 + cx_int,8 + cy_int,255,255,255 );
	gfx.PutPixel( 15 + cx_int,8 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,8 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,8 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,8 + cy_int,254,221,88 );
	gfx.PutPixel( 19 + cx_int,8 + cy_int,0,0,0 );
	gfx.PutPixel( 0 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 2 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 4 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 12 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 13 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 15 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 16 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,9 + cy_int,254,221,88 );
	gfx.PutPixel( 19 + cx_int,9 + cy_int,0,0,0 );
	gfx.PutPixel( 0 + cx_int,10 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 2 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 3 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 5 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 6 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 12 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 13 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 14 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 15 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 16 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,10 + cy_int,254,221,88 );
	gfx.PutPixel( 19 + cx_int,10 + cy_int,0,0,0 );
	gfx.PutPixel( 0 + cx_int,11 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 2 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 3 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 5 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 6 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 7 + cx_int,11 + cy_int,20,14,18 );
	gfx.PutPixel( 8 + cx_int,11 + cy_int,18,11,14 );
	gfx.PutPixel( 9 + cx_int,11 + cy_int,18,12,14 );
	gfx.PutPixel( 10 + cx_int,11 + cy_int,18,12,14 );
	gfx.PutPixel( 11 + cx_int,11 + cy_int,21,13,16 );
	gfx.PutPixel( 12 + cx_int,11 + cy_int,24,11,15 );
	gfx.PutPixel( 13 + cx_int,11 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 15 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 16 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,11 + cy_int,254,221,88 );
	gfx.PutPixel( 19 + cx_int,11 + cy_int,0,0,0 );
	gfx.PutPixel( 0 + cx_int,12 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 2 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 3 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 5 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 6 + cx_int,12 + cy_int,23,9,23 );
	gfx.PutPixel( 7 + cx_int,12 + cy_int,135,26,68 );
	gfx.PutPixel( 8 + cx_int,12 + cy_int,135,26,68 );
	gfx.PutPixel( 9 + cx_int,12 + cy_int,135,26,68 );
	gfx.PutPixel( 10 + cx_int,12 + cy_int,135,26,68 );
	gfx.PutPixel( 11 + cx_int,12 + cy_int,135,26,68 );
	gfx.PutPixel( 12 + cx_int,12 + cy_int,135,26,68 );
	gfx.PutPixel( 13 + cx_int,12 + cy_int,135,26,68 );
	gfx.PutPixel( 14 + cx_int,12 + cy_int,0,0,0 );
	gfx.PutPixel( 15 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 16 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,12 + cy_int,254,221,88 );
	gfx.PutPixel( 19 + cx_int,12 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,13 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,13 + cy_int,254,221,88 );
	gfx.PutPixel( 3 + cx_int,13 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,13 + cy_int,254,221,88 );
	gfx.PutPixel( 5 + cx_int,13 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 7 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 8 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 9 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 10 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 11 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 12 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 13 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 14 + cx_int,13 + cy_int,135,26,68 );
	gfx.PutPixel( 15 + cx_int,13 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,13 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,13 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,13 + cy_int,0,0,0 );
	gfx.PutPixel( 1 + cx_int,14 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,14 + cy_int,254,221,88 );
	gfx.PutPixel( 3 + cx_int,14 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,14 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,14 + cy_int,135,26,68 );
	gfx.PutPixel( 6 + cx_int,14 + cy_int,135,26,68 );
	gfx.PutPixel( 7 + cx_int,14 + cy_int,135,26,68 );
	gfx.PutPixel( 8 + cx_int,14 + cy_int,135,26,68 );
	gfx.PutPixel( 9 + cx_int,14 + cy_int,251,192,224 );
	gfx.PutPixel( 10 + cx_int,14 + cy_int,251,192,224 );
	gfx.PutPixel( 11 + cx_int,14 + cy_int,251,192,224 );
	gfx.PutPixel( 12 + cx_int,14 + cy_int,251,192,224 );
	gfx.PutPixel( 13 + cx_int,14 + cy_int,135,26,68 );
	gfx.PutPixel( 14 + cx_int,14 + cy_int,135,26,68 );
	gfx.PutPixel( 15 + cx_int,14 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,14 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,14 + cy_int,254,221,88 );
	gfx.PutPixel( 18 + cx_int,14 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,15 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,15 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,15 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,15 + cy_int,135,26,68 );
	gfx.PutPixel( 6 + cx_int,15 + cy_int,135,26,68 );
	gfx.PutPixel( 7 + cx_int,15 + cy_int,135,26,68 );
	gfx.PutPixel( 8 + cx_int,15 + cy_int,251,192,224 );
	gfx.PutPixel( 9 + cx_int,15 + cy_int,251,192,224 );
	gfx.PutPixel( 10 + cx_int,15 + cy_int,251,192,224 );
	gfx.PutPixel( 11 + cx_int,15 + cy_int,251,192,224 );
	gfx.PutPixel( 12 + cx_int,15 + cy_int,251,192,224 );
	gfx.PutPixel( 13 + cx_int,15 + cy_int,251,192,224 );
	gfx.PutPixel( 14 + cx_int,15 + cy_int,135,26,68 );
	gfx.PutPixel( 15 + cx_int,15 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,15 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,15 + cy_int,0,0,0 );
	gfx.PutPixel( 2 + cx_int,16 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,16 + cy_int,254,221,88 );
	gfx.PutPixel( 4 + cx_int,16 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,16 + cy_int,135,26,68 );
	gfx.PutPixel( 6 + cx_int,16 + cy_int,135,26,68 );
	gfx.PutPixel( 7 + cx_int,16 + cy_int,135,26,68 );
	gfx.PutPixel( 8 + cx_int,16 + cy_int,251,192,224 );
	gfx.PutPixel( 9 + cx_int,16 + cy_int,251,192,224 );
	gfx.PutPixel( 10 + cx_int,16 + cy_int,251,192,224 );
	gfx.PutPixel( 11 + cx_int,16 + cy_int,251,192,224 );
	gfx.PutPixel( 12 + cx_int,16 + cy_int,251,192,224 );
	gfx.PutPixel( 13 + cx_int,16 + cy_int,251,192,224 );
	gfx.PutPixel( 14 + cx_int,16 + cy_int,135,26,68 );
	gfx.PutPixel( 15 + cx_int,16 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,16 + cy_int,254,221,88 );
	gfx.PutPixel( 17 + cx_int,16 + cy_int,0,0,0 );
	gfx.PutPixel( 3 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 4 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 7 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 8 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 9 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 10 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 11 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 12 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 13 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 15 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 16 + cx_int,17 + cy_int,0,0,0 );
	gfx.PutPixel( 5 + cx_int,18 + cy_int,0,0,0 );
	gfx.PutPixel( 6 + cx_int,18 + cy_int,0,0,0 );
	gfx.PutPixel( 7 + cx_int,18 + cy_int,254,221,88 );
	gfx.PutPixel( 8 + cx_int,18 + cy_int,254,221,88 );
	gfx.PutPixel( 9 + cx_int,18 + cy_int,254,221,88 );
	gfx.PutPixel( 10 + cx_int,18 + cy_int,254,221,88 );
	gfx.PutPixel( 11 + cx_int,18 + cy_int,254,221,88 );
	gfx.PutPixel( 12 + cx_int,18 + cy_int,254,221,88 );
	gfx.PutPixel( 13 + cx_int,18 + cy_int,0,0,0 );
	gfx.PutPixel( 14 + cx_int,18 + cy_int,0,0,0 );
	gfx.PutPixel( 7 + cx_int,19 + cy_int,0,0,0 );
	gfx.PutPixel( 8 + cx_int,19 + cy_int,0,0,0 );
	gfx.PutPixel( 9 + cx_int,19 + cy_int,0,0,0 );
	gfx.PutPixel( 10 + cx_int,19 + cy_int,0,0,0 );
	gfx.PutPixel( 11 + cx_int,19 + cy_int,0,0,0 );
	gfx.PutPixel( 12 + cx_int,19 + cy_int,0,0,0 );
}

void Dude::Update( const Keyboard & kbd )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		x += speed;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		x -= speed;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		y += speed;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		y -= speed;
	}
}

float Dude::GetX() const
{
	return x;
}

float Dude::GetY() const
{
	return y;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}
