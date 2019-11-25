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
			void setSaveAlaram();
    virtual void upMin();
    virtual void upHour();
    virtual void downHour();
    virtual void downMin();
    virtual void saveAlram();
protected:
	int show_hr,show_min,alaramHour,alaramMin;
};

#endif // ALARM_VIEW_HPP
