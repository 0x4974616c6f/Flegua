#ifndef TIPOS_HPP
#define TIPOS_HPP

#include "./dependencias.hpp"

namespace tipos {
	class SimboloInterface {
		public:
			std::string lexema;
			std::string tipo;
			std::string literal;
			int linha;
			int hashArquivo;
	};

	class ErroLexador {
		public: 
			int linha;
			std::string caractere;
			std::string mensagem;
	};

	class Pragma {
		public:
			int linha;
			int espacosIndentacao;
	};

	class RetornoLexador {
		public:
			std::vector<SimboloInterface> simbolos;
			std::vector<ErroLexador> erros;
			std::unordered_map<int, Pragma> pragmas;
	};
}

#endif // TIPOS_HPP