#include "../include/flegua.hpp"

using namespace flegua;

/**
 * Flegua::Flegua(std::string nomeArquivo, utilidades::Utilidades utilidades) {
 * 	this->nomeArquivoInicial = nomeArquivo;
 * 	this->utilidades = utilidades;
 * 	this->conteudoArquivo = this->utilidades.lerArquivo(nomeArquivo);
 * 	
 * }
 * 
 * @param nomeArquivo The name of the file to be read.
 * @param utilidades is a class that has some methods that I use in the program.
 */
Flegua::Flegua(std::string nomeArquivo, utilidades::Utilidades utilidades) {
	this->nomeArquivoInicial = nomeArquivo;
	this->utilidades = utilidades;
	this->conteudoArquivo = this->utilidades.lerArquivo(nomeArquivo);
	
}

/**
 * The destructor is called when the object is destroyed
 */
Flegua::~Flegua() {
}

/**
 * It returns the content of the file
 * 
 * @return The vector conteudoArquivo.
 */
std::vector<std::string> Flegua::RetornaConteudoArquivo() {
	return this->conteudoArquivo;
}