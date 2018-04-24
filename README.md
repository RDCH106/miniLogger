# 🐛 miniLogger 🐞

C++ logger with logging levels (standard output)


# Easy to Use:

1) Include `minilogger.h`
2) Set desired log level
3) Set desired log tag 
4) Print messages for desired log level

## Quick example

```cpp
#include "logger.h"
#define ___LOG_LEVEL
#define LOG_TAG  "TEST_TAG"
```
Where the different levels of log can be (ordered from highest to lowest information shown):

+ `___LOG_DEBUG` --> Shows DEBUG, INFO, WARNING and ERROR
+ `___LOG_INFO` --> Shows INFO, WARNING and ERROR
+ `___LOG_WARNING` --> Shows WARNING and ERROR
+ `___LOG_ERROR` --> Show ERROR

Print desired info en each level using:

+ `LOGD("Debug message")`
+ `LOGI("Info message")`
+ `LOGW("Warning message")`
+ `LOGE("Error message")`

Thanks to `iostream` it is possible to concatenate data of different types and implicitly convert to `string`:

```c++
LOGD("my_text" << 10 << true);
```

# Execute examples

## Compiling

```
mkdir build && cd build
cmake ..
make -j4
make install
```

### cpp_basic

```
# From BUILD_PATH
./samples/cpp_basic/cpp_basic
```
