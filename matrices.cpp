#include <iostream>

// Función que imprime una matriz NxN
void imprimir_matriz(float **matriz, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

// Función que llena con valores una matriz NxN
void llenar_matriz(float **matriz, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << "[" << i + 1 << ", " << j + 1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }
}

// Función que realiza la suma de dos matrices NxN
void sum_matrices(float **matriz1, float **matriz2, float **resultado, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

// Función que realiza la resta 
void res_matrices(float **matriz1, float **matriz2, float **resultado, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

// Función que realiza la multiplicación 
void mult_matrices(float **matriz1, float **matriz2, float **resultado, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < N; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    std::cout << "**** Bienvenide ****\n" << std::endl;
    std::cout << "Suma, Resta y Multiplicación de matrices NxN\n" << std::endl;
    
    // Se pide el tamaño de las matrices al usuario y se crea un apuntador de apuntadores para cada una.
    int N;
    std::cout << "Ingresa el tamaño de tus matrices: ";
    std::cin >> N;

    // Se crean los apuntadores de apuntadores para cada matriz.
    float **matrizA = new float *[N];
    float **matrizB = new float *[N];
    float **resultado = new float *[N];

    // El for es para que se cree la matriz de tamaño N
    for (int i = 0; i < N; i++) {
        matrizA[i] = new float[N];
        matrizB[i] = new float[N];
        resultado[i] = new float[N];
    }

    // Se piden los datos de las matrices al usuario.
    std::cout << "Ingresa elementos de matriz A:" << std::endl;
    llenar_matriz(matrizA, N);

    std::cout << "Ingresa elementos de matriz B:" << std::endl;
    llenar_matriz(matrizB, N);

    // Se imprimen las matrices A y B
    std::cout << "------Matriz A:------\n";
    imprimir_matriz(matrizA, N);

    std::cout << "++++++Matriz B:++++++\n";
    imprimir_matriz(matrizB, N);

    // Proceden a realizar las operaciones
    sum_matrices(matrizA, matrizB, resultado, N);
    std::cout << "------A + B------\n";
    imprimir_matriz(resultado, N);

    res_matrices(matrizA, matrizB, resultado, N);
    std::cout << "++++++A - B++++++\n";
    imprimir_matriz(resultado, N);

    mult_matrices(matrizA, matrizB, resultado, N);
    std::cout << "------A X B------\n" ;
    imprimir_matriz(resultado, N);

    // Se borran las matrices.
    for (int i = 0; i < N; i++) {
        delete[] matrizA[i];
        delete[] matrizB[i];
        delete[] resultado[i];
    }

    // Se borran los apuntadores de apuntadores
    delete[] matrizA;
    delete[] matrizB;
    delete[] resultado;

    return 0;
}
