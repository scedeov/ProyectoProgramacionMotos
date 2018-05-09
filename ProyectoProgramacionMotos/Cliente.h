#ifndef CLIENTE
#define CLIENTE

#include <string>

class Cliente {
private:
	int cedula;
	std::string nombre;
	std::string primerApellido;
	std::string segundoApellido;
	int fechaNacimiento;
	int nivelCrediticio;

public:
	Cliente(int, std::string, std::string, std::string, int, int);

	void setCedula(int);
	void setNombre(std::string);
	void setPrimerApellido(std::string);
	void setSegundoApellido(std::string);
	void setFechaNacimiento(int);
	void setNivelCrediticio(int);

	int getCedula();
	std::string getNombre();
	std::string getPrimerApellido();
	std::string getSegundoApellido();
	int getFechaNacimiento();
	int getNivelCrediticio();

	~Cliente();

};
#endif // !CLIENTE
