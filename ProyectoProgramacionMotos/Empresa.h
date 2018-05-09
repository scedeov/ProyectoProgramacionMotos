#ifndef EMPRESA
#define EMPRESA

#include <string>

class Empresa {
private:
	std::string nombre;
	int cedulaJuridica;
	std::string direccion;
	std::string numeroTelefono;

public:
	Empresa(std::string, int, std::string, std::string);
	void setNombre(std::string);
	void setCedulaJuridica(int);
	void setDireccion(std::string);
	void setNumeroTelefono(std::string);

	std::string getNombre();
	int getCedulaJuridica();
	std::string getDireccion();
	std::string getNumeroTelefono();
	~Empresa();
};
#endif // !EMPRESA
