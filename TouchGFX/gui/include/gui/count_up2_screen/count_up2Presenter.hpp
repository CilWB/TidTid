#ifndef COUNT_UP2_PRESENTER_HPP
#define COUNT_UP2_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class count_up2View;

class count_up2Presenter : public Presenter, public ModelListener
{
public:
    count_up2Presenter(count_up2View& v);

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

    virtual ~count_up2Presenter() {};

private:
    count_up2Presenter();

    count_up2View& view;
};


#endif // COUNT_UP2_PRESENTER_HPP
