#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <gui_generated/main_screen/mainViewBase.hpp>
#include <gui/main_screen/mainPresenter.hpp>

class mainView : public mainViewBase
{
public:
    mainView();
    virtual ~mainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
		void updateTimee(int sec,int min,int hour,int day,int date,int month,int year,int tmep,int humid);
		void move(int page);
protected:
};

#endif // MAIN_VIEW_HPP
