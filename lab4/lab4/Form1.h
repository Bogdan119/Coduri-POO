#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::TextBox^ input_cnp;
	protected:

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ calculeaza_data;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ afisaj_cnp;
	private: System::Windows::Forms::Label^ afiseaza_data;


	private: System::Windows::Forms::Button^ afisaj_data;
	private: System::Windows::Forms::Label^ label_gender;

	private: System::ComponentModel::IContainer^ components;

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
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->calculeaza_data = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->afisaj_cnp = (gcnew System::Windows::Forms::TextBox());
			this->afiseaza_data = (gcnew System::Windows::Forms::Label());
			this->afisaj_data = (gcnew System::Windows::Forms::Button());
			this->label_gender = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// input_cnp
			// 
			this->input_cnp->AccessibleName = L"input_cnp";
			this->input_cnp->Location = System::Drawing::Point(38, 57);
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(212, 22);
			this->input_cnp->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// calculeaza_data
			// 
			this->calculeaza_data->AccessibleName = L"calculeaza_cnp";
			this->calculeaza_data->Location = System::Drawing::Point(38, 130);
			this->calculeaza_data->Name = L"calculeaza_data";
			this->calculeaza_data->Size = System::Drawing::Size(103, 39);
			this->calculeaza_data->TabIndex = 2;
			this->calculeaza_data->Text = L"Calculeaza";
			this->calculeaza_data->UseVisualStyleBackColor = true;
			this->calculeaza_data->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->AccessibleName = L"sterge_input";
			this->button2->Location = System::Drawing::Point(147, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"CLR";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// afisaj_cnp
			// 
			this->afisaj_cnp->AccessibleName = L"afisaj_cnp";
			this->afisaj_cnp->Location = System::Drawing::Point(38, 238);
			this->afisaj_cnp->Name = L"afisaj_cnp";
			this->afisaj_cnp->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->afisaj_cnp->Size = System::Drawing::Size(369, 22);
			this->afisaj_cnp->TabIndex = 4;
			// 
			// afiseaza_data
			// 
			this->afiseaza_data->AccessibleName = L"label1";
			this->afiseaza_data->AutoSize = true;
			this->afiseaza_data->Location = System::Drawing::Point(272, 60);
			this->afiseaza_data->Name = L"afiseaza_data";
			this->afiseaza_data->Size = System::Drawing::Size(39, 16);
			this->afiseaza_data->TabIndex = 5;
			this->afiseaza_data->Text = L"Data:";
			this->afiseaza_data->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// afisaj_data
			// 
			this->afisaj_data->AccessibleName = L"afisaj_data";
			this->afisaj_data->Location = System::Drawing::Point(271, 103);
			this->afisaj_data->Name = L"afisaj_data";
			this->afisaj_data->Size = System::Drawing::Size(98, 49);
			this->afisaj_data->TabIndex = 6;
			this->afisaj_data->Text = L"Afiseaza data";
			this->afisaj_data->UseVisualStyleBackColor = true;
			this->afisaj_data->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label_gender
			// 
			this->label_gender->AutoSize = true;
			this->label_gender->Location = System::Drawing::Point(44, 288);
			this->label_gender->Name = L"label_gender";
			this->label_gender->Size = System::Drawing::Size(0, 16);
			this->label_gender->TabIndex = 7;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 430);
			this->Controls->Add(this->label_gender);
			this->Controls->Add(this->afisaj_data);
			this->Controls->Add(this->afiseaza_data);
			this->Controls->Add(this->afisaj_cnp);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->calculeaza_data);
			this->Controls->Add(this->input_cnp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (input_cnp->Text->Length == 0) {
			MessageBox::Show("Introduceti CNP-ul!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else
		{
			//citire cnp
			String^ cnp = input_cnp->Text;
			int idd = Int32::Parse(cnp->Substring(0,1));
			int an = Int32::Parse(cnp->Substring(2,1));
			int luna = Int32::Parse(cnp->Substring(3,2));
			int zi = Int32::Parse(cnp->Substring(5,2));
			int varsta;
			//calcul varsta
			DateTime azi = DateTime::Now;
			String^ gender;

			if (idd == 1 || idd == 2)
			{
 varsta = azi.Year - (1800 + an);
 an = 1800 + an;
			}
			
			if (idd == 3 || idd == 4)
			{
varsta = azi.Year - (1900 + an);
an = 1900 + an;
			}
				 
			if (idd == 5 || idd == 6)
			{
varsta = azi.Year - (2000 + an);
an = 2000 + an;
			}
				 
			afiseaza_data->Text = idd.ToString() + " " + an.ToString() + " " + luna.ToString() + " " + zi.ToString();
			if (luna > azi.Month || (luna == azi.Month && zi > azi.Day)) {
				varsta--;
			}

			if (idd == 5 || idd == 3 || idd == 1)
				gender = "masculin";
			else
				gender = "feminin";
			
			

			//afisare date in afisaj cnp
			afisaj_cnp->Text = "Data nasterii:" + zi.ToString() + " /" + luna.ToString() + "/" + an.ToString() + "\n" + "  Varsta:" + varsta.ToString();
			label_gender->Text = "Gen: " + gender;



		}



	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime today = DateTime::Now;
	//input_cnp->Text = today.ToString("dd/MM/yyyy");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	input_cnp->Clear();
	afisaj_cnp->Clear();
}
};
}
