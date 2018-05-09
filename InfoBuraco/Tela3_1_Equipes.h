#pragma once

#include "Tela3_1_1_Gerenciar_Equipe.h"
#include "Tela3_1_2_Cadastrar_Equipe.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_1_Equipes
	/// </summary>
	public ref class Tela3_1_Equipes : public System::Windows::Forms::Form
	{
	public:
		Tela3_1_Equipes(void)
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
		~Tela3_1_Equipes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^  checkedListBox_Equipes;
	protected:
	private: System::Windows::Forms::Label^  label_Equipes;
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
			this->checkedListBox_Equipes = (gcnew System::Windows::Forms::CheckedListBox());
			this->label_Equipes = (gcnew System::Windows::Forms::Label());
			this->button_Gerenciar = (gcnew System::Windows::Forms::Button());
			this->button_Cadastrar = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkedListBox_Equipes
			// 
			this->checkedListBox_Equipes->FormattingEnabled = true;
			this->checkedListBox_Equipes->Location = System::Drawing::Point(143, 12);
			this->checkedListBox_Equipes->Name = L"checkedListBox_Equipes";
			this->checkedListBox_Equipes->Size = System::Drawing::Size(273, 124);
			this->checkedListBox_Equipes->TabIndex = 0;
			// 
			// label_Equipes
			// 
			this->label_Equipes->AutoSize = true;
			this->label_Equipes->Location = System::Drawing::Point(34, 12);
			this->label_Equipes->Name = L"label_Equipes";
			this->label_Equipes->Size = System::Drawing::Size(48, 13);
			this->label_Equipes->TabIndex = 1;
			this->label_Equipes->Text = L"Equipes:";
			// 
			// button_Gerenciar
			// 
			this->button_Gerenciar->Location = System::Drawing::Point(143, 173);
			this->button_Gerenciar->Name = L"button_Gerenciar";
			this->button_Gerenciar->Size = System::Drawing::Size(273, 23);
			this->button_Gerenciar->TabIndex = 2;
			this->button_Gerenciar->Text = L"Gerenciar Equipe Selecionada";
			this->button_Gerenciar->UseVisualStyleBackColor = true;
			this->button_Gerenciar->Click += gcnew System::EventHandler(this, &Tela3_1_Equipes::button_Gerenciar_click);
			// 
			// button_Cadastrar
			// 
			this->button_Cadastrar->Location = System::Drawing::Point(143, 247);
			this->button_Cadastrar->Name = L"button_Cadastrar";
			this->button_Cadastrar->Size = System::Drawing::Size(273, 23);
			this->button_Cadastrar->TabIndex = 3;
			this->button_Cadastrar->Text = L"Cadastrar Nova Equipe";
			this->button_Cadastrar->UseVisualStyleBackColor = true;
			this->button_Cadastrar->Click += gcnew System::EventHandler(this, &Tela3_1_Equipes::button_Cadastrar_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(37, 333);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(75, 23);
			this->button_Voltar->TabIndex = 4;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela3_1_Equipes::button_Voltar_click);
			// 
			// Tela3_1_Equipes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 382);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Cadastrar);
			this->Controls->Add(this->button_Gerenciar);
			this->Controls->Add(this->label_Equipes);
			this->Controls->Add(this->checkedListBox_Equipes);
			this->Name = L"Tela3_1_Equipes";
			this->Text = L"Tela3_1_Equipes";
			this->Load += gcnew System::EventHandler(this, &Tela3_1_Equipes::Tela3_1_Equipes_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Gerenciar_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_1_1_Gerenciar_Equipe^ tela_gerenciar_equipe = gcnew Tela3_1_1_Gerenciar_Equipe();
		tela_gerenciar_equipe->ShowDialog();
	}
	private: System::Void button_Cadastrar_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_1_2_Cadastrar_Equipe^ tela_cadastrar_equipe = gcnew Tela3_1_2_Cadastrar_Equipe();
		tela_cadastrar_equipe->ShowDialog();
	}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela3_1_Equipes_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
