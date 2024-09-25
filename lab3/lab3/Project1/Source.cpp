#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
struct node
{
	int priority;
	char inf[256];  // полезная информация
	struct node* next; // ссылка на следующий элемент 
};
struct node* head = NULL, *last = NULL, *f = NULL; // указатели на первый и последний элементы списка
int dlinna = 0;
struct node* get_struct(void)
{
	struct node* p = NULL;
	char s[256];
	int priority;
	if ((p = (node*)malloc(sizeof(struct node))) == NULL)  // выделяем память под новый элемент списка
	{
		printf("Memory allocation error\n");
		exit(1);
	}

	std::cout <<"Enter the name of the object: \n";   // вводим данные
	scanf_s("%s", &s, sizeof(s));
	std::cout << "Enter the priority of the object: \n";
	scanf_s("%d", &priority, sizeof(priority));
	if (*s == 0)
	{
		printf("No recording was made\n");
		return NULL;
	}
	strcpy(p->inf, s);
	p->priority = priority;

	p->next = NULL;

	return p;		// возвращаем указатель на созданный элемент
}
void spstore(void)
{
	struct node* p = NULL;
	//struct node* temp_node = NULL;
	p = get_struct();
	if (head == NULL && p != NULL)	// если списка нет, то устанавливаем голову списка
	{
		head = p;
		last = p;
	}
	else if (head != NULL && p != NULL) // список уже есть, то вставляем в конец
	{
		if (head->priority > p->priority) {
			struct node* temp_node = head;
			int count_of_iteration = 0;
			while (head->next != NULL) {
				if (p->priority > head->priority) {
					for (int i = 0; i < dlinna; i++) {
						if (i = (count_of_iteration - 1)) {
							p->next = head->next;
							head->next = head->next->next ;
						}
						else {
							head = head->next;
						}
					}
				}
				count_of_iteration++;
				temp_node = temp_node->next;
				/*last->next = p;
				last = p;*/
				
			}
			head = temp_node;
		}
		else if (head->priority < p->priority){
			last = head->next;
			p->next = head;
			head = p;
		}
	}
	dlinna++;
	return;
}
void review(void)
{
	struct node* struc = head;
	if (head == NULL)
	{
		printf("The list is empty\n");
	}
	while (struc)
	{
		//printf("NAME^^  %s, \n", struc->inf);
		std::cout << "Name : "<< struc->inf << "   priority:" << struc->priority<<"\n";
		struc = struc->next;
	}
	return;
}
struct node* find(char* name)
{
	struct node* struc = head;
	if (head == NULL)
	{
		printf("The list is empty\n");
	}
	while (struc)
	{
		if (strcmp(name, struc->inf) == 0)
		{
			return struc;
		}
		struc = struc->next;
	}
	printf("The element was not found\n");
	return NULL;
}
void del(char* name)
{
	struct node* struc = head; // указатель, проходящий по списку установлен на начало списка
	struct node* prev = 0;// указатель на предшествующий удаляемому элемент
	int flag = 0;      // индикатор отсутствия удаляемого элемента в списке

	if (head == NULL) // если голова списка равна NULL, то список пуст
	{
		printf("The list is empty\n");
		return;
	}

	if (strcmp(name, struc->inf) == 0) // если удаляемый элемент - первый
	{
		flag = 1;
		head = struc->next; // установливаем голову на следующий элемент
		free(struc);  // удаляем первый элемент
		struc = head; // устанавливаем указатель для продолжения поиска
	}
	else
	{
		prev = struc;
		struc = struc->next;
	}

	while (struc) // проход по списку и поиск удаляемого элемента
	{
		if (strcmp(name, struc->inf) == 0) // если нашли, то
		{
			flag = 1;         // выставляем индикатор
			if (struc->next)  // если найденный элемент не последний в списке
			{
				prev->next = struc->next; // меняем указатели
				free(struc);		    // удаляем  элемент
				struc = prev->next; // устанавливаем указатель для продолжения поиска
			}
			else			// если найденный элемент последний в списке
			{
				prev->next = NULL; // обнуляем указатель предшествующего элемента
				free(struc);	// удаляем  элемент
				return;
			}
		}
		else // если не нашли, то
		{
			prev = struc; // устанавливаем указатели для продолжения поиска
			struc = struc->next;
		}
	}

	if (flag == 0)				// если флаг = 0, значит нужный элемент не найден
	{
		printf("The element was not found\n");
		return;
	}


}
void task_1() {

}
void task_2() {

}
void task_3() {

}
int main() {
	int nubmer_menu = 0;
	char string[10];
	spstore();
	spstore();
	spstore();
	review();
	std::cout << "enter a name to search for :\n";
	scanf_s("%s", &string, sizeof(string));
	f = find(string);
	std::cout << "The found element:" <<  f->inf << "\tpriority: "<< f->priority<< "\n";
	std::cout << "";
}