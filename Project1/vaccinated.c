#include <stdio.h>

struct corona {
	char location[20];
	char infected[15];
	char rate[10];
};

void vaccinated_func() {
	struct corona list[17] = { {"Gyeonggi", "11,689,260", "86.70%"}, //[평가항목 5]: 구조체 사용
		{"Seoul", "8,252,019", "87.77%"},
		{"Gyeongnam", "2,850,158", "86.34%"},
		{"Busan", "2,847,909", "85.52%"},
		{"Incheon", "2,540,623", "86.77%"},
		{"Gyeongbuk", "2,266,161", "86.61%"},
		{"Daegu", "1,994,728", "84.03%"},
		{"Chungnam", "1,877,567", "88.93%"},
		{"Jeonnam", "1,635,975", "89.56%"},
		{"Jeonbuk", "1,577,387", "88.62%"},
		{"Chungbuk", "1,413,333", "88.81%"},
		{"Gangwon", "1,336,227", "87.25%"},
		{"Gwangju", "1,249,577", "87.01%"},
		{"Daejeon", "1,232,541", "85.28%"},
		{"Ulsan", "958,193", "85.72%"},
		{"Jeju", "583,559", "86.73%"},
		{"Sejong", "293,696", "79.13%"}};

	printf("\nUpdated at 2022/06/05 17:35\n");
	printf("\n  LOCATION\tVACCINATED\tRATE\n");

	for (int i = 0; i < 17; i++) {
		if (strlen(list[i].location) < 6) {
			printf("  %s\t\t%s", list[i].location, list[i].infected);
		}
		else {
			printf("  %s\t%s", list[i].location, list[i].infected);
		}
		if (strlen(list[i].infected) < 8) {
			printf("\t\t%s\n", list[i].rate);
		}
		else {
			printf("\t%s\n", list[i].rate);
		}
	}
	printf("\n");
}