#include "GraphicProxy.h"

GraphicProxy::GraphicProxy()
{
	this->graphic = 0;
}
GraphicProxy::~GraphicProxy()
{
	if (graphic)
	{
		delete graphic;
	}
}
void GraphicProxy::draw()
{
	getInstance()->draw();
}
Graphic* GraphicProxy::getInstance(void)
{
	if (!graphic)
	{
		graphic = new Graphic();
	}
	return graphic;
}
