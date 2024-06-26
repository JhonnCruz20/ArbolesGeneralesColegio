#pragma once
#include "Personal.h"

using namespace System;
using namespace System::Windows::Forms;

ref class Area
{
private:
	String^ Nombrea;
	String^ Descripcion;
	String^ Responsabilidades;
	Area^ Departamento;
	Area^ Clase;
	Area^ Colegio;
	Personal^ Administrador;
	Personal^ Docente;
	Personal^ Estudiante;

public:

	Area(String^ nombre_a, String^ descripcion, String^ responsabilidades) {
		Nombrea = nombre_a;
		Descripcion = descripcion;
		Responsabilidades = responsabilidades;
		Departamento = nullptr;
		Clase = nullptr;
		Colegio = nullptr;
		Administrador = nullptr;
		Docente = nullptr;
		Estudiante = nullptr;

	}

	//propiedades
	property String^ NombreProp {
		String^ get() { return Nombrea; }
		void set(String^ value) { Nombrea = value; }
	}

	property String^ DescripcionProp {
		String^ get() { return Descripcion; }
		void set(String^ value) { Descripcion = value; }
	}

	property String^ ResponsabilidadesProp {
		String^ get() { return Responsabilidades; }
		void set(String^ value) { Responsabilidades = value; }
	}

	property Area^ DepartamentoProp {
		Area^ get() { return Departamento; }
		void set(Area^ value) { Departamento = value; }
	}

	property Area^ ClaseProp {
		Area^ get() { return Clase; }
		void set(Area^ value) { Clase = value; }
	}

	property Area^ ColegioProp {
		Area^ get() { return Colegio; }
		void set(Area^ value) { Colegio = value; }
	}

	property Personal^ AdministradorProp {
		Personal^ get() { return Administrador; }
		void set(Personal^ value) { Administrador = value; }
	}

	property Personal^ DocenteProp {
		Personal^ get() { return Docente; }
		void set(Personal^ value) { Docente = value; }
	}

	property Personal^ EstudianteProp {
		Personal^ get() { return Estudiante; }
		void set(Personal^ value) { Estudiante = value; }
	}

	//funciones y metodos

	void iniciar() {
		Colegio = nullptr;
	}

	void insertararea(RadioButton^ departamento, RadioButton^ clase, String^ nombrea,String^ descripcion, String^ responsabilidad) {
		Area^ nuevaarea = gcnew Area(nombrea, descripcion, responsabilidad);
		nuevaarea->Nombrea = nombrea;
		nuevaarea->Descripcion = descripcion;
		nuevaarea->Responsabilidades = responsabilidad;

		if (Colegio == nullptr) {
			Colegio = nuevaarea;
			MessageBox::Show("El Colegio con Nombre: " + nuevaarea->Nombrea + " \nCon la siguiente Descripción: " + nuevaarea->Descripcion + " \nY con la siguiente Responsabilidad: " + nuevaarea->Responsabilidades + "\n\nHa sido guardado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			Area^ p = Colegio;
			Area^ s = p;
			while (p != nullptr) {
				s = p;
				if (clase->Checked) {
					p = p->Clase;
				}
				else {
					p = p->Departamento;
				}
			}

			if (clase->Checked) {
				s->Clase = nuevaarea;
				MessageBox::Show("La Clase con Nombre: " + nuevaarea->Nombrea + " \nDescripción: " + nuevaarea->Descripcion + " \nResponsabilidad: " + nuevaarea->Responsabilidades + " \n\nHa sido guardado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
			else {
				s->Departamento = nuevaarea;
				MessageBox::Show("El Departamento con Nombre: " + nuevaarea->Nombrea + " \nDescripción: " + nuevaarea->Descripcion + " \nResponsabilidad: " + nuevaarea->Responsabilidades + " \n\nHa sido guardado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}

	Area^ buscarareaRecursivo(Area^ area, String^ nombre, int& rondas, bool& encontrado, String^& tipo) {
		if (area == nullptr || encontrado) {
			return nullptr;
		}

		rondas++;
		if (nombre == area->Nombrea) {
			encontrado = true;
			tipo = area == Colegio ? "Colegio" : tipo; // Determina si es el colegio principal
			return area;
		}

		Area^ resultado = buscarareaRecursivo(area->Clase, nombre, rondas, encontrado, tipo);
		if (encontrado) {
			tipo = "Clase";
			return resultado;
		}

		resultado = buscarareaRecursivo(area->Departamento, nombre, rondas, encontrado, tipo);
		if (encontrado) {
			tipo = "Departamento";
			return resultado;
		}

		return nullptr;
	}

	Area^ buscararea(String^ nombre) {
		if (Colegio == nullptr) {
			MessageBox::Show("Lista vacía", "Búsqueda de Contacto", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return nullptr;
		}

		int rondas = 0;
		bool encontrado = false;
		String^ tipo = "";
		Area^ areaEncontrada = buscarareaRecursivo(Colegio, nombre, rondas, encontrado, tipo);

		if (!encontrado) {
			MessageBox::Show("El área con nombre: " + nombre + " no fue encontrada después de " + rondas + " rondas", "Búsqueda de Contacto", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show(tipo + " con nombre: " + nombre + " fue encontrado después de " + rondas + " rondas", "Búsqueda de Contacto", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		return areaEncontrada;
	}

	Area^ areaActual = nullptr;

	void editararea(String^ nombreba, TextBox^ nombrea, TextBox^ descripcion, TextBox^ responsabilidad, RadioButton^ d, RadioButton^ c) {
		Area^ areaEncontrada = buscararea(nombreba);

		if (areaEncontrada == nullptr) {
			MessageBox::Show("El área con nombre: " + nombreba + " no fue encontrada", "Editar Área", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		nombrea->Text = areaEncontrada->Nombrea;
		descripcion->Text = areaEncontrada->Descripcion;
		responsabilidad->Text = areaEncontrada->Responsabilidades;

		if (areaEncontrada->Clase != nullptr) {
			c->Checked = true;
		}
		else if (areaEncontrada->Departamento != nullptr) {
			d->Checked = true;
		}

		areaActual = areaEncontrada;
	}

	void guardareditado(TextBox^ nombrea, TextBox^ descripcion, TextBox^ responsabilidad, RadioButton^ d, RadioButton^ c) {
		if (areaActual == nullptr) {
			MessageBox::Show("No hay un área seleccionada para editar", "Guardar Edición", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		areaActual->Nombrea = nombrea->Text;
		areaActual->Descripcion = descripcion->Text;
		areaActual->Responsabilidades = responsabilidad->Text;

		if (c->Checked) {
			if (areaActual->Clase == nullptr) {
				areaActual->Clase = gcnew Area(nombrea->Text, descripcion->Text, responsabilidad->Text);
			}
			else {
				areaActual->Clase->Nombrea = nombrea->Text;
				areaActual->Clase->Descripcion = descripcion->Text;
				areaActual->Clase->Responsabilidades = responsabilidad->Text;
			}
		}
		else if (d->Checked) {
			if (areaActual->Departamento == nullptr) {
				areaActual->Departamento = gcnew Area(nombrea->Text, descripcion->Text, responsabilidad->Text);
			}
			else {
				areaActual->Departamento->Nombrea = nombrea->Text;
				areaActual->Departamento->Descripcion = descripcion->Text;
				areaActual->Departamento->Responsabilidades = responsabilidad->Text;
			}
		}

		MessageBox::Show("El área ha sido actualizada exitosamente", "Guardar Edición", MessageBoxButtons::OK, MessageBoxIcon::Information);

		areaActual = nullptr;
	}

	void eliminararea(String^ nombreba) {
		// Verificar si el árbol está vacío
		if (Colegio == nullptr) {
			MessageBox::Show("No hay áreas para eliminar", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Variables para el recorrido y búsqueda
		Area^ actual = Colegio;
		Area^ anterior = nullptr;
		bool esClase = false;

		// Buscar el área en el árbol
		while (actual != nullptr && actual->Nombrea != nombreba) {
			anterior = actual;
			if (String::Compare(nombreba, actual->Nombrea) > 0) {
				actual = actual->Clase;
				esClase = true;
			}
			else {
				actual = actual->Departamento;
				esClase = false;
			}
		}

		// Si no se encontró el área
		if (actual == nullptr) {
			MessageBox::Show("El área con nombre: " + nombreba + " no fue encontrada", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Eliminar el área
		if (anterior == nullptr) { // El área a eliminar es la raíz
			if (actual->Clase == nullptr && actual->Departamento == nullptr) {
				Colegio = nullptr;
			}
			else if (actual->Clase != nullptr) {
				Colegio = actual->Clase;
			}
			else {
				Colegio = actual->Departamento;
			}
		}
		else {
			if (esClase) {
				if (actual->Clase == nullptr && actual->Departamento == nullptr) {
					anterior->Clase = nullptr;
				}
				else if (actual->Clase != nullptr) {
					anterior->Clase = actual->Clase;
				}
				else {
					anterior->Clase = actual->Departamento;
				}
			}
			else {
				if (actual->Clase == nullptr && actual->Departamento == nullptr) {
					anterior->Departamento = nullptr;
				}
				else if (actual->Clase != nullptr) {
					anterior->Departamento = actual->Clase;
				}
				else {
					anterior->Departamento = actual->Departamento;
				}
			}
		}

		// Mostrar mensaje de éxito
		MessageBox::Show("El área con nombre: " + nombreba + " ha sido eliminada", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void mostrarTodoElArbol() {
		if (Colegio == nullptr) {
			MessageBox::Show("No hay áreas en el colegio.", "Mostrar Todo el Árbol", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		String^ mensajeFinal = "Colegio: " + Colegio->Nombrea + "\n\n";
		mensajeFinal += "Descripción: " + Colegio->Descripcion + "\n";
		mensajeFinal += "Responsabilidades: " + Colegio->Responsabilidades + "\n\n";

		mensajeFinal += mostrarSubAreas(Colegio, 1);

		MessageBox::Show(mensajeFinal, "Todo el Árbol", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	String^ mostrarSubAreas(Area^ area, int nivel) {
		String^ mensaje = "";
		String^ indentacion = gcnew String(' ', nivel * 2);

		// Mostrar información del Administrador, si existe
		if (area->Administrador != nullptr) {
			mensaje += indentacion + "Administrador:\n";
			mensaje += indentacion + "Nombre: " + area->Administrador->Nombrep + "\n";
			mensaje += indentacion + "Rol: " + area->Administrador->RolProp + "\n";
			mensaje += indentacion + "Edad: " + area->Administrador->EdadProp + "\n";
			mensaje += indentacion + "Fecha de ingreso: " + area->Administrador->FechaProp + "\n";
			mensaje += indentacion + "Género: " + area->Administrador->GeneroProp + "\n\n";
		}

		// Mostrar información de la Clase, si existe
		if (area->Clase != nullptr) {
			mensaje += indentacion + "Clase:\n";

			if (area->Clase->Docente != nullptr) {
				mensaje += indentacion + "Docente:\n";
				mensaje += indentacion + "Nombre: " + area->Clase->Docente->Nombrep + "\n";
				mensaje += indentacion + "Rol: " + area->Clase->Docente->RolProp + "\n";
				mensaje += indentacion + "Edad: " + area->Clase->Docente->EdadProp + "\n";
				mensaje += indentacion + "Fecha de ingreso: " + area->Clase->Docente->FechaProp + "\n";
				mensaje += indentacion + "Género: " + area->Clase->Docente->GeneroProp + "\n\n";
			}

			if (area->Clase->Estudiante != nullptr) {
				mensaje += indentacion + "Estudiante:\n";
				mensaje += indentacion + "Nombre: " + area->Clase->Estudiante->Nombrep + "\n";
				mensaje += indentacion + "Rol: " + area->Clase->Estudiante->RolProp + "\n";
				mensaje += indentacion + "Edad: " + area->Clase->Estudiante->EdadProp + "\n";
				mensaje += indentacion + "Fecha de ingreso: " + area->Clase->Estudiante->FechaProp + "\n";
				mensaje += indentacion + "Género: " + area->Clase->Estudiante->GeneroProp + "\n\n";
			}

			// Recursivamente mostrar subareas de la clase
			mensaje += mostrarSubAreas(area->Clase, nivel + 1);
		}

		// Mostrar información del Departamento, si existe
		if (area->Departamento != nullptr) {
			mensaje += indentacion + "Departamento:\n";

			if (area->Departamento->Administrador != nullptr) {
				mensaje += indentacion + "Administrador:\n";
				mensaje += indentacion + "Nombre: " + area->Departamento->Administrador->Nombrep + "\n";
				mensaje += indentacion + "Rol: " + area->Departamento->Administrador->RolProp + "\n";
				mensaje += indentacion + "Edad: " + area->Departamento->Administrador->EdadProp + "\n";
				mensaje += indentacion + "Fecha de ingreso: " + area->Departamento->Administrador->FechaProp + "\n";
				mensaje += indentacion + "Género: " + area->Departamento->Administrador->GeneroProp + "\n\n";
			}

			// Recursivamente mostrar subareas del departamento
			mensaje += mostrarSubAreas(area->Departamento, nivel + 1);
		}

		return mensaje;
	}

	void ingresarpersonal(String^ nombre_buscar_a, String^ nombrep, String^ rolp, int edad, RadioButton^ m, RadioButton^ f, DateTime fecha) {
		String^ g;

		// Determinar el género
		if (m->Checked) {
			g = "Masculino";
		}
		else if (f->Checked) {
			g = "Femenino";
		}
		else {
			MessageBox::Show("No se ha seleccionado un género", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Crear el nuevo objeto Personal
		Personal^ nuevopersonal = gcnew Personal(nombrep, rolp, edad, fecha, g);
		nuevopersonal->Nombrep = nombrep;
		nuevopersonal->Rol = rolp;
		nuevopersonal->Edad = edad;
		nuevopersonal->Fecha = fecha;
		nuevopersonal->Genero = g;

		// Verificar que el colegio no esté vacío
		if (Colegio == nullptr) {
			MessageBox::Show("No se ha encontrado el colegio", "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Buscar el área especificada
		Area^ area_encontrada = buscararea(nombre_buscar_a);

		if (area_encontrada == nullptr) {
			MessageBox::Show("No se encontró el área especificada: " + nombre_buscar_a, "Error", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Insertar personal en el área correspondiente según el rol
		if (rolp->ToLower() == "Docente" || rolp->ToLower() == "docente") {
			if (area_encontrada->Clase == nullptr) {
				area_encontrada->Clase = gcnew Area("Clase", "Clase para el Docente", "Responsabilidad de la Clase");
			}
			area_encontrada->Clase->Docente = nuevopersonal;
			MessageBox::Show("El Docente con Nombre: " + nuevopersonal->Nombrep +
				" \nRol: " + nuevopersonal->Rol +
				" \nEdad: " + nuevopersonal->Edad +
				" \nFecha de ingreso: " + nuevopersonal->Fecha +
				" \nGenero: " + nuevopersonal->Genero +
				" \n\nHa sido guardado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (rolp->ToLower() == "Estudiante" || rolp->ToLower() == "estudiante") {
			if (area_encontrada->Clase == nullptr) {
				area_encontrada->Clase = gcnew Area("Clase", "Clase para el Estudiante", "Responsabilidad de la Clase");
			}
			area_encontrada->Clase->Estudiante = nuevopersonal;
			MessageBox::Show("El Estudiante con Nombre: " + nuevopersonal->Nombrep +
				" \nRol: " + nuevopersonal->Rol +
				" \nEdad: " + nuevopersonal->Edad +
				" \nFecha de ingreso: " + nuevopersonal->Fecha +
				" \nGenero: " + nuevopersonal->Genero +
				" \n\nHa sido guardado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			if (area_encontrada->Departamento == nullptr) {
				area_encontrada->Departamento = gcnew Area("Departamento", "Departamento para el Administrador", "Responsabilidad del Departamento");
			}
			area_encontrada->Departamento->Administrador = nuevopersonal;
			MessageBox::Show("El Administrador con Nombre: " + nuevopersonal->Nombrep +
				" \nRol: " + nuevopersonal->Rol +
				" \nEdad: " + nuevopersonal->Edad +
				" \nFecha de ingreso: " + nuevopersonal->Fecha +
				" \nGenero: " + nuevopersonal->Genero +
				" \n\nHa sido guardado", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		return;
	}

	Personal^ buscarpersonaRecursivo(Area^ area, String^ nombre, int& rondas, bool& encontrado) {
		if (area == nullptr || encontrado) {
			return nullptr;
		}

		// Incrementar el contador de rondas
		rondas++;

		// Verificar si el área tiene personal que coincida con el nombre
		if (area->Docente != nullptr && area->Docente->Nombrep == nombre) {
			encontrado = true;
			return area->Docente;
		}

		if (area->Estudiante != nullptr && area->Estudiante->Nombrep == nombre) {
			encontrado = true;
			return area->Estudiante;
		}

		if (area->Administrador != nullptr && area->Administrador->Nombrep == nombre) {
			encontrado = true;
			return area->Administrador;
		}

		// Buscar recursivamente en Clase y Departamento
		Personal^ resultado = buscarpersonaRecursivo(area->Clase, nombre, rondas, encontrado);
		if (encontrado) {
			return resultado;
		}

		resultado = buscarpersonaRecursivo(area->Departamento, nombre, rondas, encontrado);
		if (encontrado) {
			return resultado;
		}

		return nullptr;
	}

	Personal^ buscarpersona(String^ nombre) {
		if (Colegio == nullptr) {
			MessageBox::Show("Lista vacía", "Búsqueda de Persona", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return nullptr;
		}

		int rondas = 0;
		bool encontrado = false;
		Personal^ personaEncontrada = buscarpersonaRecursivo(Colegio, nombre, rondas, encontrado);

		if (!encontrado) {
			MessageBox::Show("La persona con nombre: " + nombre + " no fue encontrada después de " + rondas + " rondas", "Búsqueda de Persona", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("La persona con nombre: " + nombre + " fue encontrada después de " + rondas + " rondas", "Búsqueda de Persona", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		return personaEncontrada;
	}

	Personal^ personalActual = nullptr;

	void editarpersonal(String^ nombrebp, TextBox^ nombrep, TextBox^ rol, NumericUpDown^ edad, RadioButton^ m, RadioButton^ f, DateTimePicker^ fecha) {
		// Assuming buscarpersona is a function that finds a person by name and returns a Personal^
		Personal^ personaEncontrada = buscarpersona(nombrebp);

		if (personaEncontrada == nullptr) {
			MessageBox::Show("El personal con nombre: " + nombrebp + " no fue encontrado", "Editar Personal", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Fill the controls with the found person's data
		nombrep->Text = personaEncontrada->Nombrep;
		rol->Text = personaEncontrada->Rol;
		edad->Value = personaEncontrada->Edad;
		fecha->Value = personaEncontrada->Fecha;

		if (personaEncontrada->Genero == "Masculino") {
			m->Checked = true;
		}
		else if (personaEncontrada->Genero == "Femenino") {
			f->Checked = true;
		}

		// Store the person being edited in a global variable
		personalActual = personaEncontrada;
	}

	void guardareditado(TextBox^ nombrep, TextBox^ rol, NumericUpDown^ edad, RadioButton^ m, RadioButton^ f, DateTimePicker^ fecha) {
		if (personalActual == nullptr) {
			MessageBox::Show("No hay un personal seleccionado para editar", "Guardar Edición", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Update the person's data with the values from the controls
		personalActual->Nombrep = nombrep->Text;
		personalActual->Rol = rol->Text;
		personalActual->Edad = static_cast<int>(edad->Value);
		personalActual->Fecha = fecha->Value;

		if (m->Checked) {
			personalActual->Genero = "Masculino";
		}
		else if (f->Checked) {
			personalActual->Genero = "Femenino";
		}

		MessageBox::Show("El personal ha sido actualizado exitosamente", "Guardar Edición", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Clear the global variable
		personalActual = nullptr;

		// Clear controls
		nombrep->Clear();
		rol->Clear();
		edad->Value = 0;
		m->Checked = false;
		f->Checked = false;
		fecha->Value = DateTime::Now;
	}

	void mostrarAreaConPersonal(String^ nombreArea) {
		Area^ areaEncontrada = buscararea(nombreArea);

		if (areaEncontrada == nullptr) {
			MessageBox::Show("El área con nombre '" + nombreArea + "' no fue encontrada", "Búsqueda de Área Específica", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		String^ mensajeFinal = "Área Encontrada: " + areaEncontrada->Nombrea + "\n\n";

		// Mostrar el personal del área encontrada
		if (areaEncontrada->Administrador != nullptr) {
			mensajeFinal += "Administrador:\n";
			mensajeFinal += "Nombre: " + areaEncontrada->Administrador->Nombrep + "\n";
			mensajeFinal += "Rol: " + areaEncontrada->Administrador->RolProp + "\n";
			mensajeFinal += "Edad: " + areaEncontrada->Administrador->EdadProp + "\n";
			mensajeFinal += "Fecha de ingreso: " + areaEncontrada->Administrador->FechaProp + "\n";
			mensajeFinal += "Género: " + areaEncontrada->Administrador->GeneroProp + "\n\n";
		}

		if (areaEncontrada->Clase != nullptr) {
			if (areaEncontrada->Clase->Docente != nullptr) {
				mensajeFinal += "Docente:\n";
				mensajeFinal += "Nombre: " + areaEncontrada->Clase->Docente->Nombrep + "\n";
				mensajeFinal += "Rol: " + areaEncontrada->Clase->Docente->RolProp + "\n";
				mensajeFinal += "Edad: " + areaEncontrada->Clase->Docente->EdadProp + "\n";
				mensajeFinal += "Fecha de ingreso: " + areaEncontrada->Clase->Docente->FechaProp + "\n";
				mensajeFinal += "Género: " + areaEncontrada->Clase->Docente->GeneroProp + "\n\n";
			}

			if (areaEncontrada->Clase->Estudiante != nullptr) {
				mensajeFinal += "Estudiante:\n";
				mensajeFinal += "Nombre: " + areaEncontrada->Clase->Estudiante->Nombrep + "\n";
				mensajeFinal += "Rol: " + areaEncontrada->Clase->Estudiante->RolProp + "\n";
				mensajeFinal += "Edad: " + areaEncontrada->Clase->Estudiante->EdadProp + "\n";
				mensajeFinal += "Fecha de ingreso: " + areaEncontrada->Clase->Estudiante->FechaProp + "\n";
				mensajeFinal += "Género: " + areaEncontrada->Clase->Estudiante->GeneroProp + "\n\n";
			}
		}

		// Mostrar el mensaje final con toda la información recopilada
		MessageBox::Show(mensajeFinal, "Personal del Área Específica", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

};

