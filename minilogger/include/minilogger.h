#pragma once

///////////////////////////////////////////////////
// NAME: minilogger                              //
// LICENSE: LGPL-3.0                             //
// SOURCE: https://github.com/RDCH106/miniLogger //
///////////////////////////////////////////////////

#ifdef UNICODE
#  define tcout wcout
#else
#  define tcout cout
#endif

#if defined(___LOG_DEBUG)
#  include <iostream>
#  define LOGD(...) std::tcout << "  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGI(...) std::tcout << "  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGW(...) std::tcout << "  * Warning: " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGE(...) std::tcout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#elif defined(___LOG_INFO)
#  include <iostream>
#  define LOGD(...)
#  define LOGI(...) std::tcout << "  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGW(...) std::tcout << "  * Warning: " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGE(...) std::tcout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#elif defined(___LOG_WARNING)
#  include <iostream>
#  define LOGD(...)
#  define LOGI(...)
#  define LOGW(...) std::tcout << "  * Warning: " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGE(...) std::tcout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#elif defined(___LOG_ERROR)
#  include <iostream>
#  define LOGD(...)
#  define LOGI(...)
#  define LOGW(...)
#  define LOGE(...) std::tcout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#else
// NO LOGS
#  define LOGD(...)
#  define LOGI(...)
#  define LOGW(...)
#  define LOGE(...)
#endif
