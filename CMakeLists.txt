# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.15)

# Set the project name and version
project(Qt6Application VERSION 1.0)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add QT
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Init QT
qt_standard_project_setup()

# Add the real code
add_subdirectory(src/app)
add_subdirectory(src/mylib)

# Add image resources
qt_add_resources(${PROJECT_NAME} imageresources
    PREFIX "/"
    BASE "resources"
    FILES resources/images/logo.png
          resources/images/logo2.png
)
# Link QT and our internal lib
target_link_libraries(${PROJECT_NAME} PRIVATE
  mylib
  Qt6::Widgets
)
