#include <iostream>
#include "exts.h"

using namespace std;

int main() {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
    //Ativa o devmod
    //para desativar mude para false
    exts ats(false);
    while(true){
        int at = 0;
        if(ats.getDevmod()) {
            cout << "OBS: O devmod esta ativo e nao sera inputs" << endl;
        }
        cout << "Selecione a atividade" << endl;
        cout << "1 - Ex3" << endl;
        cout << "2 - Ex4" << endl;
        while(at <= 0 || at > 2){
            cout << "Digite a atividade: ";
            cin >> at;
        }

        cout << "####################### INICIO ATV #######################" << endl;
        switch (at){
            case 1:
                ats.ex3();
                break;
            case 2:
                ats.ex4();
                break;
            default:
                break;
        }

        cout << "####################### FIM DA ATV #######################" << endl;
    }
#pragma clang diagnostic pop
    return 0;
}