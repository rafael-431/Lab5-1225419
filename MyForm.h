#pragma once

namespace Lab051225419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		array <int>^ Vector;
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ BSecuencial;
	private: System::Windows::Forms::Button^ BBinario;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ BHash;
	private: System::Windows::Forms::TextBox^ txtNbuscado;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTama�o;
	private: System::Windows::Forms::Label^ label4;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BSecuencial = (gcnew System::Windows::Forms::Button());
			this->BBinario = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BHash = (gcnew System::Windows::Forms::Button());
			this->txtNbuscado = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTama�o = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(31, 427);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// BSecuencial
			// 
			this->BSecuencial->Location = System::Drawing::Point(62, 237);
			this->BSecuencial->Name = L"BSecuencial";
			this->BSecuencial->Size = System::Drawing::Size(106, 97);
			this->BSecuencial->TabIndex = 1;
			this->BSecuencial->Text = L"Busqueda Secuencial";
			this->BSecuencial->UseVisualStyleBackColor = true;
			this->BSecuencial->Click += gcnew System::EventHandler(this, &MyForm::BSecuencial_Click);
			// 
			// BBinario
			// 
			this->BBinario->Location = System::Drawing::Point(270, 237);
			this->BBinario->Name = L"BBinario";
			this->BBinario->Size = System::Drawing::Size(106, 97);
			this->BBinario->TabIndex = 2;
			this->BBinario->Text = L"Busqueda Binario";
			this->BBinario->UseVisualStyleBackColor = true;
			this->BBinario->Click += gcnew System::EventHandler(this, &MyForm::BBinario_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ingrese numero a buscar";
			// 
			// BHash
			// 
			this->BHash->Location = System::Drawing::Point(485, 237);
			this->BHash->Name = L"BHash";
			this->BHash->Size = System::Drawing::Size(106, 97);
			this->BHash->TabIndex = 4;
			this->BHash->Text = L"Busqueda Hash";
			this->BHash->UseVisualStyleBackColor = true;
			this->BHash->Click += gcnew System::EventHandler(this, &MyForm::BHash_Click);
			// 
			// txtNbuscado
			// 
			this->txtNbuscado->Location = System::Drawing::Point(260, 157);
			this->txtNbuscado->Name = L"txtNbuscado";
			this->txtNbuscado->Size = System::Drawing::Size(127, 22);
			this->txtNbuscado->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(266, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Laboratorio 5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 18);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ingrese tama�o del arreglo ";
			// 
			// txtTama�o
			// 
			this->txtTama�o->Location = System::Drawing::Point(260, 84);
			this->txtTama�o->Name = L"txtTama�o";
			this->txtTama�o->Size = System::Drawing::Size(127, 22);
			this->txtTama�o->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(458, 427);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 540);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtTama�o);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNbuscado);
			this->Controls->Add(this->BHash);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BBinario);
			this->Controls->Add(this->BSecuencial);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void creaciondevector() {

			Random^ r = gcnew Random();
			Vector = gcnew array<int>(Convert::ToInt16(txtTama�o->Text));

			for (int i = 0; i < Vector->Length; i++)
			{
				Vector[i] = r->Next(0, int::Parse(txtTama�o->Text + 1));		
			}

		}


		int Bussecuencial() {
			for (int i = 0; i < Vector->Length; i++)
			{
				if (Vector[i]==(int::Parse(txtNbuscado->Text)))
				{
					return i;
				}
			}

			return -1;
		}

		int busquedaBinaria(array<int>^ vec, int inf, int sup,int value) {
			if (inf>sup)
			{
				return-1;
			}
			int mitad = inf + (((sup + 1) - inf) / 2);
			int pivote = vec[mitad];
			if (pivote==int::Parse(txtNbuscado->Text))
			{
				return mitad;
			}
			else
			{
				if (pivote>int::Parse(txtNbuscado->Text))
				{
					return busquedaBinaria(Vector, inf, mitad - 1, value);
				}
				else
				{
					return busquedaBinaria(Vector, mitad + 1, sup, value);
				}
			}
		}
		int BusquedaHash(array<int>^ vec,int tama�o,int valor) {

			if (vec[valor%tama�o]==valor)
			{
				return (valor & tama�o);
			}
			else
			{
				return -1;
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		
	
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Saliudos", "hola", MessageBoxButtons::OK, MessageBoxIcon::None);
		

		
	}
private: System::Void BSecuencial_Click(System::Object^ sender, System::EventArgs^ e) {
	creaciondevector();
	MessageBox::Show("El dato buscado esta en la posici�n: " + Bussecuencial(), "Dato buscado",MessageBoxButtons::OK, MessageBoxIcon::Information);
	
}

private: System::Void BBinario_Click(System::Object^ sender, System::EventArgs^ e) {
	creaciondevector();
	MessageBox::Show("El dato buscado esta en la posici�n:" + busquedaBinaria(Vector, 0, Vector->Length - 1, int::Parse(txtNbuscado->Text)), "Dato buscado", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void BHash_Click(System::Object^ sender, System::EventArgs^ e) {
	creaciondevector();
	MessageBox::Show("El dato buscado esta en la posici�n:" + BusquedaHash(Vector,int::Parse(txtTama�o->Text), int::Parse(txtNbuscado->Text)), "Dato buscado", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
