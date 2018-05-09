#pragma once

#include "Tela3_3_1_Gerenciar_Material.h"
#include "Tela3_3_2_Cadastrar_Material.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_3_Materiais
	/// </summary>
	public ref class Tela3_3_Materiais : public System::Windows::Forms::Form
	{
	public:
		Tela3_3_Materiais(void)
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
		~Tela3_3_Materiais()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Materiais;
	protected:
	private: System::Windows::Forms::CheckedListBox^  checkedListBox_Materiais;
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
			this->label_Materiais = (gcnew System::Windows::Forms::Label());
			this->checkedListBox_Materiais = (gcnew System::Windows::Forms::CheckedListBox());
			this->button_Gerenciar = (gcnew System::Windows::Forms::Button());
			this->button_Cadastrar = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Materiais
			// 
			this->label_Materiais->AutoSize = true;
			this->label_Materiais->Location = System::Drawing::Point(67, 9);
			this->label_Materiais->Name = L"label_Materiais";
			this->label_Materiais->Size = System::Drawing::Size(52, 13);
			this->label_Materiais->TabIndex = 0;
			this->label_Materiais->Text = L"Materiais:";
			// 
			// checkedListBox_Materiais
			// 
			this->checkedListBox_Materiais->FormattingEnabled = true;
			this->checkedListBox_Materiais->Location = System::Drawing::Point(170, 9);
			this->checkedListBox_Materiais->Name = L"checkedListBox_Materiais";
			this->checkedListBox_Materiais->Size = System::Drawing::Size(290, 124);
			this->checkedListBox_Materiais->TabIndex = 1;
			// 
			// button_Gerenciar
			// 
			this->button_Gerenciar->Location = System::Drawing::Point(170, 162);
			this->button_Gerenciar->Name = L"button_Gerenciar";
			this->button_Gerenciar->Size = System::Drawing::Size(290, 23);
			this->button_Gerenciar->TabIndex = 2;
			this->button_Gerenciar->Text = L"Gerenciar Material Selecionado";
			this->button_Gerenciar->UseVisualStyleBackColor = true;
			this->button_Gerenciar->Click += gcnew System::EventHandler(this, &Tela3_3_Materiais::button_Gerenciar_click);
			// 
			// button_Cadastrar
			// 
			this->button_Cadastrar->Location = System::Drawing::Point(170, 240);
			this->button_Cadastrar->Name = L"button_Cadastrar";
			this->button_Cadastrar->Size = System::Drawing::Size(290, 23);
			this->button_Cadastrar->TabIndex = 3;
			this->button_Cadastrar->Text = L"Cadastrar Novo Material";
			this->button_Cadastrar->UseVisualStyleBackColor = true;
			this->button_Cadastrar->Click += gcnew System::EventHandler(this, &Tela3_3_Materiais::button_Cadastrar_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(70, 291);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(75, 23);
			this->button_Voltar->TabIndex = 4;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela3_3_Materiais::button_Voltar_click);
			// 
			// Tela3_3_Materiais
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 342);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Cadastrar);
			this->Controls->Add(this->button_Gerenciar);
			this->Controls->Add(this->checkedListBox_Materiais);
			this->Controls->Add(this->label_Materiais);
			this->Name = L"Tela3_3_Materiais";
			this->Text = L"Tela3_3_Materiais";
			this->Load += gcnew System::EventHandler(this, &Tela3_3_Materiais::Tela3_3_Materiais_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Tela3_3_Materiais_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button_Gerenciar_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_3_1_Gerenciar_Material^ tela_gerenciar_material = gcnew Tela3_3_1_Gerenciar_Material;
		tela_gerenciar_material->Show();
	}
private: System::Void button_Cadastrar_click(System::Object^  sender, System::EventArgs^  e) {
	Tela3_3_2_Cadastrar_Material^ tela_cadastrar_material = gcnew Tela3_3_2_Cadastrar_Material;
	tela_cadastrar_material->Show();
}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
