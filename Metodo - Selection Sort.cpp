//Metodo Selection Sort

#include <iostream>
using namespace std;

void selectionSort(int b[],int a);
int main(){
	int n;
	
	cout << "Ingrese la cantiad de numeros que tendra su arreglo: ";
	cin >> n;
	
	int array[n];
	for (int i = 0; i < n; i++){
		cout << "Ingrese un numero: ";
		cin >> array[i];
	}
	
	cout << "Se ingresaron correctamente los numeros!"<< endl;
	cout << "\nEste es tu arreglo actual: [";
	
	for(int i = 0; i < n; i++){
		cout << array[i];
		if (i < n - 1)
		cout << ", ";
	}
	cout << "]" << endl;
	
	cout << "\n---- Ordeando..." << endl;
	
//Ahora llamaremos a la funcion selectionSort para ordenarlo de menor a mayor
	
	selectionSort(array, n);

    cout << "\nEste es tu arreglo ordenado: [";
    for (int i = 0; i < n; i++) {
        cout << array[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;
	
	return 0;
}

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        
        if (min != i) {
            int temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
    }
}