#ifndef CALENDAR_PRESENTER_HPP
#define CALENDAR_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class calendarView;

class calendarPresenter : public Presenter, public ModelListener
{
public:
    calendarPresenter(calendarView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~calendarPresenter() {};

private:
    calendarPresenter();

    calendarView& view;
};


#endif // CALENDAR_PRESENTER_HPP