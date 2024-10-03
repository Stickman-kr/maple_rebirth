#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i = 0;
	srand(time(NULL));
	int count80 = 0;
	int count90 = 0;
	int count100 = 0;
	int count110 = 0;
	int count120 = 0;
	int count130 = 0;
	int count140 = 0;
	int count150 = 0;
	int count160 = 0;
	for (int i = 0; i < 100000; i++) {
		
		int gaetsu = 4;
		int chuop = 0;
		int random = rand() % 19;
		int random2 = rand() % 100;
		if (random < gaetsu) {
			gaetsu -= 1;
			if (random2 < 28) {
				chuop += 27;
			}
			else if (random2 < 73) {
				chuop += 36;
			}
			else if (random2 < 98) {
				chuop += 45;
			}
			else if (random2 < 100) {
				chuop += 54;
			}
		}

		int random3 = rand() % 18;
		int random4 = rand() % 100;
		if (random3 < gaetsu) {
			gaetsu -= 1;
			if (random4 < 28) {
				chuop += 20;
			}
			else if (random4 < 73) {
				chuop += 25;
			}
			else if (random4 < 98) {
				chuop += 30;
			}
			else if (random4 < 100) {
				chuop += 35;
			}
		}

		int random5 = rand() % 17;
		int random6 = rand() % 100;
		if (random5 < gaetsu) {
			gaetsu -= 1;
			if (random6 < 28) {
				chuop += 20;
			}
			else if (random6 < 73) {
				chuop += 25;
			}
			else if (random6 < 98) {
				chuop += 30;
			}
			else if (random6 < 100) {
				chuop += 35;
			}
		}

		int random7 = rand() % 16;
		int random8 = rand() % 100;
		if (random7 < gaetsu) {
			gaetsu -= 1;
			if (random8 < 28) {
				chuop += 20;
			}
			else if (random8 < 73) {
				chuop += 25;
			}
			else if (random8 < 98) {
				chuop += 30;
			}
			else if (random8 < 100) {
				chuop += 35;
			}
		}

		int random9 = rand() % 15;
		int random10 = rand() % 100;
		if (random9 < gaetsu) {
			gaetsu -= 1;
			if (random10 < 28) {
				chuop += 16;
			}
			else if (random10 < 73) {
				chuop += 20;
			}
			else if (random10 < 98) {
				chuop += 24;
			}
			else if (random10 < 100) {
				chuop += 28;
			}
		}
		
		int random11 = rand() % 14;
		int random12 = rand() % 100;
		if (random11 < gaetsu) {
			if (random12 < 28) {
				chuop += 40;
			}
			else if (random12 < 73) {
				chuop += 50;
			}
			else if (random12 < 98) {
				chuop += 60;
			}
			else if (random12 < 100) {
				chuop += 70;
			}
		}

		printf("%d\t", chuop);

		if (chuop >= 80) {
			count80 += 1;
		}
		if (chuop >= 90) {
			count90 += 1;
		}
		if (chuop >= 100) {
			count100 += 1;
		}
		if (chuop >= 110) {
			count110 += 1;
		}
		if (chuop >= 120) {
			count120 += 1;
		}
		if (chuop >= 130) {
			count130 += 1;
		}
		if (chuop >= 140) {
			count140 += 1;
		}
		if (chuop >= 150) {
			count150 += 1;
		}
		if (chuop >= 160) {
			count160 += 1;
		}
	}

	printf("\n80급 이상인 장비 갯수%d\n", count80);
	printf("90급 이상인 장비 갯수%d\n", count90);
	printf("100급 이상인 장비 갯수%d\n", count100);
	printf("110급 이상인 장비 갯수%d\n", count110);
	printf("120급 이상인 장비 갯수%d\n", count120);
	printf("130급 이상인 장비 갯수%d\n", count130);
	printf("140급 이상인 장비 갯수%d\n", count140);
	printf("150급 이상인 장비 갯수%d\n", count150);
	printf("160급 이상인 장비 갯수%d\n", count160);

	return 0;
}