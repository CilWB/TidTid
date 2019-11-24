/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef COUNT_UP_VIEW_BASE_HPP
#define COUNT_UP_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/count_up_screen/count_upPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>

class count_upViewBase : public touchgfx::View<count_upPresenter>
{
public:
    count_upViewBase();
    virtual ~count_upViewBase() {}

    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::TextAreaWithOneWildcard sec_val;
    touchgfx::TextArea colon;
    touchgfx::TextAreaWithOneWildcard minutes_val;
    touchgfx::ToggleButton up;
    touchgfx::Button start_but;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > flexButton1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > flexButton1_1;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > flexButton1_2;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger > flexButton1_3;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SEC_VAL_SIZE = 3;
    touchgfx::Unicode::UnicodeChar sec_valBuffer[SEC_VAL_SIZE];
    static const uint16_t MINUTES_VAL_SIZE = 3;
    touchgfx::Unicode::UnicodeChar minutes_valBuffer[MINUTES_VAL_SIZE];

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<count_upViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<count_upViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

};

#endif // COUNT_UP_VIEW_BASE_HPP
