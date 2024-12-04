#include <iostream>
#include <cstring>

using namespace std;
class Graph {
public: 
    void complex_function_the_create_TASK1_1() {
        Set_number_of_vertices();
        initializing_a_two_dimensional(array);
        create_random_adjacency_matrix(array);
        print_array(array);
        return;
    }
    void ccomplex_function_the_create_TASK1_2() {
        NUM = (bool*)malloc(sizeof(bool) * number_of_vertices);
        cout << "--deep_crawl--: " << endl;
        depthFirstSearch();
    }
private:
    bool *NUM;
    int number_of_vertices{ 0 };
    int** array = { NULL };
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
    void DFS(int v) {
        NUM[v] = true;
        cout << v << "-->";
        //printf("%d ", v);

        for (int i = 0; i < number_of_vertices; i++) {
            if (array[v][i] == 1 && !NUM[i]) {
                DFS(i);
            }
        }
    }
    void depthFirstSearch() {
        for (int i = 0; i < number_of_vertices; i++) {
            NUM[i] = false;
        }
        for (int v = 0; v < number_of_vertices; v++) {
            if (!NUM[v]) {
                DFS(v);
            }
        }
    }
};
void task_1() {
    Graph G;
    G.complex_function_the_create_TASK1_1();
    G.ccomplex_function_the_create_TASK1_2();
}
int main() {
    task_1();
}