# Contenido de JsonLibrary.cmake
function(add_json_library)
    include(FetchContent)

    FetchContent_Declare(
        nlohmann_json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.10.4  # Puedes ajustar la versión según tus necesidades
    )

    FetchContent_MakeAvailable(nlohmann_json)

    # Asumiendo que tu objetivo es ${PROJECT_NAME}
    target_include_directories(${PROJECT_NAME} PRIVATE ${nlohmann_json_SOURCE_DIR}/include)
endfunction()
