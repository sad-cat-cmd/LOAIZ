#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

void shell(int *items, int count){
  int i = 0, j=0, gap, k;
  int x, a[5];

  a[0]=9; a[1]=5; a[2]=3; a[3]=2; a[4]=1;

  for(k=0; k < 5; k++) {
    gap = a[k];
    for(i=gap; i < count; ++i) {
      x = items[i];
      for(j=i-gap; (x < items[j]) && (j >= 0); j=j-gap)
        items[j+gap] = items[j];
      items[j+gap] = x;
    }                                                                                                                                                                                 
  }
}
void qs(int *items, int left, int right) //вызов функции: qs(items, 0, count-1);
{
  int i, j;
  int x, y;



  i = left; j = right;

  /* выбор компаранда */
  x = items[(left+right)/2];
  
  do {
    while((items[i] < x) && (i < right)) i++;
    while((x < items[j]) && (j > left)) j--;

    if(i <= j) {
      y = items[i];
      items[i] = items[j];
      items[j] = y;
      i++; j--;
    }
  } while(i <= j);

  if(left < j) qs(items, left, j);
  if(i < right) qs(items, i, right);
}

void check_time_running(int m, int n, int count){
    int size_array_in_task_1 = 200;
    //int count_reapet = 5;

    clock_t start, end;
    int i=0, j=0, r, elem_c;
    int **array_1, **array_2, **array_3;
    array_1 = (int**)malloc(sizeof(int*));
    for (int i =0; i < m; i++){;
        array_1[i]=(int*)malloc(sizeof(int)*n);
    }
    i = 0, j = 0;                                                                                                                                                                                                                                                                           
    srand(time(NULL)); // инициализируем параметры генератора случайных чисел
	while(i<n)
	{
		while(j<n)
		{
			array_1[i][j]=rand()% 100 + 1; // заполняем массив случайными числами
			j++;
		}
		i++;
	}
    array_2 = (int**)malloc(sizeof(int*));
    for (int i =0; i < m; i++){;
        array_2[i]=(int*)malloc(sizeof(int)*n);
    }
    i = 0;
    j = 0;
    srand(time(NULL)); // инициализируем параметры генератора случайных чисел
	while(i < m)
	{
		while(j<n)
		{
			array_2[i][j]=rand()% 100 + 1; // заполняем массив случайными числами
			j++;
		}
		i++;
	}
    array_3 = (int**)malloc(sizeof(int)*n);
    for (int i =0; i < m; i++){;
        array_2[i]=(int*)malloc(sizeof(int)*n);
    }
    srand(time(NULL)); // инициализируем параметры генератора случайных чисел
	while(i<n)
	{
		while(j<n)
		{
			array_1[i][j]=rand()% 100 + 1; // заполняем массив случайными числами
			j++;
		}
		i++;
	}
	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
	i=0; j=0;
	while(i<n)
	{
		while(j<n)
		{
			array_2[i][j]=rand()% 100 + 1; // заполняем массив случайными числами
			j++;
		}
		i++;
	}


    switch (count)
    {
    case 1:{
        
        for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			elem_c=0;
      start = clock();
			for(r=0; r<n;r++)
			{
				elem_c=elem_c+array_1[i][r]*array_2[r][j];
				array_3[i][j]=elem_c;
			}
            end = clock();
            std::cout<<"time:  "<< ((end - start)/CLOCKS_PER_SEC)<< "size: "<< n <<"x"<< n <<"/n";            
		}

	}
        break;
    }
    case 2:{

    }
    default:
        break;
    }



}
// void task_1(){
//     clock_t start, end; // объявляем переменные для определения времени выполнения
//     int i=0, j=0, r;
// 	int a[200][200], b[1500][1500], c[200][200], elem_c;
//     start = clock();
//     //по оси x - значение, по оси y - время (начертить график) 
// 	for(i=0;i<2000;i++)
// 	{
// 		for(j=0;j<1500;j++)
// 		{
// 			elem_c=0;
// 			for(r=0; r<1500;r++)
// 			{
// 				elem_c=elem_c+a[i][r]*b[r][j];
// 				c[i][j]=elem_c;
// 			}

// 		}
// 	}
//     end = clock();
// }
// void task_2(){
//     int size_array = 100;
//     int a = rand();
//     clock_t start = clock();
//     //shell();
// }
int main(){
    setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
  check_time_running(200, 200, 1);


	return(0);
}
