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
	
}