#include <iostream>
#include <locale.h>
using namespace std;
/*Em uma eleição presidencial existem dois candidatos. Os votos são informados através de
 códigos. Os dados utilizados para a contagem dos votos têm-se a seguinte codificação: 1 e 2=
 voto para os respectivos candidatos; 3= voto nulo; 4= voto em branco; Elabore um
 programa em C++ que leia o código do candidato em um voto. Como finalizador do
 conjunto de votos, tem-se o valor 0. Calcule e escreva: (1) percentual de votos para cada
 candidato; (2) percentual de votos nulos; (3) percentual de votos em branco */

 int calcularPorcentagem (int votosIndividual,int totalVotos){

  int totalPorcentagem = (votosIndividual * 100)/totalVotos;
  return totalPorcentagem;
}
int main()
{   setlocale(LC_ALL, "Portuguese");
    int voto, totalVotos = 0, votosCandidato1 = 0, votosCandidato2 = 0, votosNulos = 0, votosBranco = 0, quantidadeVotos;

    cout << "Digite o código do candidato \n  1- Candidato1 \n  2- Candidato \n  3- voto nulo "<<endl;
    cout<<"  4 para voto em branco \n  0- encerrar \n opcção: ";
    cin >> voto;
    while (voto != 0) {
        totalVotos++;


        switch(voto) {
            case 1:
                votosCandidato1++;
                break;
            case 2:
                votosCandidato2++;
                break;
            case 3:
                votosNulos++;
                break;
            case 4:
                votosBranco++;
                break;
            default:
                cout << "Código inválido! Voto não contabilizado " << endl;
        }

     cout << "Digite o código do candidato \n  1- Candidato1 \n  2- Candidato \n  3- voto nulo "<<endl;
     cout<<"  4 para voto em branco \n  0- encerrar \n opcção: ";
        cin >> voto;
    }
    cout<<endl;
    cout<<"candidato 1:"<< calcularPorcentagem (votosCandidato1,totalVotos)<<" % \n";
    cout<<"candidato 2:"<< calcularPorcentagem (votosCandidato2,totalVotos)<<" % \n";
    cout<<"Votos nulos :"<< calcularPorcentagem (votosNulos,totalVotos)<<"% \n";
    cout<<"Votos em branco:"<< calcularPorcentagem (votosBranco,totalVotos)<<"% \n";
}


