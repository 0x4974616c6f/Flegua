#ifndef LEXADOR_HPP
#define LEXADOR_HPP

#include "./dependencias.hpp"
#include "./tipos.hpp"

namespace lexador {
	class Lexador {
		public:
			Lexador(bool performance = false);
			~Lexador();
			std::vector<std::string> codigo;
			std::vector<tipos::SimboloInterface> simbolos;
			std::vector<tipos::ErroLexador> erros;
			u_int64_t inicioSimbolo;
			u_int64_t linha;
			bool performance;
			int64_t hashArquivo;
			u_int64_t atual;

			bool eDigito(char caractere);
			bool eAlfabeto(char caractere);
			bool eAlfabetoOuDigito(char caractere);
			bool eFinalDaLinha(char caractere);
			bool eUltimaLinha();
			bool eFinalDoCodigo();
			void avancar();
			void adicionarSimbolo(std::string tipo, std::string literal = NULL);
			std::string simboloAtual();
			void avancarParaProximaLinha();
			std::string proximoSimbolo();
			std::string simboloAnterior();
			void analisarTexto(char delimitador = '"');
			void analisarNumero();
			void identificarPalavraChave();
			void encontrarFimComentarioAsterisco();
			void analisarToken();
			tipos::RetornoLexador mapear(std::vector<std::string> codigo, int64_t hashArquivo);
	};
}

#endif