#include <gui/main_screen/mainView.hpp>
#include <touchgfx/Color.hpp>
mainView::mainView()
{

}

void mainView::setupScreen()
{
    mainViewBase::setupScreen();
}

void mainView::tearDownScreen()
{
    mainViewBase::tearDownScreen();
}


void mainView::updateTimee(int sec,int min,int hour,int day,int date,int month,int year,int tmep)
{
	Unicode::snprintf(mont_valBuffer, 3,"%d",month);
	Unicode::snprintf(date_valBuffer, 3,"%d",date);
	Unicode::snprintf(temp_valBuffer, 3,"%d",tmep);
	Unicode::snprintf(year_valBuffer, 5,"%d",year);
	
	Unicode::snprintf(hour_valBuffer, 3,"%02d",hour);
	Unicode::snprintf(minutes_valBuffer, 3,"%02d",min);
	Unicode::snprintf(sec_valBuffer, 3,"%02d",sec);
	
	mont_val.invalidate();
	date_val.invalidate();
	temp_val.invalidate();
	year_val.invalidate();
	
	hour_val.invalidate();
	minutes_val.invalidate();
	sec_val.invalidate();
	
	
	SUN.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0xFF,0xFF));
	MON.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0xFF,0xFF));
	TUE.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0xFF,0xFF));
	WED.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0xFF,0xFF));
	THU.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0xFF,0xFF));
	FRI.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0xFF,0xFF));
	SAT.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0xFF,0xFF));
	switch(day){
		case 0: SUN.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0,0));
						break;
		case 1: MON.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0,0));
						break;
		case 2: TUE.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0,0));
						break;
		case 3: WED.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0,0));
						break;
		case 4: THU.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0,0));
						break;
		case 5: FRI.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0,0));
						break;
		case 6: SAT.setColor(touchgfx::Color::getColorFrom24BitRGB(0xFF,0,0));
						break;
	}
	//SUN.setColor(touchgfx::Color::getColorFrom24BitRGB(0,150,0));
		
}
		