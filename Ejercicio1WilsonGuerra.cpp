

#include <iostream>

using namespace std;

int main()
{
	//Calcular el error numerico
	cout << "Error numerico" << endl;\
		cout << "Ingrese N:" << endl;
	double N;
	cin >> N;
	float x = 1 / N;
	double x1 = 1 / N;
	long double x2 = 1 / N;
	float s = 0;
	double s1 = 0;
	long double s2 = 0;
	for (int i = 0; i < N; i++)
	{
		s = s + x;
		s1 = s1 + x1;
		s2 = s2 + x2;
	}
	//Calcular el error 𝐸 = |1.0 − 𝑆| 
	float E = 1.0 - s;
	double E1 = 1.0 - s1;
	long double E2 = 1.0 - s2;
	cout << "El error usando float es: " << E << endl;
	cout << "El error usando double es: " << E1 << endl;
	cout << "El error usando long double es: " << E2 << endl;
	return 0;
}

