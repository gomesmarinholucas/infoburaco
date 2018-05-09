#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela5_3_Registrar_Cumprimento_OS
	/// </summary>
	public ref class Tela5_3_Registrar_Cumprimento_OS : public System::Windows::Forms::Form
	{
	public:
		Tela5_3_Registrar_Cumprimento_OS(void)
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
		~Tela5_3_Registrar_Cumprimento_OS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_OS;
	private: System::Windows::Forms::ComboBox^  comboBox_OS;
	private: System::Windows::Forms::Button^  button_Visualizar;
	private: System::Windows::Forms::Label^  label_Status;
	private: System::Windows::Forms::CheckBox^  checkBox_Executada;
	private: System::Windows::Forms::Label^  label_Data_Hora;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Label^  label_Foto;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button_Salvar;
	private: System::Windows::Forms::Button^  button_Cancelar;

	protected:

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
			this->label_OS = (gcnew System::Windows::Forms::Label());
			this->comboBox_OS = (gcnew System::Windows::Forms::ComboBox());
			this->button_Visualizar = (gcnew System::Windows::Forms::Button());
			this->label_Status = (gcnew System::Windows::Forms::Label());
			this->checkBox_Executada = (gcnew System::Windows::Forms::CheckBox());
			this->label_Data_Hora = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_Foto = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_OS
			// 
			this->label_OS->AutoSize = true;
			this->label_OS->Location = System::Drawing::Point(82, 23);
			this->label_OS->Name = L"label_OS";
			this->label_OS->Size = System::Drawing::Size(82, 13);
			this->label_OS->TabIndex = 0;
			this->label_OS->Text = L"Selecao de OS:";
			// 
			// comboBox_OS
			// 
			this->comboBox_OS->FormattingEnabled = true;
			this->comboBox_OS->Location = System::Drawing::Point(206, 20);
			this->comboBox_OS->Name = L"comboBox_OS";
			this->comboBox_OS->Size = System::Drawing::Size(200, 21);
			this->comboBox_OS->TabIndex = 1;
			// 
			// button_Visualizar
			// 
			this->button_Visualizar->Location = System::Drawing::Point(206, 57);
			this->button_Visualizar->Name = L"button_Visualizar";
			this->button_Visualizar->Size = System::Drawing::Size(200, 23);
			this->button_Visualizar->TabIndex = 2;
			this->button_Visualizar->Text = L"Visualizar Resumo da OS";
			this->button_Visualizar->UseVisualStyleBackColor = true;
			this->button_Visualizar->Click += gcnew System::EventHandler(this, &Tela5_3_Registrar_Cumprimento_OS::button_Visualizar_click);
			// 
			// label_Status
			// 
			this->label_Status->AutoSize = true;
			this->label_Status->Location = System::Drawing::Point(82, 108);
			this->label_Status->Name = L"label_Status";
			this->label_Status->Size = System::Drawing::Size(73, 13);
			this->label_Status->TabIndex = 3;
			this->label_Status->Text = L"Mudar Status:";
			// 
			// checkBox_Executada
			// 
			this->checkBox_Executada->AutoSize = true;
			this->checkBox_Executada->Location = System::Drawing::Point(206, 107);
			this->checkBox_Executada->Name = L"checkBox_Executada";
			this->checkBox_Executada->Size = System::Drawing::Size(77, 17);
			this->checkBox_Executada->TabIndex = 4;
			this->checkBox_Executada->Text = L"Executada";
			this->checkBox_Executada->UseVisualStyleBackColor = true;
			// 
			// label_Data_Hora
			// 
			this->label_Data_Hora->AutoSize = true;
			this->label_Data_Hora->Location = System::Drawing::Point(82, 147);
			this->label_Data_Hora->Name = L"label_Data_Hora";
			this->label_Data_Hora->Size = System::Drawing::Size(68, 13);
			this->label_Data_Hora->TabIndex = 5;
			this->label_Data_Hora->Text = L"Data e Hora:";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(206, 141);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 6;
			// 
			// label_Foto
			// 
			this->label_Foto->AutoSize = true;
			this->label_Foto->Location = System::Drawing::Point(82, 192);
			this->label_Foto->Name = L"label_Foto";
			this->label_Foto->Size = System::Drawing::Size(68, 13);
			this->label_Foto->TabIndex = 7;
			this->label_Foto->Text = L"Upload Foto:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(206, 192);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 108);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(85, 337);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 9;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela5_3_Registrar_Cumprimento_OS::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(331, 337);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 10;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela5_3_Registrar_Cumprimento_OS::button_Cancelar_click);
			// 
			// Tela5_3_Registrar_Cumprimento_OS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(582, 385);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_Foto);
			this->Controls->Add(this->dateTimePicker);
			this->Controls->Add(this->label_Data_Hora);
			this->Controls->Add(this->checkBox_Executada);
			this->Controls->Add(this->label_Status);
			this->Controls->Add(this->button_Visualizar);
			this->Controls->Add(this->comboBox_OS);
			this->Controls->Add(this->label_OS);
			this->Name = L"Tela5_3_Registrar_Cumprimento_OS";
			this->Text = L"Tela5_3_Registrar_Cumprimento_OS";
			this->Load += gcnew System::EventHandler(this, &Tela5_3_Registrar_Cumprimento_OS::Tela5_3_Registrar_Cumprimento_OS_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Visualizar_click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Resumo da OS" + "\n");
	}
	private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("OS de ID " + this->comboBox_OS->SelectedItem + " foi concluida" + "\n");
	}
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela5_3_Registrar_Cumprimento_OS_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
