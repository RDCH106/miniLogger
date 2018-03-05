# miniLogger

C++ logger with logging levels (standard output)


# Easy to Use:

1) Include `minilogger.h`
2) Set desired log level with :
  * `#define ___LOG_DEBUG`
  * `#define ___LOG_INFO`
  * `#define ___LOG_WARNING`
  * `#define ___LOG_ERROR`
3) Print messages for desired log level with functions:
  * `LOGD("Debug message")`
  * `LOGI("Info message")`
  * `LOGW("Warning message")`
  * `LOGE("Error message")`


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
