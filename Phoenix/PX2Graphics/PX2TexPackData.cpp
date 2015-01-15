/*
*
* �ļ�����	��	PX2TexPackData.cpp
*
*/

#include "PX2TexPackData.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
// TexPackElement
//----------------------------------------------------------------------------
TexPackElement::TexPackElement ()
{
	X = 0;
	Y = 0;
	W = 0;
	H = 0;
	OX = 0;
	OY = 0;
	OW = 0;
	OH = 0;
	TexWidth = 0;
	TexHeight = 0;
	Rolated = false;
}
//----------------------------------------------------------------------------
TexPackElement::~TexPackElement ()
{
}
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
// TexPack
//----------------------------------------------------------------------------
TexPack::TexPack ()
{
	Width = 0;
	Height = 0;
	IsHasUpdate = false;
}
//----------------------------------------------------------------------------
TexPack::~TexPack ()
{
}
//----------------------------------------------------------------------------