#pragma once
#ifndef GRAPHIC_PROXY_H
#define GRAPHIC_PROXY_H
#include "Graphic.h"
#include "IGraphic.h"
// Real Subject
class GraphicProxy : public IGraphic
{
public:
	GraphicProxy();
	~GraphicProxy();
	void draw();
private:
	Graphic* graphic;
	Graphic* getInstance(void);
};
#endif // !GRAPHIC_PROXY_H
