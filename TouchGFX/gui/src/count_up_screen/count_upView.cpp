#include <gui/count_up_screen/count_upView.hpp>

count_upView::count_upView()
{

}

void count_upView::setupScreen()
{
    count_upViewBase::setupScreen();
}

void count_upView::tearDownScreen()
{
    count_upViewBase::tearDownScreen();
}

void count_upView::countUP(int tick){
	Unicode::snprintf(sec_valBuffer,3,"%02d",(tick/60)%60);
	Unicode::snprintf(min_valBuffer,3,"%02d",(tick/3600)%100);
	sec_val.invalidate();
	min_val.invalidate();
}
