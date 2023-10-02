add_library(${STUDENT_LIBRARY}
    estudiante.cpp
    estudiante.h
)

target_include_directories(${STUDENT_LIBRARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${STUDENT_LIBRARY} ${PERSON_LIBRARY})
