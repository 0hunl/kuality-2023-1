#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int price, stock = 10;
	int menu;
	
	
	
	printf("1.�ݾ� ����: ");
	scanf("%d", &price);
	
	printf("-----------�޴�-----------\n");
	printf("1. �ֽĽ�(1200), 2. ���䷹��(900), 3. ����ݶ�(1000), 4. ������(600), 5. ��Ű��(900)\n");
	printf("2.����� ����: ");
	scanf("%d", &menu);
	
	
	if (menu == 1) {
		printf("�ܵ� ��ȯ: %d��\n", price - 1200);
		stock--;
		
	}
	else if (menu == 2) {
		printf("�ܵ� ��ȯ: %d��\n", price - 900);
		stock--;
	}
	else if (menu == 3) {
		printf("�ܵ� ��ȯ: %d��\n", price - 1000);
		stock--;
	}
	else if (menu == 4) {
		printf("�ܵ� ��ȯ: %d��\n", price - 600);
		stock--;
	}
	else if (menu == 5) {
		printf("�ܵ� ��ȯ: %d��\n", price - 900);
		stock--;
	}
	else {
		printf("�߸��� �����Դϴ�.\n");
	}

	printf("���� ���: %d\n", stock);

	


	
}