#pragma once
#include "registrarburaco.h"
#include "respondernotificacao.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sum�rio para atendente
	/// </summary>
	public ref class atendente : public System::Windows::Forms::Form
	{
	public:
		atendente(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o c�digo do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que est�o sendo usados.
		/// </summary>
		~atendente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


	private:
		/// <summary>
		/// Vari�vel de designer necess�ria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necess�rio para suporte ao Designer - n�o modifique 
		/// o conte�do deste m�todo com o editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(117, 96);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 98);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrar Buraco";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &atendente::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(335, 96);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 98);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Responder Notifica��o";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &atendente::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(499, 256);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Logout";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &atendente::button3_Click);
			// 
			// atendente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 321);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"atendente";
			this->Text = L"atendente";
			this->Load += gcnew System::EventHandler(this, &atendente::atendente_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		registrarburaco^ caixa = gcnew registrarburaco();
		caixa->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		respondernotificacao^ caixa = gcnew respondernotificacao();
		caixa->ShowDialog();
	}
	private: System::Void atendente_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
