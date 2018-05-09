#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela4_2_Registrar_Notificacao
	/// </summary>
	public ref class Tela4_2_Registrar_Notificacao : public System::Windows::Forms::Form
	{
	public:
		Tela4_2_Registrar_Notificacao(void)
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
		~Tela4_2_Registrar_Notificacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_ID_Buraco;
	protected:
	private: System::Windows::Forms::TextBox^  textBox_ID_Buraco;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;

	private: System::Windows::Forms::Label^  label_Data_Hora;
	private: System::Windows::Forms::Label^  label_Contato;


	private: System::Windows::Forms::TextBox^  textBox_Contato;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label_Foto;
	private: System::Windows::Forms::Button^  button_Salvar;
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
			this->textBox_ID_Buraco = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_Data_Hora = (gcnew System::Windows::Forms::Label());
			this->label_Contato = (gcnew System::Windows::Forms::Label());
			this->textBox_Contato = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_Foto = (gcnew System::Windows::Forms::Label());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_ID_Buraco
			// 
			this->label_ID_Buraco->AutoSize = true;
			this->label_ID_Buraco->Location = System::Drawing::Point(108, 30);
			this->label_ID_Buraco->Name = L"label_ID_Buraco";
			this->label_ID_Buraco->Size = System::Drawing::Size(73, 13);
			this->label_ID_Buraco->TabIndex = 0;
			this->label_ID_Buraco->Text = L"ID do Buraco:";
			// 
			// textBox_ID_Buraco
			// 
			this->textBox_ID_Buraco->Location = System::Drawing::Point(249, 27);
			this->textBox_ID_Buraco->Name = L"textBox_ID_Buraco";
			this->textBox_ID_Buraco->Size = System::Drawing::Size(216, 20);
			this->textBox_ID_Buraco->TabIndex = 1;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(249, 65);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(216, 20);
			this->dateTimePicker->TabIndex = 2;
			this->dateTimePicker->ValueChanged += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::dateTimePicker1_ValueChanged);
			// 
			// label_Data_Hora
			// 
			this->label_Data_Hora->AutoSize = true;
			this->label_Data_Hora->Location = System::Drawing::Point(108, 71);
			this->label_Data_Hora->Name = L"label_Data_Hora";
			this->label_Data_Hora->Size = System::Drawing::Size(68, 13);
			this->label_Data_Hora->TabIndex = 3;
			this->label_Data_Hora->Text = L"Data e Hora:";
			// 
			// label_Contato
			// 
			this->label_Contato->AutoSize = true;
			this->label_Contato->Location = System::Drawing::Point(108, 113);
			this->label_Contato->Name = L"label_Contato";
			this->label_Contato->Size = System::Drawing::Size(104, 13);
			this->label_Contato->TabIndex = 4;
			this->label_Contato->Text = L"Contato do Cidadao:";
			// 
			// textBox_Contato
			// 
			this->textBox_Contato->Location = System::Drawing::Point(249, 110);
			this->textBox_Contato->Name = L"textBox_Contato";
			this->textBox_Contato->Size = System::Drawing::Size(216, 20);
			this->textBox_Contato->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(249, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 129);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label_Foto
			// 
			this->label_Foto->AutoSize = true;
			this->label_Foto->Location = System::Drawing::Point(108, 157);
			this->label_Foto->Name = L"label_Foto";
			this->label_Foto->Size = System::Drawing::Size(68, 13);
			this->label_Foto->TabIndex = 9;
			this->label_Foto->Text = L"Upload Foto:";
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(111, 336);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 10;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(274, 336);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 11;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela4_2_Registrar_Notificacao::button_Cancelar_click);
			// 
			// Tela4_2_Registrar_Notificacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 387);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->label_Foto);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox_Contato);
			this->Controls->Add(this->label_Contato);
			this->Controls->Add(this->label_Data_Hora);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->textBox_ID_Buraco);
			this->Controls->Add(this->label_ID_Buraco);
			this->Name = L"Tela4_2_Registrar_Notificacao";
			this->Text = L"Tela4_2_Registrar_Notificacao";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("ID da Nova Notificacao: xxx" + "\n");
	}
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
