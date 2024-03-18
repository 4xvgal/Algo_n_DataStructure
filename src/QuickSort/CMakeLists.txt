add_library(QuickSort "")
target_sources(QuickSort
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/QuickSort.Test.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/QuickSort.hpp
    )

target_include_directories(QuickSort
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )