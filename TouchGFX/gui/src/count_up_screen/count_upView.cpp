#include <gui/count_up_screen/count_upView.hpp>

count_upView::count_upView() : status(0) ,get(0)
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
	if(status == 1){
		if(get==0){
			get=1;
			start_time=tick;
		}
		cnt_time = (tick-start_time);
		Unicode::snprintf(sec_valBuffer,3,"%02d",(cnt_time/60)%60);
		Unicode::snprintf(min_valBuffer,3,"%02d",(cnt_time/3600)%100);
		sec_val.invalidate();
		min_val.invalidate();
	}
	else if(status ==2){
			if(get==0)
					status=3;
	}
	else if(status==3){
		if(get==0){
			get=1;
			start_time=tick;
		}
			cnt_time=cnt_time2 + (tick-start_time);
		Unicode::snprintf(sec_valBuffer,3,"%02d",(cnt_time/60)%60);
		Unicode::snprintf(min_valBuffer,3,"%02d",(cnt_time/3600)%100);
		sec_val.invalidate();
		min_val.invalidate();
	}
	else{
		Unicode::snprintf(sec_valBuffer,3,"%02d",0);
		Unicode::snprintf(min_valBuffer,3,"%02d",0);
		sec_val.invalidate();
		min_val.invalidate();
	}
	
}

void count_upView::move(int page){

	//HAL::getInstance()->setDisplayOrientation(orientation); //set new orientation

  if(page==0) static_cast<FrontendApplication*>(Application::getInstance())->gotomainScreenNoTransition();
  else if(page==1) 
		static_cast<FrontendApplication*>(Application::getInstance())->gotocalendarScreenNoTransition();
 // else if(page==2) 
//		static_cast<FrontendApplication*>(Application::getInstance())->gotocount_upScreenNoTransition();
  else if(page==3) 
		static_cast<FrontendApplication*>(Application::getInstance())->gotoalarmScreenNoTransition();
	
}

void count_upView::up_reset(){
	if(status==2)
		status = 0;
}
void count_upView::up_stop(){
	status = 2;
	cnt_time2=cnt_time;
}
void count_upView::up_start(){
	if (status==0){
		get=0;
		status = 1;
	}
	else if(status ==2){
		get=0;
	}
		
}