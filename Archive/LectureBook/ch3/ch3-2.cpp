// 3-2.cpp 
// 클래스를 저장하는 스택
//구조체로 작성된것들을 클래스로 변형함

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

#define MAX_STACK_SIZE 100
typedef class Student Element;

//에러 발생시 메세지 출력후 프로그램 종료
void error(string str){
    std::cout << str << std::endl;
    exit(1);
}

class Student{
private:
    int id;
    string name;
    string dept;
public:
    Student(){
        id = 0;
        name = "NULL";
        dept = "NULL";
    }
    int getId(){return id;};
    string getName(){return name;};
    string getDept(){return dept;};
    void setId(int input) {this -> id = input;}
    void setName(string input) {this -> name = input;}
    void setDept(string input) {this -> dept = input;}
};
class StackStudent{
private:
    Element data[MAX_STACK_SIZE];
    int top;
public:
    StackStudent(){
        top = -1;
    };
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
        error("스택 포화 에러");
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
    void print_stack(string msg);
};
//스택을 출력
void StackStudent::print_stack(string msg){
    cout << msg << "    " << size() << endl;
    for (int i=0;i<size();i++){
        cout << data[i].getId() << ' ' << data[i].getName() << ' '<< data[i].getDept() <<endl;
    }
}

//데이터 입력을 위한 클래스
Student setStudent(int id, string name, string dept){
    Student tmp;
    tmp.setId(id);
    tmp.setName(name);
    tmp.setDept(dept);
    return tmp;
}

int main(){
    StackStudent a;
    Student tmp;

    a.init_stack();
    a.push(setStudent(20203103, "LJM", "Computer Science"));
    a.push(setStudent(20201111,"EUO", "Computer Science"));
    a.push(setStudent(1,"s","d")); 
    a.push(tmp);
    a.print_stack("after 4 push");
    a.pop();
    a.print_stack("after 1 pop");
}
