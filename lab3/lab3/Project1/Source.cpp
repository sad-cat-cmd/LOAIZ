#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
struct node
{
	int priority;
	char inf[256];  // �������� ����������
	struct node* next; // ������ �� ��������� ������� 
};
struct node* head = NULL, *last = NULL, *f = NULL; // ��������� �� ������ � ��������� �������� ������
int dlinna = 0;
struct node* get_struct(void)
{
	struct node* p = NULL;
	char s[256];
	int priority;
	if ((p = (node*)malloc(sizeof(struct node))) == NULL)  // �������� ������ ��� ����� ������� ������
	{
		printf("Memory allocation error\n");
		exit(1);
	}

	std::cout <<"Enter the name of the object: \n";   // ������ ������
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

	return p;		// ���������� ��������� �� ��������� �������
}
void spstore(void)
{
	struct node* p = NULL;
	//struct node* temp_node = NULL;
	p = get_struct();
	if (head == NULL && p != NULL)	// ���� ������ ���, �� ������������� ������ ������
	{
		head = p;
		last = p;
	}
	else if (head != NULL && p != NULL) // ������ ��� ����, �� ��������� � �����
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
	struct node* struc = head; // ���������, ���������� �� ������ ���������� �� ������ ������
	struct node* prev = 0;// ��������� �� �������������� ���������� �������
	int flag = 0;      // ��������� ���������� ���������� �������� � ������

	if (head == NULL) // ���� ������ ������ ����� NULL, �� ������ ����
	{
		printf("The list is empty\n");
		return;
	}

	if (strcmp(name, struc->inf) == 0) // ���� ��������� ������� - ������
	{
		flag = 1;
		head = struc->next; // ������������� ������ �� ��������� �������
		free(struc);  // ������� ������ �������
		struc = head; // ������������� ��������� ��� ����������� ������
	}
	else
	{
		prev = struc;
		struc = struc->next;
	}

	while (struc) // ������ �� ������ � ����� ���������� ��������
	{
		if (strcmp(name, struc->inf) == 0) // ���� �����, ��
		{
			flag = 1;         // ���������� ���������
			if (struc->next)  // ���� ��������� ������� �� ��������� � ������
			{
				prev->next = struc->next; // ������ ���������
				free(struc);		    // �������  �������
				struc = prev->next; // ������������� ��������� ��� ����������� ������
			}
			else			// ���� ��������� ������� ��������� � ������
			{
				prev->next = NULL; // �������� ��������� ��������������� ��������
				free(struc);	// �������  �������
				return;
			}
		}
		else // ���� �� �����, ��
		{
			prev = struc; // ������������� ��������� ��� ����������� ������
			struc = struc->next;
		}
	}

	if (flag == 0)				// ���� ���� = 0, ������ ������ ������� �� ������
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