/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/mainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

mainViewBase::mainViewBase()
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(29, 29, 29));

    mont_val.setXY(82, 58);
    mont_val.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    mont_val.setLinespacing(0);
    mont_val.setTypedText(TypedText(T_SINGLEUSEID3));

    add(box1);
    add(mont_val);
}

void mainViewBase::setupScreen()
{

}
