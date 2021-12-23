/*
* 2021-12-23
* 스택에 대해 스스로 고찰
* 크기가 정해진 배열에 자료를 채워넣음
* 
* 함수 1.push() 함수는 자료를 배열의 맨 위에 채워넣음
* 모든 배열에 값이 저장된 후 push를 실행하면 채워지지 않음
* 
* 함수 2.pop() 함수는 배열의 끝에 채워진 값을 출력하고 그 자리의 값을 지움
* 0번째 배열까지 비어 있을 때 함수 실행하면 배열이 비어있음을 출력
*/
#define SIZE 100
#include <stdio.h>

int stack[SIZE];
int top = -1;			//초기 배열의 데이터가 없음을 표시(하나 채워지면 0으로 배열 시작함, 99보다 크면 가득참)

void push(int a);			//푸시는 배열에 저장할 값을 필요로 함
void pop();					//팝은 그냥 맨위의 데이터를 지우고 그자리를 비우는 용도

int main() 
{
	push(3);
	push(4);
	push(12);
	pop();

}

void push(int a) {
	top++;			//배열의 시작인 0부터 값을 집어넣음

	if (top == 100)	//배열의 0~99까지 값이 다 차있으면
	{
		printf("모든 배열에 데이터가 존재합니다.\n"); 
		top--;				//배열 카운트 다시 99로 맞춰줌
	}
	else
	{
		stack[top] = a;
	}
}

void pop() {
	if (top == -1) printf("배열의 top에 출력할 값이 없습니다.\n");
	else printf("top = %d\n", stack[top--]);
}