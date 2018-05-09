#include "Cliente.h"
using namespace std;

Cliente::Cliente(
	int cedula = 0,
	std::string nombre = "undefined",
	std::string primerApellido = "undefined",
	std::string segundoApellido = "undefinde",
	int fechaNacimiento = 0,
	int nivelCrediticio = 0) : 
	cedula(cedula),
	nombre(nombre),
	primerApellido(primerApellido),
	segundoApellido(segundoApellido),
	fechaNacimiento(fechaNacimiento),
	nivelCrediticio(nivelCrediticio) {
}

void Cliente::setCedula(int cedula) {
	this->cedula = cedula;
}

void Cliente::setNombre(std::string nombre) {
	this->nombre = nombre;
}

void Cliente::setPrimerApellido(std::string primerApellido) {
	this->primerApellido = primerApellido;
}

void Cliente::setSegundoApellido(std::string segundoApellido) {
	this->segundoApellido = segundoApellido;
}

void Cliente::setFechaNacimiento(int fechaNacimiento) {
	this->fechaNacimiento = fechaNacimiento;
}

void Cliente::setNivelCrediticio(int nivelCrediticio) {
	this->nivelCrediticio = nivelCrediticio;
}

int Cliente::getCedula() {
	return cedula;
}

std::string Cliente::getNombre() {
	return nombre;
}

std::string Cliente::getPrimerApellido() {
	return primerApellido;
}

std::string Cliente::getSegundoApellido() {
	return segundoApellido;
}

int Cliente::getFechaNacimiento() {
	return fechaNacimiento;
}

int Cliente::getNivelCrediticio() {
	return nivelCrediticio;
}

Cliente::~Cliente() {
	//Eliminando cliente
}
