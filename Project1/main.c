/*[���׸� 1]: ���� ����

��ǻ�����α׷��� �򰡰��� (���� 25��)
�а�: ��ǻ�Ͱ��к�
�й�: 202202984
�̸�: ��â��

���� ����: �� ���α׷��� 2022�� 6�� 5�� ���� �ڷγ� ���� ������ ��� �ִ� ���α׷��Դϴ�.
�� ���α׷��� ������ ��ɾ ����Ͽ� ���� ������ Ȯ���ڻӸ� �ƴ϶� ���� ������
��� ���� ��Ȳ ���� ������ ����� �� �ֵ��� �����Ͽ����ϴ�.

[���� ������ ���� Ȯ���� ��Ȳ Ȯ�� ���]
domestic /i

[���� ������ ��� ���� ��Ȳ Ȯ�� ���]
domestic /v

[�ؿ� ������ ���� Ȯ���� ��Ȳ Ȯ�� ���]
overseas /i
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void domestic_func(void); //[���׸� 8]: ���� �ҽ� ���� ���

void overseas_func(void); 

void vaccinated_func(void); 

void board(void) { //[���׸� 2]: �Լ� ���, [���׸� 6]: ������ Ȱ��
	char* main[2] = { "dlacked Corona Searcher [Version 0.0.0]\n", "(c) 2022 dlacked. All Rights Reserved.\n\n"}; //6 ������ Ȱ��, 3 �迭 ���	
	printf("%s%s", main[0], main[1]);
}

int main() {
	board();

	while (1) {
		char command[20]; //[���׸� 3]: �迭 ���
		char domestic_c[] = "domestic /i";
		char overseas_c[] = "overseas /i";
		char vaccinated_c[] = "domestic /v";

		int domestic = 0, overseas = 0, vaccinated = 0, count = 0;
		printf("User>> ");
		gets(command, 20);
		for (int i = 0; command[i] != '\0'; i++) {
			count++;
			if (command[i] == domestic_c[i]) {
				domestic++;
			}
			if (command[i] == overseas_c[i]) {
				overseas++;
			}
			if (command[i] == vaccinated_c[i]) {
				vaccinated++;
			}
		}
		if (domestic == 11 && count == 11)
			domestic_func();
		else if (overseas == 11 && count == 11)
			overseas_func();
		else if (vaccinated == 11 && count == 11)
			vaccinated_func();
		else
			printf("'%s'��(��) ���� �Ǵ� �ܺ� ���, ������ �� �ִ� ���α׷�, �Ǵ�\n��ġ ������ �ƴմϴ�.\n\n", command);
	}
	
}