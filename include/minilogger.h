#pragma once

#if defined(___LOG_DEBUG)
#  include <iostream>
#  define LOGD(...) std::cout << "  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGI(...) std::cout << "  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGW(...) std::cout << "  * Warning: " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGE(...) std::cout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#elif defined(___LOG_INFO)
#  include <iostream>
#  define LOGD(...)
#  define LOGI(...) std::cout << "  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGW(...) std::cout << "  * Warning: " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGE(...) std::cout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#elif defined(___LOG_WARNING)
#  include <iostream>
#  define LOGD(...)
#  define LOGI(...)
#  define LOGW(...) std::cout << "  * Warning: " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;
#  define LOGE(...) std::cout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#elif defined(___LOG_ERROR)
#  include <iostream>
#  define LOGD(...)
#  define LOGI(...)
#  define LOGW(...)
#  define LOGE(...) std::cout << "  *** Error:  " << __VA_ARGS__ << "\t -  " << LOG_TAG << std::endl;

#else
// NO LOGS
#  define LOGV(...)
#  define LOGD(...)
#  define LOGI(...)
#  define LOGW(...)
#  define LOGE(...)
#endif
