#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <chrono>

void shell(int* items, int count) {
    int i = 0, j = 0, gap, k;
    int x, a[5];

    a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1;

    for (k = 0; k < 5; k++) {
        gap = a[k];
        for (i = gap; i < count; ++i) {
            x = items[i];
            for (j = i - gap; (x < items[j]) && (j >= 0); j = j - gap)
                items[j + gap] = items[j];
            items[j + gap] = x;
        }
    }
}
void qs(int* items, int left, int right) 
{
    int i, j;
    int x, y;
    i = left; j = right;

    x = items[(left + right) / 2];

    do {
        while ((items[i] < x) && (i < right)) i++;
        while ((x < items[j]) && (j > left)) j--;

        if (i <= j) {
            y = items[i];
            items[i] = items[j];
            items[j] = y;
            i++; j--;
        }
    } while (i <= j);

    if (left < j) qs(items, left, j);
    if (i < right) qs(items, i, right);
}
int compare(const void* x1, const void* x2)
{
    return (*(int*)x1 - *(int*)x2);
}
long long checking_the_exucution_time(int rows, int cols) {
    int i = 0, j = 0, r, elem_c = 0;
    int** array_1, **array_2,** array_3;
    array_1 = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array_1[i] = (int*)malloc(cols * sizeof(int));
    }
    array_2 = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array_2[i] = (int*)malloc(cols * sizeof(int));
    }
    array_3 = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        array_3[i] = (int*)malloc(cols * sizeof(int));
    }
    i = 0, j = 0;
    srand(time(NULL));
    while (i < rows)
    {
        while (j < cols)
        {
            array_1[i][j] = rand() % 100 + 1;
            j++;
        }
        i++;
    }
    srand(time(NULL));
    i = 0; j = 0;
    while (i < rows)
    {
        while (j < cols)
        {
            array_2[i][j] = rand() % 100 + 1;
            j++;
        }
        i++;
    }
    auto start = std::chrono::high_resolution_clock::now();
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            elem_c = 0;
            for (r = 0; r < rows; r++)
            {
                elem_c = elem_c + array_1[i][r] * array_2[r][j];
                array_3[i][j] = elem_c;
            }
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "time: " << time << " nanoseconds" << std::endl;
    free(array_1);
    free(array_2);
    free(array_3);
    return time;



}

void task_2_checking_the_exucution_time(int *array, int size_array, int pointer_in_array) {
    long long exucuation_array[3];
    auto start = std::chrono::high_resolution_clock::now();
    shell(&array[0], size_array);
    auto end = std::chrono::high_resolution_clock::now();
    auto time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "time_shell: " << time << " nanoseconds" << std::endl;
    exucuation_array[0] = time;
    start = std::chrono::high_resolution_clock::now();
    qs(&array[0], array[0], array[9]);
    end = std::chrono::high_resolution_clock::now();
    time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "time_qs: " << time << " nanoseconds" << std::endl;
    pointer_in_array++;
    exucuation_array[pointer_in_array] = time;
    start = std::chrono::high_resolution_clock::now();
    qsort(array, 10, sizeof(int), compare);
    end = std::chrono::high_resolution_clock::now();
    time = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();
    std::cout << "time_qs_fuction_C: " << time << " nanoseconds" << std::endl;
    pointer_in_array = pointer_in_array + 1;
    exucuation_array[pointer_in_array] = time;
}
    
    
void task_2() {
    
    const int size_array = 10;
    int i = 0;
    int array[size_array];
    srand(time(NULL));
    while (i < size_array){
        array[i] = rand()% 100 + 1;
        i++;
    }
    task_2_checking_the_exucution_time(&array[0], size_array, 0);
    for (int i = 0; i < size_array; i++) {
        array[i] = i;
    }
    task_2_checking_the_exucution_time(array, size_array, 0);
    for (int i = 0; i < size_array; i++) {
        array[i] = size_array - i;
    }
    task_2_checking_the_exucution_time(array, size_array, 0);
    for (int i = 0; i < size_array; i++) {
        if (i < size_array / 2) {
            array[i] = i;
        }
        else {
            array[i] = size_array - i;
        }
    }
    task_2_checking_the_exucution_time(array, size_array, 0);
    std::cout << "task_2_1-5\n--------------------------------------\n";
    return;
}
int main() {
    long long array[24];
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    int i = 0;
    while (i < 24) {
        if (i < 3) {
            array[i] = checking_the_exucution_time(10, 10);
        }
        if (i<6 && i >2) {
            array[i] = checking_the_exucution_time(10, 20);
        }
        if (i < 9 && i > 5) {
            array[i] = checking_the_exucution_time(20, 20);
        }
        if (i < 12 && i> 8) {
            array[i] = checking_the_exucution_time(100, 10);
        }
        if (i < 15 && i > 11) {
            array[i] = checking_the_exucution_time(100, 20);
        }
        if (i < 18 && i >14) {
            array[i] = checking_the_exucution_time(100, 40);
        }
        if (i < 21 && i > 17) {
            array[i] = checking_the_exucution_time(100, 100);
        }
        std::cout << i <<"-----\n";
        i++;
    }
    for (int i = 0; i < 24; i += 3) {
        for (int j = 0; j < 3; j++) {
            if (i + j < 24) { 
                std::cout << array[i + j] << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "task_1\n--------------------------------------\n";
    task_2();
    return 0;
}