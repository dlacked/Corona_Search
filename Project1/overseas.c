#include <stdio.h>


void overseas_func() {
	FILE* fp; //[평가항목 7]: 파일 입출력
	char *list[50]; //[평가항목 4]: 포인터 사용
	fp = fopen("overseas.txt", "r");
	printf("\nUpdated at 2022/06/05 17:35\n");
	printf("\n  COUNTRY\t\t\t\tINFECTED\n");
	for (int i = 0; i < 216; i++) {
		fgets(list, 50, fp);
		printf("  %s", list);
	}
	printf("\n\n");
}