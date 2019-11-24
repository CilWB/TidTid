#ifndef ALARM_VIEW_HPP
#define ALARM_VIEW_HPP

#include <gui_generated/alarm_screen/alarmViewBase.hpp>
#include <gui/alarm_screen/alarmPresenter.hpp>

class alarmView : public alarmViewBase
{
public:
    alarmView();
    virtual ~alarmView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ALARM_VIEW_HPP
