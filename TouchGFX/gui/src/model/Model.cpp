#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern int buttonCount;
extern float t,h;
extern int sec,min,hour,day,date,month,year,year4;
Model::Model() : modelListener(0),c(0.0),tickk(0)
{
	
}

void Model::tick()
{
	tickk++;
	// clicking
	modelListener->checkClick();
	//modelListener->setCLK();
	
	// main screen
	modelListener->updateTime();
	
	// calendar screen
	modelListener->updateCalendar();
	
	// count_up
	modelListener->updateCountUp();
}

int Model::getC()
{
	//c = buttonCount;
	//c = (int)t/1;
 	return buttonCount;
}

int Model::getTickk_(){
	return tickk;
}

int Model::getSec_(){
	return sec;
}
	
int Model::getMin_(){
	return min;
}
int Model::getHour_(){
	return hour;
}
int Model::getDay_(){
	return day;
}
int Model::getDate_(){
	return date;
}
int Model::getMonth_(){
	return month;
}
int Model::getYear_(){
	return year4;
}
int Model::getTemp_(){
	return t;
}
int Model::getHumid_(){
	return h;
}
