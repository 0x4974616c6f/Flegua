#ifndef FLEGUA_HPP
#define FLEGUA_HPP

#include "./dependencias.hpp"
#include "./utilidades.hpp"

namespace flegua {
	class Flegua {
		public:
			Flegua(std::string nomeArquivo, utilidades::Utilidades utilidades);
			~Flegua();
			std::vector<std::string> RetornaConteudoArquivo();
		
		private: 
			std::vector<std::string> conteudoArquivo;
			std::string nomeArquivoInicial;
			utilidades::Utilidades utilidades;
	};
}

#endif /* FLEGUA_HPP */