#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern int buttonCount;
extern float t,h;
Model::Model() : modelListener(0),c(0.0)
{
	
}

void Model::tick()
{
	modelListener->checkClick();
}

int Model::getC()
{
	//c = buttonCount;
	c = (int)t/1;
 	return c;
}
