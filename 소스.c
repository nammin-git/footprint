//상품 재고 관리 시스템
#include <stdio.h>
#define ITEMS 10

void main()
{
	//상품 번호마다 장소를 저장
	int a[ITEMS] = { 4,2,5,1,3,2,2,4,1,3 };

	//상품 번호 입력받기
	int target;

	printf("상품 번호를 입력해주세요: ");
	scanf_s("%d", &target);

	printf("상품 %d번은 %d구역에 있습니다.\n", target, a[target - 1]);

}


