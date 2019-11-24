#ifndef COUNT_DOWN_VIEW_HPP
#define COUNT_DOWN_VIEW_HPP

#include <gui_generated/count_down_screen/count_downViewBase.hpp>
#include <gui/count_down_screen/count_downPresenter.hpp>

class count_downView : public count_downViewBase
{
public:
    count_downView();
    virtual ~count_downView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // COUNT_DOWN_VIEW_HPP
