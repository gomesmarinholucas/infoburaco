#pragma once

#include "Tela4_1_Registrar_Buraco.h"
#include "Tela4_2_Registrar_Notificacao.h"
#include "Tela4_3_Responder_Notificacoes.h"

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela4_Comunicacao
	/// </summary>
	public ref class Tela4_Comunicacao : public System::Windows::Forms::Form
	{
	public:
		Tela4_Comunicacao(void)
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
		~Tela4_Comunicacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_Registrar_Buraco;
	private: System::Windows::Forms::Button^  button_Registrar_Notificacao;
	private: System::Windows::Forms::Button^  button_Responder_Notificacoes;
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
			this->button_Registrar_Buraco = (gcnew System::Windows::Forms::Button());
			this->button_Registrar_Notificacao = (gcnew System::Windows::Forms::Button());
			this->button_Responder_Notificacoes = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_Registrar_Buraco
			// 
			this->button_Registrar_Buraco->Location = System::Drawing::Point(0, 0);
			this->button_Registrar_Buraco->Name = L"button_Registrar_Buraco";
			this->button_Registrar_Buraco->Size = System::Drawing::Size(175, 83);
			this->button_Registrar_Buraco->TabIndex = 0;
			this->button_Registrar_Buraco->Text = L"Registrar Buraco";
			this->button_Registrar_Buraco->UseVisualStyleBackColor = true;
			this->button_Registrar_Buraco->Click += gcnew System::EventHandler(this, &Tela4_Comunicacao::button_Registrar_Buraco_click);
			// 
			// button_Registrar_Notificacao
			// 
			this->button_Registrar_Notificacao->Location = System::Drawing::Point(0, 80);
			this->button_Registrar_Notificacao->Name = L"button_Registrar_Notificacao";
			this->button_Registrar_Notificacao->Size = System::Drawing::Size(175, 97);
			this->button_Registrar_Notificacao->TabIndex = 1;
			this->button_Registrar_Notificacao->Text = L"Registrar Notificacao";
			this->button_Registrar_Notificacao->UseVisualStyleBackColor = true;
			this->button_Registrar_Notificacao->Click += gcnew System::EventHandler(this, &Tela4_Comunicacao::button_Registrar_Notificacao_click);
			// 
			// button_Responder_Notificacoes
			// 
			this->button_Responder_Notificacoes->Location = System::Drawing::Point(0, 174);
			this->button_Responder_Notificacoes->Name = L"button_Responder_Notificacoes";
			this->button_Responder_Notificacoes->Size = System::Drawing::Size(175, 94);
			this->button_Responder_Notificacoes->TabIndex = 2;
			this->button_Responder_Notificacoes->Text = L"Responder Notificacoes";
			this->button_Responder_Notificacoes->UseVisualStyleBackColor = true;
			this->button_Responder_Notificacoes->Click += gcnew System::EventHandler(this, &Tela4_Comunicacao::button_Responder_Notificacoes_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(0, 265);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(175, 86);
			this->button_Voltar->TabIndex = 3;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela4_Comunicacao::button_Voltar_click);
			// 
			// Tela4_Comunicacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 350);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Responder_Notificacoes);
			this->Controls->Add(this->button_Registrar_Notificacao);
			this->Controls->Add(this->button_Registrar_Buraco);
			this->Name = L"Tela4_Comunicacao";
			this->Text = L"Tela4_Comunicacao";
			this->Load += gcnew System::EventHandler(this, &Tela4_Comunicacao::Tela4_Comunicacao_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_Registrar_Buraco_click(System::Object^  sender, System::EventArgs^  e) {
		Tela4_1_Registrar_Buraco^ tela_registrar_buraco = gcnew Tela4_1_Registrar_Buraco();
		tela_registrar_buraco->ShowDialog();
	}
	private: System::Void button_Registrar_Notificacao_click(System::Object^  sender, System::EventArgs^  e) {
		Tela4_2_Registrar_Notificacao^ tela_registrar_notificacao = gcnew Tela4_2_Registrar_Notificacao();
		tela_registrar_notificacao->ShowDialog();
	}
private: System::Void button_Responder_Notificacoes_click(System::Object^  sender, System::EventArgs^  e) {
	Tela4_3_Responder_Notificacoes^ tela_responder_notificacoes = gcnew Tela4_3_Responder_Notificacoes();
	tela_responder_notificacoes->ShowDialog();
}
private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela4_Comunicacao_Load(System::Object^  sender, System::EventArgs^  e) {

}
};
}
