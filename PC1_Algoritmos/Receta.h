#pragma once
#include <iostream>
#include <vector>
using namespace System;
using namespace std;

class Receta {

private:
	vector<string> arrnmedico;
	vector<string> arrmedicine;
	vector<string> arrindicaciones;
	string fecha;


public:
	Receta() {
		fecha = "13/12/2025";
		arrnmedico.push_back("Juan Lopez");
		arrnmedico.push_back("Ariana Diaz");
		arrnmedico.push_back("Jhosep Maiman");
		arrmedicine.push_back("Loratadina");
		arrmedicine.push_back("Paracetamol forte");
		arrmedicine.push_back("Ibuprofeno");
		arrindicaciones.push_back("Estimado paciente, por favor proceda a consumir la medicina pactada por 1 semana con una frecuencia de 1 al día cada 8h /n");
		arrindicaciones.push_back("Estimado paciente, por favor proceda a consumir la medicina pactada por 1 semana con una frecuencia de 1 al día cada 12h /n");
		arrindicaciones.push_back("Estimado paciente, por favor proceda a consumir la medicina pactada por 1 semana con una frecuencia de 3 al día cada 5h /n");

	}
	~Receta() {}

	void solicitarReceta(string nombre) {

		cout << "----------HOGAR DEL PROGRAMADOR----------" << endl;
		cout << "Paciente: " << nombre << "\n";
		cout << "Estimado paciente: " << nombre << endl;



	}

	bool pedirmedicamentos() {

		return true;

	}

	void verreceta() {




	}





};