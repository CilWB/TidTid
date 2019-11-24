#ifndef COUNT_UP_VIEW_HPP
#define COUNT_UP_VIEW_HPP

#include <gui_generated/count_up_screen/count_upViewBase.hpp>
#include <gui/count_up_screen/count_upPresenter.hpp>

class count_upView : public count_upViewBase
{
public:
    count_upView();
    virtual ~count_upView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // COUNT_UP_VIEW_HPP
