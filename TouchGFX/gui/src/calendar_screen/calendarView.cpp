#include <gui/calendar_screen/calendarView.hpp>
#include <touchgfx/Unicode.hpp>
#include <stdio.h>
#include <String>

calendarView::calendarView()
{

}

void calendarView::setupScreen()
{
    calendarViewBase::setupScreen();
}

void calendarView::tearDownScreen()
{
    calendarViewBase::tearDownScreen();
}

void calendarView::genCalendar(int day, int date , int month, int year){
	/*	
			char m[12][12]={
			"JANUARY\0",
			"FEBURARY\0",
			"MARCH\0",
			"APRIL\0",
			"MAY\0",
			"JUNE\0",
			"JULY\0",
			"AUGUST\0",
			"SEPTERMBER\0",
			"OCTOBER\0",
			"NOVEMBER\0",
			"DECEMBER\0"
		
		};
		*/
		int num = 0;
		switch(month){
			case 1:
						Unicode::snprintf(montBuffer, MONT_SIZE,"JANUARY");
						num = 31;
						break;
			case 2:
						Unicode::snprintf(montBuffer, MONT_SIZE,"FEBURARY");
						num = 28;
						if(year%4==0 && year%100!=0)
							num++;
						break;
			case 3:
						Unicode::snprintf(montBuffer, MONT_SIZE,"MARCH");
						num = 31;
						break;
			case 4:
						Unicode::snprintf(montBuffer, MONT_SIZE,"APRIL");
						num = 30;
						break;
			case 5:
						Unicode::snprintf(montBuffer, MONT_SIZE,"MAY");
						num = 31;
						break;
			case 6:
						Unicode::snprintf(montBuffer, MONT_SIZE,"JUNE");
						num = 30;
						break;
			case 7:
					 Unicode::snprintf(montBuffer, MONT_SIZE,"JULY");
						num = 31;
						break;
			case 8:
						Unicode::snprintf(montBuffer, MONT_SIZE,"AUGUST");
						num = 31;
						break;
			case 9:
						Unicode::snprintf(montBuffer, MONT_SIZE,"SEPTERMBER");
						num = 30;
						break;
			case 10:
						Unicode::snprintf(montBuffer, MONT_SIZE,"OCTOBER");
						num = 31;
						break;
			case 11:
						Unicode::snprintf(montBuffer, MONT_SIZE,"NOVEMBER");
						num = 30;
						break;
			case 12:
						Unicode::snprintf(montBuffer, MONT_SIZE,"DECEMBER");
						num = 31;
						break;
		}
		mont.invalidate();
		
	
		int tempDate = date;
		
		while(tempDate!=0){
			day--;
			tempDate--;
			if(day<0)
				day = 6;
		}
		int dayy[35];
		int i=0;
		for(; i < day ; i++){
			dayy[i] = 0;
		}
		
		for(int j=1;j <=num ; j++,i++){
			dayy[i]=j;
		}
		
		for(;i<35;i++){
			dayy[i]= 0;
		}
		
		int k = 0;
		
		if(dayy[k]!=0)Unicode::snprintf(d1Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d1Buffer, 3,""); k++;
		if(dayy[k]!=0)Unicode::snprintf(d2Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d2Buffer, 3,""); k++;
		if(dayy[k]!=0)Unicode::snprintf(d3Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d3Buffer, 3,""); k++; 
		if(dayy[k]!=0)Unicode::snprintf(d4Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d4Buffer, 3,""); k++;
		if(dayy[k]!=0)Unicode::snprintf(d5Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d5Buffer, 3,""); k++;
		if(dayy[k]!=0)Unicode::snprintf(d6Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d6Buffer, 3,""); k++;
		if(dayy[k]!=0)Unicode::snprintf(d7Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d7Buffer, 3,""); k++;
		Unicode::snprintf(d8Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d9Buffer, 3,"%d",dayy[k++]);
		
		Unicode::snprintf(d10Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d11Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d12Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d13Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d14Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d15Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d16Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d17Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d18Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d19Buffer, 3,"%d",dayy[k++]);
		
		Unicode::snprintf(d20Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d21Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d22Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d23Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d24Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d25Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d26Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d27Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d28Buffer, 3,"%d",dayy[k++]);
		Unicode::snprintf(d29Buffer, 3,"%d",dayy[k++]);
		
		if(dayy[k]!=0) Unicode::snprintf(d30Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d30Buffer, 3,""); k++;
		if(dayy[k]!=0) Unicode::snprintf(d31Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d31Buffer, 3,""); k++;
		if(dayy[k]!=0) Unicode::snprintf(d32Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d32Buffer, 3,""); k++;
		if(dayy[k]!=0) Unicode::snprintf(d33Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d33Buffer, 3,""); k++;
		if(dayy[k]!=0) Unicode::snprintf(d34Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d34Buffer, 3,""); k++;
		if(dayy[k]!=0) Unicode::snprintf(d35Buffer, 3,"%d",dayy[k]); else Unicode::snprintf(d35Buffer, 3,""); k++;
		
		d1.invalidate();
		d2.invalidate();
		d3.invalidate();
		d4.invalidate();
		d5.invalidate();
		d6.invalidate();
		d7.invalidate();
		d8.invalidate();
		d9.invalidate();
		
		d11.invalidate();
		d12.invalidate();
		d13.invalidate();
		d14.invalidate();
		d15.invalidate();
		d16.invalidate();
		d17.invalidate();
		d18.invalidate();
		d19.invalidate();
		
		d20.invalidate();
		d21.invalidate();
		d22.invalidate();
		d23.invalidate();
		d24.invalidate();
		d25.invalidate();
		d26.invalidate();
		d27.invalidate();
		d28.invalidate();
		d29.invalidate();
		
		d30.invalidate();
		d31.invalidate();
		d32.invalidate();
		d33.invalidate();
		d34.invalidate();
		d35.invalidate();
		
}

void calendarView::move(int page){

	//HAL::getInstance()->setDisplayOrientation(orientation); //set new orientation

  if(page==0) static_cast<FrontendApplication*>(Application::getInstance())->gotomainScreenNoTransition();
  //else if(page==1) 
	//		static_cast<FrontendApplication*>(Application::getInstance())->gotocalendarScreenNoTransition();
  else if(page==2) 
		static_cast<FrontendApplication*>(Application::getInstance())->gotocount_upScreenNoTransition();
  else if(page==3) 
		static_cast<FrontendApplication*>(Application::getInstance())->gotoalarmScreenNoTransition();
	
}