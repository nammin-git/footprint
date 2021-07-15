//배열
#include <stdio.h>

int main()
{

	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;
	
	printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_2);
	printf("지하철 2호차에 %d 명이 타고 있습니다.\n", subway_3);


	//배열 ... 여러 개의 변수를 함께, 동시에 생성
	int subway_array[3];

	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i+1, subway_array[i]);
	}

	//값 설정 방법
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	int arr[]={1,2};	//자동으로 arr크기는 2
	
	int arr[10]={1,2};	//초기화 안 하면 자동으로 0 값을 가짐

	//배열 크기는 항상 상수로 선언
	int size = 10;
	int arr[size];		//변수는 크기가 안 됨



	//문자 vs 문자열
	char c = 'A';
	printf("%c\n", c);

	//char str[6] = "coding";
	//printf("%s\n", str);	//문자의 끝을 인식 못함

	//문자열 끝에는 끝을 의미하는 NULL문자 포함해줘야 함
	//문자열의 NULL문자는 \0
	char str[7] = "coding";
	printf("%s\n", str);

	//사이즈 지정 안 해주면 자동으로 끝을 의미하는 문자 입력해줌
	char str[] = "coding";
	printf("%s\n", str);
	printf("%d\n", sizeof(str));

	//한글은 1글자에 2 byte
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	

	//문자열 심화
	//char c_array[7] = { 'c','o','d','i','n','g','\0' };
	char c_array[10] = { 'c','o','d','i','n','g' };
	
	printf("%s\n", c_array);
	
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%c\n", c_array[i]);
	}
	
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%d\n", c_array[i]);
	}	

	//문자열 입력받기
	char name[256];
	printf("이름을 입력하세요: ");
	scanf_s("%s", name, sizeof(name));

	printf("\n입력받은 이름은 %s입니다.\n", name);

	//아스키 코드
	for (int i = 0; i < 128; i++) {
		printf("아스키코드 정수 %d : %c\n", i, i);
	}

	return 0;
}