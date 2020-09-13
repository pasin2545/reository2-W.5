#include<stdio.h>

int main() {
	int num1,num2[10],a;
	scanf_s("%d", &num1);
	if (num1 >= 1 && num1 <= 10) {
		for (int i = 0; i < num1; i++) {
			scanf_s("%d", &num2[i]);
			if (num2[i] >= 1) {
				int re =0;
				a = num2[i];
				//จำนวนเฉพาะ
				for (int j = 2; j < a; j++) {
					if (a % j == 0) {
						re = re + 2;
						num2[i] = re;
					}
				}
					//จำนวนคี่
				if (a % 2 != 0) {
					num2[i] = 1;
				}
				if (a == 1 || a == 2) {
					num2[i] = 1;
				}
				}
			}
		}
		//เเสดงผล
		for (int i = 0; i < num1; i++) {
			if (num2[i] >= 1) {
				if (num2[i] == 1) {
					printf("T\n");
				}
				else {
					printf("F\n");
				}
			}
		}
		return 0;
	}