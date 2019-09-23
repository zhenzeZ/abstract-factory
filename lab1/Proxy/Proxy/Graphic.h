#pragma once
#ifndef GRAPHIC_H
#define GRAPHIC_H
#include <iostream>
#include "IGraphic.h"
// Real Subject
class Graphic : public IGraphic
{
public:
	Graphic();
	~Graphic();
	void draw();
};
#endif // !GRAPHIC_H
