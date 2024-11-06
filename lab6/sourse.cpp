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
        initializing_a_two_dimensional();
        create_random_adjacency_matrix();
        print_array();
        set_numbers_value(&vertex_1, &vertex_2, 0);
        if (corrected_num_enter(vertex_1, vertex_2) == 0) return;
        identifying_the_vertices_of_a_graph(vertex_1, vertex_2);
        set_numbers_value(&vertex_1, &vertex_2, 1);
        if (corrected_num_enter(vertex_1, vertex_2) == 0) return;
        rib_tightening(vertex_1, vertex_2);
        set_numbers_value(&vertex_1, &vertex_2, 2);
        if (corrected_num_enter(vertex_1, vertex_2) == 0) return;
        splitting_vertices(vertex_1);
        return;
    }
    

private:
    int number_of_vertices {0};
    vector <vector<int>> adjacency_list;
    int ** temp_array_vertices {NULL};
    int** array = { NULL };
    void splitting_vertices(int vertex_1) {
        int New_index{ 0 };
        int** New_array = (int**)malloc(sizeof(int*) * (number_of_vertices));
        for (int i = 0; i < number_of_vertices; i++) {
            New_array[i] = (int*)malloc(sizeof(int*) * (number_of_vertices));
        }
        for (int i = 0; i < (number_of_vertices+1); ++i) {
            if (i == vertex_1) continue;
            for (int j = 0; j < (number_of_vertices + 1); ++j) {
                if (j = vertex_1) continue;
                int New_J_index = (j > vertex_1) ? j : j + 1;
                New_array[New_index][New_J_index] = array[i][j];
            }
            New_index++;
        }
        for (int i = 0; i < /*(number_of_vertices -1)*/ number_of_vertices; i++) {
            if (i != vertex_1) {
                New_array[vertex_1][i] |= array[vertex_1][i];
                New_array[i][vertex_1] |= array[i][vertex_1];
            }
        }
    }
    void identifying_the_vertices_of_a_graph(int vertex_1, int vertex_2){
        int New_index = 0;
        int** New_array = (int**)malloc(sizeof(int*) * (number_of_vertices - 1));
        for (int i = 0; i < number_of_vertices; i++) {
            New_array[i] = (int*)malloc(sizeof(int*) * (number_of_vertices - 1));
        }
        for (int i = 0; i < number_of_vertices; ++i) {
            if (i == vertex_2) continue;
            for (int j = 0; j < number_of_vertices; ++j) {
                if (j == vertex_2) continue;
                int New_J_index = (j > vertex_2) ? j - 1 : j;
                New_array[New_index][New_J_index] = array[i][j];
            }
            New_index++;
        }
        for (int i = 0; i < /*(number_of_vertices -1)*/ number_of_vertices; i++) {
            if (i != vertex_1 && i != vertex_2) {
                New_array[vertex_1][i] |= array[vertex_2][i];
                New_array[i][vertex_1] |= array[i][vertex_2];
            }
        }
        for (int i = 0; i < (number_of_vertices - 1); i++) {
            for (int j = 0; j < (number_of_vertices - 1); j++) {
                cout << New_array[i][j] << "  "; 
            }
            cout << endl; 
        }

    }
    int corrected_num_enter(int vertex_1, int vertex_2){
        if ((number_of_vertices > vertex_1 && vertex_1 > -1) && (number_of_vertices > vertex_2 && vertex_2 > -1)) {
            return 1;
        }
        else {
            cout << "Error: invalid range of numbers"<< endl;
            return 0;
        }
    }
    void rib_tightening(int vertex_1, int vertex_2) {
        if (array[vertex_1][vertex_2] == 1) identifying_the_vertices_of_a_graph(vertex_1, vertex_2);
        else {
            cout<< "Error: the absence of an edge" << endl;
            return;
        }
    }
    void set_numbers_value(int * vertex_1, int* vertex_2, int num) {
        switch (num)
        {
        case 0:{
            cout<< "enter the numbers of the graph to identify"<< endl;
            cout<< "the first vertex:  ";
            cin >> *vertex_1;
            cout<< "the two vertex:  ";
            cin >> *vertex_2;
            return;
        }
        case 1: {
            cout<< "enter the numbers of the rib: "<< endl;
            cout<< "vertex 1: ";
            cin >> *vertex_1;
            cout<< "vertex 2: ";
            cin >> *vertex_2;
            return;
        }
        case 2: {
            cout << "enter the vertex number to split: ";
            cin >> *vertex_1;
            return;
        }
        default:
            break;
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
void task_3 (){

}
int main(){
    //task_1();
    task_2();
    task_3();
    return 0;
}