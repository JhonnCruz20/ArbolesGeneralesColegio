#pragma once

using namespace System;
using namespace System::Windows::Forms;

ref class Personal{
public:
	String^ Nombrep;
	String^ Rol;
	int Edad;
	DateTime Fecha;
	String^ Genero;

	Personal(String^ nombrep, String^ rol, int edad, DateTime fecha,String^ genero) {
		Nombrep = nombrep;
		Rol = rol;
		Edad = edad;
		Fecha = fecha;
		Genero = genero;
	}

	// Propiedades
	property String^ NombreProp {
		String^ get() { return Nombrep; }
		void set(String^ value) { Nombrep = value; }
	}

	property String^ RolProp {
		String^ get() { return Rol; }
		void set(String^ value) { Rol = value; }
	}

	property int EdadProp {
		int get() { return Edad; }
		void set(int value) { Edad = value; }
	}

	property DateTime FechaProp {
		DateTime get() { return Fecha; }
		void set(DateTime value) { Fecha = value; }
	}

	property String^ GeneroProp {
		String^ get() { return Genero; }
		void set(String^ value) { Genero = value; }
	}
};

