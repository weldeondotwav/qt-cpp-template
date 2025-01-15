qt_add_library(mylib STATIC
    mylib.cpp
)
target_link_libraries(mylib PRIVATE Qt6::Core)
target_include_directories(mylib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})