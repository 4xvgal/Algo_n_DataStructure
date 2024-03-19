add_executable(main main.cpp)

add_subdirectory(measuretime)
add_subdirectory(QuickSort)
add_subdirectory(RealRandom)

target_link_libraries(main
    PRIVATE
        measuretime
        QuickSort
        RealRandom
    )