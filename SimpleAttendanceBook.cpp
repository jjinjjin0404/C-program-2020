//간단한 출석부
#include<stdio.h>
#define SIZE 16

int main(void)
{
	int att_book[SIZE]={0};
	int i, count=0;
	
	//사용자로부터 출석인지 결석인지를 받아서 배열에 저장
	for(i=0;i<SIZE;i++)
	{
		printf("%d번째 강의에 출석하셨나요?(yes=1,no=0):",i+1);
		scanf("%d",&att_book[i]);
	 }
	 //배열을 검사하여서 결석한 횟수를 계산한다.
	 for(i=0; i<SIZE; i++){
	 	if(att_book[i]==0)
	 		count++;
	 } 
	 //이번 학기 결석률을 계산한다.
	 double ratio = count /16.0;
	 if (ratio > 0.3)
	 	printf("수업 일수 부족입니다.(%f%%).\n",ratio*100.0);
		 
		 return 0; 
 } 
