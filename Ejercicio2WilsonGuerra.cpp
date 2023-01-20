

#include <iostream>

using namespace std;

int main()
{
	//Division de dos entradas
	cout << "Ingrese P: " << endl;
	int p;
	cin >> p;
	cout << "Ingrese A: " << endl;
	int a;
	cin >> a;
	cout << "Ingrese B: " << endl;
	int b;
	cin >> b;
	int M = a/b;
	
	//Calculo de M
	for (int i = 0; i < p-1; i++)
	{
			M += a / (b - 1);
	}
	
	//Salida de M
	cout << "M = " << M << endl;
	return 0;
}

