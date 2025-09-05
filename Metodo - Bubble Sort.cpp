//Metodo bubble sort

#include <iostream>
using namespace std;

int main(){
	int max;
	
	cout << "ingrese la cantidad de numeros que tendra el arreglo: ";
	cin >> max;
	
	int myarray[max];
	for(int i = 0; i < max; i++){
		cout << "ingrese los numeros: ";
		cin >> myarray[i];
	}
	
	cout <<"Se ingresaron correctamente los numeros!"<< endl;
	cout << "Este es tu arreglo actual: [";
	
	for(int i = 0; i < max; i++){
		cout << myarray[i];
		if (i < max - 1)
		cout << ", ";
	}
	cout << "]" << endl;
	
	cout << "\n---- Ordeando..." << endl;
	
	//Ahora utilizaremos el metodo bubble sort para ordenarlo de menor a mayor
	
	for(int i = 0; i < max - 1; i++){
		for(int j = 0; j < max - i - 1; j++){
			if(myarray[j] > myarray[j + 1]){
			int temp = myarray[j];
			myarray[j] = myarray[j + 1];
			myarray[j + 1] = temp;
		}
		}
	}
	cout << endl;
	cout << "Este es tu arreglo ordenado: [";
	
	for(int i = 0; i < max; i++){
		cout << myarray[i];
		if (i < max - 1)
		cout << ", ";
	}
	cout << "]";
	
	return 0;
}