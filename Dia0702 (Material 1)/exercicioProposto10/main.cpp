#include <iostream>

using namespace std;

int calculaPorcentagem(int valor, int total) {
    return (valor * 100) / total;
}

int main() {
    int idade, opniao, otimo = 0, bom = 0, regular = 0, ruim = 0, totalPessoas = 0,
        mediaIdade = 0, totalIdade = 0, porcentagemOtimo = 0, porcentagemBom = 0,
        porcentagemRegular = 0, porcentagemRuim = 0, finalizador = 1;

    while (finalizador >= 1) {
        cout << "Qual sua idade: ";
        cin >> idade;

        totalIdade = totalIdade + idade;
        if (idade >= 1) {
            cout << " 1- Otimo \n 2- Bom \n 3- Regular \n 4- Ruim" << endl;
            cout << "Qual sua opiniao sobre o filme: ";
            cin >> opniao;

            switch (opniao) {
                case 1:
                    otimo++;
                    break;
                case 2:
                    bom++;
                    break;
                case 3:
                    regular++;
                    break;
                case 4:
                    ruim++;
                    break;
                default:
                    cout << "Opcao invalida !" << endl;
                    break;
            }
        } else {
            totalPessoas = otimo + bom + regular + ruim;
            mediaIdade = totalIdade / totalPessoas;
            porcentagemOtimo = calculaPorcentagem(otimo, totalPessoas);
            porcentagemBom = calculaPorcentagem(bom, totalPessoas);
            porcentagemRegular = calculaPorcentagem(regular, totalPessoas);
            porcentagemRuim = calculaPorcentagem(ruim, totalPessoas);
            cout << "Total de pessoas que responderam a pesquisa: " << totalPessoas << endl;
            cout << "Media de idade das pessoas que responderam: " << mediaIdade << endl;
            cout << "Otimo: " << porcentagemOtimo << "%" << endl;
            cout << "Bom: " << porcentagemBom << "%" << endl;
            cout << "Regular: " << porcentagemRegular << "%" << endl;
            cout << "Ruim: " << porcentagemRuim << "%" << endl;

            finalizador = 0;
        }
    }

    return 0;
}
