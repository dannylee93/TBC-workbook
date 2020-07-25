#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define YEARS 3
#define MONTHS 12

int main() {
	
	
	double year2019[MONTHS] = { -0.9, 1.0, 7.1, 12.1, 19.4, 22.5, 25.9, 27.2, 22.6, 16.4, 7.6, 1.4 };
	double year2018[MONTHS] = {-4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6};
	double year2017[MONTHS] = {-1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9};

	//temperature data
	double temp_data[YEARS][MONTHS] = { {-1.8, -0.2, 6.3, 13.9, 19.5, 23.3, 26.9, 25.9, 22.1, 16.4, 5.6, -1.9},
										{-4.0, -1.6, 8.1, 13.0, 18.2, 23.1, 27.8, 28.8, 21.5, 13.1, 7.8, -0.6},
										{ -0.9, 1.0, 7.1, 12.1, 19.4, 22.5, 25.9, 27.2, 22.6, 16.4, 7.6, 1.4 } };

	printf("[temperature data]\n");
	printf("Year Index :");
	for (int i = 0; i < MONTHS; ++i) {
		printf("\t%d", i + 1);
	};
	printf("\n");
	
	for (int j = 0; j < YEARS; j++) {
		printf("Year %d    :", j);
		for (int k = 0; k < MONTHS; k++)
			printf("\t%.1f", temp_data[j][k]);
		printf("\n");
	};

	//average temperature
	double avg = 0.0;
	
	printf("[Yearly average temperature of 3 years]\n");
	for (int j = 0; j < YEARS; j++) {
		printf("Year %d  :", j);
		for (int k = 0; k < MONTHS; k++)
			avg += temp_data[j][k];
		avg = avg / MONTHS;
		printf(" average tempterature = %.1f \n", avg);
		
		avg = 0.0;
	};

	//monthly average
	double mon_avg = 0.0;

	printf("[Monthly average temperature of 3 years]\n");
	printf("Year Index :");
	for (int i = 0; i < MONTHS; ++i) {
		printf("\t%d", i + 1);
	};
	printf("\n");

	printf("Avg temps  :");
	for (int j = 0; j < MONTHS; j++) {
		for (int k = 0; k < YEARS; k++) {
			mon_avg += temp_data[k][j];
			mon_avg = mon_avg / YEARS;
		};
		printf("\t%.1f", mon_avg);
		mon_avg = 0.0;
	};

}