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
			
		
    virtual void up_reset();
    virtual void up_start();
    virtual void up_stop();
		
		void countUP(int tick);
			int start_time;
			int status;
			int get;
			int cnt_time;
			int cnt_time2;
			int resume;
			void move(int page);
protected:
};

#endif // COUNT_UP_VIEW_HPP
