/*
Задание 1. Используя два указателя на массив целых
чисел, скопировать один массив в другой. Использовать
в программе арифметику указателей для продвижения
по массиву, а также оператор разыменования.
*/

#include <stdlib.h>
#include <stdio.h.>
#include <malloc.h>

using namespace std;

void print_array(int* numbers, int count)// Функция для вывода элементов массива
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
}
void rechange(int* first_array, int* second_array, int count)

// Функция для перезаписи одного массива в другой.
{
	int x = count - 1;
	for (int i = 0; i < count; i++)
	{
		second_array[x] = first_array[i];
	}
}


int main(int argc, char** argv) {

	const int ARRAY_ELEMENTS_COUNT = 15;

	int* first_array = (int*)malloc(sizeof(first_array) * ARRAY_ELEMENTS_COUNT); // Выделить память для первого массива

	int* second_array = (int*)malloc(sizeof(second_array) * ARRAY_ELEMENTS_COUNT); //Выделить память для второго массива

	for (int i = 0; i < ARRAY_ELEMENTS_COUNT; i++) // Заполняем массивы значениями

	{

		first_array[i] = rand() % 100 + 1;

		second_array[i] = rand() % 100 + 1;

	}

	print_array(first_array, ARRAY_ELEMENTS_COUNT); // Выводим первый массив

	print_array(second_array, ARRAY_ELEMENTS_COUNT); // Выводим второй массив

	rechange(first_array, second_array, ARRAY_ELEMENTS_COUNT);

	print_array(second_array, ARRAY_ELEMENTS_COUNT); // Выводим первый массив
													 //в который записаны элементы второг массива 

	rechange(second_array, first_array, ARRAY_ELEMENTS_COUNT);

	print_array(first_array, ARRAY_ELEMENTS_COUNT);  // Выводим второй массив
													 //в который записаны элементы первого массива


	free(first_array); // Очищаем память

	free(second_array); // Очищаем память

	return 0;

}

///*
//Задание 2 Используя указатель на массив целых чисел,
//изменить порядок следования элементов массива на
//противоположный.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.
//*/
//
////Примечание : Весь код остается такой же , за исключением функци rechange  в цикле for 
////             second_array[x] добовлем оператор декремента second_array[x--]
//#include <stdlib.h>
//#include <stdio.h.>
//#include <malloc.h>
//
//using namespace std;
//
//void print_array(int* numbers, int count)// Функция для вывода элементов массива
//{
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//	printf("\n");
//}
//void rechange(int* first_array, int* second_array, int count)
//
//// Функция для перезаписи одного массива в другой.
//{
//	int x = count - 1;
//	for (int i = 0; i < count; i++)
//	{
//		second_array[x--] = first_array[i];
//	}
//}
//
//
//int main(int argc, char** argv) {
//
//	const int ARRAY_ELEMENTS_COUNT = 15;
//
//	int* first_array = (int*)malloc(sizeof(first_array) * ARRAY_ELEMENTS_COUNT); // Выделить память для первого массива
//
//	int* second_array = (int*)malloc(sizeof(second_array) * ARRAY_ELEMENTS_COUNT); //Выделить память для второго массива
//
//	for (int i = 0; i < ARRAY_ELEMENTS_COUNT; i++) // Заполняем массивы значениями
//
//	{
//
//		first_array[i] = rand() % 100 + 1;
//
//		second_array[i] = rand() % 100 + 1;
//
//	}
//
//	print_array(first_array, ARRAY_ELEMENTS_COUNT); // Выводим первый массив
//
//	print_array(second_array, ARRAY_ELEMENTS_COUNT); // Выводим второй массив
//
//	rechange(first_array, second_array, ARRAY_ELEMENTS_COUNT);
//
//	print_array(second_array, ARRAY_ELEMENTS_COUNT); // Выводим второй массив
//													 //в который записаны элементы первого массива 
//
//	rechange(second_array, first_array, ARRAY_ELEMENTS_COUNT);
//
//	print_array(first_array, ARRAY_ELEMENTS_COUNT);  // Выводим первый массив
//													 //в который записаны элементы второго массива
//
//
//	free(first_array); // Очищаем память
//
//	free(second_array); // Очищаем память
//
//	return 0;
//
//}

///*
//Задание 3. Используя два указателя на массивы целых
//чисел, скопировать один массив в другой так, чтобы во
//втором массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования
//*/
//
////Примечание : Весь код остается такой же , за исключением функци rechange  в цикле for 
////             second_array[x] добовлем оператор декремента second_array[x--]
//#include <stdlib.h>
//#include <stdio.h.>
//#include <malloc.h>
//
//using namespace std;
//
//void print_array(int* numbers, int count)// Функция для вывода элементов массива
//{
//	for (int i = 0; i < count; i++)
//	{
//		printf("%d ", numbers[i]);
//	}
//	printf("\n");
//}
//void rechange(int* first_array, int* second_array, int count)
//
//// Функция для перезаписи одного массива в другой.
//{
//	int x = count - 1;
//	for (int i = 0; i < count; i++)
//	{
//		second_array[x--] = first_array[i];
//	}
//}
//
//
//int main(int argc, char** argv) {
//
//	const int ARRAY_ELEMENTS_COUNT = 15;
//
//	int* first_array = (int*)malloc(sizeof(first_array) * ARRAY_ELEMENTS_COUNT); // Выделить память для первого массива
//
//	int* second_array = (int*)malloc(sizeof(second_array) * ARRAY_ELEMENTS_COUNT); //Выделить память для второго массива
//
//	for (int i = 0; i < ARRAY_ELEMENTS_COUNT; i++) // Заполняем массивы значениями
//
//	{
//
//		first_array[i] = rand() % 100 + 1;
//
//		second_array[i] = rand() % 100 + 1;
//
//	}
//
//	print_array(first_array, ARRAY_ELEMENTS_COUNT); // Выводим первый массив
//
//	print_array(second_array, ARRAY_ELEMENTS_COUNT); // Выводим второй массив
//	
//	rechange(first_array, second_array, ARRAY_ELEMENTS_COUNT);
//
//	print_array(second_array, ARRAY_ELEMENTS_COUNT); // Выводим второй массив
//	                                                 //в который записаны элементы первого массива 
//	free(first_array); // Очищаем память
//
//	free(second_array); // Очищаем память
//
//	return 0;
//}