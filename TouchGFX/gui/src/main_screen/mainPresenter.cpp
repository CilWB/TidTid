#include <gui/main_screen/mainView.hpp>
#include <gui/main_screen/mainPresenter.hpp>

mainPresenter::mainPresenter(mainView& v)
    : view(v)
{
}

void mainPresenter::activate()
{

}

void mainPresenter::deactivate()
{

}



void mainPresenter::updateTime()
{
	view.updateTimee(
	//model->getC(),
	model->getSec_(),
	model->getMin_(),
	model->getHour_(),
	model->getDay_(),
	model->getDate_(),
	model->getMonth_(),
	model->getYear_(),
	model->getTemp_(),
	model->getHumid_()	
	);
	view.move(model->getC()%4);
}

