#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <locale.h>
struct info_student {
	char name[30];
	char surname[50];
	char facult[30];
	int the_number_of_the_exam_book;
	struct info_student* next;
};
void printing_int_array(int array[], int size) {
	std::cout << "Вы ввели следующие числа:\n";
	for (int i = 0; i < size; ++i) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}
void task_1() {
	const int size_array_in_task_1 = 10;
	//int temp_value_element_int_array = 0;
	//int min_value_int = INT_MIN;
	//int max_value_int = INT_MAX;
	int array[size_array_in_task_1];
	for (int i = 0; i < size_array_in_task_1; ++i) {
		std::cout << "Введите число " << (i + 1) << ": ";
		std::cin >> array[i];
	}
	printing_int_array(array, size_array_in_task_1);
	int min_value, max_value;
	for (int i = 0; i < size_array_in_task_1; i++) {
		if (i == 0) {
			min_value = array[i]; max_value = array[i];
		}
		if (min_value > array[i]) {
			min_value = array[i];
		}
		if (max_value < array[i]) {
			max_value = array[i];
		}
	}
	printf("%d", max_value - min_value);
	return;
}
void task_2() {
	srand(time(0)); 
	const int size_array_in_task_2 = 10;
	int array[size_array_in_task_2];
	for (int i = 0; i < size_array_in_task_2; i++) {
		array[i] = rand()%200 - 100;
	}
	printing_int_array(array, size_array_in_task_2);
	return;
}
void task_3() {
	int* ptr_int_array = NULL;
	int size_int_dynamic_array = 0;
	std::cout << "Введите кол-во элементов массива";
	std::cin >> size_int_dynamic_array;
	ptr_int_array = (int*)malloc(size_int_dynamic_array * sizeof(int));
	for (int i = 0; i < size_int_dynamic_array; i++) {
		ptr_int_array[i] = i;
	}
	printing_int_array(ptr_int_array, size_int_dynamic_array);
	free(ptr_int_array);
	return;
}
void task_4() {
	const int size_1_int_two_dimensional_array = 5;
	const int size_2_int_two_dimensional_array = 5;
	int sum_elements_line = 0;
	int array_two_dimensional_array[size_1_int_two_dimensional_array][size_2_int_two_dimensional_array];
	for (int i = 0; i < size_1_int_two_dimensional_array; i++) {
		for (int j = 0; j < size_2_int_two_dimensional_array; j++) {
			array_two_dimensional_array[i][j] = i + j;
			std::cout << array_two_dimensional_array[i][j]<< "\t";
			sum_elements_line += array_two_dimensional_array[i][j];
		}
		std::cout << "\n";
		std::cout << "сумма элеменотов строки " <<i<<": " << sum_elements_line << "\n";
		sum_elements_line = 0;
	}
	return;
}
void printNode(info_student* head, char *temp_name, char* surname) {
	info_student* temp = head;
	while (temp != NULL) {
		if ((strcmp(temp->name, temp_name) == 0) && (strcmp(temp->surname, surname)==0)) {
			printf("Name: %s, Surname: %s, Faculty: %s, Exam Book Number: %d\n",
				temp->name, temp->surname, temp->facult, temp->the_number_of_the_exam_book);
		}
		temp = temp->next;
	}
}
void freeNode(info_student* head) {
	info_student* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		free(temp);
	}
}
info_student* createNode(char* name, char* surname, char *facult, int the_number_of_the_exam_book) {
	info_student* newNode = (info_student*)malloc(sizeof(info_student));
	strcpy(newNode->name, name);
	strcpy(newNode->surname, surname);
	strcpy(newNode->facult, facult);
	newNode->the_number_of_the_exam_book = the_number_of_the_exam_book;
	newNode->next = NULL;
	return newNode;
}
void addNode(info_student**head, char* name, char* surname, char* facult, int the_number_of_the_exam_book) {
	info_student* newNode = createNode(name, surname, facult, the_number_of_the_exam_book);
	if (*head == NULL) {
		*head = newNode;
	}
	else {
		info_student* temp = *head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void task_5() {
	info_student* head = NULL;
	int count_the_student = 0;
	char temp_name[30];
	char temp_surname[50];
	char temp_facult[30];
	int temp_the_number_of_the_exam_book;
	std::cout << "Введите количество студентов:\n";
	std::cin >> count_the_student;
	info_student* list = (info_student*)malloc(sizeof(info_student));
	for (int i = 0; i < count_the_student; i++) {
		std::cout << "Введите данные о студенте "<<i+1<<":\n";
		std::cout << "Имя: ";
		scanf_s("%s", temp_name, sizeof(temp_name));
		std::cout << "Фамилия: ";
		scanf_s("%s", temp_surname, sizeof(temp_surname));
		std::cout << "введите название факультета: ";
		scanf_s("%s", temp_facult, sizeof(temp_facult));
		std::cout << "Введите номер зчетной книжки: ";
		std::cin >> temp_the_number_of_the_exam_book;
		addNode(&head, temp_name, temp_surname, temp_facult, temp_the_number_of_the_exam_book);
	}
	std::cout << "Введите данные о студенте для поиска:\n";
	std::cout << "Имя: ";
	scanf_s("%s", temp_name, sizeof(temp_name));
	std::cout << "Фамилия: ";
	scanf_s("%s", temp_surname, sizeof(temp_surname));
	printNode(head, temp_name, temp_surname);
}
int main() {
	setlocale(LC_ALL, "Russian");
	//task_1();
	//task_2();
	//task_3();
	//task_4();
	task_5();
}