#include "../include/utilidades.hpp"

using namespace utilidades;

/**
 * A constructor.
 */
Utilidades::Utilidades() {
}

/**
 * A destructor.
 */
Utilidades::~Utilidades() {
}


/**
 * It reads a file and returns its contents as a vector of strings
 * 
 * @param nomeArquivo The name of the file to be read.
 * 
 * @return A vector of strings.
 */
std::vector<std::string> Utilidades::lerArquivo(std::string nomeArquivo) {
    std::ifstream arquivo(nomeArquivo);

    if (!arquivo.is_open()) {
        throw std::runtime_error("Não foi possível abrir o arquivo " + nomeArquivo);
    }

    std::vector<std::string> conteudoArquivo;
    std::string linha;

    while (std::getline(arquivo, linha)) {
        conteudoArquivo.push_back(linha);
    }

    if (arquivo.bad()) {
        throw std::runtime_error("Erro ao ler o arquivo " + nomeArquivo);
    }

    return conteudoArquivo;
}
