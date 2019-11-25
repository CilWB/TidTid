#include <gui/alarm_screen/alarmView.hpp>

alarmView::alarmView() : show_hr(8),show_min(30),alaramHour(8),alaramMin(30)
{

}

void alarmView::setupScreen()
{
    alarmViewBase::setupScreen();
}

void alarmView::tearDownScreen()
{
    alarmViewBase::tearDownScreen();
}


void alarmView::setSaveAlaram(){

	
		Unicode::snprintf(hour_valBuffer,3,"%02d",show_min);
		Unicode::snprintf(minutes_valBuffer,3,"%02d",show_hr);
	
		//Unicode::snprintf(hour_valBuffer,3,"%02d",alaramHour);
		//Unicode::snprintf(minutes_valBuffer,3,"%02d",alaramMin);
	
	
		hour_val.invalidate();
		minutes_val.invalidate();	

}
void alarmView::downHour()
{
		show_min++;
		if(show_min>59)
			show_min=0,show_hr++;
		if(show_hr>23)
			show_hr=0;
}
void alarmView::upHour()
{
		show_min--;
		if(show_min<0)
			show_min=59;
}
void alarmView::downMin()
{
		show_hr++;
		if(show_hr>23)
			show_hr=0;
}
void alarmView::upMin()
{
		show_hr--;
		if(show_hr<0)
			show_hr=23;
}


void alarmView::saveAlram()
{
	alaramHour = show_hr;
	alaramMin =	show_min;
}


