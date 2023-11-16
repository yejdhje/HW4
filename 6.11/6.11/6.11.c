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

	// ���Ͷüƺؤl
	srand(time(NULL));

	// ��l�ư}�C�A�s��üƭ� (0~100)
	for (int i = 0; i < arraySize; i++) {
		randomNumberArray[i] = rand() % 101; // ����0~100���ü�
	}

	// �L�X��l�}�C
	printf("��l�}�C: ");
	for (int i = 0; i < arraySize; i++) {
		printf("%d ", randomNumberArray[i]);
	}

	// �i���w�Ƨ�
	bubbleSort(randomNumberArray, arraySize);

	// �L�X�Ƨǫ᪺�}�C
	printf("\n�Ƨǫ᪺�}�C: ");
	for (int i = 0; i < arraySize; i++) {
		printf("%d ", randomNumberArray[i]);
	}

	return 0;
}
