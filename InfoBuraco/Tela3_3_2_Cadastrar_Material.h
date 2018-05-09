#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_3_2_Cadastrar_Material
	/// </summary>
	public ref class Tela3_3_2_Cadastrar_Material : public System::Windows::Forms::Form
	{
	public:
		Tela3_3_2_Cadastrar_Material(void)
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
		~Tela3_3_2_Cadastrar_Material()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Nome;
	protected:
	private: System::Windows::Forms::Label^  label_Unidade;
	private: System::Windows::Forms::Label^  label_Custo;
	private: System::Windows::Forms::TextBox^  textBox_Unidade;
	private: System::Windows::Forms::TextBox^  textBox_Nome;
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
			this->label_Unidade = (gcnew System::Windows::Forms::Label());
			this->label_Custo = (gcnew System::Windows::Forms::Label());
			this->textBox_Unidade = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Nome = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Custo = (gcnew System::Windows::Forms::TextBox());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Nome
			// 
			this->label_Nome->AutoSize = true;
			this->label_Nome->Location = System::Drawing::Point(153, 48);
			this->label_Nome->Name = L"label_Nome";
			this->label_Nome->Size = System::Drawing::Size(38, 13);
			this->label_Nome->TabIndex = 0;
			this->label_Nome->Text = L"Nome:";
			// 
			// label_Unidade
			// 
			this->label_Unidade->AutoSize = true;
			this->label_Unidade->Location = System::Drawing::Point(153, 111);
			this->label_Unidade->Name = L"label_Unidade";
			this->label_Unidade->Size = System::Drawing::Size(103, 13);
			this->label_Unidade->TabIndex = 1;
			this->label_Unidade->Text = L"Unidade de Medida:";
			// 
			// label_Custo
			// 
			this->label_Custo->AutoSize = true;
			this->label_Custo->Location = System::Drawing::Point(153, 179);
			this->label_Custo->Name = L"label_Custo";
			this->label_Custo->Size = System::Drawing::Size(37, 13);
			this->label_Custo->TabIndex = 2;
			this->label_Custo->Text = L"Custo:";
			// 
			// textBox_Unidade
			// 
			this->textBox_Unidade->Location = System::Drawing::Point(284, 108);
			this->textBox_Unidade->Name = L"textBox_Unidade";
			this->textBox_Unidade->Size = System::Drawing::Size(164, 20);
			this->textBox_Unidade->TabIndex = 3;
			// 
			// textBox_Nome
			// 
			this->textBox_Nome->Location = System::Drawing::Point(284, 45);
			this->textBox_Nome->MaxLength = 20;
			this->textBox_Nome->Name = L"textBox_Nome";
			this->textBox_Nome->Size = System::Drawing::Size(164, 20);
			this->textBox_Nome->TabIndex = 4;
			// 
			// textBox_Custo
			// 
			this->textBox_Custo->Location = System::Drawing::Point(284, 176);
			this->textBox_Custo->Name = L"textBox_Custo";
			this->textBox_Custo->Size = System::Drawing::Size(164, 20);
			this->textBox_Custo->TabIndex = 5;
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(156, 263);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 6;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela3_3_2_Cadastrar_Material::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(373, 263);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 7;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela3_3_2_Cadastrar_Material::button_Cancelar_click);
			// 
			// Tela3_3_2_Cadastrar_Material
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 341);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->textBox_Custo);
			this->Controls->Add(this->textBox_Nome);
			this->Controls->Add(this->textBox_Unidade);
			this->Controls->Add(this->label_Custo);
			this->Controls->Add(this->label_Unidade);
			this->Controls->Add(this->label_Nome);
			this->Name = L"Tela3_3_2_Cadastrar_Material";
			this->Text = L"Tela3_3_2_Cadastrar_Material";
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
