#include <gui/count_up_screen/count_upView.hpp>
#include <gui/count_up_screen/count_upPresenter.hpp>

count_upPresenter::count_upPresenter(count_upView& v)
    : view(v)
{
}

void count_upPresenter::activate()
{

}

void count_upPresenter::deactivate()
{
	
}


void count_upPresenter::updateCountUp(){
	view.countUP(model->getTickk_());
}
