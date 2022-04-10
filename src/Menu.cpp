//
// Created by ASUS on 05/04/2022.
//

#include <iostream>
#include "../includes/Menu.h"

Menu::Menu() {
}

void Menu::run() {
    mainMenu();
}

void Menu::drawMainMenu() {
    cout << "-------------- Design de Algoritmos - 2021/22 --------------" << endl;
    cout << "1 - Cenarios" << endl;
    cout << "2 - DevTeam" << endl;
    cout << "3 - Carregar Ficheiros" << endl << endl;
    cout << "0 - Sair" << endl << endl;
}

void Menu::mainMenu() {
    int input;
    do{
        drawMainMenu();
        input = readInt(0, 3);
        switch (input) {
            case 1:
                cenarios();
                break;
            case 2:
                devTeam();
                break;
            case 3:
                loadFiles();
                break;
            case 0:
                input = exit();
                break;
            default:
                input = 0;
        }
    } while (input!=-1);
}

void Menu::drawCenarios() {
    cout << "----------------- Escolha de Cenarios -----------------" << endl;
    cout << "1 - Cenario 1 - Otimizacao do Numero de Estafetas" << endl;
    cout << "2 - Cenario 2 - Otimizacao do Lucro da Empresa" << endl;
    cout << "3 - Cenario 3 - Otimizacao das Entregas Expresso" << endl << endl;
    cout << "0 - Sair" << endl << endl;
}

void Menu::cenarios() {
    int input;
    do{
        drawCenarios();
        input = readInt(0, 3);
        switch (input) {
            case 1:
                Menu::armazem.cenario1();
                break;
            case 2:
                Menu::armazem.cenario2();
                break;
            case 3:
                Menu::armazem.cenario3();
                break;
            case 0:
                input = -1;
                break;
            default:
                input = 0;
        }
    } while (input!=-1);
}

void Menu::drawDevTeam() {
    cout << "----------------- DevTeam -----------------" << endl;
    cout << "201905574 - David Marques" << endl;
    cout << "202006874 - Goncalo Marques" << endl;
    cout << "202103631 - Rui Soares" << endl << endl;
    cout << "Selecione Qualquer Input para Voltar ao Menu Principal" << endl << endl;
}

void Menu::devTeam() {
    drawDevTeam();
    string input;
    cin >> input;
}


void Menu::drawLoadFiles() {
    cout << "----------------- Load File -----------------" << endl;
    cout << "1 - Carrinhas" << endl;
    cout << "2 - Encomendas" << endl << endl;

    cout << "0 - Sair" << endl << endl;
}

void Menu::loadFiles() {
    int input;
    do{
        drawLoadFiles();
        input = readInt(0, 2);
        switch (input) {
            case 1:
                //ler ficheiro para carrinhas
                break;
            case 2:
                // ler ficheiro para encomendas
                break;
            case 0:
                input = -1;
                break;
            default:
                input = 0;
        }
    } while (input!=-1);
}

void Menu::drawExit() {
    cout << "Pretende Mesmo Sair?" << endl;
    cout << "1 - Sim" << endl;
    cout << "0 - Nao" << endl;
}

int Menu::exit() {
    drawExit();
    if(readInt(0,1) == 0)
        return 1;
    else
        return -1;
}

string Menu::readString() {
    string input;
    cin >> input;
    return input;
}

int Menu::readInt(int min, int max) {
    int input;
    cin >> input;
    if(input < min or input > max)
        return -1;
    else
        return input;
}

const Armazem &Menu::getArmazem() const {
    return armazem;
}
