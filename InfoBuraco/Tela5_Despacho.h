#pragma once

#include "Tela5_1_Gerenciar_OS.h"
#include "Tela5_2_Compor_Saida.h"
#include "Tela5_3_Registrar_Cumprimento_OS.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela5_Despacho
	/// </summary>
	public ref class Tela5_Despacho : public System::Windows::Forms::Form
	{
	public:
		Tela5_Despacho(void)
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
		~Tela5_Despacho()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Gerenciar_OS;
	private: System::Windows::Forms::Button^  button_Compor_Saida;
	private: System::Windows::Forms::Button^  button_Cumprimento_OS;
	private: System::Windows::Forms::Button^  button_Voltar;

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
			this->button_Gerenciar_OS = (gcnew System::Windows::Forms::Button());
			this->button_Compor_Saida = (gcnew System::Windows::Forms::Button());
			this->button_Cumprimento_OS = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Gerenciar_OS
			// 
			this->button_Gerenciar_OS->Location = System::Drawing::Point(0, 0);
			this->button_Gerenciar_OS->Name = L"button_Gerenciar_OS";
			this->button_Gerenciar_OS->Size = System::Drawing::Size(178, 90);
			this->button_Gerenciar_OS->TabIndex = 0;
			this->button_Gerenciar_OS->Text = L"Gerenciar OS";
			this->button_Gerenciar_OS->UseVisualStyleBackColor = true;
			this->button_Gerenciar_OS->Click += gcnew System::EventHandler(this, &Tela5_Despacho::button_Gerenciar_OS_click);
			// 
			// button_Compor_Saida
			// 
			this->button_Compor_Saida->Location = System::Drawing::Point(0, 86);
			this->button_Compor_Saida->Name = L"button_Compor_Saida";
			this->button_Compor_Saida->Size = System::Drawing::Size(178, 92);
			this->button_Compor_Saida->TabIndex = 1;
			this->button_Compor_Saida->Text = L"Compor Saida";
			this->button_Compor_Saida->UseVisualStyleBackColor = true;
			this->button_Compor_Saida->Click += gcnew System::EventHandler(this, &Tela5_Despacho::button_Compor_Saida_click);
			// 
			// button_Cumprimento_OS
			// 
			this->button_Cumprimento_OS->Location = System::Drawing::Point(0, 175);
			this->button_Cumprimento_OS->Name = L"button_Cumprimento_OS";
			this->button_Cumprimento_OS->Size = System::Drawing::Size(178, 94);
			this->button_Cumprimento_OS->TabIndex = 2;
			this->button_Cumprimento_OS->Text = L"Registrar Cumprimento de OS";
			this->button_Cumprimento_OS->UseVisualStyleBackColor = true;
			this->button_Cumprimento_OS->Click += gcnew System::EventHandler(this, &Tela5_Despacho::button_Cumprimento_OS_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(0, 266);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(178, 92);
			this->button_Voltar->TabIndex = 3;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela5_Despacho::button_Voltar_click);
			// 
			// Tela5_Despacho
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 356);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Cumprimento_OS);
			this->Controls->Add(this->button_Compor_Saida);
			this->Controls->Add(this->button_Gerenciar_OS);
			this->Name = L"Tela5_Despacho";
			this->Text = L"Tela5_Despacho";
			this->Load += gcnew System::EventHandler(this, &Tela5_Despacho::Tela5_Despacho_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Gerenciar_OS_click(System::Object^  sender, System::EventArgs^  e) {
		Tela5_1_Gerenciar_OS^ tela_gerenciar_OS = gcnew Tela5_1_Gerenciar_OS();
		tela_gerenciar_OS->ShowDialog();
	}
	private: System::Void button_Compor_Saida_click(System::Object^  sender, System::EventArgs^  e) {
		Tela5_2_Compor_Saida^ tela_compor_saida = gcnew Tela5_2_Compor_Saida();
		tela_compor_saida->ShowDialog();
	}
private: System::Void button_Cumprimento_OS_click(System::Object^  sender, System::EventArgs^  e) {
	Tela5_3_Registrar_Cumprimento_OS^ tela_cumprimento_OS = gcnew Tela5_3_Registrar_Cumprimento_OS();
	tela_cumprimento_OS->ShowDialog();
}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela5_Despacho_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
