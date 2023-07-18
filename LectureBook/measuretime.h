#include<ctime>

//시간 측정을 위한 클래스
class measureTime{
private:
    clock_t start, finish;
    double duration;
public:
    void startMeasure();
    void endEMeasure();
};