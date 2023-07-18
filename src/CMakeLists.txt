add_executable(main main.cpp)

add_subdirectory(measuretime)

target_link_libraries(main
    PRIVATE
        measuretime
    )