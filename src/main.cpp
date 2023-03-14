#include "../include/flegua.hpp"

using namespace flegua;

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "Usage: " << argv[0] << " <file>" << std::endl;
		return 1;
	}
	utilidades::Utilidades utilidades;
	Flegua flegua(argv[1], utilidades);

	std::cout << flegua.RetornaConteudoArquivo()[0] << std::endl;

	return 0;
}