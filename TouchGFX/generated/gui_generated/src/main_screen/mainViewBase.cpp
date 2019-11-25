/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/mainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

mainViewBase::mainViewBase() :
    flexButtonCallback(this, &mainViewBase::flexButtonCallbackHandler)
{
    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(29, 29, 29));

    mont_val.setPosition(46, 13, 24, 33);
    mont_val.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    mont_val.setLinespacing(0);
    Unicode::snprintf(mont_valBuffer, MONT_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID7).getText());
    mont_val.setWildcard(mont_valBuffer);
    mont_val.setTypedText(TypedText(T_SINGLEUSEID6));

    date_val.setPosition(116, 13, 31, 33);
    date_val.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    date_val.setLinespacing(0);
    Unicode::snprintf(date_valBuffer, DATE_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID9).getText());
    date_val.setWildcard(date_valBuffer);
    date_val.setTypedText(TypedText(T_SINGLEUSEID8));

    temp_val.setPosition(318, 13, 31, 33);
    temp_val.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    temp_val.setLinespacing(0);
    Unicode::snprintf(temp_valBuffer, TEMP_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID11).getText());
    temp_val.setWildcard(temp_valBuffer);
    temp_val.setTypedText(TypedText(T_SINGLEUSEID10));

    year_val.setPosition(173, 13, 66, 33);
    year_val.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    year_val.setLinespacing(0);
    Unicode::snprintf(year_valBuffer, YEAR_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID13).getText());
    year_val.setWildcard(year_valBuffer);
    year_val.setTypedText(TypedText(T_SINGLEUSEID12));

    MONTH.setXY(29, 46);
    MONTH.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    MONTH.setLinespacing(0);
    MONTH.setTypedText(TypedText(T_SINGLEUSEID14));

    DATE.setXY(113, 46);
    DATE.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    DATE.setLinespacing(0);
    DATE.setTypedText(TypedText(T_SINGLEUSEID15));

    YEAR.setXY(187, 46);
    YEAR.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    YEAR.setLinespacing(0);
    YEAR.setTypedText(TypedText(T_SINGLEUSEID16));

    hour_val.setPosition(74, 89, 93, 98);
    hour_val.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    hour_val.setLinespacing(0);
    Unicode::snprintf(hour_valBuffer, HOUR_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID18).getText());
    hour_val.setWildcard(hour_valBuffer);
    hour_val.setTypedText(TypedText(T_SINGLEUSEID17));

    colon.setXY(169, 80);
    colon.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    colon.setLinespacing(0);
    colon.setTypedText(TypedText(T_SINGLEUSEID19));

    minutes_val.setPosition(191, 89, 93, 98);
    minutes_val.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    minutes_val.setLinespacing(0);
    Unicode::snprintf(minutes_valBuffer, MINUTES_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID21).getText());
    minutes_val.setWildcard(minutes_valBuffer);
    minutes_val.setTypedText(TypedText(T_SINGLEUSEID20));

    colon2.setXY(288, 80);
    colon2.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    colon2.setLinespacing(0);
    colon2.setTypedText(TypedText(T_SINGLEUSEID22));

    sec_val.setPosition(311, 89, 93, 98);
    sec_val.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    sec_val.setLinespacing(0);
    Unicode::snprintf(sec_valBuffer, SEC_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID24).getText());
    sec_val.setWildcard(sec_valBuffer);
    sec_val.setTypedText(TypedText(T_SINGLEUSEID23));

    SUN.setXY(50, 236);
    SUN.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    SUN.setLinespacing(0);
    SUN.setTypedText(TypedText(T_SINGLEUSEID25));

    MON.setXY(109, 236);
    MON.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    MON.setLinespacing(0);
    MON.setTypedText(TypedText(T_SINGLEUSEID26));

    TUE.setXY(175, 236);
    TUE.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    TUE.setLinespacing(0);
    TUE.setTypedText(TypedText(T_SINGLEUSEID27));

    WED.setXY(229, 236);
    WED.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    WED.setLinespacing(0);
    WED.setTypedText(TypedText(T_SINGLEUSEID28));

    THU.setXY(291, 236);
    THU.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    THU.setLinespacing(0);
    THU.setTypedText(TypedText(T_SINGLEUSEID29));

    FRI.setXY(350, 236);
    FRI.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    FRI.setLinespacing(0);
    FRI.setTypedText(TypedText(T_SINGLEUSEID30));

    SAT.setXY(398, 236);
    SAT.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    SAT.setLinespacing(0);
    SAT.setTypedText(TypedText(T_SINGLEUSEID31));

    flexButton1.setBoxWithBorderPosition(0, 0, 26, 24);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(67, 204, 79), touchgfx::Color::getColorFrom24BitRGB(72, 217, 53), touchgfx::Color::getColorFrom24BitRGB(52, 252, 110), touchgfx::Color::getColorFrom24BitRGB(90, 214, 81));
    flexButton1.setPosition(454, 89, 26, 24);
    flexButton1.setVisible(false);
    flexButton1.setAction(flexButtonCallback);

    flexButton1_1.setBoxWithBorderPosition(0, 0, 26, 24);
    flexButton1_1.setBorderSize(5);
    flexButton1_1.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(230, 58, 27), touchgfx::Color::getColorFrom24BitRGB(230, 54, 22), touchgfx::Color::getColorFrom24BitRGB(255, 139, 134), touchgfx::Color::getColorFrom24BitRGB(255, 151, 132));
    flexButton1_1.setPosition(454, 117, 26, 24);
    flexButton1_1.setVisible(false);
    flexButton1_1.setAction(flexButtonCallback);

    flexButton1_2.setBoxWithBorderPosition(0, 0, 26, 24);
    flexButton1_2.setBorderSize(5);
    flexButton1_2.setBoxWithBorderColors(touchgfx::Color::getColorFrom24BitRGB(237, 230, 39), touchgfx::Color::getColorFrom24BitRGB(245, 229, 57), touchgfx::Color::getColorFrom24BitRGB(255, 251, 204), touchgfx::Color::getColorFrom24BitRGB(255, 244, 176));
    flexButton1_2.setPosition(454, 146, 26, 24);
    flexButton1_2.setVisible(false);
    flexButton1_2.setAction(flexButtonCallback);

    celsius.setXY(350, 17);
    celsius.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    celsius.setLinespacing(0);
    celsius.setTypedText(TypedText(T_SINGLEUSEID132));

    TEMP_1.setXY(318, 46);
    TEMP_1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    TEMP_1.setLinespacing(0);
    TEMP_1.setTypedText(TypedText(T_SINGLEUSEID139));

    HUMID.setXY(382, 46);
    HUMID.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    HUMID.setLinespacing(0);
    HUMID.setTypedText(TypedText(T_SINGLEUSEID140));

    humid_val.setPosition(387, 13, 34, 33);
    humid_val.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    humid_val.setLinespacing(0);
    Unicode::snprintf(humid_valBuffer, HUMID_VAL_SIZE, "%s", TypedText(T_SINGLEUSEID144).getText());
    humid_val.setWildcard(humid_valBuffer);
    humid_val.setTypedText(TypedText(T_SINGLEUSEID141));

    celsius_1.setXY(421, 17);
    celsius_1.setColor(touchgfx::Color::getColorFrom24BitRGB(218, 19, 19));
    celsius_1.setLinespacing(0);
    celsius_1.setTypedText(TypedText(T_SINGLEUSEID143));

    add(box1);
    add(mont_val);
    add(date_val);
    add(temp_val);
    add(year_val);
    add(MONTH);
    add(DATE);
    add(YEAR);
    add(hour_val);
    add(colon);
    add(minutes_val);
    add(colon2);
    add(sec_val);
    add(SUN);
    add(MON);
    add(TUE);
    add(WED);
    add(THU);
    add(FRI);
    add(SAT);
    add(flexButton1);
    add(flexButton1_1);
    add(flexButton1_2);
    add(celsius);
    add(TEMP_1);
    add(HUMID);
    add(humid_val);
    add(celsius_1);
}

void mainViewBase::setupScreen()
{

}

void mainViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to count_up
        //Go to count_up with no screen transition
        application().gotocount_upScreenNoTransition();
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
        //Interaction3
        //When flexButton1_2 clicked change screen to alarm
        //Go to alarm with no screen transition
        application().gotoalarmScreenNoTransition();
    }
}
