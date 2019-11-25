#include <gui/alarm_screen/alarmView.hpp>
#include <gui/alarm_screen/alarmPresenter.hpp>

alarmPresenter::alarmPresenter(alarmView& v)
    : view(v)
{
}

void alarmPresenter::activate()
{

}

void alarmPresenter::deactivate()
{

}


void alarmPresenter::updateAlaram(){
	view.setSaveAlaram();
	view.move(model->getC()%4);
}