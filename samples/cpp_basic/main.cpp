/**
 * To use minilogger define:
 *    I - LOG_TAG to add extra info. In this case use __func__ preprocessor macro to print the file function.
 *   II - Define the levels you want to appear in the compilation.
 */
#define LOG_TAG __func__

// Select your log level
// ***********************
#define ___LOG_DEBUG
//#define ___LOG_INFO
//#define ___LOG_WARNING
//#define ___LOG_ERROR
// ***********************

#include "minilogger.h"

void initialize()
{
    LOGI("No need initialization!");
}

void print_basic()
{
    LOGI("print_basic info!");
}

void print_levels_test()
{
    LOGD("Debug message!");
    LOGI("Info message!");
    LOGW("Warning message!");
    LOGE("Error message!");
    std::cout << std::endl << "Try different results changing the Log Level" << std::endl << std::endl;
}

int main(void)
{
    initialize();
    print_basic();
    print_levels_test();
}
