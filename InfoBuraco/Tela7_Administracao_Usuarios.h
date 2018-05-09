#pragma once

#include "Tela7_1_Gerenciar_Usuario.h"
#include "Tela7_2_Cadastrar_Usuario.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela7_Administracao_Usuarios
	/// </summary>
	public ref class Tela7_Administracao_Usuarios : public System::Windows::Forms::Form
	{
	public:
		Tela7_Administracao_Usuarios(void)
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
		~Tela7_Administracao_Usuarios()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Usuarios;
	protected:
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button_Gerenciar;
	private: System::Windows::Forms::Button^  button_Cadastrar;
	private: System::Windows::Forms::Button^  button_Voltar;



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
			this->label_Usuarios = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button_Gerenciar = (gcnew System::Windows::Forms::Button());
			this->button_Cadastrar = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Usuarios
			// 
			this->label_Usuarios->AutoSize = true;
			this->label_Usuarios->Location = System::Drawing::Point(81, 9);
			this->label_Usuarios->Name = L"label_Usuarios";
			this->label_Usuarios->Size = System::Drawing::Size(51, 13);
			this->label_Usuarios->TabIndex = 0;
			this->label_Usuarios->Text = L"Usuarios:";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(180, 9);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(315, 109);
			this->checkedListBox1->TabIndex = 1;
			// 
			// button_Gerenciar
			// 
			this->button_Gerenciar->Location = System::Drawing::Point(180, 156);
			this->button_Gerenciar->Name = L"button_Gerenciar";
			this->button_Gerenciar->Size = System::Drawing::Size(315, 23);
			this->button_Gerenciar->TabIndex = 2;
			this->button_Gerenciar->Text = L"Gerenciar Usuario Selecionado";
			this->button_Gerenciar->UseVisualStyleBackColor = true;
			this->button_Gerenciar->Click += gcnew System::EventHandler(this, &Tela7_Administracao_Usuarios::button_Gerenciar_click);
			// 
			// button_Cadastrar
			// 
			this->button_Cadastrar->Location = System::Drawing::Point(180, 233);
			this->button_Cadastrar->Name = L"button_Cadastrar";
			this->button_Cadastrar->Size = System::Drawing::Size(315, 23);
			this->button_Cadastrar->TabIndex = 3;
			this->button_Cadastrar->Text = L"Cadastrar Novo Usuario";
			this->button_Cadastrar->UseVisualStyleBackColor = true;
			this->button_Cadastrar->Click += gcnew System::EventHandler(this, &Tela7_Administracao_Usuarios::button_Cadastrar_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(84, 307);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(75, 23);
			this->button_Voltar->TabIndex = 4;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela7_Administracao_Usuarios::button_Voltar_click);
			// 
			// Tela7_Administracao_Usuarios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(652, 354);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Cadastrar);
			this->Controls->Add(this->button_Gerenciar);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label_Usuarios);
			this->Name = L"Tela7_Administracao_Usuarios";
			this->Text = L"Tela7_Administracao_Usuarios";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Gerenciar_click(System::Object^  sender, System::EventArgs^  e) {
		Tela7_1_Gerenciar_Usuario^ tela_gerenciar_usuario = gcnew Tela7_1_Gerenciar_Usuario;
		tela_gerenciar_usuario->Show();
	}
private: System::Void button_Cadastrar_click(System::Object^  sender, System::EventArgs^  e) {
	Tela7_2_Cadastrar_Usuario^ tela_cadastrar_usuario = gcnew Tela7_2_Cadastrar_Usuario;
	tela_cadastrar_usuario->Show();
}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
