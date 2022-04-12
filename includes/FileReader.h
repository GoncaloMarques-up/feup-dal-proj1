//
// Created by goncalo on 08/04/22.
//

#ifndef PROJETO_DA_FILEREADER_H
#define PROJETO_DA_FILEREADER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include "Armazem.h"
#include "Encomenda.h"
#include "Carrinha.h"

class FileReader {
public:
    FileReader();
    list<Carrinha> GuardaCarrinhas();
    list<Encomenda> GuardaEncomendas();

};


#endif //PROJETO_DA_FILEREADER_H