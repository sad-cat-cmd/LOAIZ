#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Graph{
public:
    void complex_function_the_create_TASK1(){
        Set_number_of_vertices();
        initializing_a_two_dimensional(array);
        create_random_adjacency_matrix(array);
        print_array(array);
        creating_an_adjacency_list();
        printf_adjacency_list();
        return;
    }
    void complex_function_the_create_TASK2(){
        int vertex_1 {NULL};
        int vertex_2 {NULL};
        Set_number_of_vertices();
        initializing_a_two_dimensional(array);
        create_random_adjacency_matrix(array);
        print_array(array);

        set_numbers_value(&vertex_1, &vertex_2, 0);
        if (corrected_num_enter(vertex_1, vertex_2) == 0) return;
        identifying_the_vertices_of_a_graph(vertex_1, vertex_2);
        cout << "__________________" << endl;
        set_numbers_value(&vertex_1, &vertex_2, 1);
        if (corrected_num_enter(vertex_1, vertex_2) == 0) return;
        rib_tightening(vertex_1, vertex_2);
        cout << "__________________" << endl;
        set_numbers_value(&vertex_1, &vertex_2, 2);
        if (corrected_num_enter(vertex_1, vertex_2) == 0) return;
        splitting_vertices(vertex_1);
        cout << "___________________" << endl;

        return;
    }
    void ccomplex_function_the_create_TASK3() {
        vector <int> num_size_vertices{NULL};
        Set_number_of_vertices();
        initializing_a_two_dimensional(array);
        create_random_adjacency_matrix(array);
        print_array(array);
        num_size_vertices[0] = number_of_vertices;

        Set_number_of_vertices();
        initializing_a_two_dimensional(array_1);
        create_random_adjacency_matrix(array_1);
        print_array(array_1);
        
        /*if (number_of_vertices > num_size_vertices[0]) num_size_vertices.push_back(number_of_vertices);
        else {
            num_size_vertices.push_back(num_size_vertices[0]);
            num_size_vertices[0] = number_of_vertices;
        }*/
        num_size_vertices.push_back(number_of_vertices);
        cout << "--COMBINED_MATRIX--:" << endl;
        combining_graphs(num_size_vertices);
        cout << "__________________________________________" << endl;
        cout << "--INTERSECTION_MATRIX--:" << endl;
        intersection_graphs(num_size_vertices);
        cout << "__________________________________________" << endl;
        cout << "--RING_SUM_MATRIX--:" << endl;
        ring_sum(num_size_vertices);
        cout << "__________________________________________" << endl;

    }

