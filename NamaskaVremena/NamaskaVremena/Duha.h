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
	private: System::Windows::Forms::TextBox^  podne;

	private: System::Windows::Forms::TextBox^  izlazak;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::Label^  rezultat2;
	private: System::Windows::Forms::Label^  poruka2;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->rezultat1 = (gcnew System::Windows::Forms::Label());
			this->poruka1 = (gcnew System::Windows::Forms::Label());
			this->izracunaj = (gcnew System::Windows::Forms::Button());
			this->podne = (gcnew System::Windows::Forms::TextBox());
			this->izlazak = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->poruka2 = (gcnew System::Windows::Forms::Label());
			this->rezultat2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// rezultat1
			// 
			this->rezultat1->AutoSize = true;
			this->rezultat1->Location = System::Drawing::Point(140, 129);
			this->rezultat1->Name = L"rezultat1";
			this->rezultat1->Size = System::Drawing::Size(0, 13);
			this->rezultat1->TabIndex = 22;
			// 
			// poruka1
			// 
			this->poruka1->AutoSize = true;
			this->poruka1->Location = System::Drawing::Point(12, 129);
			this->poruka1->Name = L"poruka1";
			this->poruka1->Size = System::Drawing::Size(0, 13);
			this->poruka1->TabIndex = 21;
			// 
			// izracunaj
			// 
			this->izracunaj->Location = System::Drawing::Point(126, 77);
			this->izracunaj->Name = L"izracunaj";
			this->izracunaj->Size = System::Drawing::Size(75, 23);
			this->izracunaj->TabIndex = 20;
			this->izracunaj->Text = L"Izraèunaj";
			this->izracunaj->UseVisualStyleBackColor = true;
			this->izracunaj->Click += gcnew System::EventHandler(this, &Duha::izracunaj_Click);
			// 
			// podne
			// 
			this->podne->Location = System::Drawing::Point(126, 41);
			this->podne->Name = L"podne";
			this->podne->Size = System::Drawing::Size(75, 20);
			this->podne->TabIndex = 19;
			this->podne->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Duha::podne_Validating);
			// 
			// izlazak
			// 
			this->izlazak->Location = System::Drawing::Point(126, 9);
			this->izlazak->Name = L"izlazak";
			this->izlazak->Size = System::Drawing::Size(75, 20);
			this->izlazak->TabIndex = 18;
			this->izlazak->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Duha::izlazak_Validating);
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
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// poruka2
			// 
			this->poruka2->AutoSize = true;
			this->poruka2->Location = System::Drawing::Point(12, 161);
			this->poruka2->Name = L"poruka2";
			this->poruka2->Size = System::Drawing::Size(0, 13);
			this->poruka2->TabIndex = 23;
			// 
			// rezultat2
			// 
			this->rezultat2->AutoSize = true;
			this->rezultat2->Location = System::Drawing::Point(140, 161);
			this->rezultat2->Name = L"rezultat2";
			this->rezultat2->Size = System::Drawing::Size(0, 13);
			this->rezultat2->TabIndex = 24;
			// 
			// Duha
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(254, 199);
			this->Controls->Add(this->rezultat2);
			this->Controls->Add(this->poruka2);
			this->Controls->Add(this->rezultat1);
			this->Controls->Add(this->poruka1);
			this->Controls->Add(this->izracunaj);
			this->Controls->Add(this->podne);
			this->Controls->Add(this->izlazak);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->MaximizeBox = false;
			this->Name = L"Duha";
			this->Text = L"Duha";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			
		public:

			bool PostaviIzlazak ()
			{
				 if (izlazak->Text == "")
				 {
					 errorProvider1->SetError (izlazak, "Morate unijeti u koliko izlazi Sunce.");
					 izlazak->Focus ();
					 return false;
				 }
				 else if (izlazak->Text->Length < 5)
				 {
					 errorProvider1->SetError (izlazak, "Morate unijeti vrijeme u formatu: hh:mm");
					 izlazak->Focus ();
					 return false;
				 }
				 else if (izlazak->Text->Length == 5)
				 {
					 
					 if (izlazak->Text [0].IsDigit (izlazak->Text, 0) == false || izlazak->Text [1].IsDigit (izlazak->Text, 0) == false || izlazak->Text [3].IsDigit (izlazak->Text, 0) == false || izlazak->Text [4].IsDigit (izlazak->Text, 0) == false)
					 {
						 errorProvider1->SetError (izlazak, "Morate unijeti brojeve. Format unosa je: hh:mm");
						 izlazak->Focus ();
						 return false;
					 }
					 if (izlazak->Text [2] != ':')
					 {
						 errorProvider1->SetError (izlazak, "U sredini mora biti dvotaèka ':'. Format unosa je: hh:mm");
						 izlazak->Focus ();
						 return false;
					 }
				 	 errorProvider1->Clear ();
					 return true;
				 }	
			}

			bool PostaviPodne ()
			{
				if (podne->Text == "")
				 {
					 errorProvider1->SetError (podne, "Morate unijeti u koliko poèinje podne-namaz.");
					 podne->Focus ();
					 return false;
				 }
				 else if (podne->Text->Length < 5)
				 {
					 errorProvider1->SetError (podne, "Morate unijeti vrijeme u formatu: hh:mm");
					 podne->Focus ();
					 return false;
				 }
				  else if (podne->Text->Length == 5)
				 {
					 
					 if (podne->Text [0].IsDigit (podne->Text, 0) == false || podne->Text [1].IsDigit (podne->Text, 0) == false || podne->Text [3].IsDigit (podne->Text, 0) == false || podne->Text [4].IsDigit (podne->Text, 0) == false)
					 {
						 errorProvider1->SetError (podne, "Morate unijeti brojeve. Format unosa je: hh:mm");
						 podne->Focus ();
						 return false;
					 }
					 if (podne->Text [2] != ':')
					 {
						 errorProvider1->SetError (podne, "U sredini mora biti dvotaèka ':'. Format unosa je: hh:mm");
						 podne->Focus ();
						 return false;
					 }
				
					 errorProvider1->Clear ();
					 return true;
				 }	
			}


