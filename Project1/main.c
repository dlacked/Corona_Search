/*[평가항목 1]: 과제 설명

컴퓨터프로그래밍 평가과제 (배점 25점)
학과: 컴퓨터공학부
학번: 202202984
이름: 임창용

과제 주제: 이 프로그램은 2022년 6월 5일 기준 코로나 종합 정보를 담고 있는 프로그램입니다.
이 프로그램은 지정된 명령어를 사용하여 국내 지역별 확진자뿐만 아니라 국내 지역별
백신 접종 현황 등의 정보를 출력할 수 있도록 구성하였습니다.

[국내 지역별 누적 확진자 현황 확인 방법]
domestic /i

[국내 지역별 백신 접종 현황 확인 방법]
domestic /v

[해외 국가별 누적 확진자 현황 확인 방법]
overseas /i
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void domestic_func(void); //[평가항목 8]: 다중 소스 파일 사용

void overseas_func(void); 

void vaccinated_func(void); 

void board(void) { //[평가항목 2]: 함수 사용, [평가항목 6]: 포인터 활용
	char* main[2] = { "dlacked Corona Searcher [Version 0.0.0]\n", "(c) 2022 dlacked. All Rights Reserved.\n\n"}; //6 포인터 활용, 3 배열 사용	
	printf("%s%s", main[0], main[1]);
}

int main() {
	board();

	while (1) {
		char command[20]; //[평가항목 3]: 배열 사용
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
			printf("'%s'은(는) 내부 또는 외부 명령, 실행할 수 있는 프로그램, 또는\n배치 파일이 아닙니다.\n\n", command);
	}
	
}