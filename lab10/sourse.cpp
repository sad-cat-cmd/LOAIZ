#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <limits>

#define INF INT_MAX
using namespace std;

class Graph {
    public:
    void complex_function_the_create_TASK1_1(){
        Set_number_of_vertices();
        initializing_a_two_dimensional(array, number_of_vertices);
        create_random_adjacency_matrix(array);
        print_array(array, number_of_vertices);
        return;
    }
    void complex_function_the_create_TASK1_2(){
        findDistances(0, array);
    }

    void complex_function_the_create_TASK2_1(){
        
        Set_number_of_vertices();
        initializing_a_two_dimensional(array, number_of_vertices);
        create_random_adjacency_matrix(array);
        print_array(array, number_of_vertices);
        
        Set_number_of_vertices_1();
        initializing_a_two_dimensional(array_1, number_of_vertices_1);
        create_random_ajacency_matrix_1(array_1);
        print_array(array_1, number_of_vertices_1);
        
        find_Radius_And_Diameter_1();
        floyd_Warshall();

        find_Peripheral_Vertices_Oriented();
        find_Central_Vertices_Oriented();
        findPeripheralVerticesUnoriented();
        findCentralVerticesUnoriented();

    }
    void complex_function_the_create_TASK2_2(){
    }

    private:
    int number_of_vertices {0};
    int number_of_vertices_1 {0};
    int** array = { NULL };
    int** array_1 = { NULL };

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
    void print_array(int**& temp_array, int temp_number_of_vertices) {
        cout << "---adjancnecy_matrix---" << endl;
        for (int i = 0; i < temp_number_of_vertices; i++) {
            for (int j = 0; j < temp_number_of_vertices; j++) {
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

    int min(int a, int b) { return (a < b) ? a : b; }
    void find_Radius_And_Diameter_1() {
        int **dist = (int**)malloc(sizeof(int) * number_of_vertices) ;
        for (int i = 0; i < number_of_vertices;i++ ) {
            dist[i] = (int*)malloc(sizeof(int) * number_of_vertices);
            memset(dist[i], 0, sizeof(int) * number_of_vertices);
        }
        int i, j, k;

        // Инициализация матрицы расстояний
        for (i = 0; i < number_of_vertices; i++) {
            for (j = 0; j < number_of_vertices; j++) {
                dist[i][j] = array[i][j];
                if (i != j && array[i][j] == 0) dist[i][j] = INT_MAX;
            }
        }

        // Применение алгоритма Флойда-Уоршелла
        for (k = 0; k < number_of_vertices; k++) {
            for (i = 0; i < number_of_vertices; i++) {
                for (j = 0; j < number_of_vertices; j++) {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX && dist[i][k] + dist[k][j] < dist[i][j])
                        dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }

        // Вычисление эксцентриситетов
        int* ecc = (int*)malloc(sizeof(int) * number_of_vertices);
        memset(ecc, 0, sizeof(int) * number_of_vertices);
        //int ecc[SIZE] = { 0 };
        for (i = 0; i < number_of_vertices; i++) {
            for (j = 0; j < number_of_vertices; j++) {
                if (dist[i][j] != INT_MAX) ecc[i] = (ecc[i] > dist[i][j]) ? ecc[i] : dist[i][j];
            }
        }

        // Нахождение радиуса и диаметра
        int radius = INT_MAX, diameter = INT_MIN;
        for (i = 0; i < number_of_vertices; i++) {
            radius = (radius < ecc[i]) ? radius : ecc[i];
            diameter = (diameter > ecc[i]) ? diameter : ecc[i];
        }

        // Вывод результата
        cout << "undirected graph:" << endl;
        cout << "radius: " << radius << "  diameter: :" << diameter<< endl;
    }
    void floyd_Warshall() {
        int** dist = (int**)malloc(sizeof(int) * number_of_vertices_1);
        for (int i = 0; i < number_of_vertices_1; i++) {
            dist[i] = (int*)malloc(sizeof(int) * number_of_vertices_1);
            memset(dist[i], 0, sizeof(int) * number_of_vertices_1);
            for (int j = 0; j < number_of_vertices_1; j++) {
                if (i == j) {
                    dist[i][j] = 0; // Расстояние до самой себя равно 0
                }
                else if (array_1[i][j] != 0) {
                    dist[i][j] = array_1[i][j]; // Инициализация расстояний по прямым ребрам
                }
                else {
                    dist[i][j] = INF; // Инициализация расстояний между несвязанными вершинами
                }
            }
        }
        int i, j, k;

        // Инициализация матрицы расстояний
        /*for (i = 0; i < number_of_vertices_1; i++) {
            for (j = 0; j < number_of_vertices_1; j++) {
                dist[i][j] = array_1[i][j];
            }
        }*/

        // Алгоритм Флойда-Уоршелла
        for (k = 0; k < number_of_vertices_1; k++) {
            for (i = 0; i < number_of_vertices_1; i++) {
                for (j = 0; j < number_of_vertices_1; j++) {
                    if (dist[i][k] != INF && dist[k][j] != INF) {
                        if (dist[i][j] > dist[i][k] + dist[k][j]) {
                            dist[i][j] = dist[i][k] + dist[k][j];
                        }
                    }
                }
            }
        }

        // Нахождение радиуса и диаметра
        int radius = INF;
        int diameter = 0;
        for (i = 0; i < number_of_vertices_1; i++) {
            int ecc = 0; // Эксцентриситет вершины i
            for (j = 0; j < number_of_vertices_1; j++) {
                if (i != j && dist[i][j] != INF && dist[i][j] > ecc) {
                    ecc = dist[i][j];
                }
            }
            if (ecc < radius) {
                radius = ecc;
            }
            if (ecc > diameter) {
                diameter = ecc;
            }
        }
        cout << "oriented graph :" << endl;
        cout << "radius: " << radius << "  diameter: :" << diameter << endl;
    }

    void bfs(int **& temp_array, int vertex, vector<int>& distances, int temp_number_of_vertices) {
        //int n = graph.size();
        vector<bool> visited(temp_number_of_vertices, false);
        queue<int> q;
        q.push(vertex);
        visited[vertex] = true;
        distances[vertex] = 0;

        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();

            for (int i = 0; i < temp_number_of_vertices; i++) {
                if (temp_array[currentVertex][i] != 0 && !visited[i]) {
                    q.push(i);
                    visited[i] = true;
                    distances[i] = distances[currentVertex] + 1;
                }
            }
        }
    }
    void find_Peripheral_Vertices_Oriented() {
        //int n = graph.size();
        vector<int> eccentricities(number_of_vertices_1, 0);

        for (int i = 0; i < number_of_vertices_1; i++) {
            vector<int> distances(number_of_vertices_1, INF);
            bfs(array_1, i, distances, number_of_vertices_1);

            for (int j = 0; j < number_of_vertices_1; j++) {
                if (distances[j] > eccentricities[i]) {
                    eccentricities[i] = distances[j];
                }
            }
        }

        int maxEccentricity = 0;
        for (int i = 0; i < number_of_vertices_1; i++) {
            if (eccentricities[i] > maxEccentricity) {
                maxEccentricity = eccentricities[i];
            }
        }

        cout << "peripheral vertices of a directed graph: ";
        for (int i = 0; i < number_of_vertices_1; i++) {
            if (eccentricities[i] == maxEccentricity) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    void find_Central_Vertices_Oriented() {
        //int n = graph.size();
        vector<int> eccentricities(number_of_vertices_1, INF);

        for (int i = 0; i < number_of_vertices_1; i++) {
            vector<int> distances(number_of_vertices_1, INF);
            bfs(array_1, i, distances, number_of_vertices_1);

            for (int j = 0; j < number_of_vertices_1; j++) {
                if (distances[j] < eccentricities[i]) {
                    eccentricities[i] = distances[j];
                }
            }
        }

        int minEccentricity = INF;
        for (int i = 0; i < number_of_vertices_1; i++) {
            if (eccentricities[i] < minEccentricity) {
                minEccentricity = eccentricities[i];
            }
        }

        cout << "central vertices of a directed graph: ";
        for (int i = 0; i < number_of_vertices_1; i++) {
            if (eccentricities[i] == minEccentricity) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    void findPeripheralVerticesUnoriented() {
        vector<int> eccentricities(number_of_vertices, 0);

        for (int i = 0; i < number_of_vertices; i++) {
            vector<int> distances(number_of_vertices, INF);
            bfs(array, i, distances, number_of_vertices);

            for (int j = 0; j < number_of_vertices; j++) {
                if (distances[j] > eccentricities[i]) {
                    eccentricities[i] = distances[j];
                }
            }
        }

        int maxEccentricity = 0;
        for (int i = 0; i < number_of_vertices; i++) {
            if (eccentricities[i] > maxEccentricity) {
                maxEccentricity = eccentricities[i];
            }
        }

        cout << "Peripheral vertices of an undirected graph: ";
        for (int i = 0; i < number_of_vertices; i++) {
            if (eccentricities[i] == maxEccentricity) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    void findCentralVerticesUnoriented() {
        vector<int> eccentricities(number_of_vertices, INF);

        for (int i = 0; i < number_of_vertices; i++) {
            vector<int> distances(number_of_vertices, INF);
            bfs(array, i, distances, number_of_vertices);

            for (int j = 0; j < number_of_vertices; j++) {
                if (distances[j] < eccentricities[i]) {
                    eccentricities[i] = distances[j];
                }
            }
        }

        int minEccentricity = INF;
        for (int i = 0; i < number_of_vertices; i++) {
            if (eccentricities[i] < minEccentricity) {
                minEccentricity = eccentricities[i];
            }
        }

        cout << "central vertices of an undirected graph: ";
        for (int i = 0; i < number_of_vertices; i++) {
            if (eccentricities[i] == minEccentricity) {
                cout << i << " ";
            }
        }
        cout << endl;
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
    task_1();
    task_2();
}