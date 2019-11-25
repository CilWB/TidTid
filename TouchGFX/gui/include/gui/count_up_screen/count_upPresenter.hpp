#ifndef COUNT_UP_PRESENTER_HPP
#define COUNT_UP_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class count_upView;

class count_upPresenter : public Presenter, public ModelListener
{
public:
    count_upPresenter(count_upView& v);

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

    virtual ~count_upPresenter() {};
		
		void updateCountUp();

private:
    count_upPresenter();

    count_upView& view;
};


#endif // COUNT_UP_PRESENTER_HPP
