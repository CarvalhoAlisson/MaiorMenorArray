#include <iostream>
#include <windows.h>
#include "mostrarMaiorMenor.h"

using namespace std;

int main()
{
	int NumElementos, i, min, max;
	int Elementos[10];
	setlocale(LC_ALL, "Portuguese");
	//Entrada de dados
	for (i = 0; i <= 10; i++)
	{
		cout << "Digite o valor para posi��o " << (i + 1) << " do vetor: ";
		cin >> Elementos[i];
		system("CLEAR || CLS");
	}
	//Processamento
	min = 0;
	max = 0;

	for (i = 0; i <= 10; i++)
	{
		MaiorMenor(max, min);
		if (Elementos[i] > max)
		{
			max = Elementos[i];
			cout << "Posi��o do vetor[" << (i + 1) << "] Valor: " << Elementos[i] << "\n";
			cout << "Maior: " << max;

		}
		else if (Elementos[i] < min)
		{
			min = Elementos[i];
			cout << "Posi��o do vetor[" << (i + 1) << "] Valor: " << Elementos[i] << "\n";
			cout << "Menor: " << min;
		}
		else if ((Elementos[i] > min) && (Elementos[i] < max))
		{
			cout << "Posi��o do vetor[" << (i + 1) << "] Valor: " << Elementos[i] << "\n";

		}

		Sleep(5000);
		system("CLS");
	}


	cout << "\nO menor elemento �: " << min << "\n";
	cout << "O maior elemento �: " << max << "\n";


	return 0;
}