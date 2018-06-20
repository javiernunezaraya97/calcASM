#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  texto;
	private: System::Windows::Forms::Button^  botonSeno;
	private: System::Windows::Forms::Button^  botonExp;
	private: System::Windows::Forms::Button^  botonRaiz;
	private: System::Windows::Forms::Button^  boton6;
	private: System::Windows::Forms::Button^  boton9;
	private: System::Windows::Forms::Button^  boton0;
	private: System::Windows::Forms::Button^  boton8;
	private: System::Windows::Forms::Button^  boton5;
	private: System::Windows::Forms::Button^  boton7;
	private: System::Windows::Forms::Button^  boton4;
	private: System::Windows::Forms::Button^  boton2;
	private: System::Windows::Forms::Button^  boton1;
	private: System::Windows::Forms::Button^  boton3;
	private: System::Windows::Forms::Button^  botonAC;
	private: System::Windows::Forms::Button^  botonMul;
	private: System::Windows::Forms::Button^  botonDiv;
	private: System::Windows::Forms::Button^  botonSuma;
	private: System::Windows::Forms::Button^  botonResta;
	private: System::Windows::Forms::Button^  botonIgual;
	private: System::Windows::Forms::Button^  botonPar1;
	private: System::Windows::Forms::Button^  botonPar2;
	private: System::Windows::Forms::Button^  botonPunto;
	private: System::Windows::Forms::Button^  botonDEL;
	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->texto = (gcnew System::Windows::Forms::Label());
			this->botonSeno = (gcnew System::Windows::Forms::Button());
			this->botonExp = (gcnew System::Windows::Forms::Button());
			this->botonRaiz = (gcnew System::Windows::Forms::Button());
			this->boton6 = (gcnew System::Windows::Forms::Button());
			this->boton9 = (gcnew System::Windows::Forms::Button());
			this->boton0 = (gcnew System::Windows::Forms::Button());
			this->boton8 = (gcnew System::Windows::Forms::Button());
			this->boton5 = (gcnew System::Windows::Forms::Button());
			this->boton7 = (gcnew System::Windows::Forms::Button());
			this->boton4 = (gcnew System::Windows::Forms::Button());
			this->boton2 = (gcnew System::Windows::Forms::Button());
			this->boton1 = (gcnew System::Windows::Forms::Button());
			this->boton3 = (gcnew System::Windows::Forms::Button());
			this->botonAC = (gcnew System::Windows::Forms::Button());
			this->botonMul = (gcnew System::Windows::Forms::Button());
			this->botonDiv = (gcnew System::Windows::Forms::Button());
			this->botonSuma = (gcnew System::Windows::Forms::Button());
			this->botonResta = (gcnew System::Windows::Forms::Button());
			this->botonIgual = (gcnew System::Windows::Forms::Button());
			this->botonPar1 = (gcnew System::Windows::Forms::Button());
			this->botonPar2 = (gcnew System::Windows::Forms::Button());
			this->botonPunto = (gcnew System::Windows::Forms::Button());
			this->botonDEL = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// texto
			// 
			this->texto->BackColor = System::Drawing::Color::White;
			this->texto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->texto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->texto->Location = System::Drawing::Point(12, 20);
			this->texto->Name = L"texto";
			this->texto->Size = System::Drawing::Size(282, 33);
			this->texto->TabIndex = 0;
			this->texto->Text = L"0";
			this->texto->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// botonSeno
			// 
			this->botonSeno->BackColor = System::Drawing::Color::SeaGreen;
			this->botonSeno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSeno->Location = System::Drawing::Point(12, 100);
			this->botonSeno->Name = L"botonSeno";
			this->botonSeno->Size = System::Drawing::Size(48, 33);
			this->botonSeno->TabIndex = 1;
			this->botonSeno->Text = L"SEN";
			this->botonSeno->UseVisualStyleBackColor = false;
			this->botonSeno->Click += gcnew System::EventHandler(this, &Form1::MostrarFunciones);
			// 
			// botonExp
			// 
			this->botonExp->BackColor = System::Drawing::Color::SeaGreen;
			this->botonExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonExp->Location = System::Drawing::Point(120, 100);
			this->botonExp->Name = L"botonExp";
			this->botonExp->Size = System::Drawing::Size(48, 33);
			this->botonExp->TabIndex = 2;
			this->botonExp->Text = L"x^n";
			this->botonExp->UseVisualStyleBackColor = false;
			this->botonExp->Click += gcnew System::EventHandler(this, &Form1::botonExp_Click);
			// 
			// botonRaiz
			// 
			this->botonRaiz->BackColor = System::Drawing::Color::SeaGreen;
			this->botonRaiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonRaiz->Location = System::Drawing::Point(66, 100);
			this->botonRaiz->Name = L"botonRaiz";
			this->botonRaiz->Size = System::Drawing::Size(48, 33);
			this->botonRaiz->TabIndex = 3;
			this->botonRaiz->Text = L"√";
			this->botonRaiz->UseVisualStyleBackColor = false;
			this->botonRaiz->Click += gcnew System::EventHandler(this, &Form1::MostrarFunciones);
			// 
			// boton6
			// 
			this->boton6->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton6->Location = System::Drawing::Point(120, 200);
			this->boton6->Name = L"boton6";
			this->boton6->Size = System::Drawing::Size(48, 33);
			this->boton6->TabIndex = 4;
			this->boton6->Text = L"6";
			this->boton6->UseVisualStyleBackColor = false;
			this->boton6->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton9
			// 
			this->boton9->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton9->Location = System::Drawing::Point(120, 239);
			this->boton9->Name = L"boton9";
			this->boton9->Size = System::Drawing::Size(48, 33);
			this->boton9->TabIndex = 5;
			this->boton9->Text = L"9";
			this->boton9->UseVisualStyleBackColor = false;
			this->boton9->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton0
			// 
			this->boton0->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton0->Location = System::Drawing::Point(66, 278);
			this->boton0->Name = L"boton0";
			this->boton0->Size = System::Drawing::Size(48, 33);
			this->boton0->TabIndex = 6;
			this->boton0->Text = L"0";
			this->boton0->UseVisualStyleBackColor = false;
			this->boton0->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton8
			// 
			this->boton8->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton8->Location = System::Drawing::Point(66, 239);
			this->boton8->Name = L"boton8";
			this->boton8->Size = System::Drawing::Size(48, 33);
			this->boton8->TabIndex = 7;
			this->boton8->Text = L"8";
			this->boton8->UseVisualStyleBackColor = false;
			this->boton8->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton5
			// 
			this->boton5->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton5->Location = System::Drawing::Point(66, 200);
			this->boton5->Name = L"boton5";
			this->boton5->Size = System::Drawing::Size(48, 33);
			this->boton5->TabIndex = 8;
			this->boton5->Text = L"5";
			this->boton5->UseVisualStyleBackColor = false;
			this->boton5->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton7
			// 
			this->boton7->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton7->Location = System::Drawing::Point(12, 239);
			this->boton7->Name = L"boton7";
			this->boton7->Size = System::Drawing::Size(48, 33);
			this->boton7->TabIndex = 9;
			this->boton7->Text = L"7";
			this->boton7->UseVisualStyleBackColor = false;
			this->boton7->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton4
			// 
			this->boton4->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton4->Location = System::Drawing::Point(12, 200);
			this->boton4->Name = L"boton4";
			this->boton4->Size = System::Drawing::Size(48, 33);
			this->boton4->TabIndex = 10;
			this->boton4->Text = L"4";
			this->boton4->UseVisualStyleBackColor = false;
			this->boton4->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton2
			// 
			this->boton2->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton2->Location = System::Drawing::Point(66, 161);
			this->boton2->Name = L"boton2";
			this->boton2->Size = System::Drawing::Size(48, 33);
			this->boton2->TabIndex = 11;
			this->boton2->Text = L"2";
			this->boton2->UseVisualStyleBackColor = false;
			this->boton2->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton1
			// 
			this->boton1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton1->Location = System::Drawing::Point(12, 161);
			this->boton1->Name = L"boton1";
			this->boton1->Size = System::Drawing::Size(48, 33);
			this->boton1->TabIndex = 12;
			this->boton1->Text = L"1";
			this->boton1->UseVisualStyleBackColor = false;
			this->boton1->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// boton3
			// 
			this->boton3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->boton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boton3->Location = System::Drawing::Point(120, 161);
			this->boton3->Name = L"boton3";
			this->boton3->Size = System::Drawing::Size(48, 33);
			this->boton3->TabIndex = 13;
			this->boton3->Text = L"3";
			this->boton3->UseVisualStyleBackColor = false;
			this->boton3->Click += gcnew System::EventHandler(this, &Form1::Button_Click);
			// 
			// botonAC
			// 
			this->botonAC->BackColor = System::Drawing::Color::Orange;
			this->botonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonAC->Location = System::Drawing::Point(255, 99);
			this->botonAC->Name = L"botonAC";
			this->botonAC->Size = System::Drawing::Size(48, 33);
			this->botonAC->TabIndex = 14;
			this->botonAC->Text = L"AC";
			this->botonAC->UseVisualStyleBackColor = false;
			this->botonAC->Click += gcnew System::EventHandler(this, &Form1::botonAC_Click);
			// 
			// botonMul
			// 
			this->botonMul->BackColor = System::Drawing::Color::Red;
			this->botonMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonMul->Location = System::Drawing::Point(201, 200);
			this->botonMul->Name = L"botonMul";
			this->botonMul->Size = System::Drawing::Size(48, 33);
			this->botonMul->TabIndex = 15;
			this->botonMul->Text = L"*";
			this->botonMul->UseVisualStyleBackColor = false;
			this->botonMul->Click += gcnew System::EventHandler(this, &Form1::Operadores);
			// 
			// botonDiv
			// 
			this->botonDiv->BackColor = System::Drawing::Color::Red;
			this->botonDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonDiv->Location = System::Drawing::Point(255, 200);
			this->botonDiv->Name = L"botonDiv";
			this->botonDiv->Size = System::Drawing::Size(48, 33);
			this->botonDiv->TabIndex = 16;
			this->botonDiv->Text = L"/";
			this->botonDiv->UseVisualStyleBackColor = false;
			this->botonDiv->Click += gcnew System::EventHandler(this, &Form1::Operadores);
			// 
			// botonSuma
			// 
			this->botonSuma->BackColor = System::Drawing::Color::Red;
			this->botonSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonSuma->Location = System::Drawing::Point(201, 161);
			this->botonSuma->Name = L"botonSuma";
			this->botonSuma->Size = System::Drawing::Size(48, 33);
			this->botonSuma->TabIndex = 17;
			this->botonSuma->Text = L"+";
			this->botonSuma->UseVisualStyleBackColor = false;
			this->botonSuma->Click += gcnew System::EventHandler(this, &Form1::Operadores);
			// 
			// botonResta
			// 
			this->botonResta->BackColor = System::Drawing::Color::Red;
			this->botonResta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonResta->Location = System::Drawing::Point(255, 161);
			this->botonResta->Name = L"botonResta";
			this->botonResta->Size = System::Drawing::Size(48, 33);
			this->botonResta->TabIndex = 18;
			this->botonResta->Text = L"-";
			this->botonResta->UseVisualStyleBackColor = false;
			this->botonResta->Click += gcnew System::EventHandler(this, &Form1::Operadores);
			// 
			// botonIgual
			// 
			this->botonIgual->BackColor = System::Drawing::Color::Red;
			this->botonIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonIgual->Location = System::Drawing::Point(255, 278);
			this->botonIgual->Name = L"botonIgual";
			this->botonIgual->Size = System::Drawing::Size(48, 33);
			this->botonIgual->TabIndex = 19;
			this->botonIgual->Text = L"=";
			this->botonIgual->UseVisualStyleBackColor = false;
			this->botonIgual->Click += gcnew System::EventHandler(this, &Form1::botonIgual_Click);
			// 
			// botonPar1
			// 
			this->botonPar1->BackColor = System::Drawing::Color::Red;
			this->botonPar1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonPar1->Location = System::Drawing::Point(201, 239);
			this->botonPar1->Name = L"botonPar1";
			this->botonPar1->Size = System::Drawing::Size(48, 33);
			this->botonPar1->TabIndex = 20;
			this->botonPar1->Text = L"(";
			this->botonPar1->UseVisualStyleBackColor = false;
			this->botonPar1->Click += gcnew System::EventHandler(this, &Form1::Mostrar);
			// 
			// botonPar2
			// 
			this->botonPar2->BackColor = System::Drawing::Color::Red;
			this->botonPar2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonPar2->Location = System::Drawing::Point(255, 239);
			this->botonPar2->Name = L"botonPar2";
			this->botonPar2->Size = System::Drawing::Size(48, 33);
			this->botonPar2->TabIndex = 21;
			this->botonPar2->Text = L")";
			this->botonPar2->UseVisualStyleBackColor = false;
			this->botonPar2->Click += gcnew System::EventHandler(this, &Form1::Mostrar);
			// 
			// botonPunto
			// 
			this->botonPunto->BackColor = System::Drawing::Color::Red;
			this->botonPunto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonPunto->Location = System::Drawing::Point(201, 278);
			this->botonPunto->Name = L"botonPunto";
			this->botonPunto->Size = System::Drawing::Size(48, 33);
			this->botonPunto->TabIndex = 22;
			this->botonPunto->Text = L".";
			this->botonPunto->UseVisualStyleBackColor = false;
			this->botonPunto->Click += gcnew System::EventHandler(this, &Form1::botonPunto_Click);
			// 
			// botonDEL
			// 
			this->botonDEL->BackColor = System::Drawing::Color::Orange;
			this->botonDEL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonDEL->Location = System::Drawing::Point(201, 99);
			this->botonDEL->Name = L"botonDEL";
			this->botonDEL->Size = System::Drawing::Size(48, 33);
			this->botonDEL->TabIndex = 23;
			this->botonDEL->Text = L"DEL";
			this->botonDEL->UseVisualStyleBackColor = false;
			this->botonDEL->Click += gcnew System::EventHandler(this, &Form1::botonDEL_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MidnightBlue;
			this->ClientSize = System::Drawing::Size(315, 339);
			this->Controls->Add(this->botonDEL);
			this->Controls->Add(this->botonPunto);
			this->Controls->Add(this->botonPar2);
			this->Controls->Add(this->botonPar1);
			this->Controls->Add(this->botonIgual);
			this->Controls->Add(this->botonResta);
			this->Controls->Add(this->botonSuma);
			this->Controls->Add(this->botonDiv);
			this->Controls->Add(this->botonMul);
			this->Controls->Add(this->botonAC);
			this->Controls->Add(this->boton3);
			this->Controls->Add(this->boton1);
			this->Controls->Add(this->boton2);
			this->Controls->Add(this->boton4);
			this->Controls->Add(this->boton7);
			this->Controls->Add(this->boton5);
			this->Controls->Add(this->boton8);
			this->Controls->Add(this->boton0);
			this->Controls->Add(this->boton9);
			this->Controls->Add(this->boton6);
			this->Controls->Add(this->botonRaiz);
			this->Controls->Add(this->botonExp);
			this->Controls->Add(this->botonSeno);
			this->Controls->Add(this->texto);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
		double numero1;
		double numero2;
		double resultado;
		String^ operador;
	private: System::Void botonAC_Click(System::Object^  sender, System::EventArgs^  e) {
		texto->Text = "0";
	}
private: System::Void Button_Click(System::Object^  sender, System::EventArgs^  e) {
	Button ^ Numbers = safe_cast<Button^>(sender);
	if (texto->Text == "0") {
		texto->Text = Numbers->Text;
	}
	else {
		texto->Text = texto->Text + Numbers->Text;
	}
}
private: System::Void Operadores(System::Object^  sender, System::EventArgs^  e) {
	Button ^ op = safe_cast<Button^>(sender);
	if (texto->Text == "0") {
		texto->Text = op->Text;
	}
	else {
		texto->Text = texto->Text + op->Text;
	}
}
private: System::Void botonIgual_Click(System::Object^  sender, System::EventArgs^  e) {

	
}
private: System::Void Mostrar(System::Object^  sender, System::EventArgs^  e) {
	Button ^ paren = safe_cast<Button^>(sender);
	if (texto->Text == "0") {
		texto->Text = paren->Text;
	}
	else {
		texto->Text = texto->Text + paren->Text;
	}
}
private: System::Void botonDEL_Click(System::Object^  sender, System::EventArgs^  e) {
	if (texto->Text->Length > 0) {
		texto->Text = texto->Text->Remove(texto->Text->Length - 1, 1);
	}
}
private: System::Void botonPunto_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!texto->Text->Contains(".")) {
		texto->Text = texto->Text + ".";
	}
}
private: System::Void MostrarFunciones(System::Object^  sender, System::EventArgs^  e) {
	Button ^ fun = safe_cast<Button^>(sender);
	if (texto->Text == "0") {
		texto->Text = fun->Text;
	}
	else {
		texto->Text = texto->Text + fun->Text;
	}
}
private: System::Void botonExp_Click(System::Object^  sender, System::EventArgs^  e) {
	if (texto->Text == "0") {
		texto->Text = "^";
	}
	else {
		texto->Text = Convert::ToInt32(texto->Text) + "^";
	}
}
};
}
