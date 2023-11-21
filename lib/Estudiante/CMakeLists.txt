add_library(MyEstudiante Estudiante.cpp Estudiante.h)

# Incluir la carpeta actual para buscar los encabezados
target_include_directories(MyEstudiante PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../pandalib)

target_include_directories(MyEstudiante PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(MyEstudiante MyPersons)

