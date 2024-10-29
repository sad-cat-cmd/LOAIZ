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
        printf_adjacency_list();
        return;
    }
    void complex_function_the_create_TASK2(){
        int vertex_1 {NULL};
        int vertex_2 {NULL};
        Set_number_of_vertices();
        create_random_adjacency_matrix();
        print_array();
        cout<< "enter the numbers of the graph to identify"<< endl;
        cout<< "the first vertex:  ";
        cin >> vertex_1;
        cout<< "the two vertex:  ";
        cin >> vertex_2;
        identifying_the_vertices_of_a_graph(vertex_1, vertex_2);
    }
    

private:
    int number_of_vertices {0};
    vector <vector<int>> adjacency_list;
    int ** temp_array_vertices {NULL};
    int** array = { NULL };
    struct Node {
        int vertex;
        struct Node* next;
    };
    void identifying_the_vertices_of_a_graph(int vertex_1, int vertex_2){
        temp_array_vertices = (int**)malloc(sizeof(int*) * 2);
        temp_array_vertices[1] = (int*)malloc(sizeof(int*) * number_of_vertices);
        for (int i = 0; i < number_of_vertices; i++){
            temp_array_vertices[1][i] = array[vertex_1][i];
            temp_array_vertices[2][i] = array[vertex_2][i];
        }
    }
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
        adjacency_list.resize(number_of_vertices);
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < number_of_vertices; j++){
                if (check_sum_in_line(array, i) == 0) {
                    adjacency_list.clear();
                    continue;
                }
                if (array[i][j] == 1) {
                    
                    adjacency_list[i].push_back(j);
                    //adjacency_list[j].push_back(i);
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
    int check_sum_in_line(int ** temp_array, int i) {
        int sum = 0;
        for (int j = 0; j < number_of_vertices; i++) {
            if (temp_array[i][j] == 1) {
                sum =1;
                break;
            }
        }
        return sum;
    }
    void printf_adjacency_list(){
        cout<<  "--adjancnecy_list--"<< endl;
        for (int i = 0; i < adjacency_list.size(); i++)
        {
            /*if (check_sum_in_line(adjacency_list[i]) == 0) {
                continue;
            }*/
            cout << i;
            for (int j = 0; j < adjacency_list[i].size(); j++)
            {
                if (j == adjacency_list[i].size() - 1)
                {
                    cout << " -> " << adjacency_list[i][j] << endl;
                    break;
                }
                else
                    cout << " -> " << adjacency_list[i][j];
            }
        }
    }
// практикаприведи несколько примеров отождествления вершин графа
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
void task_2 (){
    Graph T1;
    T1.complex_function_the_create_TASK2();
}
int main(){
    //task_1();
    return 0;
}