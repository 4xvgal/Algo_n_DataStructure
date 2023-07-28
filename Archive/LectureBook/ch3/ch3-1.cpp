//3-1.cpp
//배열열을 이용한 int 스택의 구현

#include<iostream>
#include<stdlib.h>
#include<string>

#define MAX_STACK_SIZE 100

typedef int Element;

Element data[MAX_STACK_SIZE];
int top;


//오류 상황 처리를 위한 함수. 메세지 출력 후 프로그램 종료

void error(std::string str){
    std::cout << str << std::endl;
    exit(1);
}

//스택의 주요 연산 : 공통

//스택 초기화
void init_stack() {
    top = -1;
}
//스택이 비어있다면 1을 리턴
int is_empty() {
    return top == -1;
}
//스택이 꽉 차있다면 1을 리턴
int is_full() { return top == MAX_STACK_SIZE-1;}
//스택의 현재 사이즈를 리턴
int size() {return top+1;}


//스택에 푸쉬
void push(Element e){
    if(is_full() ){
        error ("스택 포화 에러");
    }
    data[++top] = e;
}
//스택의 최상단 데이터를 삭제
Element pop(){
    if(is_empty()){
        error("스택 공백 에러");
    }
    return data[top--];
}
//스택 최상단의 데이터를 리턴
Element peek(){
    if(is_empty()){
        error ("스택 공백 에러");
    }
    return data[top];
}

//스택 테스트 코드 : 요소 종류마다 수정
void print_stack(std::string msg) {
    int i;
    std::cout << msg << "   " << size() << std::endl;
    for (i=0; i<size(); i++){
        std::cout << data[i] << "   ";
    }
    std::cout << std::endl;
}
int main(){
    int i;
    
    init_stack();
    for(i=1;i<10;i++){
        push(i);
    }
    
    print_stack("스택 푸쉬 9회 ");
    
    std::cout << "pop()" << " --> " << pop() << std::endl;
    std::cout << "pop()" << " --> " << pop() << std::endl;
    std::cout << "pop()" << " --> " << pop() << std::endl;
    
    print_stack("스택 pop 3회");

    return 0;
}