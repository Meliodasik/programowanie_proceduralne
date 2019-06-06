#include <stdio.h>
#include <time.h>
#define HEIGHT 25
#define WIDTH 25
#define LIFE_YES 1
#define LIFE_NO 0

typedef int TableType[HEIGHT][WIDTH];

void printTable(TableType table) {
	int height, width;

	for (height = 0; height < HEIGHT; height++) {
		for (width = 0; width < WIDTH; width++) {
			if (table[height][width] == LIFE_YES) {
				printf("X");
			} else {
				printf("-");
			}
		}
		printf("\n");
	}
	printf("\n");
}


void ClearTable(TableType table){
	int height, width;
		for (height = 0; height < HEIGHT; height++){
			for (width = 0; width < WIDTH; width++){
				table[height][width] = LIFE_NO;
			}
		}
}


void askUser (TableType tableA){
		int i;
		int n;
		int height, width;
		
		printf("Podaj ilosc organizmow jaka chcesz wprowadzic do gry;  ");
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			printf("Podaj parametry (x,y) gdzie bedzie zyc organizm %d :", i+1);
			scanf("%d %d", &height, &width);
			tableA[height][width] = LIFE_YES;
		}
}

int getNeithborvalue(TableType table, int row, int col){
		if(row < 0 || row >=HEIGHT || col < 0 || col <= WIDTH != LIFE_YES){
			return 0;
			}
			else{
				return 1;
				}
}
int getNeithborCount(TableType table, int row, int col){
	
}
	
int main(void){
			TableType table;
			printTable(table);
		
}
