#ifndef UTILIDADES_HPP
#define UTILIDADES_HPP

#include "./dependencias.hpp"

namespace utilidades {
	class Utilidades {
		public:
			Utilidades();
			~Utilidades();
			std::vector<std::string> lerArquivo(std::string nomeArquivo);

	};
}

#endif /* UTILIDADES_HPP */