private: System::Void izlazak_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviIzlazak ();
		 }
private: System::Void podne_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 PostaviPodne ();
		 }
private: System::Void izracunaj_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			      if (!PostaviIzlazak ()) 
					  return;
				  if (!PostaviPodne ())
					  return; 
                 
                  int sati_izlazak;
                  int minuta_izlazak;
                  int sekundi_izlazak;

                  int sati1 = int (izlazak->Text [0]) - 48;
                  int sati2 = int (izlazak->Text [1]) - 48;
                  int minuta1 = int (izlazak->Text [3]) - 48;
                  int minuta2 = int (izlazak->Text [4]) - 48;

                  sati_izlazak = sati1 * 10 + sati2;
                  minuta_izlazak = minuta1 * 10 + minuta2;
            
                  sekundi_izlazak = sati_izlazak * 3600 + minuta_izlazak * 60;

				  int sekundi_15 = 15 * 60;

                  int sekundi_rezultat1 = sekundi_izlazak + sekundi_15;

				  int sati_rezultat1;
                  int minuta_rezultat1;
					
				  sati_rezultat1 = (sekundi_rezultat1 / 3600) % 24;
                  minuta_rezultat1 = (sekundi_rezultat1 % 3600) / 60;

				  

                  int sati_podne;
                  int minuta_podne;
                  int sekundi_podne;

                  int sati3 = int (podne->Text [0]) - 48;
                  int sati4 = int (podne->Text [1]) - 48;
                  int minuta3 = int (podne->Text [3]) - 48;
                  int minuta4 = int (podne->Text [4]) - 48;

                  sati_podne =  sati3 * 10 + sati4;
                  minuta_podne = minuta3 * 10 + minuta4;

                  sekundi_podne = sati_podne * 3600 + minuta_podne * 60;

                  int sati_rezultat2;
                  int minuta_rezultat2;
                  int sekundi_rezultat2;

				  int sekundi_10 = 10 * 60;

                  sekundi_rezultat2 = sekundi_podne - sekundi_10;

                  sati_rezultat2 = (sekundi_rezultat2 / 3600) % 24;
                  minuta_rezultat2 = (sekundi_rezultat2 % 3600) / 60;

                  // Treba dodati nulu gdje je potrebno, jer je on zanemari pri ispisu
				  poruka1->Text = "Duha-namaz pocinje od:";
				  rezultat1->Text = sati_rezultat1 + ":" + minuta_rezultat1;

				  poruka2->Text = "i traje do: ";
				  rezultat2->Text = sati_rezultat2 + ":" + minuta_rezultat2;

				  izlazak->Focus ();
				  
		 }
};
}
