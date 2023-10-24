// 연결 리스트 스택 구현 - c

#include<iostream>
#include<cstdlib>
using namespace std;
//전역변수
typedef int element;

//노드 구조체
typedef struct _Node{
    element data; //데이터 선언
    struct _Node* link; // 다음 노드 구조체 포인터 
}Node;

//헤드 포인터 생성
Node* head = NULL;

void error(const char* message){
    fprintf(stderr,"%s\n", message);
}

//연결리스트 스택이 비어있는지 확인
bool is_emtpy(){
    if(head == NULL){ //헤드 포인트 head 가 NULL 이면 스택이 비어있다.
        return true;
    }
    return false; // head 가 NULL 이 아니면 스택이 비어있지 않다.
}

//연결리스트의 앞부분에 삽입
Node* insertFirst(Node *head,element value){ //head 노드, 삽입할 데이터값
    Node* p =(Node*)malloc(sizeof(Node)); //새로 생성할 p 노드 할당
    p ->data = value; //p에 데이터 삽입
    p ->link = head; //p 의 다음 노드를 가리키는 포인터를 매개변수 head의 주소로 설정.
    head = p; //head 는 p 의 주소값을 가지게 되어 head를 참조할시 p 를 참조하게 된다.
    return head; //head 노드를 반환한다.
}

//연결리스트의 중간에 삽입
Node* insert(Node *head, Node *pre,element value){
    Node* p= (Node*)malloc(sizeof(Node)); //새로 생성할  p 노드 할당
    p -> data = value;
    p -> link = head;
    
}

//노드 전부를 출력하는 함수
void NodePrint(Node *head){
        for(Node *p = head;p!=NULL;p=p->link){
            printf("%d->",p->data);
        }
        printf("NULL\n");
}

//노드 pop 함수 
element pop(){
    Node *p; //때어낸 노드 주소를 저장할 포인터 
    element e;  // 때어낸 노드에서 값을 저장하여 반환할 변수
    
    if(is_emtpy()) error("스택 공백 에러");

    p = head; //최상단 노드의 주소를 p  에 할당.
    head = p->link; // p는 최상단 노드이고 head에 p의 link 를 할당하면 p 가 가리키는 다음 노드의 주소를 할당하게 된다.
    e = p->data; //반환할 데이터 p.data 를 e 에 저장한다.
    free(p); //떄어낸 최상단 노드를 반환한다.
    return e; //때어낸 노드의 데이터를 반환한다.
}

//노드 모두 반환 함수

void destory_stack(){
    while(is_emtpy() == 0) {
        printf("Destroying ... %d\n",pop());
    }
}
int main(){
    for(int i=0;i<5;i++){
        head =insertFirst(head,i);
        NodePrint(head);
    }

    destory_stack(); //모든 노드 반환
}




/*
    //노드 설명을 위한 예제
    Node *head= NULL; //NULL 헤드 포인터 

    head = (Node *) malloc(sizeof(Node)); // 노드 구조체 Node 만큼의 메모리를 head 포인터에 할당
    head -> data = 1;// 데이터 할당
    head -> link = NULL; //다음 노드 링크 NULL 로 미할당

    //다음 노드

    Node *p = (Node *)malloc(sizeof(Node)); //노드 만큼 포인터에 할당
    p -> data = 2; //데이터 할당
    p -> link = NULL;

    //두개 노드 연결

    head -> link = p; // 다음 노드 p 의 주소를 head.link 에 반환
*/
