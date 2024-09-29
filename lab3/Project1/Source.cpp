#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "stdio.h"
struct node
{
	int priority;
	char inf[256];  
	struct node* next; 
};
struct node_1 {
	char inf[256];  
	struct node_1* next; 
};
struct node* head = NULL, *last = NULL, *f = NULL; 
struct node_1* head_2_task = NULL, *last_2_task = NULL, *q = NULL; 
int dlinna = 0;
struct node* get_struct(void)
{
	struct node* p = NULL;
	char s[256];
	int priority;
	if ((p = (node*)malloc(sizeof(struct node))) == NULL)  
	{
		printf("Memory allocation error\n");
		exit(1);
	}

	std::cout <<"Enter the name of the object: \n";
	scanf("%s", &s, sizeof(s));
	std::cout << "Enter the priority of the object: \n";
	scanf("%d", &priority, sizeof(priority));
	if (*s == 0)
	{
		printf("No recording was made\n");
		return NULL;
	}
	strcpy(p->inf, s);
	p->priority = priority;

	p->next = NULL;

	return p;		
}
struct node_1* get_struct_2() {
	struct node_1* p = NULL;
	char s[256];
	if ((p = (node_1*)malloc(sizeof(struct node_1))) == NULL)  
	{
		printf("Memory allocation error\n");
		exit(1);
	}

	std::cout << "Enter the name of the object: \n";   
	scanf("%s", &s, sizeof(s));
	if (*s == 0)
	{
		printf("No recording was made\n");
		return NULL;
	}
	strcpy(p->inf, s);

	p->next = NULL;

	return p;
}
void spstore(void)
{
	struct node* p = NULL;
	//struct node* temp_node = NULL;
	p = get_struct();
	if (head == NULL && p != NULL)	
	{
		head = p;
		last = p;
	}
	else if (head != NULL && p != NULL) 
	{
		if (head->priority > p->priority) {
			struct node* temp_node = head;
			struct node* prev_node = NULL;
			int count_of_iteration = 0;
			while (temp_node->next != NULL && temp_node-> priority >= p->priority) {
				
				count_of_iteration++;
				prev_node = temp_node;
				temp_node = temp_node->next;
				
			}
			if (p->priority > temp_node->priority) {
					p->next = temp_node;
					prev_node->next = p;
					return;
			}
			else if(p->priority < temp_node->priority){
				temp_node-> next =  p;
				last = p;
			}
			// temp_node->next = p;
			// last = p;
			return;
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
void review_queue(void)
{
	struct node_1* struc = head_2_task;
	if (head_2_task == NULL)
	{
		printf("The list is empty\n");
	}
	while (struc)
	{
		//printf("NAME^^  %s, \n", struc->inf);
		std::cout << "Name : " << struc->inf << "\n";
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
	struct node* struc = head; 
	struct node* prev = 0;
	int flag = 0;      

	if (head == NULL) 
	{
		printf("The list is empty\n");
		return;
	}

	if (strcmp(name, struc->inf) == 0) 
	{
		flag = 1;
		head = struc->next; 
		free(struc);  
		struc = head; 
	}
	else
	{
		prev = struc;
		struc = struc->next;
	}

	while (struc) 
	{
		if (strcmp(name, struc->inf) == 0) 
		{
			flag = 1;         
			if (struc->next)  
			{
				prev->next = struc->next; 
				free(struc);		    
				struc = prev->next; 
			}
			else			
			{
				prev->next = NULL; 
				free(struc);	
				return;
			}
		}
		else 
		{
			prev = struc; 
			struc = struc->next;
		}
	}

	if (flag == 0)				
	{
		printf("The element was not found\n");
		return;
	}


}
void the_function_of_removing_an_MAX_item_from_the_priority_queue() {
	struct node* temp_node= head;
	struct node* temp_node_1 = head;
	if (head == NULL) {
		std::cout << "the list is empty"<< std::endl;
		return;
	}
	temp_node_1 = head->next;
	free(temp_node);
	head = temp_node_1;
	std::cout << "----------------------\nthe fist element has been deleted\n----------------------\n" << std::endl;
	return;
}
void the_function_of_removing_an_MIN_item_from_the_priority_queue() {
	struct node* temp_node = head;
	struct node* temp_node_prev = NULL;
	while (temp_node->next != 0) {
		temp_node_prev = temp_node;
		temp_node = temp_node->next;
	}
	free(temp_node);
	temp_node_prev->next = NULL;
	last = temp_node_prev;
	std::cout << "----------------------\nthe last element has been deleted\n----------------------\n" << std::endl;
}
void queue() {
	struct node_1* p = NULL;
	struct node_1* temp_node = NULL;
	p = get_struct_2();
	if (head_2_task == NULL && p != NULL) {
		head_2_task = p;
	}
	else if (head_2_task != NULL && p != NULL) {
		temp_node = head_2_task;
		head_2_task = p;
		p->next = temp_node;
		last_2_task = temp_node;
	}

}
void the_function_of_removing_an_item_from_the_queue() {
	struct node_1* temp_node = head_2_task;
	struct node_1* temp_node_prev = NULL;
	while (temp_node->next != NULL) {
		temp_node_prev = temp_node;
		temp_node = temp_node->next;
	}
	free(temp_node);
	temp_node_prev->next = NULL;
	last_2_task = temp_node_prev;
	std::cout << "----------------------\nthe last element has been deleted\n----------------------\n" << std::endl;
}
void structure_memory_cleanup_function_2_task() {
	struct node_1* temp_node = head_2_task;
	struct node_1* temp_node_prev = NULL;
	while (temp_node->next != NULL) {
		temp_node_prev = temp_node;
		temp_node = temp_node->next;
		free(temp_node_prev);
	}
}
void stack() {
	struct node_1* p = NULL;
	p = get_struct_2();
	if (head_2_task == NULL && p != 0) {
		head_2_task = p;
	}
	else if (head_2_task != NULL && p != 0) {
		struct node_1* temp_node = NULL;
		temp_node = head_2_task;
		head_2_task = p;
		head_2_task->next = temp_node;
		return;
	}
	return;
}
void the_function_removing_an_stack_item(){
	if (head_2_task== NULL){
		std::cout<<"list is empty"<<std::endl;
	}
	struct node_1 * temp_node = head_2_task->next;
	free(head_2_task);
	head_2_task = temp_node;
	std::cout<<"-----------------------\nthe item has been delected\n-------------------------------"<< std::endl;
	return;
}
void task_1() {
	char string[10];
	for (int i = 0; i < 3; i++) {
		spstore();
	}
	review();
	//the_function_of_removing_an_MAX_item_from_the_priority_queue();
	//review();
	//the_function_of_removing_an_MIN_item_from_the_priority_queue();
	//review();
	std::cout << "enter a name to search for :\n";
	scanf("%s", &string, sizeof(string));
	f = find(string);
	std::cout << "The found element:" <<  f->inf << "\tpriority: "<< f->priority<< "\n";
	std::cout << "";
}
void task_2() {
	for (int i = 0; i < 3; i++) {
		queue();
	}
	review_queue();
	the_function_of_removing_an_item_from_the_queue();
	review_queue();
	//structure_memory_cleanup_function_2_task();
	return;
	head_2_task = NULL;
	last_2_task = NULL;
}
void task_3() {
	for (int i = 0; i < 3; i++) {
		stack();
	}
	review_queue();
	the_function_removing_an_stack_item();
	review_queue();
}

int main() {
	task_1();
}