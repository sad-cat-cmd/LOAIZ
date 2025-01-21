#include <iostream>
#include <ctime>
#include <vector>
#include <cstring>
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
    void determining_the_number_of_vertices_of_the_graph(int num) {
        int count = 0;
        if (num == 1) {
            for (int i = 0; i < number_of_vertices; i++) {
                for (int j = i + 1; j < number_of_vertices; j++) {
                    if (array[i][j] == 1) count++;
                }
            }

        }
        if (num == 2) {
            for (int i = 0; i < number_of_vertices; i++) {
                for (int j = 0; j < array_edges.size() / 2; j++) {
                    if (identity_matrix[i][j] == 1) {
                        count++;
                    }
                }
            }
        }
        if (num == 2) {
            count = count / 2;
        }
        cout << "Count: " << count << endl;
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
    void count_vertices(int num) {
        int temp_count { 0 };
        int i = 0; int j = 0;
        if (num == 1) {
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
            return;
        }
        if (num == 2) {
            while (i < number_of_vertices) {
                while (j < array_edges.size() / 2) {
                    if (identity_matrix[i][j] == 1) {
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
                if (temp_count == array_edges.size()/2) {
                    cout << "dominant vertex :  { " << i << " } \n-----------------------------------------" << endl;
                }
                temp_count = 0;
                i++;
                j = 0;
                
            }
        }
        return;
        
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
        int edgeIndex = 0;
        for (int i = 0; i < number_of_vertices; i++) {
            for (int j = i + 1; j < array_edges.size()/2; j++) {
                if (array[i][j] == 1) {
                    identity_matrix[i][edgeIndex] = 1;     // ������� i ���������� �����
                    identity_matrix[j][edgeIndex] = 1;     // ������� j ���������� �����
                    edgeIndex++;
                }
            }
        }
    }
private:
    vector <int> array_edges;
    int number_of_vertices {0};
    int** array = { NULL };
    int** identity_matrix{ NULL };
};

void task_1(){
    graph G;
    G.Set_number_of_vertices();
    G.initializing_a_two_dimensional();
    G.create_random_adjacency_matrix();
    G.count_vertices(1);
    G.print_array();
    G.determining_the_number_of_vertices_of_the_graph(1);
    G.filling_in_the_identity_matrix();
    G.print_array_edges();
    G.print_identity_matrix();
    G.determining_the_number_of_vertices_of_the_graph(2);
    G.count_vertices(2);
    return;
}
void task_2() {
    int* a = NULL;
    int array_of_edges;
}
int main(){
    task_1();
    return 0;
}