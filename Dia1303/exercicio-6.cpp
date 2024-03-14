
/*Faça um programa em C++ para ler e armazenar em um vetor a temperatura
média de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura média anual
d) O número de dias no ano em que a temperatura foi inferior a média
anual*/
#include <iostream>
using namespace std;

const int tamanho = 10; 

int main() {
    int temperaturas[tamanho];
    int menorTemperatura = 0, maiorTemperatura = 0;
    float somaTemperaturas = 0, mediaTemperatura = 0;

    for(int i = 0; i < tamanho; i++) {
        cout << "Digite a temperatura do dia " << i + 1 << ": ";
        cin >> temperaturas[i];

        somaTemperaturas += temperaturas[i];
    }

    mediaTemperatura = somaTemperaturas / tamanho;

    menorTemperatura = temperaturas[0];

    for(int i = 0; i < tamanho; i++) {
        if(temperaturas[i] > maiorTemperatura) {
            maiorTemperatura = temperaturas[i];
        }

        if(temperaturas[i] < menorTemperatura) {
            menorTemperatura = temperaturas[i];
        }
    }

    cout << "A temperatura mais alta do ano foi: " << maiorTemperatura << endl;
    cout << "A temperatura mais baixa do ano foi: " << menorTemperatura << endl;
    cout << "A temperatura média do ano foi: " << mediaTemperatura << endl;

    return 0;
}

