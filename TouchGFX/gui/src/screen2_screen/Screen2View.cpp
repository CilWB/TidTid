#include <gui/screen2_screen/Screen2View.hpp>
#include <stdio.h>
#include <string.h>
Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::setClick(int cc)
{
	
	Unicode::snprintf(textArea1Buffer, 10,"%d",cc);
	textArea1.invalidate();
}

