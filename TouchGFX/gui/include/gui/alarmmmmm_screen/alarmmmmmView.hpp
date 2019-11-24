#ifndef ALARMMMMM_VIEW_HPP
#define ALARMMMMM_VIEW_HPP

#include <gui_generated/alarmmmmm_screen/alarmmmmmViewBase.hpp>
#include <gui/alarmmmmm_screen/alarmmmmmPresenter.hpp>

class alarmmmmmView : public alarmmmmmViewBase
{
public:
    alarmmmmmView();
    virtual ~alarmmmmmView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ALARMMMMM_VIEW_HPP
