#ifndef COUNT_DOWN_PRESENTER_HPP
#define COUNT_DOWN_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class count_downView;

class count_downPresenter : public Presenter, public ModelListener
{
public:
    count_downPresenter(count_downView& v);

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

    virtual ~count_downPresenter() {};

private:
    count_downPresenter();

    count_downView& view;
};


#endif // COUNT_DOWN_PRESENTER_HPP
