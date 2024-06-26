#pragma once
#include "Area.h"

namespace ArbolesGeneralesColegiosAMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		Area^ ListaColegio;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			ListaColegio = gcnew Area("nombre","descripcion","Responsabilidades");
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBoxArea;
	private: System::Windows::Forms::Label^ labelNombreCArea;

	private: System::Windows::Forms::GroupBox^ groupBoxPersonal;
	private: System::Windows::Forms::TextBox^ textBoxDescripcionCArea;

	private: System::Windows::Forms::Label^ labelDescripcionCArea;
	private: System::Windows::Forms::TextBox^ textBoxNombreCArea;


	private: System::Windows::Forms::Label^ labelResponsabilidadCArea;
	private: System::Windows::Forms::TextBox^ textBoxResponsabilidadCArea;


	private: System::Windows::Forms::Label^ labelSeleccionarArea;


	private: System::Windows::Forms::RadioButton^ radioButtonClase;
	private: System::Windows::Forms::RadioButton^ radioButtonDepartamento;







	private: System::Windows::Forms::Label^ labelRolPersonal;

	private: System::Windows::Forms::Label^ labelNombrePersonal;
	private: System::Windows::Forms::Label^ labelIngresarPersonal;
	private: System::Windows::Forms::TextBox^ textBoxNombrePersonal;

	private: System::Windows::Forms::Label^ labelEdadPersonal;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownEdadPersonal;
	private: System::Windows::Forms::Label^ labelFechaPersonal;
	private: System::Windows::Forms::DateTimePicker^ dateTimePickerFechaPersonal;

	private: System::Windows::Forms::RadioButton^ radioButtonGeneroFPersonal;
	private: System::Windows::Forms::RadioButton^ radioButtonGeneroMPersonal;
	private: System::Windows::Forms::Label^ labelGeneroPersonal;
	private: System::Windows::Forms::TextBox^ textBoxRolPersonal;
	private: System::Windows::Forms::Button^ buttonMostrarArea;
	private: System::Windows::Forms::Button^ buttonEditarArea;




	private: System::Windows::Forms::Button^ buttonAgregarArea;

	private: System::Windows::Forms::Button^ buttonAgregarPersona;
	private: System::Windows::Forms::Button^ buttonEliminarArea;






	private: System::Windows::Forms::Button^ buttonMostrarPersonal;
	private: System::Windows::Forms::Button^ buttonEliminarPersonal;
	private: System::Windows::Forms::Button^ buttonEditarPersonal;
	private: System::Windows::Forms::Button^ buttonEditarP;
	private: System::Windows::Forms::Button^ buttonEditarC;

	private: System::Windows::Forms::TextBox^ textBoxNombreBuscarArea;

	private: System::Windows::Forms::Label^ labelBuscarArea;
	private: System::Windows::Forms::Button^ buttonNombreBuscarArea;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonBuscarNombrePersonal;
	private: System::Windows::Forms::TextBox^ textBoxBuscarNombrePersonal;
	private: System::Windows::Forms::Label^ labelBuscarNombrePersonal;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxArea = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonEditarC = (gcnew System::Windows::Forms::Button());
			this->buttonEliminarArea = (gcnew System::Windows::Forms::Button());
			this->buttonMostrarArea = (gcnew System::Windows::Forms::Button());
			this->buttonEditarArea = (gcnew System::Windows::Forms::Button());
			this->buttonAgregarArea = (gcnew System::Windows::Forms::Button());
			this->radioButtonClase = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDepartamento = (gcnew System::Windows::Forms::RadioButton());
			this->labelSeleccionarArea = (gcnew System::Windows::Forms::Label());
			this->textBoxResponsabilidadCArea = (gcnew System::Windows::Forms::TextBox());
			this->labelResponsabilidadCArea = (gcnew System::Windows::Forms::Label());
			this->textBoxDescripcionCArea = (gcnew System::Windows::Forms::TextBox());
			this->labelDescripcionCArea = (gcnew System::Windows::Forms::Label());
			this->textBoxNombreCArea = (gcnew System::Windows::Forms::TextBox());
			this->labelNombreCArea = (gcnew System::Windows::Forms::Label());
			this->groupBoxPersonal = (gcnew System::Windows::Forms::GroupBox());
			this->buttonBuscarNombrePersonal = (gcnew System::Windows::Forms::Button());
			this->textBoxBuscarNombrePersonal = (gcnew System::Windows::Forms::TextBox());
			this->labelBuscarNombrePersonal = (gcnew System::Windows::Forms::Label());
			this->buttonNombreBuscarArea = (gcnew System::Windows::Forms::Button());
			this->textBoxNombreBuscarArea = (gcnew System::Windows::Forms::TextBox());
			this->labelBuscarArea = (gcnew System::Windows::Forms::Label());
			this->buttonEditarP = (gcnew System::Windows::Forms::Button());
			this->buttonMostrarPersonal = (gcnew System::Windows::Forms::Button());
			this->buttonEliminarPersonal = (gcnew System::Windows::Forms::Button());
			this->buttonEditarPersonal = (gcnew System::Windows::Forms::Button());
			this->buttonAgregarPersona = (gcnew System::Windows::Forms::Button());
			this->labelFechaPersonal = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerFechaPersonal = (gcnew System::Windows::Forms::DateTimePicker());
			this->radioButtonGeneroFPersonal = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonGeneroMPersonal = (gcnew System::Windows::Forms::RadioButton());
			this->labelGeneroPersonal = (gcnew System::Windows::Forms::Label());
			this->textBoxRolPersonal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNombrePersonal = (gcnew System::Windows::Forms::TextBox());
			this->labelEdadPersonal = (gcnew System::Windows::Forms::Label());
			this->numericUpDownEdadPersonal = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelRolPersonal = (gcnew System::Windows::Forms::Label());
			this->labelNombrePersonal = (gcnew System::Windows::Forms::Label());
			this->labelIngresarPersonal = (gcnew System::Windows::Forms::Label());
			this->groupBoxArea->SuspendLayout();
			this->groupBoxPersonal->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEdadPersonal))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(194, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"GETIONAMIENTO DE UNA UNIDAD EDUCATIVA";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBoxArea
			// 
			this->groupBoxArea->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBoxArea->Controls->Add(this->label2);
			this->groupBoxArea->Controls->Add(this->buttonEditarC);
			this->groupBoxArea->Controls->Add(this->buttonEliminarArea);
			this->groupBoxArea->Controls->Add(this->buttonMostrarArea);
			this->groupBoxArea->Controls->Add(this->buttonEditarArea);
			this->groupBoxArea->Controls->Add(this->buttonAgregarArea);
			this->groupBoxArea->Controls->Add(this->radioButtonClase);
			this->groupBoxArea->Controls->Add(this->radioButtonDepartamento);
			this->groupBoxArea->Controls->Add(this->labelSeleccionarArea);
			this->groupBoxArea->Controls->Add(this->textBoxResponsabilidadCArea);
			this->groupBoxArea->Controls->Add(this->labelResponsabilidadCArea);
			this->groupBoxArea->Controls->Add(this->textBoxDescripcionCArea);
			this->groupBoxArea->Controls->Add(this->labelDescripcionCArea);
			this->groupBoxArea->Controls->Add(this->textBoxNombreCArea);
			this->groupBoxArea->Controls->Add(this->labelNombreCArea);
			this->groupBoxArea->Location = System::Drawing::Point(12, 37);
			this->groupBoxArea->Name = L"groupBoxArea";
			this->groupBoxArea->Size = System::Drawing::Size(659, 239);
			this->groupBoxArea->TabIndex = 1;
			this->groupBoxArea->TabStop = false;
			this->groupBoxArea->Text = L"Area";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(533, 16);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Se aconseja que primero ingrese los datos del colegio sin marcar departamento o c"
				L"lase";
			// 
			// buttonEditarC
			// 
			this->buttonEditarC->Location = System::Drawing::Point(263, 166);
			this->buttonEditarC->Name = L"buttonEditarC";
			this->buttonEditarC->Size = System::Drawing::Size(74, 26);
			this->buttonEditarC->TabIndex = 25;
			this->buttonEditarC->Text = L"Editar";
			this->buttonEditarC->UseVisualStyleBackColor = true;
			this->buttonEditarC->Click += gcnew System::EventHandler(this, &MyForm::buttonEditarC_Click);
			// 
			// buttonEliminarArea
			// 
			this->buttonEliminarArea->Location = System::Drawing::Point(325, 198);
			this->buttonEliminarArea->Name = L"buttonEliminarArea";
			this->buttonEliminarArea->Size = System::Drawing::Size(122, 26);
			this->buttonEliminarArea->TabIndex = 19;
			this->buttonEliminarArea->Text = L"Eliminar Area";
			this->buttonEliminarArea->UseVisualStyleBackColor = true;
			this->buttonEliminarArea->Click += gcnew System::EventHandler(this, &MyForm::buttonEliminarArea_Click);
			// 
			// buttonMostrarArea
			// 
			this->buttonMostrarArea->Location = System::Drawing::Point(464, 198);
			this->buttonMostrarArea->Name = L"buttonMostrarArea";
			this->buttonMostrarArea->Size = System::Drawing::Size(111, 26);
			this->buttonMostrarArea->TabIndex = 18;
			this->buttonMostrarArea->Text = L"Motrar Todo";
			this->buttonMostrarArea->UseVisualStyleBackColor = true;
			this->buttonMostrarArea->Click += gcnew System::EventHandler(this, &MyForm::buttonMostrarArea_Click);
			// 
			// buttonEditarArea
			// 
			this->buttonEditarArea->Location = System::Drawing::Point(190, 198);
			this->buttonEditarArea->Name = L"buttonEditarArea";
			this->buttonEditarArea->Size = System::Drawing::Size(115, 26);
			this->buttonEditarArea->TabIndex = 17;
			this->buttonEditarArea->Text = L"Editar Area";
			this->buttonEditarArea->UseVisualStyleBackColor = true;
			this->buttonEditarArea->Click += gcnew System::EventHandler(this, &MyForm::buttonEditarArea_Click);
			// 
			// buttonAgregarArea
			// 
			this->buttonAgregarArea->Location = System::Drawing::Point(47, 198);
			this->buttonAgregarArea->Name = L"buttonAgregarArea";
			this->buttonAgregarArea->Size = System::Drawing::Size(122, 26);
			this->buttonAgregarArea->TabIndex = 16;
			this->buttonAgregarArea->Text = L"Agregar Area";
			this->buttonAgregarArea->UseVisualStyleBackColor = true;
			this->buttonAgregarArea->Click += gcnew System::EventHandler(this, &MyForm::buttonAgregarArea_Click);
			// 
			// radioButtonClase
			// 
			this->radioButtonClase->AutoSize = true;
			this->radioButtonClase->Location = System::Drawing::Point(465, 140);
			this->radioButtonClase->Name = L"radioButtonClase";
			this->radioButtonClase->Size = System::Drawing::Size(63, 20);
			this->radioButtonClase->TabIndex = 8;
			this->radioButtonClase->TabStop = true;
			this->radioButtonClase->Text = L"Clase";
			this->radioButtonClase->UseVisualStyleBackColor = true;
			// 
			// radioButtonDepartamento
			// 
			this->radioButtonDepartamento->AutoSize = true;
			this->radioButtonDepartamento->Location = System::Drawing::Point(40, 140);
			this->radioButtonDepartamento->Name = L"radioButtonDepartamento";
			this->radioButtonDepartamento->Size = System::Drawing::Size(114, 20);
			this->radioButtonDepartamento->TabIndex = 7;
			this->radioButtonDepartamento->TabStop = true;
			this->radioButtonDepartamento->Text = L"Departamento";
			this->radioButtonDepartamento->UseVisualStyleBackColor = true;
			// 
			// labelSeleccionarArea
			// 
			this->labelSeleccionarArea->AutoSize = true;
			this->labelSeleccionarArea->Location = System::Drawing::Point(19, 121);
			this->labelSeleccionarArea->Name = L"labelSeleccionarArea";
			this->labelSeleccionarArea->Size = System::Drawing::Size(160, 16);
			this->labelSeleccionarArea->TabIndex = 6;
			this->labelSeleccionarArea->Text = L"Que area desea ingresar:";
			// 
			// textBoxResponsabilidadCArea
			// 
			this->textBoxResponsabilidadCArea->Location = System::Drawing::Point(130, 92);
			this->textBoxResponsabilidadCArea->Name = L"textBoxResponsabilidadCArea";
			this->textBoxResponsabilidadCArea->Size = System::Drawing::Size(512, 22);
			this->textBoxResponsabilidadCArea->TabIndex = 5;
			// 
			// labelResponsabilidadCArea
			// 
			this->labelResponsabilidadCArea->AutoSize = true;
			this->labelResponsabilidadCArea->Location = System::Drawing::Point(19, 95);
			this->labelResponsabilidadCArea->Name = L"labelResponsabilidadCArea";
			this->labelResponsabilidadCArea->Size = System::Drawing::Size(114, 16);
			this->labelResponsabilidadCArea->TabIndex = 4;
			this->labelResponsabilidadCArea->Text = L"Responsabilidad:";
			// 
			// textBoxDescripcionCArea
			// 
			this->textBoxDescripcionCArea->Location = System::Drawing::Point(102, 64);
			this->textBoxDescripcionCArea->Name = L"textBoxDescripcionCArea";
			this->textBoxDescripcionCArea->Size = System::Drawing::Size(540, 22);
			this->textBoxDescripcionCArea->TabIndex = 3;
			// 
			// labelDescripcionCArea
			// 
			this->labelDescripcionCArea->AutoSize = true;
			this->labelDescripcionCArea->Location = System::Drawing::Point(19, 67);
			this->labelDescripcionCArea->Name = L"labelDescripcionCArea";
			this->labelDescripcionCArea->Size = System::Drawing::Size(82, 16);
			this->labelDescripcionCArea->TabIndex = 2;
			this->labelDescripcionCArea->Text = L"Descripción:";
			// 
			// textBoxNombreCArea
			// 
			this->textBoxNombreCArea->Location = System::Drawing::Point(130, 36);
			this->textBoxNombreCArea->Name = L"textBoxNombreCArea";
			this->textBoxNombreCArea->Size = System::Drawing::Size(512, 22);
			this->textBoxNombreCArea->TabIndex = 1;
			// 
			// labelNombreCArea
			// 
			this->labelNombreCArea->AutoSize = true;
			this->labelNombreCArea->Location = System::Drawing::Point(19, 39);
			this->labelNombreCArea->Name = L"labelNombreCArea";
			this->labelNombreCArea->Size = System::Drawing::Size(105, 16);
			this->labelNombreCArea->TabIndex = 0;
			this->labelNombreCArea->Text = L"Nombre del Are:";
			// 
			// groupBoxPersonal
			// 
			this->groupBoxPersonal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBoxPersonal->Controls->Add(this->buttonBuscarNombrePersonal);
			this->groupBoxPersonal->Controls->Add(this->textBoxBuscarNombrePersonal);
			this->groupBoxPersonal->Controls->Add(this->labelBuscarNombrePersonal);
			this->groupBoxPersonal->Controls->Add(this->buttonNombreBuscarArea);
			this->groupBoxPersonal->Controls->Add(this->textBoxNombreBuscarArea);
			this->groupBoxPersonal->Controls->Add(this->labelBuscarArea);
			this->groupBoxPersonal->Controls->Add(this->buttonEditarP);
			this->groupBoxPersonal->Controls->Add(this->buttonMostrarPersonal);
			this->groupBoxPersonal->Controls->Add(this->buttonEliminarPersonal);
			this->groupBoxPersonal->Controls->Add(this->buttonEditarPersonal);
			this->groupBoxPersonal->Controls->Add(this->buttonAgregarPersona);
			this->groupBoxPersonal->Controls->Add(this->labelFechaPersonal);
			this->groupBoxPersonal->Controls->Add(this->dateTimePickerFechaPersonal);
			this->groupBoxPersonal->Controls->Add(this->radioButtonGeneroFPersonal);
			this->groupBoxPersonal->Controls->Add(this->radioButtonGeneroMPersonal);
			this->groupBoxPersonal->Controls->Add(this->labelGeneroPersonal);
			this->groupBoxPersonal->Controls->Add(this->textBoxRolPersonal);
			this->groupBoxPersonal->Controls->Add(this->textBoxNombrePersonal);
			this->groupBoxPersonal->Controls->Add(this->labelEdadPersonal);
			this->groupBoxPersonal->Controls->Add(this->numericUpDownEdadPersonal);
			this->groupBoxPersonal->Controls->Add(this->labelRolPersonal);
			this->groupBoxPersonal->Controls->Add(this->labelNombrePersonal);
			this->groupBoxPersonal->Controls->Add(this->labelIngresarPersonal);
			this->groupBoxPersonal->Location = System::Drawing::Point(59, 282);
			this->groupBoxPersonal->Name = L"groupBoxPersonal";
			this->groupBoxPersonal->Size = System::Drawing::Size(563, 252);
			this->groupBoxPersonal->TabIndex = 2;
			this->groupBoxPersonal->TabStop = false;
			this->groupBoxPersonal->Text = L"Personal";
			// 
			// buttonBuscarNombrePersonal
			// 
			this->buttonBuscarNombrePersonal->Location = System::Drawing::Point(477, 183);
			this->buttonBuscarNombrePersonal->Name = L"buttonBuscarNombrePersonal";
			this->buttonBuscarNombrePersonal->Size = System::Drawing::Size(75, 23);
			this->buttonBuscarNombrePersonal->TabIndex = 22;
			this->buttonBuscarNombrePersonal->Text = L"Buscar";
			this->buttonBuscarNombrePersonal->UseVisualStyleBackColor = true;
			this->buttonBuscarNombrePersonal->Click += gcnew System::EventHandler(this, &MyForm::buttonBuscarNombrePersonal_Click);
			// 
			// textBoxBuscarNombrePersonal
			// 
			this->textBoxBuscarNombrePersonal->Location = System::Drawing::Point(203, 183);
			this->textBoxBuscarNombrePersonal->Name = L"textBoxBuscarNombrePersonal";
			this->textBoxBuscarNombrePersonal->Size = System::Drawing::Size(258, 22);
			this->textBoxBuscarNombrePersonal->TabIndex = 21;
			// 
			// labelBuscarNombrePersonal
			// 
			this->labelBuscarNombrePersonal->AutoSize = true;
			this->labelBuscarNombrePersonal->Location = System::Drawing::Point(6, 186);
			this->labelBuscarNombrePersonal->Name = L"labelBuscarNombrePersonal";
			this->labelBuscarNombrePersonal->Size = System::Drawing::Size(191, 16);
			this->labelBuscarNombrePersonal->TabIndex = 20;
			this->labelBuscarNombrePersonal->Text = L"Nombre del Personal a Buscar";
			// 
			// buttonNombreBuscarArea
			// 
			this->buttonNombreBuscarArea->Location = System::Drawing::Point(424, 12);
			this->buttonNombreBuscarArea->Name = L"buttonNombreBuscarArea";
			this->buttonNombreBuscarArea->Size = System::Drawing::Size(75, 23);
			this->buttonNombreBuscarArea->TabIndex = 19;
			this->buttonNombreBuscarArea->Text = L"Buscar";
			this->buttonNombreBuscarArea->UseVisualStyleBackColor = true;
			this->buttonNombreBuscarArea->Click += gcnew System::EventHandler(this, &MyForm::buttonNombreBuscarArea_Click);
			// 
			// textBoxNombreBuscarArea
			// 
			this->textBoxNombreBuscarArea->Location = System::Drawing::Point(209, 13);
			this->textBoxNombreBuscarArea->Name = L"textBoxNombreBuscarArea";
			this->textBoxNombreBuscarArea->Size = System::Drawing::Size(195, 22);
			this->textBoxNombreBuscarArea->TabIndex = 18;
			// 
			// labelBuscarArea
			// 
			this->labelBuscarArea->AutoSize = true;
			this->labelBuscarArea->Location = System::Drawing::Point(20, 18);
			this->labelBuscarArea->Name = L"labelBuscarArea";
			this->labelBuscarArea->Size = System::Drawing::Size(188, 16);
			this->labelBuscarArea->TabIndex = 17;
			this->labelBuscarArea->Text = L"Nombre del Area para buscar:";
			this->labelBuscarArea->Click += gcnew System::EventHandler(this, &MyForm::labelBuscarArea_Click);
			// 
			// buttonEditarP
			// 
			this->buttonEditarP->Location = System::Drawing::Point(356, 153);
			this->buttonEditarP->Name = L"buttonEditarP";
			this->buttonEditarP->Size = System::Drawing::Size(75, 23);
			this->buttonEditarP->TabIndex = 16;
			this->buttonEditarP->Text = L"Editar";
			this->buttonEditarP->UseVisualStyleBackColor = true;
			this->buttonEditarP->Click += gcnew System::EventHandler(this, &MyForm::buttonEditarP_Click);
			// 
			// buttonMostrarPersonal
			// 
			this->buttonMostrarPersonal->Location = System::Drawing::Point(404, 214);
			this->buttonMostrarPersonal->Name = L"buttonMostrarPersonal";
			this->buttonMostrarPersonal->Size = System::Drawing::Size(126, 26);
			this->buttonMostrarPersonal->TabIndex = 15;
			this->buttonMostrarPersonal->Text = L"Mostrar Personal";
			this->buttonMostrarPersonal->UseVisualStyleBackColor = true;
			this->buttonMostrarPersonal->Click += gcnew System::EventHandler(this, &MyForm::buttonMostrarPersonal_Click);
			// 
			// buttonEliminarPersonal
			// 
			this->buttonEliminarPersonal->Location = System::Drawing::Point(273, 214);
			this->buttonEliminarPersonal->Name = L"buttonEliminarPersonal";
			this->buttonEliminarPersonal->Size = System::Drawing::Size(124, 26);
			this->buttonEliminarPersonal->TabIndex = 14;
			this->buttonEliminarPersonal->Text = L"Eliminar Personal";
			this->buttonEliminarPersonal->UseVisualStyleBackColor = true;
			this->buttonEliminarPersonal->Click += gcnew System::EventHandler(this, &MyForm::buttonEliminarPersonal_Click);
			// 
			// buttonEditarPersonal
			// 
			this->buttonEditarPersonal->Location = System::Drawing::Point(149, 214);
			this->buttonEditarPersonal->Name = L"buttonEditarPersonal";
			this->buttonEditarPersonal->Size = System::Drawing::Size(120, 26);
			this->buttonEditarPersonal->TabIndex = 13;
			this->buttonEditarPersonal->Text = L"Editar Personal";
			this->buttonEditarPersonal->UseVisualStyleBackColor = true;
			this->buttonEditarPersonal->Click += gcnew System::EventHandler(this, &MyForm::buttonEditarPersonal_Click);
			// 
			// buttonAgregarPersona
			// 
			this->buttonAgregarPersona->Location = System::Drawing::Point(16, 214);
			this->buttonAgregarPersona->Name = L"buttonAgregarPersona";
			this->buttonAgregarPersona->Size = System::Drawing::Size(126, 26);
			this->buttonAgregarPersona->TabIndex = 12;
			this->buttonAgregarPersona->Text = L"Agregar Personal";
			this->buttonAgregarPersona->UseVisualStyleBackColor = true;
			this->buttonAgregarPersona->Click += gcnew System::EventHandler(this, &MyForm::buttonAgregarPersona_Click);
			// 
			// labelFechaPersonal
			// 
			this->labelFechaPersonal->AutoSize = true;
			this->labelFechaPersonal->Location = System::Drawing::Point(294, 108);
			this->labelFechaPersonal->Name = L"labelFechaPersonal";
			this->labelFechaPersonal->Size = System::Drawing::Size(115, 16);
			this->labelFechaPersonal->TabIndex = 11;
			this->labelFechaPersonal->Text = L"Fecha de Ingreso:";
			// 
			// dateTimePickerFechaPersonal
			// 
			this->dateTimePickerFechaPersonal->Location = System::Drawing::Point(309, 127);
			this->dateTimePickerFechaPersonal->Name = L"dateTimePickerFechaPersonal";
			this->dateTimePickerFechaPersonal->Size = System::Drawing::Size(200, 22);
			this->dateTimePickerFechaPersonal->TabIndex = 10;
			// 
			// radioButtonGeneroFPersonal
			// 
			this->radioButtonGeneroFPersonal->AutoSize = true;
			this->radioButtonGeneroFPersonal->Location = System::Drawing::Point(190, 153);
			this->radioButtonGeneroFPersonal->Name = L"radioButtonGeneroFPersonal";
			this->radioButtonGeneroFPersonal->Size = System::Drawing::Size(88, 20);
			this->radioButtonGeneroFPersonal->TabIndex = 9;
			this->radioButtonGeneroFPersonal->TabStop = true;
			this->radioButtonGeneroFPersonal->Text = L"Femenino";
			this->radioButtonGeneroFPersonal->UseVisualStyleBackColor = true;
			// 
			// radioButtonGeneroMPersonal
			// 
			this->radioButtonGeneroMPersonal->AutoSize = true;
			this->radioButtonGeneroMPersonal->Location = System::Drawing::Point(190, 127);
			this->radioButtonGeneroMPersonal->Name = L"radioButtonGeneroMPersonal";
			this->radioButtonGeneroMPersonal->Size = System::Drawing::Size(89, 20);
			this->radioButtonGeneroMPersonal->TabIndex = 8;
			this->radioButtonGeneroMPersonal->TabStop = true;
			this->radioButtonGeneroMPersonal->Text = L"Masculino";
			this->radioButtonGeneroMPersonal->UseVisualStyleBackColor = true;
			// 
			// labelGeneroPersonal
			// 
			this->labelGeneroPersonal->AutoSize = true;
			this->labelGeneroPersonal->Location = System::Drawing::Point(163, 108);
			this->labelGeneroPersonal->Name = L"labelGeneroPersonal";
			this->labelGeneroPersonal->Size = System::Drawing::Size(55, 16);
			this->labelGeneroPersonal->TabIndex = 7;
			this->labelGeneroPersonal->Text = L"Genero:";
			// 
			// textBoxRolPersonal
			// 
			this->textBoxRolPersonal->Location = System::Drawing::Point(74, 82);
			this->textBoxRolPersonal->Name = L"textBoxRolPersonal";
			this->textBoxRolPersonal->Size = System::Drawing::Size(478, 22);
			this->textBoxRolPersonal->TabIndex = 6;
			// 
			// textBoxNombrePersonal
			// 
			this->textBoxNombrePersonal->Location = System::Drawing::Point(102, 57);
			this->textBoxNombrePersonal->Name = L"textBoxNombrePersonal";
			this->textBoxNombrePersonal->Size = System::Drawing::Size(450, 22);
			this->textBoxNombrePersonal->TabIndex = 5;
			// 
			// labelEdadPersonal
			// 
			this->labelEdadPersonal->AutoSize = true;
			this->labelEdadPersonal->Location = System::Drawing::Point(37, 131);
			this->labelEdadPersonal->Name = L"labelEdadPersonal";
			this->labelEdadPersonal->Size = System::Drawing::Size(43, 16);
			this->labelEdadPersonal->TabIndex = 4;
			this->labelEdadPersonal->Text = L"Edad:";
			// 
			// numericUpDownEdadPersonal
			// 
			this->numericUpDownEdadPersonal->Location = System::Drawing::Point(86, 129);
			this->numericUpDownEdadPersonal->Name = L"numericUpDownEdadPersonal";
			this->numericUpDownEdadPersonal->Size = System::Drawing::Size(48, 22);
			this->numericUpDownEdadPersonal->TabIndex = 3;
			// 
			// labelRolPersonal
			// 
			this->labelRolPersonal->AutoSize = true;
			this->labelRolPersonal->Location = System::Drawing::Point(37, 85);
			this->labelRolPersonal->Name = L"labelRolPersonal";
			this->labelRolPersonal->Size = System::Drawing::Size(31, 16);
			this->labelRolPersonal->TabIndex = 2;
			this->labelRolPersonal->Text = L"Rol:";
			// 
			// labelNombrePersonal
			// 
			this->labelNombrePersonal->AutoSize = true;
			this->labelNombrePersonal->Location = System::Drawing::Point(37, 60);
			this->labelNombrePersonal->Name = L"labelNombrePersonal";
			this->labelNombrePersonal->Size = System::Drawing::Size(59, 16);
			this->labelNombrePersonal->TabIndex = 1;
			this->labelNombrePersonal->Text = L"Nombre:";
			// 
			// labelIngresarPersonal
			// 
			this->labelIngresarPersonal->AutoSize = true;
			this->labelIngresarPersonal->Location = System::Drawing::Point(176, 38);
			this->labelIngresarPersonal->Name = L"labelIngresarPersonal";
			this->labelIngresarPersonal->Size = System::Drawing::Size(202, 16);
			this->labelIngresarPersonal->TabIndex = 0;
			this->labelIngresarPersonal->Text = L"Ingresando datos de la Persona:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 534);
			this->Controls->Add(this->groupBoxPersonal);
			this->Controls->Add(this->groupBoxArea);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBoxArea->ResumeLayout(false);
			this->groupBoxArea->PerformLayout();
			this->groupBoxPersonal->ResumeLayout(false);
			this->groupBoxPersonal->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEdadPersonal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonAgregarArea_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombrec = textBoxNombreCArea->Text;
	String^ descripcionc = textBoxDescripcionCArea->Text;
	String^ responsabilidadc = textBoxResponsabilidadCArea->Text;
	ListaColegio->insertararea(radioButtonDepartamento, radioButtonClase, nombrec, descripcionc, responsabilidadc);

	textBoxNombreCArea->Clear();
	textBoxDescripcionCArea->Clear();
	textBoxResponsabilidadCArea->Clear();
	radioButtonDepartamento->Checked = false;
	radioButtonClase->Checked = false;

}
private: System::Void buttonNombreBuscarArea_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreba = textBoxNombreBuscarArea->Text;

	ListaColegio->buscararea(nombreba);

	textBoxNombreBuscarArea->Clear();

}
private: System::Void labelBuscarArea_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonEditarArea_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreba = textBoxNombreBuscarArea->Text;
	ListaColegio->editararea(nombreba, textBoxNombreCArea, textBoxDescripcionCArea, textBoxResponsabilidadCArea, radioButtonDepartamento, radioButtonClase);
}
private: System::Void buttonEditarC_Click(System::Object^ sender, System::EventArgs^ e) {
	ListaColegio->guardareditado(textBoxNombreCArea, textBoxDescripcionCArea, textBoxResponsabilidadCArea, radioButtonDepartamento, radioButtonClase);

	textBoxNombreCArea->Clear();
	textBoxDescripcionCArea->Clear();
	textBoxResponsabilidadCArea->Clear();
	radioButtonDepartamento->Checked = false;
	radioButtonClase->Checked = false;
	textBoxNombreBuscarArea->Clear();

}
private: System::Void buttonEliminarArea_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreba = textBoxNombreBuscarArea->Text;

	ListaColegio->eliminararea(nombreba);
	textBoxNombreBuscarArea->Clear();
}
private: System::Void buttonMostrarArea_Click(System::Object^ sender, System::EventArgs^ e) {
	ListaColegio->mostrarTodoElArbol();

}
private: System::Void buttonAgregarPersona_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreba = textBoxNombreBuscarArea->Text;
	String^ nombrep = textBoxNombrePersonal->Text;
	String^ rolp = textBoxRolPersonal->Text;
	int edad = Convert::ToInt32(numericUpDownEdadPersonal->Value);
	DateTime fechap = dateTimePickerFechaPersonal->Value;

	ListaColegio->ingresarpersonal(nombreba, nombrep, rolp,edad, radioButtonGeneroMPersonal, radioButtonGeneroFPersonal,fechap);

	textBoxNombrePersonal->Clear();
	textBoxRolPersonal->Clear();
	numericUpDownEdadPersonal->Value = 0;
	radioButtonGeneroMPersonal->Checked = false;
	radioButtonGeneroFPersonal->Checked = false;
	textBoxNombreBuscarArea->Clear();
}
private: System::Void buttonBuscarNombrePersonal_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombrebp = textBoxBuscarNombrePersonal->Text;

	ListaColegio->buscarpersona(nombrebp);
	textBoxBuscarNombrePersonal->Clear();
}
private: System::Void buttonEditarPersonal_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombrebp = textBoxBuscarNombrePersonal->Text;
	ListaColegio->editarpersonal(nombrebp, textBoxNombrePersonal, textBoxRolPersonal, numericUpDownEdadPersonal, radioButtonGeneroMPersonal, radioButtonGeneroFPersonal, dateTimePickerFechaPersonal);
}
private: System::Void buttonEditarP_Click(System::Object^ sender, System::EventArgs^ e) {
	ListaColegio->guardareditado(textBoxNombrePersonal, textBoxRolPersonal, numericUpDownEdadPersonal, radioButtonGeneroMPersonal, radioButtonGeneroFPersonal, dateTimePickerFechaPersonal);

	textBoxNombrePersonal->Clear();
	textBoxRolPersonal->Clear();
	numericUpDownEdadPersonal->Value = 0;
	radioButtonGeneroMPersonal->Checked = false;
	radioButtonGeneroFPersonal->Checked = false;
	textBoxBuscarNombrePersonal->Clear();
}
private: System::Void buttonEliminarPersonal_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonMostrarPersonal_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombrebp = textBoxNombreBuscarArea->Text;
	
	ListaColegio->mostrarAreaConPersonal(nombrebp);
}
};
}