private:
    int number_of_vertices {0};
    vector <vector<int>> adjacency_list;
    int ** temp_array_vertices {NULL};
    int** array = { NULL };
    int** array_1 = { NULL };
    void splitting_vertices(int vertex_1) {
        vector <int> temp_vertices;
        int New_index{ 0 };
        int size = number_of_vertices + 1;

        int** New_array = (int**)malloc(sizeof(int*) * size);
        for (int i = 0; i < size; i++) {
            New_array[i] = (int*)malloc(sizeof(int*) * size);
            memset(New_array[i], 0, sizeof(int*) * size);
        }
        for (int i = 0; i < number_of_vertices; ++i) {
            if (array[vertex_1][i] == 1) temp_vertices.push_back(i);
        }
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < number_of_vertices; j++) {
                New_array[i][j] = array[i][j];
            }
        }
       
        if (temp_vertices.size() == 0) {
            New_array[vertex_1][number_of_vertices] = 1;
            New_array[number_of_vertices][vertex_1] = 1;
        }
        else {
            // adding links
            New_array[number_of_vertices][temp_vertices[0]] = 1;
            New_array[number_of_vertices][vertex_1] = 1;
            New_array[temp_vertices[0]][number_of_vertices] = 1;
            New_array[vertex_1][number_of_vertices] = 1;
            // deleting links
            New_array[vertex_1][temp_vertices[0]] = 0;
            New_array[temp_vertices[0]][vertex_1] = 0;
        }
        for (int i = 0; i < (number_of_vertices + 1); i++) {
            for (int j = 0; j < (number_of_vertices + 1); j++) {
                cout << New_array[i][j] << "  ";
            }
            cout << endl;
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

    void initializing_a_two_dimensional(int**& temp_array) {
        temp_array = (int**)malloc(sizeof(int*) * number_of_vertices);
        for (int i = 0; i < number_of_vertices; i++) {
            temp_array[i] = (int*)malloc(sizeof(int) * number_of_vertices);
            memset(temp_array[i], 0, sizeof(int) * number_of_vertices);
        }
        return;
    }
    void create_random_adjacency_matrix(int**& temp_array) {
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = i + 1; j < number_of_vertices; j++) {
                temp_array[i][j] = rand() % 2 - 0;
                if (temp_array[i][j] == 1) {
                    temp_array[j][i] = 1;
                    //array_edges.push_back(i);
                    //array_edges.push_back(j);
                }
            }
        }
        return;
    }
    void print_array(int**& temp_array) {
        cout << "---adjancnecy_matrix---" << endl;
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < number_of_vertices; j++) {
                cout << temp_array[i][j] << "  ";
            }
            cout << "\n" << endl;
        }
        cout << "__________________________________________" << endl;
        return;
    }

    void creating_an_adjacency_list(){
        adjacency_list.resize(number_of_vertices);
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < number_of_vertices; j++){
                /*if (check_sum_in_line(array, i) == 0) {
                    adjacency_list.clear();
                    continue;
                }*/
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
    int max_num_vertices(vector <int> num_size_ver) {
        if (num_size_ver[0] > num_size_ver[1]) return num_size_ver[0];
        else return num_size_ver[1];
    }
    int min_num_vertices(vector <int> num_size_ver) {
        if (num_size_ver[0] < num_size_ver[1]) return num_size_ver[0];
        else return num_size_ver[1];
    }
    void combining_graphs(vector <int> num_size_ver) {
        int max_Size_Graph = max_num_vertices(num_size_ver);

        int** combined_matrix = (int**)malloc(sizeof(int*) * max_Size_Graph);
        for (int i = 0; i < max_Size_Graph; i++) {
            combined_matrix[i] = (int*)malloc(sizeof(int*) * max_Size_Graph);
            memset(combined_matrix[i], 0, sizeof(int*) * max_Size_Graph);
        }
        
        for (int i = 0; i < num_size_ver[0]; i++) {
            for (int j = 0; j < num_size_ver[0]; j++) {
                if (array_1[i][j]) combined_matrix[i][j] = 1;
            }
        }
        for (int i = 0; i < num_size_ver[1]; i++) {
            for (int j = 0; j < num_size_ver[1]; j++) {
                if (array_1[i][j] == 1) combined_matrix[i][j] = 1;
            }
        }

        //printing
        for (int i = 0; i < max_Size_Graph; i++) {
            for (int j = 0; j < max_Size_Graph; j++) {
                cout << combined_matrix[i][j] << "  ";
            }
            cout << "\n" << endl;
        }
        
    }
    bool ret_ring_sum_in_rows(int**& matrix, int size, int num_iter) {
        int temp_sum{ 0 };
        for (int i = 0; i < size; i++) {
            if (matrix[num_iter][i] == 1) temp_sum++;
            if (temp_sum > 1) return true;
            if (temp_sum == 1 && i == (size - 1)) return false;
        }
    }
    void intersection_graphs(vector <int> num_size_ver){
        int min_Size_Graph = min_num_vertices(num_size_ver);

        int** combined_matrix = (int**)malloc(sizeof(int*) * min_Size_Graph);
        for (int i = 0; i < min_Size_Graph; i++) {
            combined_matrix[i] = (int*)malloc(sizeof(int*) * min_Size_Graph);
        }
        for (int i = 0; i < min_Size_Graph; i++ ) {
            for (int j = 0; j < min_Size_Graph; j++) {
                combined_matrix[i][j] = array[i][j] & array_1[i][j];
            }
        }

       for (int i = 0; i < min_Size_Graph; i++) {
            for (int j = 0; j < min_Size_Graph; j++) {
                cout << combined_matrix[i][j] << "  ";
            }
            cout << "\n" << endl;
       }
    }

    void ring_sum (vector <int> num_size_ver) {
        int min_Size_Graph = min_num_vertices(num_size_ver);
        int max_Size_Graph = max_num_vertices(num_size_ver);
        int** combined_matrix = (int**)malloc(sizeof(int*) * max_Size_Graph);
        for (int i = 0; i < max_Size_Graph; i++) {
            combined_matrix[i] = (int*)malloc(sizeof(int*) * max_Size_Graph);
            memset(combined_matrix[i], 0, sizeof(int*) * max_Size_Graph);
        }
        for (int i = 0; i < num_size_ver[0]; i++) {
            for (int j = 0; j < num_size_ver[0]; j++) {
                combined_matrix[i][j] = array[i][j];
            }
        }
        
        for (int i = 0; i < num_size_ver[1]; i++) {
            for (int j = 0; j < num_size_ver[1]; j++) {
                if ((combined_matrix[i][j] == 1) && (combined_matrix[i][j] == array_1[i][j])) combined_matrix[i][j] = 0;
                else if (combined_matrix[i][j] == 0 && array_1[i][j] == 1) combined_matrix[i][j] = 1;
                else combined_matrix[i][j] = 0;
            }
        }
        
        for (int i = 0; i < max_Size_Graph; i++) {
            for (int j = 0; j < max_Size_Graph; j++) {
                cout << combined_matrix[i][j] << "  ";
            }
            cout << "\n" << endl;
        }
    }
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
    Graph T1;
    T1.ccomplex_function_the_create_TASK3();
}
int main(){
    //task_1();
    //task_2();
    task_3();
    return 0;
}