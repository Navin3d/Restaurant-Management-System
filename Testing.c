#include <stdio.h>
#include <string.h>

// Testing
// 0000, 0000, 0000 , 0000

void main() {
	FILE *filePointer = fopen("Data.csv", "a+");
	int foodNo, foodStock;
	float foodPrice;
    char foodName[25];
	
	while(fscanf(filePointer, "%d, %s , %d, %f, %[^\n]", &foodNo, foodName, &foodStock, &foodPrice) != EOF) {
		printf("\n\t no: %d, name: %s, stock: %d, Price: %f", foodNo, foodName, foodStock, foodPrice);
//		if(foodNo == 5) {
//			printf("inn");
//			fprintf(filePointer, "%d, %s , %d, %f, \\n", foodNo, foodName, 20, foodPrice);
//		}
	}
	
}