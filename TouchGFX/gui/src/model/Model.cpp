#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

extern int buttonCount;
extern float t,h;
extern int sec,min,hour,day,date,month,year,year4;
extern unsigned int count_c;

//extern int alaramHour,alaramMin ;

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
	
	// set alaram
	modelListener->updateAlaram();
	
	//if(alaramHour == getMin_() && getMin_() == alaramMin ){
	//	year = 2000;
	//}

}

int Model::getC()
{
	//c = buttonCount;
	//c = (int)t/1;
 	return buttonCount;
}

int Model::getTickk_(){
	//return count_c/8.8;
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
