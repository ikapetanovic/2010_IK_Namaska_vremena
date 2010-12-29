#pragma once
#include "Jacija.h"
#include "About.h"
#include "MisljenjaUcenjaka.h"
#include "ZadnjaTrecina.h"
#include "Duha.h"

namespace NamaskaVremena {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  poèetakToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  jacijanamazToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  duhanamazToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  izlazToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  detaljnijeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mišljenjeUèenjakaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oAplikacijiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zadnjaTreæinaNoæiToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->poèetakToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jacijanamazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->duhanamazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zadnjaTreæinaNoæiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->izlazToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->detaljnijeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mišljenjeUèenjakaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAplikacijiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->poèetakToolStripMenuItem, 
				this->detaljnijeToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(396, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// poèetakToolStripMenuItem
			// 
			this->poèetakToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->jacijanamazToolStripMenuItem, 
				this->duhanamazToolStripMenuItem, this->zadnjaTreæinaNoæiToolStripMenuItem, this->izlazToolStripMenuItem});
			this->poèetakToolStripMenuItem->Name = L"poèetakToolStripMenuItem";
			this->poèetakToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->poèetakToolStripMenuItem->Text = L"Poèetak";
			// 
			// jacijanamazToolStripMenuItem
			// 
			this->jacijanamazToolStripMenuItem->Name = L"jacijanamazToolStripMenuItem";
			this->jacijanamazToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->jacijanamazToolStripMenuItem->Text = L"Jacija-namaz";
			this->jacijanamazToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::jacijanamazToolStripMenuItem_Click);
			// 
			// duhanamazToolStripMenuItem
			// 
			this->duhanamazToolStripMenuItem->Name = L"duhanamazToolStripMenuItem";
			this->duhanamazToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->duhanamazToolStripMenuItem->Text = L"Duha-namaz";
			this->duhanamazToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::duhanamazToolStripMenuItem_Click);
			// 
			// zadnjaTreæinaNoæiToolStripMenuItem
			// 
			this->zadnjaTreæinaNoæiToolStripMenuItem->Name = L"zadnjaTreæinaNoæiToolStripMenuItem";
			this->zadnjaTreæinaNoæiToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->zadnjaTreæinaNoæiToolStripMenuItem->Text = L"Zadnja treæina noæi";
			this->zadnjaTreæinaNoæiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::zadnjaTreæinaNoæiToolStripMenuItem_Click);
			// 
			// izlazToolStripMenuItem
			// 
			this->izlazToolStripMenuItem->Name = L"izlazToolStripMenuItem";
			this->izlazToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->izlazToolStripMenuItem->Text = L"Izlaz";
			this->izlazToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::izlazToolStripMenuItem_Click);
			// 
			// detaljnijeToolStripMenuItem
			// 
			this->detaljnijeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->mišljenjeUèenjakaToolStripMenuItem, 
				this->oAplikacijiToolStripMenuItem});
			this->detaljnijeToolStripMenuItem->Name = L"detaljnijeToolStripMenuItem";
			this->detaljnijeToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->detaljnijeToolStripMenuItem->Text = L"Detaljnije";
			// 
			// mišljenjeUèenjakaToolStripMenuItem
			// 
			this->mišljenjeUèenjakaToolStripMenuItem->Name = L"mišljenjeUèenjakaToolStripMenuItem";
			this->mišljenjeUèenjakaToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->mišljenjeUèenjakaToolStripMenuItem->Text = L"Mišljenja uèenjaka";
			this->mišljenjeUèenjakaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::mišljenjeUèenjakaToolStripMenuItem_Click);
			// 
			// oAplikacijiToolStripMenuItem
			// 
			this->oAplikacijiToolStripMenuItem->Name = L"oAplikacijiToolStripMenuItem";
			this->oAplikacijiToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->oAplikacijiToolStripMenuItem->Text = L"O aplikaciji";
			this->oAplikacijiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::oAplikacijiToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(396, 250);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Namaska vremena";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void jacijanamazToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				Jacija ^j = gcnew Jacija ();
				j->Show ();
			 }
private: System::Void oAplikacijiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 About ^a = gcnew About ();
			 a->ShowDialog ();

		 }
private: System::Void mišljenjeUèenjakaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MisljenjaUcenjaka ^mu = gcnew MisljenjaUcenjaka ();
			 mu->ShowDialog ();
		 }
private: System::Void izlazToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close ();
		 }
private: System::Void zadnjaTreæinaNoæiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 ZadnjaTrecina ^zt = gcnew ZadnjaTrecina ();
			 zt->Show ();
		 }
private: System::Void duhanamazToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Duha ^d = gcnew Duha ();
			 d->Show ();
		 }
};
}

