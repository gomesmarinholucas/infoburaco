#pragma once

#include "Tela3_Infraestrutura.h"
#include "Tela4_Comunicacao.h"
#include "Tela5_Despacho.h"
#include "Tela6_Faturamento.h"
#include "Tela7_Administracao_Usuarios.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela2_Inicio
	/// </summary>
	public ref class Tela2_Inicio : public System::Windows::Forms::Form
	{
	public:
		Tela2_Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Tela2_Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Infraestrutura;
	private: System::Windows::Forms::Button^  button_Comunicacao;
	private: System::Windows::Forms::Button^  button_Despacho;
	private: System::Windows::Forms::Button^  button_Faturamento;
	private: System::Windows::Forms::Button^  button_Administracao;
	private: System::Windows::Forms::Button^  button_Logout;
	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_Infraestrutura = (gcnew System::Windows::Forms::Button());
			this->button_Comunicacao = (gcnew System::Windows::Forms::Button());
			this->button_Despacho = (gcnew System::Windows::Forms::Button());
			this->button_Faturamento = (gcnew System::Windows::Forms::Button());
			this->button_Administracao = (gcnew System::Windows::Forms::Button());
			this->button_Logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Infraestrutura
			// 
			this->button_Infraestrutura->Location = System::Drawing::Point(0, 0);
			this->button_Infraestrutura->Name = L"button_Infraestrutura";
			this->button_Infraestrutura->Size = System::Drawing::Size(185, 62);
			this->button_Infraestrutura->TabIndex = 0;
			this->button_Infraestrutura->Text = L"Infraestrutura";
			this->button_Infraestrutura->UseVisualStyleBackColor = true;
			this->button_Infraestrutura->Click += gcnew System::EventHandler(this, &Tela2_Inicio::button_Infraestrutura_click);
			// 
			// button_Comunicacao
			// 
			this->button_Comunicacao->Location = System::Drawing::Point(0, 58);
			this->button_Comunicacao->Name = L"button_Comunicacao";
			this->button_Comunicacao->Size = System::Drawing::Size(185, 69);
			this->button_Comunicacao->TabIndex = 1;
			this->button_Comunicacao->Text = L"Comunicacao";
			this->button_Comunicacao->UseVisualStyleBackColor = true;
			this->button_Comunicacao->Click += gcnew System::EventHandler(this, &Tela2_Inicio::button_Comunicacao_click);
			// 
			// button_Despacho
			// 
			this->button_Despacho->Location = System::Drawing::Point(0, 124);
			this->button_Despacho->Name = L"button_Despacho";
			this->button_Despacho->Size = System::Drawing::Size(185, 65);
			this->button_Despacho->TabIndex = 2;
			this->button_Despacho->Text = L"Despacho";
			this->button_Despacho->UseVisualStyleBackColor = true;
			this->button_Despacho->Click += gcnew System::EventHandler(this, &Tela2_Inicio::button_Despacho_click);
			// 
			// button_Faturamento
			// 
			this->button_Faturamento->Location = System::Drawing::Point(0, 186);
			this->button_Faturamento->Name = L"button_Faturamento";
			this->button_Faturamento->Size = System::Drawing::Size(185, 64);
			this->button_Faturamento->TabIndex = 3;
			this->button_Faturamento->Text = L"Faturamento";
			this->button_Faturamento->UseVisualStyleBackColor = true;
			this->button_Faturamento->Click += gcnew System::EventHandler(this, &Tela2_Inicio::button_Faturamento_click);
			// 
			// button_Administracao
			// 
			this->button_Administracao->Location = System::Drawing::Point(0, 246);
			this->button_Administracao->Name = L"button_Administracao";
			this->button_Administracao->Size = System::Drawing::Size(185, 66);
			this->button_Administracao->TabIndex = 4;
			this->button_Administracao->Text = L"Administracao";
			this->button_Administracao->UseVisualStyleBackColor = true;
			this->button_Administracao->Click += gcnew System::EventHandler(this, &Tela2_Inicio::button_Administracao_click);
			// 
			// button_Logout
			// 
			this->button_Logout->Location = System::Drawing::Point(0, 309);
			this->button_Logout->Name = L"button_Logout";
			this->button_Logout->Size = System::Drawing::Size(185, 70);
			this->button_Logout->TabIndex = 5;
			this->button_Logout->Text = L"Logout";
			this->button_Logout->UseVisualStyleBackColor = true;
			this->button_Logout->Click += gcnew System::EventHandler(this, &Tela2_Inicio::button_Logout_click);
			// 
			// Tela2_Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 379);
			this->Controls->Add(this->button_Logout);
			this->Controls->Add(this->button_Administracao);
			this->Controls->Add(this->button_Faturamento);
			this->Controls->Add(this->button_Despacho);
			this->Controls->Add(this->button_Comunicacao);
			this->Controls->Add(this->button_Infraestrutura);
			this->Name = L"Tela2_Inicio";
			this->Text = L"Tela2_Inicio";
			this->Load += gcnew System::EventHandler(this, &Tela2_Inicio::Tela2_Inicio_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Infraestrutura_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_Infraestrutura^ tela_infraestrutura = gcnew Tela3_Infraestrutura();
		tela_infraestrutura->ShowDialog();
	}
private: System::Void button_Comunicacao_click(System::Object^  sender, System::EventArgs^  e) {
	Tela4_Comunicacao^ tela_comunicacao = gcnew Tela4_Comunicacao();
	tela_comunicacao->ShowDialog();
}
private: System::Void button_Despacho_click(System::Object^  sender, System::EventArgs^  e) {
	Tela5_Despacho^ tela_despacho = gcnew Tela5_Despacho();
	tela_despacho->ShowDialog();
}
private: System::Void button_Faturamento_click(System::Object^  sender, System::EventArgs^  e) {
	Tela6_Faturamento^ tela_faturamento = gcnew Tela6_Faturamento();
	tela_faturamento->ShowDialog();
}
private: System::Void button_Administracao_click(System::Object^  sender, System::EventArgs^  e) {
	Tela7_Administracao_Usuarios^ tela_administracao = gcnew Tela7_Administracao_Usuarios();
	tela_administracao->ShowDialog();
}
private: System::Void button_Logout_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela2_Inicio_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
