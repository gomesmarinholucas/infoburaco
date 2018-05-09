#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela3_4_Mobilizacao
	/// </summary>
	public ref class Tela3_4_Mobilizacao : public System::Windows::Forms::Form
	{
	public:
		Tela3_4_Mobilizacao(void)
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
		~Tela3_4_Mobilizacao()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Custo;
	protected:
	private: System::Windows::Forms::TextBox^  textBox_Custo;
	private: System::Windows::Forms::Button^  button_Salvar;
	private: System::Windows::Forms::Button^  button_Voltar;

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
			this->label_Custo = (gcnew System::Windows::Forms::Label());
			this->textBox_Custo = (gcnew System::Windows::Forms::TextBox());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Custo
			// 
			this->label_Custo->AutoSize = true;
			this->label_Custo->Location = System::Drawing::Point(151, 47);
			this->label_Custo->Name = L"label_Custo";
			this->label_Custo->Size = System::Drawing::Size(37, 13);
			this->label_Custo->TabIndex = 0;
			this->label_Custo->Text = L"Custo:";
			// 
			// textBox_Custo
			// 
			this->textBox_Custo->Location = System::Drawing::Point(254, 44);
			this->textBox_Custo->Name = L"textBox_Custo";
			this->textBox_Custo->Size = System::Drawing::Size(100, 20);
			this->textBox_Custo->TabIndex = 1;
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(154, 251);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(75, 23);
			this->button_Salvar->TabIndex = 2;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela3_4_Mobilizacao::button_Salvar_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(279, 251);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(75, 23);
			this->button_Voltar->TabIndex = 3;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela3_4_Mobilizacao::button_Voltar_click);
			// 
			// Tela3_4_Mobilizacao
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 341);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->textBox_Custo);
			this->Controls->Add(this->label_Custo);
			this->Name = L"Tela3_4_Mobilizacao";
			this->Text = L"Tela3_4_Mobilizacao";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
