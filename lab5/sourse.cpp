#include <iostream>
#include <ctime>
using namespace std;
void print_array(int **array, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << array[i][j] << "  "<< endl;
        }
        cout << "\n"<< endl;
    }
} 
void create_random_adjacency_matrix(int **array, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            array[i][j] = rand() % 1 - 0;
        }
    }
}
void task_1(){
    int number_of_vertices {0};
    cout<<"enter the number of vertices: "<<endl;
    cin >> number_of_vertices;
    int ** array = (int **) malloc (sizeof (int*)* number_of_vertices);
    for (int i = 0; i < number_of_vertices; i++){
        array[i]= (int* ) malloc (sizeof(int)*number_of_vertices);
    } 
    create_random_adjacency_matrix(array, number_of_vertices);
    print_array(array, number_of_vertices);

}
int main(){
    return 0;
}