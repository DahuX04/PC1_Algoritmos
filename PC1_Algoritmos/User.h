#pragma once
#include <iostream>

using namespace std;

template<typename T1, typename T2>

class User {
private:
	T1 Nombre;
	T2 Dni;
public:
	User(T1 name, T2 id);

	~User();

	T1 getNombre();

	T2 getDni();

	void setNombre(T1 name);

	void setDni(T2 id);
};

template<typename T1, typename T2>
User<T1, T2>::User(T1 name, T2 id) {
	Nombre = name;
	Dni = id;
}

template<typename T1, typename T2>
User<T1, T2>::~User() {

}

template<typename T1, typename T2>
T1 User<T1, T2>::getNombre() {
	return Nombre;
}

template<typename T1, typename T2>
T2 User<T1, T2>::getDni() {
	return Dni;
}

template<typename T1, typename T2>
void User<T1, T2>::setNombre(T1 name) {
	Nombre = name;
}

template<typename T1, typename T2>
void User<T1, T2>::setDni(T2 id) {
	Dni = id;
}