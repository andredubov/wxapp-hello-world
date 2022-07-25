cmake_minimum_required(VERSION 3.23.0)
project(wxapp VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SOURCES ${PROJECT_SOURCE_DIR}/src/*)

find_package(wxWidgets 3.2.0 COMPONENTS core base REQUIRED)
if(wxWidgets_FOUND)
    message("wxWidgest FOUND!!!")
    include(${wxWidgets_USE_FILE})
    add_executable(${PROJECT_NAME} ${SOURCES})
    target_link_libraries(${PROJECT_NAME}  ${wxWidgets_LIBRARIES})
else(wxWidgets_FOUND)
    message("wxWidgest NOT FOUND!!!")
endif(wxWidgets_FOUND)


# add_subdirectory(libs/wxWidgets-3.2.0)
# add_executable(${PROJECT_NAME} ${SOURCES})
# target_link_libraries(${PROJECT_NAME} wx::core wx::base)

