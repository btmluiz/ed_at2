//
// Created by btmluiz on 20/08/2019.
//
#include <iostream>

using namespace std;

#ifndef ED_AT2_EXTS_H
#define ED_AT2_EXTS_H


class exts {
    public:
        struct bm {
            string nome;
            string tipo;
            int num;
            int rank;
        };

        struct person {
            string name;
            string address;
            string district;
            string complement;
            string cep;
            string city;
            string state;
            int num;
            int phone1;
            int phone2;
            int phone3;
        };

        struct alunos{
            string nome;
            string curso;

            struct disciplinas{
                string nome;
                double av[3];
             } dis[3];
        };

        bool devmod;

        bool getDevmod(){
            return this->devmod;
        }

        exts (bool dev){
            devmod = dev;
        }

        void ex3(){
            struct bm bandas[5], aux;
            string tipo[5] = {"pop", "rock", "indie", "brega", "funk"};

            if(this->devmod){
                for(int i = 4; i >= 0; i--){
                    bandas[i].nome = "Banda " + to_string(i+1);
                    bandas[i].rank = i;
                    bandas[i].num = 4+i;
                    bandas[i].tipo = tipo[i];
                }
            } else {
                for (int i = 0; i < 5; i++) {
                    cout << "Digite o nome da Banda: ";
                    cin >> bandas[i].nome;
                    cout << "Rank: ";
                    cin >> bandas[i].rank;
                    cout << "Integrantes: ";
                    cin >> bandas[i].num;
                    cout << "Estilo: ";
                    cin >> bandas[i].tipo;
                }
            }

            for(int i=4; i > 0; i--){
                for(int j=0; j < i; j++){
                    if(bandas[j].rank > bandas[j+1].rank){
                        aux = bandas[j];
                        bandas[j] = bandas[j+1];
                        bandas[j+1] = aux;
                    }
                }
            }

            for(int i=0; i < 5; i++){
                cout << "Nome da banda: " << bandas[i].nome << endl;
                cout << "Tipo de Música: " << bandas[i].tipo << endl;
                cout << "Integrantes: " << bandas[i].num << endl;
                cout << "Rank: " << bandas[i].rank+1 << endl << endl;
            }
        }

        void ex4(){
            struct alunos al[3];
            double aux, media;

            if (this->devmod) {
                for (int i = 0; i < 3; i++) {
                    al[i].nome = "Aluno " + to_string(i+1);
                    al[i].curso = "Curso " + to_string(i+1);
                    for (int j = 0; j < 3; ++j) {
                        al[i].dis[j].nome = "Dis " + to_string(j+1);
                        for (int k = 0; k < 3; k++) {
                            al[i].dis[j].av[k] = 10 - k;
                        }
                    }
                }
            } else {
                for (int i =0; i < 3; i++){
                    cout << "Aluno: ";
                    cin >> al[i].nome;
                    cout << "Curso: ";
                    cin >> al[i].curso;
                    for (int j = 0; j < 3; j++) {
                        cout << "Nome da discplina: ";
                        cin >> al[i].dis[j].nome;
                        for (int k = 0; k < 3; ++k) {
                            cout << "Nota da AV" << k+1 << ": ";
                            cin >> al[i].dis[j].av[k];
                        }
                    }
                }
            }

            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 3; j++) {
                    for (int k = 4; k > 0; k--) {
                        for (int l = 0; l < k; l++) {
                            if(al[i].dis[j].av[l+1] > al[i].dis[j].av[l]){
                                aux = al[i].dis[j].av[l];
                                al[i].dis[j].av[l] = al[i].dis[j].av[l+1];
                                al[i].dis[j].av[l] = aux;
                            }
                        }
                    }
                }
            }

            for (int i = 0; i < 3; i++) {
                cout << "Aluno: " << al[i].nome << endl;
                cout << "Curso: " << al[i].curso << endl;
                for (int j = 0; j < 3; ++j) {
                    cout << " Disciplina: " << al[i].dis[j].nome << endl;
                    for (int k = 0; k < 3; ++k) {
                        cout << "  Av" << k+1 << ": " << al[i].dis[j].av[k] << endl;
                    }
                    cout << "  Media(" << al[i].dis[j].av[0] << "/" << al[i].dis[j].av[1] << "): " << (al[i].dis[j].av[0]+al[i].dis[j].av[1])/2 << endl;
                }
                cout << endl;
            }
        }
};


#endif //ED_AT2_EXTS_H
