add_executable(main main.cpp)

add_subdirectory(measuretime)
add_subdirectory(QuickSort)

target_link_libraries(main
    PRIVATE
        measuretime
        QuickSort
    )