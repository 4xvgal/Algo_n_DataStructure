#include<iostream>
#include "measuretime.h"
using namespace std;
//measureTime 구현부
void measureTime::startMeasure(){
    start = clock();
}
void measureTime::endEMeasure(){
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << duration << " sec" << endl;
}
 