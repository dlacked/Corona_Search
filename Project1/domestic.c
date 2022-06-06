#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct corona {
	char location[20];
	char infected[15];
};

void domestic_func(void) {
	struct corona list[18] = { {"Gyeonggi", "4,938,082"}, //[평가항목 5]: 구조체 사용
		{"Seoul", "3,627,855"},
		{"Busan", "1,095,245"},
		{"Gyeongnam", "1,902,089"},
		{"Incheon", "1,074,417"},
		{"Gyeongbuk", "779,934"},
		{"Daegu", "761,893"},
		{"Chungnam", "715,365"},
		{"Jeonbuk", "599,966"},
		{"Jeonnam", "595,840"},
		{"Chungbuk", "555,385"},
		{"Gwangju", "533,175"},
		{"Gangwon", "517,231"},
		{"Daejeon", "511,844"},
		{"Ulsan", "379,326"},
		{"Jeju", "235,935"},
		{"Sejong", "138,935"},
		{"Quarantine", "11178"} };

	printf("\nUpdated at 2022/06/05 17:35\n");
	printf("\n  LOCATION\tINFECTED\n");

	for (int i = 0; i < 18; i++) {
		if (strlen(list[i].location) < 6) {
			printf("  %s\t\t%s\n", list[i].location, list[i].infected);
		}
		else {
			printf("  %s\t%s\n", list[i].location, list[i].infected);
		}
	}
	printf("\n");

}