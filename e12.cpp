#include <iostream>
#include <cmath>

int fatorial(const int n) {

	// Calcula recursivamente o fatorial de n
	// Insira o código aqui
	int x = 0;
	while (n > 1) x += n * (x - 1);
	return n;
}
	
int primalidade(const int n, int i) {

	// Testa recursivamente os divisores ímpares de i até a raiz quadrada do N
 	// Insira o código aqui
	int x = 0;
	int y = i;
	
	x += sqrt(n);

	while (i =! x){
		if(i % y != 0){
			y--;
			return y;
		}			
	}
	return 0;
}

int primo(const int n) {

// Testa se é divisível por 2 executa a função primalidade() para testar os
// divisores ímpares de 3 até a raiz quadrada do N
	if (n%2==0)
		return 0;
	return primalidade(n,3);

}

int maior_primo_anterior (int valor) {

// Busca recursiva pelo maior valor primo anterior a valor
// Insira o código aqui

	valor--;
	int x = valor - 2;
	while (valor > 1){
		if (valor % x != 0) {
			x--;

			if (x == 2) return valor;
			else valor--;
		}
	}

	return 0;
}

int main(int argc, char const *argv[])
{
	int x = 5;
	// Imprime: X =5 (5! = 120) => 113
	std::cout << "X = " << x << "(" << x << "! = " << fatorial(x) << ") => "
	<< maior_primo_anterior(fatorial(x)) << std::endl;

	x = 3;
	// Imprime: X =3 (3! = 6) => 5
	std::cout << "X = " << x << "(" << x << "! = "
	<< fatorial(x) << ") => " << maior_primo_anterior(fatorial(x)) << std::endl;

	x = 9;
	// Imprime: X =9 (9! = 362880) => 362867
	std::cout << "X = " << x << "(" << x << "! = "
	<< fatorial(x) << ") => " << maior_primo_anterior(fatorial(x)) << std::endl;

	return 0;
}
