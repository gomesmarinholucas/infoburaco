#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_1_2_Cadastrar_Equipe
	/// </summary>
	public ref class Tela3_1_2_Cadastrar_Equipe : public System::Windows::Forms::Form
	{
	public:
		Tela3_1_2_Cadastrar_Equipe(void)
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
		~Tela3_1_2_Cadastrar_Equipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Nome;
	protected:
	private: System::Windows::Forms::TextBox^  textBox_Nome;
	private: System::Windows::Forms::Label^  label_Numero;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_Numero;
	private: System::Windows::Forms::Label^  label_Custo;
	private: System::Windows::Forms::TextBox^  textBox_Custo;
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
			this->label_Nome = (gcnew System::Windows::Forms::Label());
			this->textBox_Nome = (gcnew System::Windows::Forms::TextBox());
			this->label_Numero = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_Numero = (gcnew System::Windows::Forms::NumericUpDown());
			this->label_Custo = (gcnew System::Windows::Forms::Label());
			this->textBox_Custo = (gcnew System::Windows::Forms::TextBox());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Numero))->BeginInit();
			this->SuspendLayout();
			// 
			// label_Nome
			// 
			this->label_Nome->AutoSize = true;
			this->label_Nome->Location = System::Drawing::Point(110, 69);
			this->label_Nome->Name = L"label_Nome";
			this->label_Nome->Size = System::Drawing::Size(38, 13);
			this->label_Nome->TabIndex = 0;
			this->label_Nome->Text = L"Nome:";
			// 
			// textBox_Nome
			// 
			this->textBox_Nome->Location = System::Drawing::Point(261, 66);
			this->textBox_Nome->MaxLength = 20;
			this->textBox_Nome->Name = L"textBox_Nome";
			this->textBox_Nome->Size = System::Drawing::Size(158, 20);
			this->textBox_Nome->TabIndex = 1;
			// 
			// label_Numero
			// 
			this->label_Numero->AutoSize = true;
			this->label_Numero->Location = System::Drawing::Point(110, 121);
			this->label_Numero->Name = L"label_Numero";
			this->label_Numero->Size = System::Drawing::Size(118, 13);
			this->label_Numero->TabIndex = 2;
			this->label_Numero->Text = L"Numero de Integrantes:";
			// 
			// numericUpDown_Numero
			// 
			this->numericUpDown_Numero->Location = System::Drawing::Point(261, 119);
			this->numericUpDown_Numero->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown_Numero->Name = L"numericUpDown_Numero";
			this->numericUpDown_Numero->Size = System::Drawing::Size(158, 20);
			this->numericUpDown_Numero->TabIndex = 3;
			// 
			// label_Custo
			// 
			this->label_Custo->AutoSize = true;
			this->label_Custo->Location = System::Drawing::Point(110, 173);
			this->label_Custo->Name = L"label_Custo";
			this->label_Custo->Size = System::Drawing::Size(86, 13);
			this->label_Custo->TabIndex = 4;
			this->label_Custo->Text = L"Custo (R$/hora):";
			// 
			// textBox_Custo
			// 
			this->textBox_Custo->Location = System::Drawing::Point(261, 173);
			this->textBox_Custo->Name = L"textBox_Custo";
			this->textBox_Custo->Size = System::Drawing::Size(158, 20);
			this->textBox_Custo->TabIndex = 5;
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(113, 254);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 6;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela3_1_2_Cadastrar_Equipe::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(344, 254);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 7;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela3_1_2_Cadastrar_Equipe::button_Cancelar_click);
			// 
			// Tela3_1_2_Cadastrar_Equipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 340);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->textBox_Custo);
			this->Controls->Add(this->label_Custo);
			this->Controls->Add(this->numericUpDown_Numero);
			this->Controls->Add(this->label_Numero);
			this->Controls->Add(this->textBox_Nome);
			this->Controls->Add(this->label_Nome);
			this->Name = L"Tela3_1_2_Cadastrar_Equipe";
			this->Text = L"Tela3_1_2_Cadastrar_Equipe";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Numero))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
