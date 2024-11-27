#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <limits>

using namespace std;

class Graph {
    public:
    void complex_function_the_create_TASK1_1(){
        Set_number_of_vertices();
        initializing_a_two_dimensional(array, number_of_vertices);
        create_random_adjacency_matrix(array);
        print_array(array);
        return;
    }
    void complex_function_the_create_TASK1_2(){
        findDistances(0, array);
    }

    void complex_function_the_create_TASK2_1(){
        
        Set_number_of_vertices();
        initializing_a_two_dimensional(array, number_of_vertices);
        create_random_adjacency_matrix(array);
        print_array(array);
        
        Set_number_of_vertices_1();
        initializing_a_two_dimensional(array_1, number_of_vertices_1);
        create_random_ajacency_matrix_1(array_1);
        print_array(array_1);
        
        int radius = 0, diameter = 0;
        calculateRadiusAndDiameter(&radius, &diameter);


    }
    void complex_function_the_create_TASK2_2(){
    }

    private:
    int number_of_vertices {0};
    int number_of_vertices_1 {0};
    int** array = { NULL };
    int** array_1 = { NULL };
    //const int MAX_VERTICES =100;

    void Set_number_of_vertices() {
        cout << "enter the number of vertices: " << endl;
        cin >> number_of_vertices;
    }
    void initializing_a_two_dimensional(int**& temp_array, int number_of_vertices) {
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
                    temp_array[i][j] = rand() % 10 + 1;
                    temp_array[j][i] = temp_array[i][j];
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
            if (G[v][i] > 0 && DIST[i] == -1) {
                // Помещаем вершину в очередь
                Q.push(i);
                // Обновляем расстояние
                DIST[i] = DIST[v] + G[v][i];
            }
        }
    }
}

    void Set_number_of_vertices_1(){
        cout << "enter the number of vertices_1: " << endl;
        cin >> number_of_vertices_1;
    }
    void create_random_ajacency_matrix_1(int **& temp_array) {
        for (int i = 0; i < number_of_vertices_1; i++) {
            for (int j = 0; j < number_of_vertices_1; j++){
                if (i == j) continue;
                temp_array[i][j] = rand() %2 - 0;
                if (temp_array[i][j] == 1) temp_array[i][j] = rand() % 10 + 1;
            }
        }
    }

    void bfs(int start, int distances[]) {
        const int SIZE = 100;
        bool visited[SIZE] = { false };
        int queue[SIZE], front = 0, rear = 0;

        visited[start] = true;
        distances[start] = 0;
        queue[rear++] = start;

        while (front < rear) {
            int current = queue[front++];
            for (int i = 0; i < number_of_vertices; i++) {
                if (array[current][i] != numeric_limits<double>::infinity() && !visited[i]) {
                    visited[i] = true;
                    distances[i] = distances[current] + 1;
                    queue[rear++] = i;
                }
            }
        }
    }
    void calculateRadiusAndDiameter(int* radius, int* diameter) {
        const int MAX_VERTICES = 100;
        *radius = numeric_limits<double>::infinity();
        *diameter = 0;

        for (int i = 0; i < number_of_vertices; i++) {
            int distances[MAX_VERTICES];
            for (int j = 0; j < number_of_vertices; j++) distances[j] = numeric_limits<double>::infinity();
            bfs(i, distances);

            int maxDistance = 0;
            for (int j = 0; j < number_of_vertices; j++) {
                if (distances[j] != numeric_limits<double>::infinity()) {
                    if (distances[j] > maxDistance) {
                        maxDistance = distances[j];
                    }
                }
            }

            if (maxDistance < *radius) {
                *radius = maxDistance;
            }
            if (maxDistance > *diameter) {
                *diameter = maxDistance;
            }
        }
    }
};
void task_1() {
    Graph G;
    G.complex_function_the_create_TASK1_1();
    G.complex_function_the_create_TASK1_2();
}
void task_2(){
    Graph G;
    G.complex_function_the_create_TASK2_1();
    G.complex_function_the_create_TASK2_2();
}
int main() {
    //task_1();
    task_2();
}