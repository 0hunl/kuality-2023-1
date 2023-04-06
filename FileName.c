#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int price, stock = 10;
	int menu;
	
	
	
	printf("1.금액 투입: ");
	scanf("%d", &price);
	
	printf("-----------메뉴-----------\n");
	printf("1. 핫식스(1200), 2. 게토레이(900), 3. 펩시콜라(1000), 4. 레쓰비(600), 5. 밀키스(900)\n");
	printf("2.음료수 선택: ");
	scanf("%d", &menu);
	
	
	if (menu == 1) {
		printf("잔돈 반환: %d원\n", price - 1200);
		stock--;
		
	}
	else if (menu == 2) {
		printf("잔돈 반환: %d원\n", price - 900);
		stock--;
	}
	else if (menu == 3) {
		printf("잔돈 반환: %d원\n", price - 1000);
		stock--;
	}
	else if (menu == 4) {
		printf("잔돈 반환: %d원\n", price - 600);
		stock--;
	}
	else if (menu == 5) {
		printf("잔돈 반환: %d원\n", price - 900);
		stock--;
	}
	else {
		printf("잘못된 선택입니다.\n");
	}

	printf("남은 재고: %d\n", stock);

	


	
}