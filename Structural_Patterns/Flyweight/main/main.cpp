/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "sdkconfig.h"




#include "Font.h"
#include "GlyphContext.h"

/* Inside .cpp file, app_main function must be declared with C linkage */
extern "C" void app_main(void)
{
    printf("Hello world!\n");

    GlyphContext gc;
    Font* times12 = new Font("Times-Roman-12"); //ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
    Font* timesItalic12 = new Font("Times-Italic-12"); //ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
    // ...

    gc.SetFont(times12, 6);

    gc.Insert(6);
    gc.SetFont(timesItalic12, 6);
}
