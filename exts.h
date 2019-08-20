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
                int av1;
                int av2;
                int av3;
             } dis[3];
        };

        static void ex3(){
            struct bm bandas[5], aux;
            string tipo[5] = {"pop", "rock", "indie", "brega", "funk"};

            for(int i=4; i >= 0; i--){
                bandas[i].nome = "Banda " + to_string(i+1);
                bandas[i].rank = i;
                bandas[i].num = 4+i;
                bandas[i].tipo = tipo[i];
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

        static void ex4(){
            struct alunos al[3];

            for (int i = 0; i < 3; ++i) {
                al[i].nome = "Aluno " + to_string(i+1);
                al[i].curso = "Curso " + to_string(i+1);
                for (int j = 0; j < 3; ++j) {
                    al[i].dis[j].nome = "Dis " + to_string(j+1);
                    al[i].dis[j].av1 = j + 5;
                    al[i].dis[j].av2 = j + 4;
                    al[i].dis[j].av3 = j + 6;
                }
            }

            for (int i = 0; i < 3; ++i) {
                cout << "Aluno: " << al[i].nome << endl;
                cout << "Curso: " << al[i].curso << endl;
                for (int j = 0; j < 3; ++j) {
                    cout << " Disciplina: " << al[i].dis[j].nome << endl;
                    cout << "  Av1: " << al[i].dis[j].av1 << endl;
                    cout << "  Av2: " << al[i].dis[j].av2 << endl;
                    cout << "  Av3: " << al[i].dis[j].av3 << endl;
                }
                cout << endl;
            }
        }
};


#endif //ED_AT2_EXTS_H
