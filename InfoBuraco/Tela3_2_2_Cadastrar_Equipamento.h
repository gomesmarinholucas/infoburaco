#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_2_2_Cadastrar_Equipamento
	/// </summary>
	public ref class Tela3_2_2_Cadastrar_Equipamento : public System::Windows::Forms::Form
	{
	public:
		Tela3_2_2_Cadastrar_Equipamento(void)
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
		~Tela3_2_2_Cadastrar_Equipamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Tipo;
	protected:

	private: System::Windows::Forms::Label^  label_Custo;
	private: System::Windows::Forms::TextBox^  textBox_Custo;


	private: System::Windows::Forms::Button^  button_Salvar;
	private: System::Windows::Forms::Button^  button_Cancelar;


	private: System::Windows::Forms::ComboBox^  comboBox_Tipo;

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
			this->label_Tipo = (gcnew System::Windows::Forms::Label());
			this->label_Custo = (gcnew System::Windows::Forms::Label());
			this->textBox_Custo = (gcnew System::Windows::Forms::TextBox());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->comboBox_Tipo = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label_Tipo
			// 
			this->label_Tipo->AutoSize = true;
			this->label_Tipo->Location = System::Drawing::Point(132, 48);
			this->label_Tipo->Name = L"label_Tipo";
			this->label_Tipo->Size = System::Drawing::Size(31, 13);
			this->label_Tipo->TabIndex = 0;
			this->label_Tipo->Text = L"Tipo:";
			// 
			// label_Custo
			// 
			this->label_Custo->AutoSize = true;
			this->label_Custo->Location = System::Drawing::Point(132, 113);
			this->label_Custo->Name = L"label_Custo";
			this->label_Custo->Size = System::Drawing::Size(37, 13);
			this->label_Custo->TabIndex = 2;
			this->label_Custo->Text = L"Custo:";
			// 
			// textBox_Custo
			// 
			this->textBox_Custo->Location = System::Drawing::Point(266, 110);
			this->textBox_Custo->Name = L"textBox_Custo";
			this->textBox_Custo->Size = System::Drawing::Size(163, 20);
			this->textBox_Custo->TabIndex = 3;
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(135, 258);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 6;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela3_2_2_Cadastrar_Equipamento::button_Salvar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(354, 258);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 7;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela3_2_2_Cadastrar_Equipamento::button_Cancelar_click);
			// 
			// comboBox_Tipo
			// 
			this->comboBox_Tipo->FormattingEnabled = true;
			this->comboBox_Tipo->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"RC", L"PV", L"BC", L"RE", L"MH", L"SC" });
			this->comboBox_Tipo->Location = System::Drawing::Point(266, 45);
			this->comboBox_Tipo->Name = L"comboBox_Tipo";
			this->comboBox_Tipo->Size = System::Drawing::Size(163, 21);
			this->comboBox_Tipo->TabIndex = 9;
			// 
			// Tela3_2_2_Cadastrar_Equipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 348);
			this->Controls->Add(this->comboBox_Tipo);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->textBox_Custo);
			this->Controls->Add(this->label_Custo);
			this->Controls->Add(this->label_Tipo);
			this->Name = L"Tela3_2_2_Cadastrar_Equipamento";
			this->Text = L"Tela3_2_2_Cadastrar_Equipamento";
			this->Load += gcnew System::EventHandler(this, &Tela3_2_2_Cadastrar_Equipamento::Tela3_2_2_Cadastrar_Equipamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Numero de Patrimonio: " + this->comboBox_Tipo->SelectedItem + "123" + "\n");
	}
private: System::Void Tela3_2_2_Cadastrar_Equipamento_Load(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void comboBox_Tipo_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox_Numero_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
