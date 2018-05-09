#pragma once

#include "Tela3_2_1_Gerenciar_Equipamento.h"
#include "Tela3_2_2_Cadastrar_Equipamento.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_2_Equipamentos
	/// </summary>
	public ref class Tela3_2_Equipamentos : public System::Windows::Forms::Form
	{
	public:
		Tela3_2_Equipamentos(void)
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
		~Tela3_2_Equipamentos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Equipamentos;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox_Equipamentos;
	private: System::Windows::Forms::Button^  button_Gerenciar;
	private: System::Windows::Forms::Button^  button_Cadastrar;
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
			this->label_Equipamentos = (gcnew System::Windows::Forms::Label());
			this->checkedListBox_Equipamentos = (gcnew System::Windows::Forms::CheckedListBox());
			this->button_Gerenciar = (gcnew System::Windows::Forms::Button());
			this->button_Cadastrar = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Equipamentos
			// 
			this->label_Equipamentos->AutoSize = true;
			this->label_Equipamentos->Location = System::Drawing::Point(34, 9);
			this->label_Equipamentos->Name = L"label_Equipamentos";
			this->label_Equipamentos->Size = System::Drawing::Size(77, 13);
			this->label_Equipamentos->TabIndex = 0;
			this->label_Equipamentos->Text = L"Equipamentos:";
			// 
			// checkedListBox_Equipamentos
			// 
			this->checkedListBox_Equipamentos->FormattingEnabled = true;
			this->checkedListBox_Equipamentos->Location = System::Drawing::Point(154, 9);
			this->checkedListBox_Equipamentos->Name = L"checkedListBox_Equipamentos";
			this->checkedListBox_Equipamentos->Size = System::Drawing::Size(288, 139);
			this->checkedListBox_Equipamentos->TabIndex = 1;
			// 
			// button_Gerenciar
			// 
			this->button_Gerenciar->Location = System::Drawing::Point(154, 179);
			this->button_Gerenciar->Name = L"button_Gerenciar";
			this->button_Gerenciar->Size = System::Drawing::Size(288, 23);
			this->button_Gerenciar->TabIndex = 2;
			this->button_Gerenciar->Text = L"Gerenciar Equipamento Selecionado";
			this->button_Gerenciar->UseVisualStyleBackColor = true;
			this->button_Gerenciar->Click += gcnew System::EventHandler(this, &Tela3_2_Equipamentos::button_Gerenciar_click);
			// 
			// button_Cadastrar
			// 
			this->button_Cadastrar->Location = System::Drawing::Point(154, 253);
			this->button_Cadastrar->Name = L"button_Cadastrar";
			this->button_Cadastrar->Size = System::Drawing::Size(288, 23);
			this->button_Cadastrar->TabIndex = 3;
			this->button_Cadastrar->Text = L"Cadastrar Novo Equipamento";
			this->button_Cadastrar->UseVisualStyleBackColor = true;
			this->button_Cadastrar->Click += gcnew System::EventHandler(this, &Tela3_2_Equipamentos::button_Cadastrar_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(37, 319);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(75, 23);
			this->button_Voltar->TabIndex = 4;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela3_2_Equipamentos::button_Voltar_click);
			// 
			// Tela3_2_Equipamentos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 354);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Cadastrar);
			this->Controls->Add(this->button_Gerenciar);
			this->Controls->Add(this->checkedListBox_Equipamentos);
			this->Controls->Add(this->label_Equipamentos);
			this->Name = L"Tela3_2_Equipamentos";
			this->Text = L"Tela3_2_Equipamentos";
			this->Load += gcnew System::EventHandler(this, &Tela3_2_Equipamentos::Tela3_2_Equipamentos_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Tela3_2_Equipamentos_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button_Gerenciar_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_2_1_Gerenciar_Equipamento^ tela_gerenciar_equipamento = gcnew Tela3_2_1_Gerenciar_Equipamento();
		tela_gerenciar_equipamento->ShowDialog();
	}
	private: System::Void button_Cadastrar_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_2_2_Cadastrar_Equipamento^ tela_cadastrar_equipamento = gcnew Tela3_2_2_Cadastrar_Equipamento();
		tela_cadastrar_equipamento->ShowDialog();
	}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
