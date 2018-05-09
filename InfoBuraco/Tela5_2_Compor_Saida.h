#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela5_2_Compor_Saida
	/// </summary>
	public ref class Tela5_2_Compor_Saida : public System::Windows::Forms::Form
	{
	public:
		Tela5_2_Compor_Saida(void)
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
		~Tela5_2_Compor_Saida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Data;
	protected:
	private: System::Windows::Forms::MonthCalendar^  monthCalendar;
	private: System::Windows::Forms::Label^  label_OS;
	private: System::Windows::Forms::Button^  button_Finalizar;



	private: System::Windows::Forms::Button^  button_Cancelar;
	private: System::Windows::Forms::ComboBox^  comboBox_OS;
	private: System::Windows::Forms::Button^  button_Recursos_Necessarios;
	private: System::Windows::Forms::Button^  button_Recursos_Disponiveis;
	private: System::Windows::Forms::Button^  button_Adicionar;
	private: System::Windows::Forms::Label^  label_Selecionadas;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox_Selecionadas;
	private: System::Windows::Forms::Button^  button_Remover;




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
			this->Data = (gcnew System::Windows::Forms::Label());
			this->monthCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->label_OS = (gcnew System::Windows::Forms::Label());
			this->button_Finalizar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->comboBox_OS = (gcnew System::Windows::Forms::ComboBox());
			this->button_Recursos_Necessarios = (gcnew System::Windows::Forms::Button());
			this->button_Recursos_Disponiveis = (gcnew System::Windows::Forms::Button());
			this->button_Adicionar = (gcnew System::Windows::Forms::Button());
			this->label_Selecionadas = (gcnew System::Windows::Forms::Label());
			this->checkedListBox_Selecionadas = (gcnew System::Windows::Forms::CheckedListBox());
			this->button_Remover = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Data
			// 
			this->Data->AutoSize = true;
			this->Data->Location = System::Drawing::Point(21, 9);
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(33, 13);
			this->Data->TabIndex = 0;
			this->Data->Text = L"Data:";
			// 
			// monthCalendar
			// 
			this->monthCalendar->Location = System::Drawing::Point(66, 9);
			this->monthCalendar->Name = L"monthCalendar";
			this->monthCalendar->TabIndex = 1;
			// 
			// label_OS
			// 
			this->label_OS->AutoSize = true;
			this->label_OS->Location = System::Drawing::Point(309, 9);
			this->label_OS->Name = L"label_OS";
			this->label_OS->Size = System::Drawing::Size(135, 13);
			this->label_OS->TabIndex = 2;
			this->label_OS->Text = L"Selecao de OS (na ordem):";
			// 
			// button_Finalizar
			// 
			this->button_Finalizar->Location = System::Drawing::Point(164, 334);
			this->button_Finalizar->Name = L"button_Finalizar";
			this->button_Finalizar->Size = System::Drawing::Size(75, 23);
			this->button_Finalizar->TabIndex = 4;
			this->button_Finalizar->Text = L"Finalizar";
			this->button_Finalizar->UseVisualStyleBackColor = true;
			this->button_Finalizar->Click += gcnew System::EventHandler(this, &Tela5_2_Compor_Saida::button_Finalizar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(369, 334);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(75, 23);
			this->button_Cancelar->TabIndex = 5;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela5_2_Compor_Saida::button_Cancelar_click);
			// 
			// comboBox_OS
			// 
			this->comboBox_OS->FormattingEnabled = true;
			this->comboBox_OS->Location = System::Drawing::Point(450, 6);
			this->comboBox_OS->Name = L"comboBox_OS";
			this->comboBox_OS->Size = System::Drawing::Size(227, 21);
			this->comboBox_OS->TabIndex = 6;
			// 
			// button_Recursos_Necessarios
			// 
			this->button_Recursos_Necessarios->Location = System::Drawing::Point(450, 52);
			this->button_Recursos_Necessarios->Name = L"button_Recursos_Necessarios";
			this->button_Recursos_Necessarios->Size = System::Drawing::Size(227, 23);
			this->button_Recursos_Necessarios->TabIndex = 7;
			this->button_Recursos_Necessarios->Text = L"Recursos Necessarios";
			this->button_Recursos_Necessarios->UseVisualStyleBackColor = true;
			this->button_Recursos_Necessarios->Click += gcnew System::EventHandler(this, &Tela5_2_Compor_Saida::button_Recursos_Necessarios_click);
			// 
			// button_Recursos_Disponiveis
			// 
			this->button_Recursos_Disponiveis->Location = System::Drawing::Point(450, 99);
			this->button_Recursos_Disponiveis->Name = L"button_Recursos_Disponiveis";
			this->button_Recursos_Disponiveis->Size = System::Drawing::Size(227, 23);
			this->button_Recursos_Disponiveis->TabIndex = 8;
			this->button_Recursos_Disponiveis->Text = L"Recursos Disponiveis";
			this->button_Recursos_Disponiveis->UseVisualStyleBackColor = true;
			this->button_Recursos_Disponiveis->Click += gcnew System::EventHandler(this, &Tela5_2_Compor_Saida::button_Recursos_Disponiveis_click);
			// 
			// button_Adicionar
			// 
			this->button_Adicionar->Location = System::Drawing::Point(450, 148);
			this->button_Adicionar->Name = L"button_Adicionar";
			this->button_Adicionar->Size = System::Drawing::Size(227, 23);
			this->button_Adicionar->TabIndex = 9;
			this->button_Adicionar->Text = L"Adicionar na Saida";
			this->button_Adicionar->UseVisualStyleBackColor = true;
			this->button_Adicionar->Click += gcnew System::EventHandler(this, &Tela5_2_Compor_Saida::button_Adicionar_click);
			// 
			// label_Selecionadas
			// 
			this->label_Selecionadas->AutoSize = true;
			this->label_Selecionadas->Location = System::Drawing::Point(21, 230);
			this->label_Selecionadas->Name = L"label_Selecionadas";
			this->label_Selecionadas->Size = System::Drawing::Size(137, 13);
			this->label_Selecionadas->TabIndex = 10;
			this->label_Selecionadas->Text = L"Lista de OSs Selecionadas:";
			// 
			// checkedListBox_Selecionadas
			// 
			this->checkedListBox_Selecionadas->FormattingEnabled = true;
			this->checkedListBox_Selecionadas->Location = System::Drawing::Point(164, 230);
			this->checkedListBox_Selecionadas->Name = L"checkedListBox_Selecionadas";
			this->checkedListBox_Selecionadas->Size = System::Drawing::Size(280, 64);
			this->checkedListBox_Selecionadas->TabIndex = 11;
			// 
			// button_Remover
			// 
			this->button_Remover->Location = System::Drawing::Point(450, 230);
			this->button_Remover->Name = L"button_Remover";
			this->button_Remover->Size = System::Drawing::Size(227, 23);
			this->button_Remover->TabIndex = 12;
			this->button_Remover->Text = L"Remover da Saida";
			this->button_Remover->UseVisualStyleBackColor = true;
			this->button_Remover->Click += gcnew System::EventHandler(this, &Tela5_2_Compor_Saida::button_Remover_click);
			// 
			// Tela5_2_Compor_Saida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 380);
			this->Controls->Add(this->button_Remover);
			this->Controls->Add(this->checkedListBox_Selecionadas);
			this->Controls->Add(this->label_Selecionadas);
			this->Controls->Add(this->button_Adicionar);
			this->Controls->Add(this->button_Recursos_Disponiveis);
			this->Controls->Add(this->button_Recursos_Necessarios);
			this->Controls->Add(this->comboBox_OS);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Finalizar);
			this->Controls->Add(this->label_OS);
			this->Controls->Add(this->monthCalendar);
			this->Controls->Add(this->Data);
			this->Name = L"Tela5_2_Compor_Saida";
			this->Text = L"Tela5_2_Compor_Saida";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button_Recursos_Disponiveis_click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button_Recursos_Necessarios_click(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void button_Adicionar_click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button_Remover_click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void button_Finalizar_click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
