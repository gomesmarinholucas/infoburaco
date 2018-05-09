#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela6_1_Relatorio
	/// </summary>
	public ref class Tela6_1_Relatorio : public System::Windows::Forms::Form
	{
	public:
		Tela6_1_Relatorio(void)
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
		~Tela6_1_Relatorio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_OS;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox_OS;
	private: System::Windows::Forms::Label^  label_Destinatarios;
	private: System::Windows::Forms::RichTextBox^  richTextBox_Destinatarios;
	private: System::Windows::Forms::Button^  button_Visualizar;

	private: System::Windows::Forms::Button^  button_Cancelar;
	private: System::Windows::Forms::Label^  label_Data_Hora;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;

	private: System::Windows::Forms::Button^  button_Enviar;


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
			this->label_OS = (gcnew System::Windows::Forms::Label());
			this->comboBox_OS = (gcnew System::Windows::Forms::ComboBox());
			this->label_Destinatarios = (gcnew System::Windows::Forms::Label());
			this->richTextBox_Destinatarios = (gcnew System::Windows::Forms::RichTextBox());
			this->button_Visualizar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->label_Data_Hora = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->button_Enviar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_OS
			// 
			this->label_OS->AutoSize = true;
			this->label_OS->Location = System::Drawing::Point(12, 9);
			this->label_OS->Name = L"label_OS";
			this->label_OS->Size = System::Drawing::Size(136, 13);
			this->label_OS->TabIndex = 0;
			this->label_OS->Text = L"Selecao de OS Executada:";
			// 
			// comboBox_OS
			// 
			this->comboBox_OS->FormattingEnabled = true;
			this->comboBox_OS->Location = System::Drawing::Point(196, 6);
			this->comboBox_OS->Name = L"comboBox_OS";
			this->comboBox_OS->Size = System::Drawing::Size(203, 21);
			this->comboBox_OS->TabIndex = 1;
			// 
			// label_Destinatarios
			// 
			this->label_Destinatarios->AutoSize = true;
			this->label_Destinatarios->Location = System::Drawing::Point(12, 142);
			this->label_Destinatarios->Name = L"label_Destinatarios";
			this->label_Destinatarios->Size = System::Drawing::Size(71, 13);
			this->label_Destinatarios->TabIndex = 2;
			this->label_Destinatarios->Text = L"Destinatarios:";
			// 
			// richTextBox_Destinatarios
			// 
			this->richTextBox_Destinatarios->Location = System::Drawing::Point(196, 142);
			this->richTextBox_Destinatarios->Name = L"richTextBox_Destinatarios";
			this->richTextBox_Destinatarios->Size = System::Drawing::Size(203, 116);
			this->richTextBox_Destinatarios->TabIndex = 3;
			this->richTextBox_Destinatarios->Text = L"";
			// 
			// button_Visualizar
			// 
			this->button_Visualizar->Location = System::Drawing::Point(196, 85);
			this->button_Visualizar->Name = L"button_Visualizar";
			this->button_Visualizar->Size = System::Drawing::Size(203, 26);
			this->button_Visualizar->TabIndex = 4;
			this->button_Visualizar->Text = L"Visualizar Relatorio";
			this->button_Visualizar->UseVisualStyleBackColor = true;
			this->button_Visualizar->Click += gcnew System::EventHandler(this, &Tela6_1_Relatorio::button_Visualizar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(196, 302);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(111, 26);
			this->button_Cancelar->TabIndex = 5;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela6_1_Relatorio::button_Cancelar_click);
			// 
			// label_Data_Hora
			// 
			this->label_Data_Hora->AutoSize = true;
			this->label_Data_Hora->Location = System::Drawing::Point(12, 51);
			this->label_Data_Hora->Name = L"label_Data_Hora";
			this->label_Data_Hora->Size = System::Drawing::Size(68, 13);
			this->label_Data_Hora->TabIndex = 6;
			this->label_Data_Hora->Text = L"Data e Hora:";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(196, 45);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(203, 20);
			this->dateTimePicker->TabIndex = 7;
			// 
			// button_Enviar
			// 
			this->button_Enviar->Location = System::Drawing::Point(15, 302);
			this->button_Enviar->Name = L"button_Enviar";
			this->button_Enviar->Size = System::Drawing::Size(111, 26);
			this->button_Enviar->TabIndex = 8;
			this->button_Enviar->Text = L"Enviar";
			this->button_Enviar->UseVisualStyleBackColor = true;
			this->button_Enviar->Click += gcnew System::EventHandler(this, &Tela6_1_Relatorio::button_Enviar_click);
			// 
			// Tela6_1_Relatorio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 393);
			this->Controls->Add(this->button_Enviar);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->label_Data_Hora);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Visualizar);
			this->Controls->Add(this->richTextBox_Destinatarios);
			this->Controls->Add(this->label_Destinatarios);
			this->Controls->Add(this->comboBox_OS);
			this->Controls->Add(this->label_OS);
			this->Name = L"Tela6_1_Relatorio";
			this->Text = L"Tela6_1_Relatorio";
			this->Load += gcnew System::EventHandler(this, &Tela6_1_Relatorio::Tela6_1_Relatorio_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela6_1_Relatorio_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_Visualizar_click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Relatorio Completo" + "\n");
}
private: System::Void button_Enviar_click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
