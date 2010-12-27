#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace NamaskaVremena {

	/// <summary>
	/// Summary for Jacija
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Jacija : public System::Windows::Forms::Form
	{
	public:
		Jacija(void)
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
		~Jacija()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;




	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::TextBox^  zora;

	private: System::Windows::Forms::TextBox^  aksam;
	private: System::Windows::Forms::Label^  rezultat;

	private: System::Windows::Forms::Label^  poruka;

	private: System::Windows::Forms::Button^  izracunaj;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->aksam = (gcnew System::Windows::Forms::TextBox());
			this->zora = (gcnew System::Windows::Forms::TextBox());
			this->izracunaj = (gcnew System::Windows::Forms::Button());
			this->poruka = (gcnew System::Windows::Forms::Label());
			this->rezultat = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Akšam:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Kraj noæi:";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// aksam
			// 
			this->aksam->Location = System::Drawing::Point(84, 22);
			this->aksam->Name = L"aksam";
			this->aksam->Size = System::Drawing::Size(75, 20);
			this->aksam->TabIndex = 4;
			// 
			// zora
			// 
			this->zora->Location = System::Drawing::Point(84, 54);
			this->zora->Name = L"zora";
			this->zora->Size = System::Drawing::Size(75, 20);
			this->zora->TabIndex = 5;
			// 
			// izracunaj
			// 
			this->izracunaj->Location = System::Drawing::Point(84, 90);
			this->izracunaj->Name = L"izracunaj";
			this->izracunaj->Size = System::Drawing::Size(75, 23);
			this->izracunaj->TabIndex = 6;
			this->izracunaj->Text = L"Izraèunaj";
			this->izracunaj->UseVisualStyleBackColor = true;
			this->izracunaj->Click += gcnew System::EventHandler(this, &Jacija::izracunaj_Click_1);
			// 
			// poruka
			// 
			this->poruka->AutoSize = true;
			this->poruka->Location = System::Drawing::Point(12, 132);
			this->poruka->Name = L"poruka";
			this->poruka->Size = System::Drawing::Size(0, 13);
			this->poruka->TabIndex = 7;
			// 
			// rezultat
			// 
			this->rezultat->AutoSize = true;
			this->rezultat->Location = System::Drawing::Point(125, 132);
			this->rezultat->Name = L"rezultat";
			this->rezultat->Size = System::Drawing::Size(0, 13);
			this->rezultat->TabIndex = 8;
			// 
			// Jacija
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(203, 159);
			this->Controls->Add(this->rezultat);
			this->Controls->Add(this->poruka);
			this->Controls->Add(this->izracunaj);
			this->Controls->Add(this->zora);
			this->Controls->Add(this->aksam);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->MaximizeBox = false;
			this->Name = L"Jacija";
			this->Text = L"Jacija";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
			bool PostaviAksam ()
			{
				 if (aksam->Text == "")
				 {
					 errorProvider1->SetError (aksam, "Morate unijeti u koliko noæ poèinje.");
					 aksam->Focus ();
					 return false;
				 }
				 else if (aksam->Text->Length < 5)
				 {
					 errorProvider1->SetError (aksam, "Morate unijeti vrijeme u formatu: hh:mm");
					 aksam->Focus ();
					 return false;
				 }
				 else if (aksam->Text->Length == 5)
				 {
					 
					 if (aksam->Text [0].IsDigit (aksam->Text, 0) == false || aksam->Text [1].IsDigit (aksam->Text, 0) == false || aksam->Text [3].IsDigit (aksam->Text, 0) == false || aksam->Text [4].IsDigit (aksam->Text, 0) == false)
					 {
						 errorProvider1->SetError (aksam, "Morate unijeti brojeve. Format unosa je: hh:mm");
						 aksam->Focus ();
						 return false;
					 }
					 if (aksam->Text [2] != ':')
					 {
						 errorProvider1->SetError (aksam, "U sredini mora biti dvotaèka ':'. Format unosa je: hh:mm");
						 aksam->Focus ();
						 return false;
					 }
				 	 errorProvider1->Clear ();
					 return true;
				 }	
			}

			bool PostaviZoru ()
			{
				if (zora->Text == "")
				 {
					 errorProvider1->SetError (zora, "Morate unijeti u koliko noæ završava.");
					 aksam->Focus ();
					 return false;
				 }
				 else if (zora->Text->Length < 5)
				 {
					 errorProvider1->SetError (zora, "Morate unijeti vrijeme u formatu: hh:mm");
					 aksam->Focus ();
					 return false;
				 }
				  else if (zora->Text->Length == 5)
				 {
					 
					 if (zora->Text [0].IsDigit (zora->Text, 0) == false || zora->Text [1].IsDigit (zora->Text, 0) == false || zora->Text [3].IsDigit (zora->Text, 0) == false || zora->Text [4].IsDigit (zora->Text, 0) == false)
					 {
						 errorProvider1->SetError (zora, "Morate unijeti brojeve. Format unosa je: hh:mm");
						 zora->Focus ();
						 return false;
					 }
					 if (zora->Text [2] != ':')
					 {
						 errorProvider1->SetError (zora, "U sredini mora biti dvotaèka ':'. Format unosa je: hh:mm");
						 zora->Focus ();
						 return false;
					 }
				
					 errorProvider1->Clear ();
					 return true;
				 }	
			}

	private: System::Void aksam_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
				 PostaviAksam ();
			 }
