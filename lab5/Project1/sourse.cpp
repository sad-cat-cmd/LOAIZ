#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

class graph
{
public:
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
    void print_array() {
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < number_of_vertices; j++) {
                cout << array[i][j] << "  ";
            }
            cout << "\n" << endl;
        }
        cout << "__________________________________________"<<endl;
    }
    void determining_the_number_of_vertices_of_the_graph() {
        int count = 0;
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = i + 1; j < number_of_vertices; j++) {
                if (array[i][j] == 1) count++;
            }
        }
        cout << "Count:  " << count << endl;
        cout << "__________________________________________" << endl;
        return;
    }
    void create_random_adjacency_matrix() {
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = i + 1; j < number_of_vertices; j++) {
                array[i][j] = rand() % 2 - 0;
                if (array[i][j] == 1) {
                    array[j][i] = 1;
                    array_edges.push_back(i);
                    array_edges.push_back(j);
                }
            }
        }
    }
    void count_vertices() {
        int temp_count{ 0 };
        int i = 0; int j = 0;
        while (i < number_of_vertices) {
            while (j < number_of_vertices) {
                if (array[i][j] == 1) {
                    temp_count++;
                }
                j++;
            }
            if (temp_count == 1) {
                cout << "end vertex : { " << i << " } \n-----------------------------------------" << endl;
            }
            if (temp_count == 0) {
                cout << "isolated vertex :  { " << i << " } \n-----------------------------------------" << endl;
            }
            if (temp_count == number_of_vertices - 1) {
                cout << "dominant vertex :  { " << i << " } \n-----------------------------------------" << endl;
            }
            temp_count = 0;
            i++;
            j = 0;

        }
        /*for (int i = 0; i < number_of_vertices; i++) {
            for (int j = i+1; j < number_of_vertices; j++) {
                if (array[i][j] == 1) {
                    temp_count++;
                }
            }
            if (temp_count == 1) {
                cout << "end vertex : { " << i << " } { " << j << " }" << endl;
            }
            if (temp_count == 0) {
                cout << "isolated vertex : { " << i << " } { " << j << " }" << endl;
            }
            if (temp_count == number_of_vertices - 1) {
                cout << "dominant vertex : { " << i << " } { " << j << " }" << endl;
            }
            temp_count = 0;
        }*/

    }
    void print_identity_matrix() {
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < array_edges.size() / 2; j++) {
                cout << identity_matrix[i][j] << "  ";
            }
            cout << "\n" << endl;
        }
        cout << "__________________________________________" << endl;
        return;
    }
    void print_array_edges() {
        for (int i = 0; i < array_edges.size(); i= i + 2) {
            cout << "{" << array_edges[i] << "  " << array_edges[i + 1] << " }" << endl; 
        }
        cout << "__________________________________________" << endl;
    }
    void filling_in_the_identity_matrix() {
        identity_matrix = (int**)malloc(sizeof(int*) * number_of_vertices);
        for (int i = 0; i < number_of_vertices; i++) {
            identity_matrix[i] = (int*)malloc(sizeof(int*) * array_edges.size()/2);
            memset(identity_matrix[i], 0, sizeof(int*) * array_edges.size()/2);
        }
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = 0; j < array_edges.size()/2; j= j + 2 ) {
                if (i == array_edges[j] || (i == array_edges[j + 1] && array_edges[j + 1] != NULL)) {
                    identity_matrix[i][j] = 1;
                }
            }
        }
    }
private:
    vector <int> array_edges;
    //int* array_edges{ NULL };
    int number_of_vertices {0};
    int** array = { NULL };
    int** identity_matrix{ NULL };
};
//void determining_the_number_of_vertices_of_the_graph(int** array, int number_of_vertices) {
//    int count = 0;
//    for (int i = 0; i < number_of_vertices; i++) {
//        for (int j = i+1; j < number_of_vertices; j++) {
//            if (array[i][j] == 1) count++;
//        }
//    }
//    cout <<"Count:  "<< count << endl;
//    return;
//}
//void print_array(int **array, int number_of_vertices){
//    cout << "----------------------\n" << endl;
//    for (int i = 0; i < number_of_vertices; i++){
//        for (int j = 0; j < number_of_vertices; j++){
//            cout << array[i][j] << "  ";
//        }
//        cout << "\n"<< endl;
//    }
//    return;
//} 
//void create_random_adjacency_matrix(int **array, int number_of_vertices){
//    for (int i = 0; i < number_of_vertices; i++){
//        for (int j = i+1; j < number_of_vertices; j++){
//            array[i][j] = rand() % 2 - 0;
//            if (array[i][j] == 1) array[j][i] = 1;
//        }
//    }
//}
//void count_vertices(int** array, int number_of_vertices) {
//    int temp_count{ 0 };
//    int i = 0; int j = 0;
//    while (i < number_of_vertices) {
//        while(j < number_of_vertices) {  
//            if (array[i][j] == 1) {
//                temp_count++;
//            }
//            j++;
//        }
//        if (temp_count == 1) {
//            cout << "end vertex : { " << i << " }" << endl;
//        }
//        if (temp_count == 0) {
//            cout << "isolated vertex :  { " << i << " }" << endl;
//        }
//        if (temp_count == number_of_vertices - 1) {
//            cout << "dominant vertex :  { " << i << " }" << endl;
//        }
//        temp_count = 0;
//        i++;
//        j = 0;
//
//    }
//    /*for (int i = 0; i < number_of_vertices; i++) {
//        for (int j = i+1; j < number_of_vertices; j++) {
//            if (array[i][j] == 1) {
//                temp_count++;
//            }
//        }
//        if (temp_count == 1) {
//            cout << "end vertex : { " << i << " } { " << j << " }" << endl;
//        }
//        if (temp_count == 0) {
//            cout << "isolated vertex : { " << i << " } { " << j << " }" << endl;
//        }
//        if (temp_count == number_of_vertices - 1) {
//            cout << "dominant vertex : { " << i << " } { " << j << " }" << endl;
//        }
//        temp_count = 0;
//    }*/
//
//}
void task_1(){
    graph G;
    G.Set_number_of_vertices();
    G.initializing_a_two_dimensional();
    G.create_random_adjacency_matrix();
    G.count_vertices();
    G.print_array();
    G.determining_the_number_of_vertices_of_the_graph();
    G.filling_in_the_identity_matrix();
    G.print_array_edges();
    G.print_identity_matrix();
    return;
}
void task_2() {
    int* a = NULL;
    //a = (int*)malloc(number_of_verticesof(int));
    int array_of_edges;
}
int main(){
    task_1();
    return 0;
}