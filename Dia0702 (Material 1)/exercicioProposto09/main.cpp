#include <iostream>

using namespace std;
/* Fa�a um programa em C++ que leia dez conjuntos de dois valores, o primeiro
 representando o n�mero do aluno e o segundo a sua altura em cent�metros. Encontre o
 aluno mais alto e o mais baixo. Exiba o n�mero do aluno mais baixo o n�mero de aluno
 mais alto e as respectivas alturas.
*/

int main()
{
    const int numAlunos = 10;
    int numeroAluno[numAlunos];
    float alturaAluno[numAlunos];

    for (int i = 0; i < numAlunos; i++) {
        bool numeroRepetido;
        do {
            numeroRepetido = false;
            cout << "Entre com o n�mero do Aluno: ";
            cin >> numeroAluno[i];

            for (int j = 0; j < i; j++) {
                if (numeroAluno[j] == numeroAluno[i]) {
                    cout << "N�mero do aluno j� inserido. Por favor, insira um n�mero diferente." << endl;
                    numeroRepetido = true;
                    break;
                }
            }
        } while (numeroRepetido);

        cout << "Entre com a altura do Aluno: ";
        cin >> alturaAluno[i];
    }


    int alunoMaisAlto = 0, alunoMaisBaixo = 0;
    for (int i = 1; i < numAlunos; i++) {
        if (alturaAluno[i] > alturaAluno[alunoMaisAlto])
            alunoMaisAlto = i;
        if (alturaAluno[i] < alturaAluno[alunoMaisBaixo])
            alunoMaisBaixo = i;
    }
     for (int i = 0; i < 10 ; i++){
        cout<<"\n Registrado Aluno "<<numeroAluno[i] << " Altura -> "<<alturaAluno[i]<<endl<<endl;
    }

    cout << " Aluno mais alto:" << numeroAluno[alunoMaisAlto] << " Altura: " << alturaAluno[alunoMaisAlto] << " " << endl<<endl;
    cout << " Aluno mais baixo:" << numeroAluno[alunoMaisBaixo] << " Altura: " << alturaAluno[alunoMaisBaixo] << " " << endl<<endl;

    return 0;

}
