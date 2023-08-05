//ch3-4.cpp
//후위표기 수식의 계산 프로그램
#include<iostream>
#include<cstdlib>
#define MAX_STACK_SIZE 100

typedef double Element;

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
void print_stack(char msg[]) {
    int i;
    std::cout << msg << "   " << size() << std::endl;
    for (i=0; i<size(); i++){
        std::cout << data[i] << "   ";
    }
    std::cout << std::endl;
}
//후위 표시 계산 함수
//문자열을 받아 한자리수에 대한 연산을 실행함
double calc_postfix(char expr[]){
    char c;
    int i =0;
    double val = 0 , val1 = 0 ,val2 = 0;
    init_stack();
    while(expr[i] !='\0') {
        c = expr[i++];
        if (c>='0' && c<='9') {
            val = c - '0';
            push(double(val));
        }
        else if(c=='+' || c == '-' || c=='*' || c=='/'){
            val2 = pop();
            val1 = pop();
            switch(c){
                case'+': 
                    push(val1 + val2); break;
                case'-': 
                    push(val1 -val2); break;
                case'*': 
                    push(val1 * val2); break;
                case'/':
                    push(val1 / val2); break;
            }
        }
    }
    return pop();
}


int main(){
    char expr[2][80] ={ "8 2 / 3- 3 2 * +","1 2 / 4 * 1 4 / *"};
    std::cout <<"수식   " <<expr[0] << " =  " << calc_postfix(expr[0]) << std::endl;
    std::cout <<"수식   " <<expr[1] << " =  " << calc_postfix(expr[1]) << std::endl;
    return 0;
}