#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela5_1_Gerenciar_OS
	/// </summary>
	public ref class Tela5_1_Gerenciar_OS : public System::Windows::Forms::Form
	{
	public:
		Tela5_1_Gerenciar_OS(void)
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
		~Tela5_1_Gerenciar_OS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label_Info;
	protected:
	private: System::Windows::Forms::Label^  label_OS;
	private: System::Windows::Forms::ComboBox^  comboBox_OS;
	private: System::Windows::Forms::Button^  button_Visualizar;
	private: System::Windows::Forms::Button^  button_Voltar;
	private: System::Windows::Forms::Label^  label_Prioridade;
	private: System::Windows::Forms::ComboBox^  comboBox_Prioridade;
	private: System::Windows::Forms::Button^  button_Salvar;

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
			this->label_Info = (gcnew System::Windows::Forms::Label());
			this->label_OS = (gcnew System::Windows::Forms::Label());
			this->comboBox_OS = (gcnew System::Windows::Forms::ComboBox());
			this->button_Visualizar = (gcnew System::Windows::Forms::Button());
			this->button_Voltar = (gcnew System::Windows::Forms::Button());
			this->label_Prioridade = (gcnew System::Windows::Forms::Label());
			this->comboBox_Prioridade = (gcnew System::Windows::Forms::ComboBox());
			this->button_Salvar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_Info
			// 
			this->label_Info->AutoSize = true;
			this->label_Info->Location = System::Drawing::Point(12, 9);
			this->label_Info->Name = L"label_Info";
			this->label_Info->Size = System::Drawing::Size(101, 13);
			this->label_Info->TabIndex = 0;
			this->label_Info->Text = L"Informacoes Gerais:";
			// 
			// label_OS
			// 
			this->label_OS->AutoSize = true;
			this->label_OS->Location = System::Drawing::Point(12, 129);
			this->label_OS->Name = L"label_OS";
			this->label_OS->Size = System::Drawing::Size(82, 13);
			this->label_OS->TabIndex = 1;
			this->label_OS->Text = L"Selecao de OS:";
			// 
			// comboBox_OS
			// 
			this->comboBox_OS->FormattingEnabled = true;
			this->comboBox_OS->Location = System::Drawing::Point(139, 126);
			this->comboBox_OS->Name = L"comboBox_OS";
			this->comboBox_OS->Size = System::Drawing::Size(183, 21);
			this->comboBox_OS->TabIndex = 2;
			// 
			// button_Visualizar
			// 
			this->button_Visualizar->Location = System::Drawing::Point(139, 175);
			this->button_Visualizar->Name = L"button_Visualizar";
			this->button_Visualizar->Size = System::Drawing::Size(183, 23);
			this->button_Visualizar->TabIndex = 3;
			this->button_Visualizar->Text = L"Visualizar OS";
			this->button_Visualizar->UseVisualStyleBackColor = true;
			this->button_Visualizar->Click += gcnew System::EventHandler(this, &Tela5_1_Gerenciar_OS::button_Visualizar_click);
			// 
			// button_Voltar
			// 
			this->button_Voltar->Location = System::Drawing::Point(15, 325);
			this->button_Voltar->Name = L"button_Voltar";
			this->button_Voltar->Size = System::Drawing::Size(75, 23);
			this->button_Voltar->TabIndex = 4;
			this->button_Voltar->Text = L"Voltar";
			this->button_Voltar->UseVisualStyleBackColor = true;
			this->button_Voltar->Click += gcnew System::EventHandler(this, &Tela5_1_Gerenciar_OS::button_Voltar_click);
			// 
			// label_Prioridade
			// 
			this->label_Prioridade->AutoSize = true;
			this->label_Prioridade->Location = System::Drawing::Point(12, 227);
			this->label_Prioridade->Name = L"label_Prioridade";
			this->label_Prioridade->Size = System::Drawing::Size(57, 13);
			this->label_Prioridade->TabIndex = 5;
			this->label_Prioridade->Text = L"Prioridade:";
			// 
			// comboBox_Prioridade
			// 
			this->comboBox_Prioridade->FormattingEnabled = true;
			this->comboBox_Prioridade->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Minima", L"Baixa", L"Media", L"Alta",
					L"Maxima"
			});
			this->comboBox_Prioridade->Location = System::Drawing::Point(139, 224);
			this->comboBox_Prioridade->Name = L"comboBox_Prioridade";
			this->comboBox_Prioridade->Size = System::Drawing::Size(183, 21);
			this->comboBox_Prioridade->TabIndex = 6;
			// 
			// button_Salvar
			// 
			this->button_Salvar->Location = System::Drawing::Point(139, 273);
			this->button_Salvar->Name = L"button_Salvar";
			this->button_Salvar->Size = System::Drawing::Size(183, 23);
			this->button_Salvar->TabIndex = 7;
			this->button_Salvar->Text = L"Salvar";
			this->button_Salvar->UseVisualStyleBackColor = true;
			this->button_Salvar->Click += gcnew System::EventHandler(this, &Tela5_1_Gerenciar_OS::button_Salvar_click);
			// 
			// Tela5_1_Gerenciar_OS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 388);
			this->Controls->Add(this->button_Salvar);
			this->Controls->Add(this->comboBox_Prioridade);
			this->Controls->Add(this->label_Prioridade);
			this->Controls->Add(this->button_Voltar);
			this->Controls->Add(this->button_Visualizar);
			this->Controls->Add(this->comboBox_OS);
			this->Controls->Add(this->label_OS);
			this->Controls->Add(this->label_Info);
			this->Name = L"Tela5_1_Gerenciar_OS";
			this->Text = L"Tela5_1_Gerenciar_OS";
			this->Load += gcnew System::EventHandler(this, &Tela5_1_Gerenciar_OS::Tela5_1_Gerenciar_OS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Visualizar_click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button_Voltar_click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void button_Salvar_click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void Tela5_1_Gerenciar_OS_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
