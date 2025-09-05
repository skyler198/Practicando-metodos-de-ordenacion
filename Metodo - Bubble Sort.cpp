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
	cout << "]";
	return 0;
}