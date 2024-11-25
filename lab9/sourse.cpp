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
    // Инициализируем вектор расстояний
    vector<int> DIST(number_of_vertices, -1);

    // Запускаем BFS
    BFSD(startVertex, G, DIST);

    // Выводим расстояния до всех вершин
    cout << "Distances from vertex " << startVertex << ":" << endl;
    for (int i = 0; i < DIST.size(); i++) {
        cout << "DIST[" << i << "] = " << DIST[i] << endl;
    }
}
    void BFSD(int v, int**& G, vector<int>& DIST) {
    // Создаем пустую очередь
    queue<int> Q;
    // Помещаем начальную вершину в очередь
    Q.push(v);
    // Обновляем расстояние до начальной вершины
    DIST[v] = 0;

    // Пока очередь не пуста
    while (!Q.empty()) {
        // Устанавливаем текущую вершину
        v = Q.front();
        // Удаляем первый элемент из очереди
        Q.pop();

        // Выводим текущую вершину
        cout << "Visited: " << v << endl;

        // Проходим по всем вершинам
        for (int i = 0; i < number_of_vertices; i++) {
            // Если есть ребро и вершина не посещена
            if (G[v][i] == 1 && DIST[i] == -1) {
                // Помещаем вершину в очередь
                Q.push(i);
                // Обновляем расстояние
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