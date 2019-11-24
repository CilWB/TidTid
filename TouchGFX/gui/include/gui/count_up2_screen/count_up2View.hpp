#ifndef COUNT_UP2_VIEW_HPP
#define COUNT_UP2_VIEW_HPP

#include <gui_generated/count_up2_screen/count_up2ViewBase.hpp>
#include <gui/count_up2_screen/count_up2Presenter.hpp>

class count_up2View : public count_up2ViewBase
{
public:
    count_up2View();
    virtual ~count_up2View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // COUNT_UP2_VIEW_HPP
