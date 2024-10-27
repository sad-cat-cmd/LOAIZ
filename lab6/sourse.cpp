#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class Graph{
    public:
    void complex_function_the_create_TASK1(){
        Set_number_of_vertices();
        initializing_a_two_dimensional();
        create_random_adjacency_matrix();
        print_array();
        creating_an_adjacency_list();
        printf_adjacecncy_list();
        return;
    }
    void complex_function_the_create_TASK2(){
        
    }
    private:
    int number_of_vertices {0};
    vector <vector<int>> adjancnecy_list;
    int** array = { NULL };
    struct Node {
        int vertex;
        struct Node* next;
    };
    void Set_number_of_vertices() {
        cout << "enter the number of vertices: " << endl;
        cin >> number_of_vertices;
    }
    void initializing_a_two_dimensional() {
        array = (int**)malloc(sizeof(int*) * number_of_vertices);
        for (int i = 0; i < number_of_vertices; i++) {
            array[i] = (int*)malloc(sizeof(int*) * number_of_vertices);
            memset(array[i], 0, sizeof(int*) * number_of_vertices);
        }
    }
    void create_random_adjacency_matrix() {
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = i + 1; j < number_of_vertices; j++) {
                array[i][j] = rand() % 2 - 0;
                if (array[i][j] == 1) {
                    array[j][i] = 1;
                    //array_edges.push_back(i);
                    //array_edges.push_back(j);
                }
            }
        }
    }
    void print_array() {
        cout << "---adjancnecy_matrix---" << endl;
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < number_of_vertices; j++) {
                cout << array[i][j] << "  ";
            }
            cout << "\n" << endl;
        }
        cout << "__________________________________________"<<endl;
    }
    void creating_an_adjacency_list(){
        //adjancnecy_list = (int**)malloc(sizeof(int*) * number_of_vertices);
        
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < number_of_vertices; j++){
                if (array[i][j] == 1) {
                    adjancnecy_list.push_back(vector<int>());
                    adjancnecy_list[i].push_back(j);
                }
            }
        }
    }
    // void creating_an_adjacency_list(){
    //     for (int i = 0; i < number_of_vertices; ++i) {
    //         for (int j = 0; j < number_of_vertices; ++j){
    //             if (array[i][j] == 1){
    //                 adjancnecy_list[i].push_back(j);
    //             }
    //         }
    //     }
    // }

    void printf_adjacecncy_list(){
        cout<<  "--adjancnecy_list--"<< endl;
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < adjancnecy_list[i].size(); j++){
                cout << adjancnecy_list[i][j]<< "  ";
            }
            cout << endl;
        }
    }
// практика
//     int ** createG(int size){
//         int **G;
//         G = (int**)malloc(size*sizeof(int*));
//         for (int i = 0; i < size; i++){
//             G[i] = (int*)malloc(size*sizeof(int));
//         }
//         for (int i = 0; i < size; i++){
//             for (int j = i + 1; j < size; j++){
//                 G[i][j] = rand()% 2 -1;
//                 G[j][i] = G[i][j];
//             }
//         }
//     return G;
//     }

//     int **delG(int **G, int size, int V){
//         int **new_G = create_G(size - 1);
//         for (int i = 0; i < size; i++){
//             for (int j = 0; j < size; j++){
//                 if (i < V && j < V){
//                     new_G[i][j] = G[i][j];
//                 }
//                 if (i > V && j > V) {
//                     new_G[i][j] = G[i][j];
//                 }
//                 if (i > V && j < V){
//                     new_G[i][j] = G[i][j];
//                 }
//                 if (i < V && j > V){
//                     new_G[i][j] = G[i][j];
//                 }
//             }
//         }
//         return new_G;
//     }
};
void task_1 (){
    Graph M1;
    Graph M2;
    M1.complex_function_the_create_TASK1();
    M2.complex_function_the_create_TASK1();
}
int main(){
    task_1();
    return 0;
}