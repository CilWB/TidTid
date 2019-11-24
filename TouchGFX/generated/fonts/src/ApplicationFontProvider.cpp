/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <fonts/ApplicationFontProvider.hpp>
#include <touchgfx/InternalFlashFont.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern touchgfx::InternalFlashFont& getFont_impact_20_4bpp();
extern touchgfx::InternalFlashFont& getFont_segoeuib_16_4bpp();
extern touchgfx::InternalFlashFont& getFont_Digitalt_90_4bpp();
extern touchgfx::InternalFlashFont& getFont_OpenSans_Bold_20_4bpp();
extern touchgfx::InternalFlashFont& getFont_Digitalt_30_4bpp();
extern touchgfx::InternalFlashFont& getFont_segoeuib_18_4bpp();
extern touchgfx::InternalFlashFont& getFont_Digitalt_19_4bpp();
extern touchgfx::InternalFlashFont& getFont_Digitalt_20_4bpp();
extern touchgfx::InternalFlashFont& getFont_Digitalt_29_4bpp();

touchgfx::Font* ApplicationFontProvider::getFont(touchgfx::FontId fontId)
{
    switch (fontId)
    {
    case Typography::DEFAULT:
        return &(getFont_impact_20_4bpp());
    case Typography::LARGE:
        return &(getFont_segoeuib_16_4bpp());
    case Typography::SMALL:
        return &(getFont_Digitalt_90_4bpp());
    case Typography::TYPOGRAPHY_00:
        return &(getFont_OpenSans_Bold_20_4bpp());
    case Typography::TYPOGRAPHY_01:
        return &(getFont_Digitalt_30_4bpp());
    case Typography::TYPOGRAPHY_02:
        return &(getFont_segoeuib_18_4bpp());
    case Typography::TYPOGRAPHY_03:
        return &(getFont_Digitalt_19_4bpp());
    case Typography::TYPOGRAPHY_04:
        return &(getFont_Digitalt_20_4bpp());
    case Typography::TYPOGRAPHY_05:
        return &(getFont_Digitalt_29_4bpp());
    default:
        return 0;
    }
}
