#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela4_1_Registrar_Buraco
	/// </summary>
	public ref class Tela4_1_Registrar_Buraco : public System::Windows::Forms::Form
	{
	public:
		Tela4_1_Registrar_Buraco(void)
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
		~Tela4_1_Registrar_Buraco()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^  label_Localizacao;
	private: System::Windows::Forms::TextBox^  textBox_Localizacao;
	private: System::Windows::Forms::Label^  label_Posicao;
	private: System::Windows::Forms::ComboBox^  comboBox_Posicao;
	private: System::Windows::Forms::Label^  label_Regional;
	private: System::Windows::Forms::TextBox^  textBox_Regional;
	private: System::Windows::Forms::Label^  label_Tamanho;

	private: System::Windows::Forms::Button^  button_Salvar;
	private: System::Windows::Forms::Button^  button_Cancelar;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown_Tamanho;
	private: System::Windows::Forms::Button^  button_Validar;
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
			this->label_Localizacao = (gcnew System::Windows::Forms::Label());
			this->textBox_Localizacao = (gcnew System::Windows::Forms::TextBox());
			this->label_Posicao = (gcnew System::Windows::Forms::Label());
			this->comboBox_Posicao = (gcnew System::Windows::Forms::ComboBox());
			this->label_Regional = (gcnew System::Windows::Forms::Label());
			this->textBox_Regional = (gcnew System::Windows::Forms::TextBox());
			this->label_Tamanho = (gcnew System::Windows::Forms::Label());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->numericUpDown_Tamanho = (gcnew System::Windows::Forms::NumericUpDown());
			this->button_Validar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Tamanho))->BeginInit();
			this->SuspendLayout();
			// 
			// label_Localizacao
			// 
			this->label_Localizacao->AutoSize = true;
			this->label_Localizacao->Location = System::Drawing::Point(83, 42);
			this->label_Localizacao->Name = L"label_Localizacao";
			this->label_Localizacao->Size = System::Drawing::Size(67, 13);
			this->label_Localizacao->TabIndex = 2;
			this->label_Localizacao->Text = L"Localizacao:";
			// 
			// textBox_Localizacao
			// 
			this->textBox_Localizacao->Location = System::Drawing::Point(205, 39);
			this->textBox_Localizacao->Name = L"textBox_Localizacao";
			this->textBox_Localizacao->Size = System::Drawing::Size(121, 20);
			this->textBox_Localizacao->TabIndex = 3;
			// 
			// label_Posicao
			// 
			this->label_Posicao->AutoSize = true;
			this->label_Posicao->Location = System::Drawing::Point(83, 175);
			this->label_Posicao->Name = L"label_Posicao";
			this->label_Posicao->Size = System::Drawing::Size(48, 13);
			this->label_Posicao->TabIndex = 4;
			this->label_Posicao->Text = L"Posicao:";
			// 
			// comboBox_Posicao
			// 
			this->comboBox_Posicao->FormattingEnabled = true;
			this->comboBox_Posicao->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Meio da pista", L"Entre faixas", L"Junto a guia" });
			this->comboBox_Posicao->Location = System::Drawing::Point(205, 172);
			this->comboBox_Posicao->Name = L"comboBox_Posicao";
			this->comboBox_Posicao->Size = System::Drawing::Size(121, 21);
			this->comboBox_Posicao->TabIndex = 5;
			this->comboBox_Posicao->SelectedIndexChanged += gcnew System::EventHandler(this, &Tela4_1_Registrar_Buraco::comboBox_Posicao_SelectedIndexChanged);
			// 
			// label_Regional
			// 
			this->label_Regional->AutoSize = true;
			this->label_Regional->Location = System::Drawing::Point(83, 136);
			this->label_Regional->Name = L"label_Regional";
			this->label_Regional->Size = System::Drawing::Size(52, 13);
			this->label_Regional->TabIndex = 6;
			this->label_Regional->Text = L"Regional:";
			// 
			// textBox_Regional
			// 
			this->textBox_Regional->Location = System::Drawing::Point(205, 133);
			this->textBox_Regional->Name = L"textBox_Regional";
			this->textBox_Regional->Size = System::Drawing::Size(121, 20);
			this->textBox_Regional->TabIndex = 7;
			// 
			// label_Tamanho
			// 
			this->label_Tamanho->AutoSize = true;
			this->label_Tamanho->Location = System::Drawing::Point(83, 216);
			this->label_Tamanho->Name = L"label_Tamanho";
			this->label_Tamanho->Size = System::Drawing::Size(55, 13);
			this->label_Tamanho->TabIndex = 8;
			this->label_Tamanho->Text = L"Tamanho:";
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(86, 290);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 10;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela4_1_Registrar_Buraco::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(251, 290);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 11;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela4_1_Registrar_Buraco::button_Cancelar_click);
			// 
			// numericUpDown_Tamanho
			// 
			this->numericUpDown_Tamanho->Location = System::Drawing::Point(205, 214);
			this->numericUpDown_Tamanho->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown_Tamanho->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown_Tamanho->Name = L"numericUpDown_Tamanho";
			this->numericUpDown_Tamanho->Size = System::Drawing::Size(121, 20);
			this->numericUpDown_Tamanho->TabIndex = 12;
			this->numericUpDown_Tamanho->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button_Validar
			// 
			this->button_Validar->Location = System::Drawing::Point(86, 81);
			this->button_Validar->Name = L"button_Validar";
			this->button_Validar->Size = System::Drawing::Size(240, 22);
			this->button_Validar->TabIndex = 13;
			this->button_Validar->Text = L"Validar Novo Buraco";
			this->button_Validar->UseVisualStyleBackColor = true;
			this->button_Validar->Click += gcnew System::EventHandler(this, &Tela4_1_Registrar_Buraco::button_Validar_click);
			// 
			// Tela4_1_Registrar_Buraco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 380);
			this->Controls->Add(this->button_Validar);
			this->Controls->Add(this->numericUpDown_Tamanho);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->label_Tamanho);
			this->Controls->Add(this->textBox_Regional);
			this->Controls->Add(this->label_Regional);
			this->Controls->Add(this->comboBox_Posicao);
			this->Controls->Add(this->label_Posicao);
			this->Controls->Add(this->textBox_Localizacao);
			this->Controls->Add(this->label_Localizacao);
			this->Name = L"Tela4_1_Registrar_Buraco";
			this->Text = L"Tela4_1_Registrar_Buraco";
			this->Load += gcnew System::EventHandler(this, &Tela4_1_Registrar_Buraco::Tela4_1_Registrar_Buraco_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_Tamanho))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Tela4_1_Registrar_Buraco_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox_Posicao_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ID do Novo Buraco: xxx" + "\n");
}
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button_Validar_click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
