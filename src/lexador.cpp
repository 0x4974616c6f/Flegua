#include "../include/lexador.hpp"

using namespace lexador;

/**
 * A constructor for the Lexador class.
 *
 * @param performance If true, the lexer will run faster, but will not report
 * errors.
 */
Lexador::Lexador(bool performance)
{
	this->performance = performance || false;
	this->simbolos = std::vector<tipos::SimboloInterface>();
	this->erros = std::vector<tipos::ErroLexador>();
	this->hashArquivo = -1;
	this->inicioSimbolo = 0;
	this->linha = 0;
	this->atual = 0;
}

/**
 * The destructor for the Lexador class.
 */
Lexador::~Lexador()
{
}

/**
 * It checks if the character is a digit.
 *
 * @param caractere The character to be tested.
 *
 * @return a boolean value.
 */
bool Lexador::eDigito(char caractere)
{
	return (caractere >= '0' && caractere <= '9');
}

/**
 * It returns true if the character is a letter of the Portuguese alphabet, and
 * false otherwise
 * 
 * @param caractere The character to be tested.
 * 
 * @return a boolean value.
 */
bool Lexador::eAlfabeto(char caractere)
{
	// 0xC3 a 0xC6: letras maiúsculas A, E, I, O com acento circunflexo
	// 0xE0 a 0xE6: letras minúsculas a, e, i, o com acento grave ou til
	// 0xC7: letra maiúscula C com cedilha
	// 0xE7: letra minúscula c com cedilha

	if ((caractere >= 0xC3 && caractere <= 0xC6) || (caractere >= 0xE0 && caractere <= 0xE6) || caractere == 0xC7 || caractere == 0xE7)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/**
 * It checks if the character is a letter or a digit.
 * 
 * @param caractere The character to be checked.
 * 
 * @return a boolean value.
 */
bool Lexador::eAlfabetoOuDigito(char caractere)
{
	return eAlfabeto(caractere) || eDigito(caractere);
}