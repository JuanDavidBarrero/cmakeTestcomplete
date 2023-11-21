cmake_minimum_required(VERSION 3.12)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

set(PROJECT_NAME MyApp)

include(cmake/JsonLibrary.cmake)

# Agregar las subcarpetas
add_subdirectory(lib)

# Agregar el ejecutable principal
add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE pandalib)

# Llamar a la función para añadir nlohmann/json a tu proyecto
message ("Installing json library")
add_json_library()

# Enlazar con las bibliotecas necesarias
target_link_libraries(${PROJECT_NAME} MyPersons MyEstudiante nlohmann_json::nlohmann_json)
