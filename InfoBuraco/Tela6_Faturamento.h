#pragma once

#include "Tela6_1_Relatorio.h"
#include "Tela6_2_Fatura_Mensal.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela6_Faturamento
	/// </summary>
	public ref class Tela6_Faturamento : public System::Windows::Forms::Form
	{
	public:
		Tela6_Faturamento(void)
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
		~Tela6_Faturamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Relatorio;
	private: System::Windows::Forms::Button^  button_Fatura;
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
			this->button_Relatorio = (gcnew System::Windows::Forms::Button());
			this->button_Fatura = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Relatorio
			// 
			this->button_Relatorio->Location = System::Drawing::Point(0, 0);
			this->button_Relatorio->Name = L"button_Relatorio";
			this->button_Relatorio->Size = System::Drawing::Size(172, 88);
			this->button_Relatorio->TabIndex = 0;
			this->button_Relatorio->Text = L"Relatorio";
			this->button_Relatorio->UseVisualStyleBackColor = true;
			this->button_Relatorio->Click += gcnew System::EventHandler(this, &Tela6_Faturamento::button_Relatorio_click);
			// 
			// button_Fatura
			// 
			this->button_Fatura->Location = System::Drawing::Point(0, 85);
			this->button_Fatura->Name = L"button_Fatura";
			this->button_Fatura->Size = System::Drawing::Size(172, 97);
			this->button_Fatura->TabIndex = 1;
			this->button_Fatura->Text = L"Fatura Mensal";
			this->button_Fatura->UseVisualStyleBackColor = true;
			this->button_Fatura->Click += gcnew System::EventHandler(this, &Tela6_Faturamento::button_Fatura_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(0, 179);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(172, 86);
			this->button_Voltar->TabIndex = 2;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela6_Faturamento::button_Voltar_click);
			// 
			// Tela6_Faturamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 264);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Fatura);
			this->Controls->Add(this->button_Relatorio);
			this->Name = L"Tela6_Faturamento";
			this->Text = L"Tela6_Faturamento";
			this->Load += gcnew System::EventHandler(this, &Tela6_Faturamento::Tela6_Faturamento_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Relatorio_click(System::Object^  sender, System::EventArgs^  e) {
		Tela6_1_Relatorio^ tela_relatorio = gcnew Tela6_1_Relatorio();
		tela_relatorio->ShowDialog();
	}
	private: System::Void button_Fatura_click(System::Object^  sender, System::EventArgs^  e) {
		Tela6_2_Fatura_Mensal^ tela_fatura = gcnew Tela6_2_Fatura_Mensal();
		tela_fatura->ShowDialog();
	}
	private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void Tela6_Faturamento_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
