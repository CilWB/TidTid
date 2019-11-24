#ifndef CALENDAR_VIEW_HPP
#define CALENDAR_VIEW_HPP

#include <gui_generated/calendar_screen/calendarViewBase.hpp>
#include <gui/calendar_screen/calendarPresenter.hpp>

class calendarView : public calendarViewBase
{
public:
    calendarView();
    virtual ~calendarView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CALENDAR_VIEW_HPP
