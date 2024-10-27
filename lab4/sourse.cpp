#include <iostream>

using namespace std;
struct Node* root = NULL;
int count_elements = 0;
struct Node {
int data;
struct Node* right;
struct Node* left;
};

void freeTree(struct Node* root) {
}
struct Node* CreateTree(struct Node* root, struct Node* r, int data)
{
	if (r == NULL)
	{
		r = (struct Node*)malloc(sizeof(struct Node));
		if (r == NULL)
		{
			cout<<"||memory allocation error"<<endl;
			exit(0);
		}

		r->left = NULL;
		r->right = NULL;
		r->data = data;
		if (root == NULL) return r;
		if (data > root->data) 
			root->left = r;
		else 
	    	root->right = r;
		return r;
	}

	if (data > r->data)
		CreateTree(r, r->left, data);
	else
		CreateTree(r, r->right, data);

	return root;

}
struct Node* Create_Tree_Without_Repetition(struct Node* root, struct Node* r, int data) {
	if (r == NULL)
	{
		r = (struct Node*)malloc(sizeof(struct Node));
		if (r == NULL)
		{
			cout<<"||memory allocation error"<<endl;
			exit(0);
		}

		r->left = NULL;
		r->right = NULL;
		r->data = data;
		if (root == NULL) return r;
		if (data > root->data) 
			root->left = r;
		else if (data < root-> data){
			root->right = r;
		}
		else {
			free(r);
			return root;
		}
	    	
		return r;
	}

	if (data > r->data)
		Create_Tree_Without_Repetition(r, r->left, data);
	else if (data < r->data)
		Create_Tree_Without_Repetition(r, r->right, data);

	return root;

}
void print_tree(struct Node* r, int l)
{

	if (r == NULL)
	{
	//cout« "Tree if empty"« endl ;
	return;
	}

	print_tree(r->right, l + 1);
	for (int i = 0; i < l; i++)
	{
	printf(" ");
	}

	printf("%d\n", r->data);
	print_tree(r->left, l + 1);

}
// void print_tree_normal_version(struct Node* r, int size) {
// if (r == NULL)
// {
// //cout« "Tree if empty"« endl ;
// return;
// }
// for (int i = 0; i < size; i++) {
// cout << " ";
// }
// cout <<"\t";
// print_tree_normal_version(r->right, (size - 1));
// printf("%d\n", r->data);
// print_tree_normal_version(r->left, size + 1);
// }
// struct Node* found_in_the_tree(struct Node* temp_node_for_found, int number_in_the_found) {
// 	if (temp_node_for_found == NULL) {
// 	return NULL;
// }
// 	if (number_in_the_found == temp_node_for_found->data) {
// 		return temp_node_for_found;
// 	}
// 	found_in_the_tree(temp_node_for_found->right, number_in_the_found);
// 	found_in_the_tree(temp_node_for_found->left, number_in_the_found);
// }
int function_of_the_number_of_occurrences_of_a_number_in_the_tree(struct Node* temp_node_for_found, int number_in_the_found, int count_of_occurrences) {
	if (temp_node_for_found == NULL) {
		return count_of_occurrences;
	}
	if (number_in_the_found == temp_node_for_found->data) {
		count_of_occurrences++;
	}
	count_of_occurrences = function_of_the_number_of_occurrences_of_a_number_in_the_tree(temp_node_for_found->right, number_in_the_found, count_of_occurrences);
	count_of_occurrences = function_of_the_number_of_occurrences_of_a_number_in_the_tree(temp_node_for_found->left, number_in_the_found, count_of_occurrences);
}
int fcount(struct Node* r, int data, int count) {
	if (r == NULL) return count;
	if (r->data == data) count++;
	count = fcount(r->right, data, count);
	count = fcount(r->left, data, count);
	return count;
	}
// Node* search(Node* root, int value) {
//     if (root == nullptr || root->key == value) {
//         return root;
//     }
//     if (value < root->key) {
//         return search(root->left, value);
//     } else {
//         return search(root->right, value);
//     }
// }
struct Node* find(struct Node* r, int data) {
    if (r->data == data) {
        return r;
	}
    else if (r->data < data && r->left!= NULL) {
        find(root->left, data);
    } 
	else if(r-> data > data && r->right!= NULL) {
    	find(root->right, data);
    }
	else {
		return NULL;
	}
}
void task_1() {
	int number_for_found{ 0 };
	cout << "Enter the number for found: ";
	cin >> number_for_found;
	struct Node* temp_node_for_found;
	temp_node_for_found = find(root, number_for_found);
	if (temp_node_for_found == NULL) {
		cout << "||the number was not found or the tree is empty" << endl;
		return;
	}
	cout << "||a sheet with this value will find" << endl;
	return;
}
void task_2() {
	int number_for_found{ 0 };
	int number_of_occurrences{ 0 };
	cout << "Enter the number for found: ";
	cin >> number_for_found;
	number_of_occurrences = fcount(root, number_for_found, 0);
	cout << "|| Number_of_occurrences: " << number_of_occurrences << endl;
	return;
}
void task_3() {
	int D, start = 1;

	root = NULL;
	cout << "------------------------------\n||-1 - the end of the tree construction" << endl;
	while (start)
	{
	printf("enter a number: ");
	cin >> D;
		if (D == -1)
		{
			printf("||The construction is over\n");
			start = 0;
		}
		else
			root = Create_Tree_Without_Repetition(root, root, D);
	}
	print_tree(root, 0);
	freeTree(root);
	root = NULL;
}
void task_4() {
	
}
int main() {

setlocale(LC_ALL, "");
int D, start = 1;

root = NULL;
cout<< "||-1 - the end of the tree construction"<< endl;
while (start)
{
printf("enter a number: ");
cin>>D;
if (D == -1)
{
printf("||The construction is over\n");
start = 0;
}
else
root = CreateTree(root, root, D);

}


//print_tree_normal_version(root, count_elements);
print_tree(root, 0);
//cout « count_elements;
task_1();
task_2();
//task_2();
//freeTree(root);
root = NULL;
task_3();
return 0;

}