#include <iostream>
using namespace std;

void insertionSort(int* ,int );
int main(){
	int n;
	
	cout << "Ingrese la cantidad de terminos que contendra su arreglo: ";
	cin >> n;
	
	int myarray[n];
	for(int i = 0; i < n; i++){
		cout << "ingrese el numero de la posicion [" << i <<"]: ";
		cin >> myarray[i];
	}
	
	cout << "\nSu arreglo actual es: [";
	
	for (int i = 0; i < n; i++){
		cout << myarray[i];
		
		if (i < n - 1)
		cout << ", ";
	}
	cout << "]" << endl;
	
	insertionSort(myarray, n);
	cout << "El arreglo ordenado es: [";
	
	for (int i = 0; i < n; i++){
		cout << myarray[i];
		
		if (i < n - 1)
		cout << ", ";
	}
	cout << "]" << endl;
	
	return 0;
}
void insertionSort(int myarray[] ,int n){
	for(int i = 1; i < n; i++){
		int aux = myarray[i];
		
		int k = i - 1;
		
		while (k >= 0 && aux < myarray[k]){
			myarray[k + 1] = myarray[k];
			k = k - 1;
		}
		myarray[k + 1] = aux;
	}
}