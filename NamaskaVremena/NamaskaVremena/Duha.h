#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace NamaskaVremena {

	/// <summary>
	/// Summary for Duha
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Duha : public System::Windows::Forms::Form
	{
	public:
		Duha(void)
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
		~Duha()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  rezultat1;
	protected: 

	private: System::Windows::Forms::Label^  poruka1;
	protected: 

	private: System::Windows::Forms::Button^  izracunaj;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  rezultat2;
	private: System::Windows::Forms::Label^  poruka2;
	private: System::Windows::Forms::MaskedTextBox^  podne;
	private: System::Windows::Forms::MaskedTextBox^  izlazak;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rezultat1 = (gcnew System::Windows::Forms::Label());
			this->poruka1 = (gcnew System::Windows::Forms::Label());
			this->izracunaj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->poruka2 = (gcnew System::Windows::Forms::Label());
			this->rezultat2 = (gcnew System::Windows::Forms::Label());
			this->izlazak = (gcnew System::Windows::Forms::MaskedTextBox());
			this->podne = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// rezultat1
			// 
			this->rezultat1->AutoSize = true;
			this->rezultat1->Location = System::Drawing::Point(140, 129);
			this->rezultat1->Name = L"rezultat1";
			this->rezultat1->Size = System::Drawing::Size(0, 13);
			this->rezultat1->TabIndex = 4;
			// 
			// poruka1
			// 
			this->poruka1->AutoSize = true;
			this->poruka1->Location = System::Drawing::Point(12, 129);
			this->poruka1->Name = L"poruka1";
			this->poruka1->Size = System::Drawing::Size(122, 13);
			this->poruka1->TabIndex = 3;
			this->poruka1->Text = L"Duha-namaz poèinje od:";
			// 
			// izracunaj
			// 
			this->izracunaj->Location = System::Drawing::Point(126, 77);
			this->izracunaj->Name = L"izracunaj";
			this->izracunaj->Size = System::Drawing::Size(75, 23);
			this->izracunaj->TabIndex = 2;
			this->izracunaj->Text = L"Izraèunaj";
			this->izracunaj->UseVisualStyleBackColor = true;
			this->izracunaj->Click += gcnew System::EventHandler(this, &Duha::izracunaj_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Izlazak Sunca:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label2->Location = System::Drawing::Point(12, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Podne:";
			// 
			// poruka2
			// 
			this->poruka2->AutoSize = true;
			this->poruka2->Location = System::Drawing::Point(12, 161);
			this->poruka2->Name = L"poruka2";
			this->poruka2->Size = System::Drawing::Size(50, 13);
			this->poruka2->TabIndex = 5;
			this->poruka2->Text = L"i traje do:";
			// 
			// rezultat2
			// 
			this->rezultat2->AutoSize = true;
			this->rezultat2->Location = System::Drawing::Point(140, 161);
			this->rezultat2->Name = L"rezultat2";
			this->rezultat2->Size = System::Drawing::Size(0, 13);
			this->rezultat2->TabIndex = 6;
			// 
			// izlazak
			// 
			this->izlazak->Location = System::Drawing::Point(126, 9);
			this->izlazak->Mask = L"00:00";
			this->izlazak->Name = L"izlazak";
			this->izlazak->Size = System::Drawing::Size(33, 20);
			this->izlazak->TabIndex = 0;
			this->izlazak->ValidatingType = System::DateTime::typeid;
			// 
			// podne
			// 
			this->podne->Location = System::Drawing::Point(126, 37);
			this->podne->Mask = L"00:00";
			this->podne->Name = L"podne";
			this->podne->Size = System::Drawing::Size(33, 20);
			this->podne->TabIndex = 1;
			this->podne->ValidatingType = System::DateTime::typeid;
			// 
			// Duha
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(254, 199);
			this->Controls->Add(this->podne);
			this->Controls->Add(this->izlazak);
			this->Controls->Add(this->rezultat2);
			this->Controls->Add(this->poruka2);
			this->Controls->Add(this->rezultat1);
			this->Controls->Add(this->poruka1);
			this->Controls->Add(this->izracunaj);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->MaximizeBox = false;
			this->Name = L"Duha";
			this->Text = L"Duha";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			

private: System::Void izracunaj_Click(System::Object^  sender, System::EventArgs^  e) {

			 try
			 {
				 // Duha pocinje od:

				  DateTime izlazakTime = DateTime::Parse (izlazak->Text);
                  int sekundi_izlazak = izlazakTime.Hour * 3600 + izlazakTime.Minute * 60;

				  int sekundi_15 = 15 * 60;

                  int sekundi_rezultat1 = sekundi_izlazak + sekundi_15;

				  int sati_rezultat1 = (sekundi_rezultat1 / 3600) % 24;
                  int minuta_rezultat1 = (sekundi_rezultat1 % 3600) / 60;
					
				  // Duha traje do:			  

				  DateTime podneTime = DateTime::Parse (podne->Text);
				  int sekundi_podne = podneTime.Hour * 3600 + podneTime.Minute * 60;

				  int sekundi_10 = 10 * 60;

                  int sekundi_rezultat2 = sekundi_podne - sekundi_10;

                  int sati_rezultat2 = (sekundi_rezultat2 / 3600) % 24;
                  int minuta_rezultat2 = (sekundi_rezultat2 % 3600) / 60;

                  // Treba dodati nulu gdje je potrebno, jer je on zanemari pri ispisu

				  rezultat1->Text = sati_rezultat1 + ":" + minuta_rezultat1;
				  rezultat2->Text = sati_rezultat2 + ":" + minuta_rezultat2;

				  izlazak->Focus ();
			 }
			 catch (Exception ^)
			 {
				 MessageBox::Show ("Niste unijeli ispravne podatke.", "Duha-namaz", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
				  
		 }
};
}
