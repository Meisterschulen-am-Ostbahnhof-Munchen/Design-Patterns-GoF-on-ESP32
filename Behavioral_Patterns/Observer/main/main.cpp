#include <stdio.h>
#include "sdkconfig.h"



/* Inside .cpp file, app_main function must be declared with C linkage */
extern "C" void app_main(void)
{
    printf("Hello world!\n");




}
