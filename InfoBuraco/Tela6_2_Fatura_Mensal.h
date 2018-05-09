#pragma once

namespace InfoBuraco {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tela6_2_Fatura_Mensal
	/// </summary>
	public ref class Tela6_2_Fatura_Mensal : public System::Windows::Forms::Form
	{
	public:
		Tela6_2_Fatura_Mensal(void)
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
		~Tela6_2_Fatura_Mensal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MonthCalendar^  monthCalendar;
	protected:
	private: System::Windows::Forms::Label^  label_Mes;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_Destinatario;
	private: System::Windows::Forms::Button^  button_Visualizar;

	private: System::Windows::Forms::Button^  button_Cancelar;
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
			this->monthCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->label_Mes = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_Destinatario = (gcnew System::Windows::Forms::TextBox());
			this->button_Visualizar = (gcnew System::Windows::Forms::Button());
			this->button_Cancelar = (gcnew System::Windows::Forms::Button());
			this->button_Enviar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// monthCalendar
			// 
			this->monthCalendar->Location = System::Drawing::Point(220, 18);
			this->monthCalendar->Name = L"monthCalendar";
			this->monthCalendar->TabIndex = 0;
			// 
			// label_Mes
			// 
			this->label_Mes->AutoSize = true;
			this->label_Mes->Location = System::Drawing::Point(12, 27);
			this->label_Mes->Name = L"label_Mes";
			this->label_Mes->Size = System::Drawing::Size(196, 13);
			this->label_Mes->TabIndex = 1;
			this->label_Mes->Text = L"Selecione o ultimo dia do mes desejado:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Destinatario:";
			// 
			// textBox_Destinatario
			// 
			this->textBox_Destinatario->Location = System::Drawing::Point(220, 247);
			this->textBox_Destinatario->Name = L"textBox_Destinatario";
			this->textBox_Destinatario->Size = System::Drawing::Size(227, 20);
			this->textBox_Destinatario->TabIndex = 3;
			// 
			// button_Visualizar
			// 
			this->button_Visualizar->Location = System::Drawing::Point(220, 202);
			this->button_Visualizar->Name = L"button_Visualizar";
			this->button_Visualizar->Size = System::Drawing::Size(227, 23);
			this->button_Visualizar->TabIndex = 4;
			this->button_Visualizar->Text = L"Visualizar Fatura";
			this->button_Visualizar->UseVisualStyleBackColor = true;
			this->button_Visualizar->Click += gcnew System::EventHandler(this, &Tela6_2_Fatura_Mensal::button_Visualizar_click);
			// 
			// button_Cancelar
			// 
			this->button_Cancelar->Location = System::Drawing::Point(220, 301);
			this->button_Cancelar->Name = L"button_Cancelar";
			this->button_Cancelar->Size = System::Drawing::Size(95, 23);
			this->button_Cancelar->TabIndex = 5;
			this->button_Cancelar->Text = L"Cancelar";
			this->button_Cancelar->UseVisualStyleBackColor = true;
			this->button_Cancelar->Click += gcnew System::EventHandler(this, &Tela6_2_Fatura_Mensal::button_Cancelar_click);
			// 
			// button_Enviar
			// 
			this->button_Enviar->Location = System::Drawing::Point(15, 301);
			this->button_Enviar->Name = L"button_Enviar";
			this->button_Enviar->Size = System::Drawing::Size(95, 23);
			this->button_Enviar->TabIndex = 6;
			this->button_Enviar->Text = L"Enviar";
			this->button_Enviar->UseVisualStyleBackColor = true;
			this->button_Enviar->Click += gcnew System::EventHandler(this, &Tela6_2_Fatura_Mensal::button_Enviar_click);
			// 
			// Tela6_2_Fatura_Mensal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 390);
			this->Controls->Add(this->button_Enviar);
			this->Controls->Add(this->button_Cancelar);
			this->Controls->Add(this->button_Visualizar);
			this->Controls->Add(this->textBox_Destinatario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label_Mes);
			this->Controls->Add(this->monthCalendar);
			this->Name = L"Tela6_2_Fatura_Mensal";
			this->Text = L"Tela6_2_Fatura_Mensal";
			this->Load += gcnew System::EventHandler(this, &Tela6_2_Fatura_Mensal::Tela6_2_Fatura_Mensal_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button_Cancelar_click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void Tela6_2_Fatura_Mensal_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button_Visualizar_click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Fatura Completa" + "\n");
}
private: System::Void button_Enviar_click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
