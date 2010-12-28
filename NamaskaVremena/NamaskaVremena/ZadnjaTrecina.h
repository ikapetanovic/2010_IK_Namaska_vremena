#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace NamaskaVremena {

	/// <summary>
	/// Summary for ZadnjaTrecina
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class ZadnjaTrecina : public System::Windows::Forms::Form
	{
	public:
		ZadnjaTrecina(void)
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
		~ZadnjaTrecina()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  rezultat;
	protected: 
	private: System::Windows::Forms::Label^  poruka;
	private: System::Windows::Forms::Button^  izracunaj;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::MaskedTextBox^  zora;
	private: System::Windows::Forms::MaskedTextBox^  aksam;
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
			this->rezultat = (gcnew System::Windows::Forms::Label());
			this->poruka = (gcnew System::Windows::Forms::Label());
			this->izracunaj = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->zora = (gcnew System::Windows::Forms::MaskedTextBox());
			this->aksam = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// rezultat
			// 
			this->rezultat->AutoSize = true;
			this->rezultat->Location = System::Drawing::Point(171, 129);
			this->rezultat->Name = L"rezultat";
			this->rezultat->Size = System::Drawing::Size(0, 13);
			this->rezultat->TabIndex = 15;
			// 
			// poruka
			// 
			this->poruka->AutoSize = true;
			this->poruka->Location = System::Drawing::Point(12, 129);
			this->poruka->Name = L"poruka";
			this->poruka->Size = System::Drawing::Size(153, 13);
			this->poruka->TabIndex = 14;
			this->poruka->Text = L"Zadnja trecina noæi poèinje od:";
			// 
			// izracunaj
			// 
			this->izracunaj->Location = System::Drawing::Point(84, 77);
			this->izracunaj->Name = L"izracunaj";
			this->izracunaj->Size = System::Drawing::Size(75, 23);
			this->izracunaj->TabIndex = 13;
			this->izracunaj->Text = L"Izraèunaj";
			this->izracunaj->UseVisualStyleBackColor = true;
			this->izracunaj->Click += gcnew System::EventHandler(this, &ZadnjaTrecina::izracunaj_Click);
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
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Akšam:";
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
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Kraj noæi:";
			// 
			// zora
			// 
			this->zora->Location = System::Drawing::Point(84, 37);
			this->zora->Mask = L"00:00";
			this->zora->Name = L"zora";
			this->zora->Size = System::Drawing::Size(33, 20);
			this->zora->TabIndex = 17;
			this->zora->ValidatingType = System::DateTime::typeid;
			// 
			// aksam
			// 
			this->aksam->Location = System::Drawing::Point(84, 9);
			this->aksam->Mask = L"00:00";
			this->aksam->Name = L"aksam";
			this->aksam->Size = System::Drawing::Size(33, 20);
			this->aksam->TabIndex = 16;
			this->aksam->ValidatingType = System::DateTime::typeid;
			// 
			// ZadnjaTrecina
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(243, 174);
			this->Controls->Add(this->zora);
			this->Controls->Add(this->aksam);
			this->Controls->Add(this->rezultat);
			this->Controls->Add(this->poruka);
			this->Controls->Add(this->izracunaj);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->MaximizeBox = false;
			this->Name = L"ZadnjaTrecina";
			this->Text = L"Zadnja treæina noæi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
				
private: System::Void izracunaj_Click(System::Object^  sender, System::EventArgs^  e) {
			  try
			  {									
				  int sekundi_24 = 24 * 3600; 
                 
				  DateTime aksamTime = DateTime::Parse (aksam->Text);
                  int sekundi_aksam = aksamTime.Hour * 3600 + aksamTime.Minute * 60;

                  int sekundi_do_24 = sekundi_24 - sekundi_aksam;

				  DateTime zoraTime = DateTime::Parse (zora->Text);
				  int sekundi_zora = zoraTime.Hour * 3600 + zoraTime.Minute * 60;

                  int sekundi_izmedju = sekundi_do_24 + sekundi_zora;

                  int sekundi_trecina = sekundi_izmedju / 3;

                  int sekundi_rezultat = sekundi_aksam + sekundi_trecina + sekundi_trecina;                  
                  int sati_rezultat = (sekundi_rezultat / 3600) % 24;
                  int minuta_rezultat = (sekundi_rezultat % 3600) / 60;

                  // Treba dodati nulu gdje je potrebno, jer je on zanemari pri ispisu
				  rezultat->Text = sati_rezultat + ":" + minuta_rezultat;
				  aksam->Focus ();
			  }
			  catch (Exception ^)
			  {
				  MessageBox::Show ("Niste unijeli ispravne podatke.", "Zadnja trecina noci", MessageBoxButtons::OK, MessageBoxIcon::Error);
			  }
		 }
};
}
