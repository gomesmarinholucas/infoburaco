#pragma once

#include "Tela3_1_Equipes.h"
#include "Tela3_2_Equipamentos.h"
#include "Tela3_3_Materiais.h"
#include "Tela3_4_Mobilizacao.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_Infraestrutura
	/// </summary>
	public ref class Tela3_Infraestrutura : public System::Windows::Forms::Form
	{
	public:
		Tela3_Infraestrutura(void)
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
		~Tela3_Infraestrutura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Equipes;
	private: System::Windows::Forms::Button^  button_Equipamentos;
	private: System::Windows::Forms::Button^  button_Materiais;
	private: System::Windows::Forms::Button^  button_Mobilizacao;
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
			this->button_Equipes = (gcnew System::Windows::Forms::Button());
			this->button_Equipamentos = (gcnew System::Windows::Forms::Button());
			this->button_Materiais = (gcnew System::Windows::Forms::Button());
			this->button_Mobilizacao = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Equipes
			// 
			this->button_Equipes->Location = System::Drawing::Point(0, 0);
			this->button_Equipes->Name = L"button_Equipes";
			this->button_Equipes->Size = System::Drawing::Size(181, 76);
			this->button_Equipes->TabIndex = 0;
			this->button_Equipes->Text = L"Equipes";
			this->button_Equipes->UseVisualStyleBackColor = true;
			this->button_Equipes->Click += gcnew System::EventHandler(this, &Tela3_Infraestrutura::button_Equipes_click);
			// 
			// button_Equipamentos
			// 
			this->button_Equipamentos->Location = System::Drawing::Point(0, 73);
			this->button_Equipamentos->Name = L"button_Equipamentos";
			this->button_Equipamentos->Size = System::Drawing::Size(181, 82);
			this->button_Equipamentos->TabIndex = 1;
			this->button_Equipamentos->Text = L"Equipamentos";
			this->button_Equipamentos->UseVisualStyleBackColor = true;
			this->button_Equipamentos->Click += gcnew System::EventHandler(this, &Tela3_Infraestrutura::button_Equipamentos_click);
			// 
			// button_Materiais
			// 
			this->button_Materiais->Location = System::Drawing::Point(0, 152);
			this->button_Materiais->Name = L"button_Materiais";
			this->button_Materiais->Size = System::Drawing::Size(181, 91);
			this->button_Materiais->TabIndex = 2;
			this->button_Materiais->Text = L"Materiais";
			this->button_Materiais->UseVisualStyleBackColor = true;
			this->button_Materiais->Click += gcnew System::EventHandler(this, &Tela3_Infraestrutura::button_Materiais_click);
			// 
			// button_Mobilizacao
			// 
			this->button_Mobilizacao->Location = System::Drawing::Point(0, 240);
			this->button_Mobilizacao->Name = L"button_Mobilizacao";
			this->button_Mobilizacao->Size = System::Drawing::Size(181, 83);
			this->button_Mobilizacao->TabIndex = 3;
			this->button_Mobilizacao->Text = L"Mobilizacao";
			this->button_Mobilizacao->UseVisualStyleBackColor = true;
			this->button_Mobilizacao->Click += gcnew System::EventHandler(this, &Tela3_Infraestrutura::button_Mobilizacao_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(0, 320);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(181, 82);
			this->button_Voltar->TabIndex = 4;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela3_Infraestrutura::button_Voltar_click);
			// 
			// Tela3_Infraestrutura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 402);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Mobilizacao);
			this->Controls->Add(this->button_Materiais);
			this->Controls->Add(this->button_Equipamentos);
			this->Controls->Add(this->button_Equipes);
			this->Name = L"Tela3_Infraestrutura";
			this->Text = L"Tela3_Infraestrutura";
			this->Load += gcnew System::EventHandler(this, &Tela3_Infraestrutura::Tela3_Infraestrutura_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Equipes_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_1_Equipes^ tela_equipes = gcnew Tela3_1_Equipes();
		tela_equipes->ShowDialog();
	}
	private: System::Void button_Equipamentos_click(System::Object^  sender, System::EventArgs^  e) {
		Tela3_2_Equipamentos^ tela_equipamentos = gcnew Tela3_2_Equipamentos();
		tela_equipamentos->ShowDialog();
	}
private: System::Void button_Materiais_click(System::Object^  sender, System::EventArgs^  e) {
	Tela3_3_Materiais^ tela_materiais = gcnew Tela3_3_Materiais();
	tela_materiais->ShowDialog();
}
private: System::Void button_Mobilizacao_click(System::Object^  sender, System::EventArgs^  e) {
	Tela3_4_Mobilizacao^ tela_mobilizacao = gcnew Tela3_4_Mobilizacao();
	tela_mobilizacao->ShowDialog();
}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela3_Infraestrutura_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
