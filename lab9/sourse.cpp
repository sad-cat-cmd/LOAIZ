#include <iostream>
#include <cstring>
#include <queue>


using namespace std;
class Graph {
    public:
    void complex_function_the_create_TASK1_1(){
        Set_number_of_vertices();
        initializing_a_two_dimensional(array);
        create_random_adjacency_matrix(array);
        print_array(array);
        return;
    }
    void complex_function_the_create_TASK1_2(){
        findDistances(0, array);
    }
    private:
    int number_of_vertices {0};
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

    void findDistances(int startVertex, int**& G) {
    vector<int> DIST(number_of_vertices, -1);
    BFSD(startVertex, G, DIST);
    cout << "Distances from vertex " << startVertex << ":" << endl;
    for (int i = 0; i < DIST.size(); i++) {
        cout << "DIST[" << i << "] = " << DIST[i] << endl;
    }
}
    void BFSD(int v, int**& G, vector<int>& DIST) {
    queue<int> Q;
    Q.push(v);
    DIST[v] = 0;

    while (!Q.empty()) {
        v = Q.front();
        Q.pop();

        cout << "Visited: " << v << endl;

        for (int i = 0; i < number_of_vertices; i++) {
            if (G[v][i] == 1 && DIST[i] == -1) {
                Q.push(i);
                DIST[i] = DIST[v] + 1;
            }
        }
    }
}
};
void task_1(){
    Graph G;
    G.complex_function_the_create_TASK1_1();
    G.complex_function_the_create_TASK1_2();

}
int main(){
    task_1();
}