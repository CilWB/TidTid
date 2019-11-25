#include <gui/calendar_screen/calendarView.hpp>
#include <gui/calendar_screen/calendarPresenter.hpp>

calendarPresenter::calendarPresenter(calendarView& v)
    : view(v)
{
}

void calendarPresenter::activate()
{

}

void calendarPresenter::deactivate()
{

}

void calendarPresenter::updateCalendar()
{
	view.genCalendar(model->getDay_(),model->getDate_(),model->getMonth_(),model->getYear_());
	view.move(model->getC());
}

