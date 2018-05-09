#include "Empresa.h"
using namespace std;


Empresa::Empresa(
	string nombre = "undefined", 
	int cedulaJuridica = 0, 
	string direccion = "undefined",
	string numeroTelefono = "undefined"): 
	nombre(nombre),
	cedulaJuridica(cedulaJuridica),
	direccion(direccion),
	numeroTelefono(numeroTelefono) {

}

void Empresa::setNombre(std::string nombre) {
	this->nombre = nombre;
}

void Empresa::setCedulaJuridica(int cedulaJuridica) {
	this->cedulaJuridica = cedulaJuridica;
}

void Empresa::setDireccion(std::string direccion) {
	this->direccion = direccion;
}

void Empresa::setNumeroTelefono(std::string numeroTelefono) {
	this->numeroTelefono = numeroTelefono;
}

std::string Empresa::getNombre() {
	return nombre;
}

int Empresa::getCedulaJuridica() {
	return cedulaJuridica;
}

std::string Empresa::getDireccion() {
	return direccion;
}

std::string Empresa::getNumeroTelefono() {
	return numeroTelefono;
}

Empresa::~Empresa() {
	//elimina empresa
}
