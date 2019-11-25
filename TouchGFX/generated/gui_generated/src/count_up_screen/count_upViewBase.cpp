/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/count_up_screen/count_upViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include "BitmapDatabase.hpp"

count_upViewBase::count_upViewBase() :
    buttonCallback(this, &count_upViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &count_upViewBase::flexButtonCallbackHandler)
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(29, 29, 29));

    min_val.setPosition(253, 102, 93, 98);
    min_val.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    min_val.setLinespacing(0);
    min_val.setRotation(TEXT_ROTATE_180);
    Unicode::snprintf(min_valBuffer, MIN_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID112).getText());
    min_val.setWildcard(min_valBuffer);
    min_val.setTypedText(TypedText(T_SINGLEUSEID111));

    colon.setXY(231, 72);
    colon.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    colon.setLinespacing(0);
    colon.setTypedText(TypedText(T_SINGLEUSEID113));

    sec_val.setPosition(136, 102, 93, 98);
    sec_val.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    sec_val.setLinespacing(0);
    sec_val.setRotation(TEXT_ROTATE_180);
    Unicode::snprintf(sec_valBuffer, SEC_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID115).getText());
    sec_val.setWildcard(sec_valBuffer);
    sec_val.setTypedText(TypedText(T_SINGLEUSEID114));

    up.setXY(186, 213);
    up.setBitmaps(Bitmap(BITMAP_UPP_ID), Bitmap(BITMAP_DOWNNNN_ID));

    start_but.setXY(186, 31);
    start_but.setBitmaps(Bitmap(BITMAP_STST_ID), Bitmap(BITMAP_STTS_ID));

    flexButton1.setBoxWithBorderPosition(0, 0, 26, 24);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(76, 74, 209), touchgfx::Color::getColorFrom24BitRGB(61, 72, 186), touchgfx::Color::getColorFrom24BitRGB(179, 174, 252), touchgfx::Color::getColorFrom24BitRGB(191, 187, 255));
    flexButton1.setPosition(0, 80, 26, 24);
    flexButton1.setAction(flexButtonCallback);

    flexButton1_1.setBoxWithBorderPosition(0, 0, 26, 24);
    flexButton1_1.setBorderSize(5);
    flexButton1_1.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(230, 58, 27), touchgfx::Color::getColorFrom24BitRGB(230, 54, 22), touchgfx::Color::getColorFrom24BitRGB(255, 139, 134), touchgfx::Color::getColorFrom24BitRGB(255, 151, 132));
    flexButton1_1.setPosition(0, 0, 26, 24);
    flexButton1_1.setAction(flexButtonCallback);

    flexButton1_2.setBoxWithBorderPosition(0, 0, 26, 24);
    flexButton1_2.setBorderSize(5);
    flexButton1_2.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(237, 230, 39), touchgfx::Color::getColorFrom24BitRGB(245, 229, 57), touchgfx::Color::getColorFrom24BitRGB(255, 251, 204), touchgfx::Color::getColorFrom24BitRGB(255, 244, 176));
    flexButton1_2.setPosition(0, 243, 26, 24);
    flexButton1_2.setAction(flexButtonCallback);

    flexButton1_3.setBoxWithBorderPosition(0, 0, 26, 24);
    flexButton1_3.setBorderSize(5);
    flexButton1_3.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(67, 204, 79), touchgfx::Color::getColorFrom24BitRGB(72, 217, 53), touchgfx::Color::getColorFrom24BitRGB(52, 252, 110), touchgfx::Color::getColorFrom24BitRGB(90, 214, 81));
    flexButton1_3.setPosition(0, 154, 26, 24);
    flexButton1_3.setAction(flexButtonCallback);

    stop_but.setXY(51, 31);
    stop_but.setBitmaps(Bitmap(BITMAP_STT_ID), Bitmap(BITMAP_STOP1_ID));

    reset_but.setXY(321, 31);
    reset_but.setBitmaps(Bitmap(BITMAP_STTSST_ID), Bitmap(BITMAP_RESET1_ID));

    add(box1);
    add(min_val);
    add(colon);
    add(sec_val);
    add(up);
    add(start_but);
    add(flexButton1);
    add(flexButton1_1);
    add(flexButton1_2);
    add(flexButton1_3);
    add(stop_but);
    add(reset_but);
}

void count_upViewBase::setupScreen()
{

}

void count_upViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &up)
    {

    }
    else if (&src == &start_but)
    {

    }
    else if (&src == &stop_but)
    {

    }
    else if (&src == &reset_but)
    {

    }
}

void count_upViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction3
        //When flexButton1 clicked change screen to main
        //Go to main with no screen transition
        application().gotomainScreenNoTransition();
    }
    else if (&src == &flexButton1_1)
    {
        //Interaction2
        //When flexButton1_1 clicked change screen to calendar
        //Go to calendar with no screen transition
        application().gotocalendarScreenNoTransition();
    }
    else if (&src == &flexButton1_2)
    {
        //Interaction1
        //When flexButton1_2 clicked change screen to alarm
        //Go to alarm with no screen transition
        application().gotoalarmScreenNoTransition();
    }
    else if (&src == &flexButton1_3)
    {
        //Interaction4
        //When flexButton1_3 clicked change screen to count_down
        //Go to count_down with no screen transition
        application().gotocount_downScreenNoTransition();
    }
}
