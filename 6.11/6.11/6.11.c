#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define arraySize 10

void bubbleSort(int array[], int size) {
	for (int pass = 1; pass < size; pass++) {
		for (int i = 0; i < size - pass; i++) {
			if (array[i] > array[i + 1]) {
				// Swap elements if they are in the wrong order
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

int main() {
	int randomNumberArray[arraySize];

	// 產生亂數種子
	srand(time(NULL));

	// 初始化陣列，存放亂數值 (0~100)
	for (int i = 0; i < arraySize; i++) {
		randomNumberArray[i] = rand() % 101; // 產生0~100的亂數
	}

	// 印出原始陣列
	printf("原始陣列: ");
	for (int i = 0; i < arraySize; i++) {
		printf("%d ", randomNumberArray[i]);
	}

	// 進行氣泡排序
	bubbleSort(randomNumberArray, arraySize);

	// 印出排序後的陣列
	printf("\n排序後的陣列: ");
	for (int i = 0; i < arraySize; i++) {
		printf("%d ", randomNumberArray[i]);
	}

	return 0;
}
