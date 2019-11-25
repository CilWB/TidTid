#ifndef ALARM_PRESENTER_HPP
#define ALARM_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class alarmView;

class alarmPresenter : public Presenter, public ModelListener
{
public:
    alarmPresenter(alarmView& v);

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

    virtual ~alarmPresenter() {};
			
			
		void updateAlaram();

private:
    alarmPresenter();

    alarmView& view;
};


#endif // ALARM_PRESENTER_HPP
