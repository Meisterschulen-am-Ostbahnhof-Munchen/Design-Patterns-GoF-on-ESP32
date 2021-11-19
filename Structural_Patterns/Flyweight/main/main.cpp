#include <stdio.h>
#include "sdkconfig.h"




#include "Font.h"
#include "GlyphContext.h"

/* Inside .cpp file, app_main function must be declared with C linkage */
extern "C" void app_main(void)
{
    printf("Hello world!\n");

    GlyphContext gc;
    Font* times12 = new Font("Times-Roman-12");
    Font* timesItalic12 = new Font("Times-Italic-12");
    // ...

    gc.SetFont(times12, 6);

    gc.Insert(6);
    gc.SetFont(timesItalic12, 6);
}
