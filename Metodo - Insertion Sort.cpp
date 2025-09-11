#include <iostream>
using namespace std;

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
	return 0;
	
}