#include "measuretime.hpp"
#include<iostream>

//measureTime 구현부
void measureTime::startMeasure(){
    start = clock();
}
void measureTime::endEMeasure(){
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    std::cout << duration << " sec" << std::endl;
}
 