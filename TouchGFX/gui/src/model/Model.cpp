#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern int buttonCount;

Model::Model() : modelListener(0),c(0)
{
	
}

void Model::tick()
{
	modelListener->checkClick();
}

int Model::getC()
{
	c = buttonCount;
 	return c;
}
