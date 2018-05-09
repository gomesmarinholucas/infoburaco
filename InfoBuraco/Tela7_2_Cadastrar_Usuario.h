#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela7_2_Cadastrar_Usuario
	/// </summary>
	public ref class Tela7_2_Cadastrar_Usuario : public System::Windows::Forms::Form
	{
	public:
		Tela7_2_Cadastrar_Usuario(void)
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
		~Tela7_2_Cadastrar_Usuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Usuario;
	protected:
	private: System::Windows::Forms::Label^  label_Senha;
	private: System::Windows::Forms::Label^  label_Nome;
	private: System::Windows::Forms::Label^  label_Tipo;
	private: System::Windows::Forms::TextBox^  textBox_Nome;
	private: System::Windows::Forms::TextBox^  textBox_Usuario;
	private: System::Windows::Forms::TextBox^  textBox_Senha;
	private: System::Windows::Forms::ComboBox^  comboBox_Tipo;
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
			this->label_Usuario = (gcnew System::Windows::Forms::Label());
			this->label_Senha = (gcnew System::Windows::Forms::Label());
			this->label_Nome = (gcnew System::Windows::Forms::Label());
			this->label_Tipo = (gcnew System::Windows::Forms::Label());
			this->textBox_Nome = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Usuario = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Senha = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Usuario
			// 
			this->label_Usuario->AutoSize = true;
			this->label_Usuario->Location = System::Drawing::Point(165, 86);
			this->label_Usuario->Name = L"label_Usuario";
			this->label_Usuario->Size = System::Drawing::Size(46, 13);
			this->label_Usuario->TabIndex = 0;
			this->label_Usuario->Text = L"Usuario:";
			// 
			// label_Senha
			// 
			this->label_Senha->AutoSize = true;
			this->label_Senha->Location = System::Drawing::Point(165, 134);
			this->label_Senha->Name = L"label_Senha";
			this->label_Senha->Size = System::Drawing::Size(41, 13);
			this->label_Senha->TabIndex = 1;
			this->label_Senha->Text = L"Senha:";
			// 
			// label_Nome
			// 
			this->label_Nome->AutoSize = true;
			this->label_Nome->Location = System::Drawing::Point(165, 43);
			this->label_Nome->Name = L"label_Nome";
			this->label_Nome->Size = System::Drawing::Size(38, 13);
			this->label_Nome->TabIndex = 2;
			this->label_Nome->Text = L"Nome:";
			// 
			// label_Tipo
			// 
			this->label_Tipo->AutoSize = true;
			this->label_Tipo->Location = System::Drawing::Point(165, 178);
			this->label_Tipo->Name = L"label_Tipo";
			this->label_Tipo->Size = System::Drawing::Size(31, 13);
			this->label_Tipo->TabIndex = 3;
			this->label_Tipo->Text = L"Tipo:";
			// 
			// textBox_Nome
			// 
			this->textBox_Nome->Location = System::Drawing::Point(254, 40);
			this->textBox_Nome->Name = L"textBox_Nome";
			this->textBox_Nome->Size = System::Drawing::Size(181, 20);
			this->textBox_Nome->TabIndex = 4;
			// 
			// textBox_Usuario
			// 
			this->textBox_Usuario->Location = System::Drawing::Point(254, 83);
			this->textBox_Usuario->Name = L"textBox_Usuario";
			this->textBox_Usuario->Size = System::Drawing::Size(181, 20);
			this->textBox_Usuario->TabIndex = 5;
			// 
			// textBox_Senha
			// 
			this->textBox_Senha->Location = System::Drawing::Point(254, 131);
			this->textBox_Senha->Name = L"textBox_Senha";
			this->textBox_Senha->Size = System::Drawing::Size(181, 20);
			this->textBox_Senha->TabIndex = 6;
			// 
			// comboBox_Tipo
			// 
			this->comboBox_Tipo->FormattingEnabled = true;
			this->comboBox_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Administrador", L"Assessor de Comunicacao",
					L"Departamento Financeiro", L"Despachador", L"Gestor da Regional", L"Gestor do Sistema"
			});
			this->comboBox_Tipo->Location = System::Drawing::Point(254, 175);
			this->comboBox_Tipo->Name = L"comboBox_Tipo";
			this->comboBox_Tipo->Size = System::Drawing::Size(181, 21);
			this->comboBox_Tipo->TabIndex = 7;
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(168, 274);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 8;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela7_2_Cadastrar_Usuario::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(360, 274);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 9;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela7_2_Cadastrar_Usuario::button_Cancelar_click);
			// 
			// Tela7_2_Cadastrar_Usuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 347);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->comboBox_Tipo);
			this->Controls->Add(this->textBox_Senha);
			this->Controls->Add(this->textBox_Usuario);
			this->Controls->Add(this->textBox_Nome);
			this->Controls->Add(this->label_Tipo);
			this->Controls->Add(this->label_Nome);
			this->Controls->Add(this->label_Senha);
			this->Controls->Add(this->label_Usuario);
			this->Name = L"Tela7_2_Cadastrar_Usuario";
			this->Text = L"Tela7_2_Cadastrar_Usuario";
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
