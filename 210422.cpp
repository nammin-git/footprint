#include <stdio.h>
/*
//시험성적 91~100 까지 A 
void main(void)
{
	int score;
	int iscore, jscore;
	
	scanf_s("%d", &score);
	
	(score >= 0) || (score <= 100);
	
	iscore = (score%10)!=0
	jscore = (score%10)==0
	
	switch(iscore)
	case 100:
		case
	
}


//윤년
int main(void)
{
	int year;
	
	scanf("%d", &year);	
	
	if (year%4==0)
	{
		if (year%100==0)
			if(year%400==0)
				printf("1");
			else
				printf("0");
		else
			printf("1");
	}
	else
		printf("0");
	
return 0;
} 
*/

//사분면 고르기
int main(void)
{
	int x, y;
	
	scanf("%d %d", &x, &y);
	//두 줄에 출력 불가능? 
/*	
	if ((x>0)&&(x<1000)){
		if ((y>0)&&(y<=1000))
			printf("1");
		else if ((y<0)&&(y>-1000))
			printf("4");
		else
			return 0;
	}
	else if ((x<0)&&(x>-1000)){
		if ((y>0)&&(y<=1000))
			printf("2");
		else if ((y<0)&&(y>-1000))
			printf("3");
		else
			return 0;
	}
	else
		return 0;
*/	

if (X>0)
{
	if (y>0)
	printf("1사분면");
	else if (y<0) 
	printf("4사분면");
	else
	return 0;
}
else if (x<0)
{
	if (y>0)
	printf("2사분면");
	else if (y<0) 
	printf("3사분면");
	else
	return 0;
}
	
	return 0;
} 









