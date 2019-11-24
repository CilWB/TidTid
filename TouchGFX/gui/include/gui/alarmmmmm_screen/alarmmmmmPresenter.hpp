#ifndef ALARMMMMM_PRESENTER_HPP
#define ALARMMMMM_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class alarmmmmmView;

class alarmmmmmPresenter : public Presenter, public ModelListener
{
public:
    alarmmmmmPresenter(alarmmmmmView& v);

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

    virtual ~alarmmmmmPresenter() {};

private:
    alarmmmmmPresenter();

    alarmmmmmView& view;
};


#endif // ALARMMMMM_PRESENTER_HPP
