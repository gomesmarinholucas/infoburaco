#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela4_3_Responder_Notificacoes
	/// </summary>
	public ref class Tela4_3_Responder_Notificacoes : public System::Windows::Forms::Form
	{
	public:
		Tela4_3_Responder_Notificacoes(void)
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
		~Tela4_3_Responder_Notificacoes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_ID_Buraco;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox_ID_Buraco;
	private: System::Windows::Forms::Label^  label_Info;
	private: System::Windows::Forms::Label^  label_Mensagem;
	private: System::Windows::Forms::RichTextBox^  richTextBox_Mensagem;
	private: System::Windows::Forms::Button^  button_Enviar;
	private: System::Windows::Forms::Button^  button_Cancelar;

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
			this->label_ID_Buraco = (gcnew System::Windows::Forms::Label());
			this->comboBox_ID_Buraco = (gcnew System::Windows::Forms::ComboBox());
			this->label_Info = (gcnew System::Windows::Forms::Label());
			this->label_Mensagem = (gcnew System::Windows::Forms::Label());
			this->richTextBox_Mensagem = (gcnew System::Windows::Forms::RichTextBox());
			this->button_Enviar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_ID_Buraco
			// 
			this->label_ID_Buraco->AutoSize = true;
			this->label_ID_Buraco->Location = System::Drawing::Point(128, 33);
			this->label_ID_Buraco->Name = L"label_ID_Buraco";
			this->label_ID_Buraco->Size = System::Drawing::Size(73, 13);
			this->label_ID_Buraco->TabIndex = 0;
			this->label_ID_Buraco->Text = L"ID do Buraco:";
			// 
			// comboBox_ID_Buraco
			// 
			this->comboBox_ID_Buraco->FormattingEnabled = true;
			this->comboBox_ID_Buraco->Location = System::Drawing::Point(244, 30);
			this->comboBox_ID_Buraco->Name = L"comboBox_ID_Buraco";
			this->comboBox_ID_Buraco->Size = System::Drawing::Size(121, 21);
			this->comboBox_ID_Buraco->TabIndex = 1;
			// 
			// label_Info
			// 
			this->label_Info->AutoSize = true;
			this->label_Info->Location = System::Drawing::Point(128, 95);
			this->label_Info->Name = L"label_Info";
			this->label_Info->Size = System::Drawing::Size(68, 13);
			this->label_Info->TabIndex = 2;
			this->label_Info->Text = L"Informacoes:";
			// 
			// label_Mensagem
			// 
			this->label_Mensagem->AutoSize = true;
			this->label_Mensagem->Location = System::Drawing::Point(128, 168);
			this->label_Mensagem->Name = L"label_Mensagem";
			this->label_Mensagem->Size = System::Drawing::Size(62, 13);
			this->label_Mensagem->TabIndex = 3;
			this->label_Mensagem->Text = L"Mensagem:";
			// 
			// richTextBox_Mensagem
			// 
			this->richTextBox_Mensagem->Location = System::Drawing::Point(244, 168);
			this->richTextBox_Mensagem->Name = L"richTextBox_Mensagem";
			this->richTextBox_Mensagem->Size = System::Drawing::Size(266, 133);
			this->richTextBox_Mensagem->TabIndex = 5;
			this->richTextBox_Mensagem->Text = L"";
			// 
			// button_Enviar
			// 
			this->button_Enviar->Location = System::Drawing::Point(131, 337);
			this->button_Enviar->Name = L"button_Enviar";
			this->button_Enviar->Size = System::Drawing::Size(75, 23);
			this->button_Enviar->TabIndex = 6;
			this->button_Enviar->Text = L"Enviar";
			this->button_Enviar->UseVisualStyleBackColor = true;
			this->button_Enviar->Click += gcnew System::EventHandler(this, &Tela4_3_Responder_Notificacoes::button_Enviar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(290, 337);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 7;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela4_3_Responder_Notificacoes::button_Cancelar_click);
			// 
			// Tela4_3_Responder_Notificacoes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 390);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Enviar);
			this->Controls->Add(this->richTextBox_Mensagem);
			this->Controls->Add(this->label_Mensagem);
			this->Controls->Add(this->label_Info);
			this->Controls->Add(this->comboBox_ID_Buraco);
			this->Controls->Add(this->label_ID_Buraco);
			this->Name = L"Tela4_3_Responder_Notificacoes";
			this->Text = L"Tela4_3_Responder_Notificacoes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Enviar_click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Mensagem Enviada" + "\n");
	}
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