private: System::Void zora_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			     PostaviZoru ();
		 }
private: System::Void izracunaj_Click(System::Object^  sender, System::EventArgs^  e) {
				  
		 }
private: System::Void izracunaj_Click_1(System::Object^  sender, System::EventArgs^  e) {
					
			      if (!PostaviAksam ()) 
					  return;
				  if (!PostaviZoru ())
					  return;
									
				  int sekundi_24 = 24 * 3600; 
                 
                  int sati_aksam;
                  int minuta_aksam;
                  int sekundi_aksam;

                  int sati1 = int (aksam->Text [0]) - 48;
                  int sati2 = int (aksam->Text [1]) - 48;
                  int minuta1 = int (aksam->Text [3]) - 48;
                  int minuta2 = int (aksam->Text [4]) - 48;

                  sati_aksam = sati1 * 10 + sati2;
                  minuta_aksam = minuta1 * 10 + minuta2;
            
                  sekundi_aksam = sati_aksam * 3600 + minuta_aksam * 60;

                  int sekundi_do_24 = sekundi_24 - sekundi_aksam;

                  int sati_zora;
                  int minuta_zora;
                  int sekundi_zora;

                  int sati3 = Convert::ToInt32(zora->Text [0]) - 48;
                  int sati4 = Convert::ToInt32(zora->Text [1]) - 48;
                  int minuta3 = Convert::ToInt32(zora->Text [3]) - 48;
                  int minuta4 = Convert::ToInt32(zora->Text [4]) - 48;

                  sati_zora =  sati3 * 10 + sati4;
                  minuta_zora = minuta3 * 10 + minuta4;

                  sekundi_zora = sati_zora * 3600 + minuta_zora * 60;

                  int sekundi_izmedju;

                  sekundi_izmedju = sekundi_do_24 + sekundi_zora;

                  int sekundi_pola;

                  sekundi_pola = sekundi_izmedju / 2;

                  int sati_rezultat;
                  int minuta_rezultat;
                  int sekundi_rezultat;

                  sekundi_rezultat = sekundi_aksam + sekundi_pola;

                  sati_rezultat = (sekundi_rezultat / 3600) % 24;
                  minuta_rezultat = (sekundi_rezultat % 3600) / 60;

                  // Treba dodati nulu gdje je potrebno, jer je on zanemari pri ispisu
				  poruka->Text = "Jacija je do: ";
				  rezultat->Text = sati_rezultat + ":" + minuta_rezultat;
				  aksam->Focus ();

		 }
};
}
