add_library(tmp-lib SHARED)
target_include_directories(tmp-lib PUBLIC $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${INCLUDE_INSTALL_DIR}>)
target_sources(tmp-lib PRIVATE ${CMAKE_SOURCE_DIR}/src/tmp.cpp)