qt_add_executable(Qt6Application
  mainwindow.ui
  mainwindow.cpp
  main.cpp
  )

# Link the executable to the library
target_link_libraries(Qt6Application PRIVATE Qt6::Widgets)

set_target_properties(Qt6Application PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
