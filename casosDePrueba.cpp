#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función que genera un vector aleatorio de tamaño n
vector<int> randomArray(int n) {
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

// Función que rota un vector k veces a la izquierda
vector<int> rotateArray(const vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> rotatedArr(n);
    for (int i = 0; i < n; i++) {
        rotatedArr[(i + n - k) % n] = arr[i];
    }
    return rotatedArr;
}

// Función que alterna entre 3 métodos para devolver un array en cada caso de prueba
vector<int> generateTestCase(int n) {
    int choice = rand() % 4;
    if (choice == 0) {
        // Generar un array aleatorio
        return randomArray(n);
    } else if (choice == 1) {
        // Generar un array ordenado y rotado
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
        int k = rand() % n;
        return rotateArray(arr, k);
    } else if (choice == 2){
        // Generar un array ordenado
        vector<int> arr(n);
        int potencia = 1;
        for (int i = 0; i < n; i++) {
            arr[i] = potencia;
            potencia *= 2;
        }
        return arr;
    }
    else {
        // Generar un array ordenado y rotado
        vector<int> arr(n);
        int potencia = 1;
        for (int i = 0; i < n; i++) {
            arr[i] = potencia;
            potencia *= 2;
        }
        int k = rand() % n;
        return rotateArray(arr, k);
    }
}

int main() {
    srand(time(NULL));
    int n = 10 + rand() % 15;
    for (int i = 0; i < 100; i++) {
        vector<int> arr = generateTestCase(n);
        cout << "Test case " << i + 1 << ": " << endl;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << ",";
        }
        cout << endl;
    }
    return 0;
}