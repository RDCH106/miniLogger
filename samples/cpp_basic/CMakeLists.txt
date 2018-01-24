# Compile sample basic project
set(PROJ_NAME cpp_basic)
project(${PROJ_NAME})

include_directories( ${MINILOGGER_EXTRA_INCS} )

add_executable(${PROJ_NAME} main.cpp)

target_link_libraries(${PROJ_NAME} ${MINILOGGER_EXTRA_LIBS})

install(TARGETS ${PROJ_NAME} DESTINATION "${CMAKE_INSTALL_PREFIX}/${PROJ_NAME}/bin")
