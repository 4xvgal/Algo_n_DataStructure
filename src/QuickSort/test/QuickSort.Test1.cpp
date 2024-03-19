#include<iostream>


//내부 라이브러리 import
#include "realRandom_urandom.hpp" //랜덤 생성 객체
#include "QuickSort.hpp" //퀵소트 객체
#include "measuretime.hpp" //시간 측정 객체

using namespace std;

int main(){
    //라이브러리 객체 생성
    realRandom_urandom r; 
    QuickSort* q; 
    measureTime m; 

    //프로그램 변수 선언
    int size = 5;
    int range = 100;
    int* arr = new int[size]; // 정렬할 배열 생성

    //실행
    for(int i=0;i<size;i++){
        arr[i] = r.getRand() % range + 1; //랜덤값으로 배열 초기화
    }

    cout << "Before Sorting" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " "; //랜덤으로 생성된 배열 출력
    }
      
    q = new QuickSort(arr, size); //퀵소트 객체 생성

    m.startMeasure(); //시간 측정 시작

    q->QuickSortFunc(0, size-1); //퀵소트 수행
    
    m.endEMeasure(); //시간 측정 종료

    cout << endl << "After Sorting" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " "; //정렬된 배열 출력
    }
    cout << endl << "Sorting Duration : " << m.getDuration() << " sec" << endl; //소요시간 출력

    delete q; //퀵소트 객체 삭제
    delete[] arr; //배열 삭제
}
