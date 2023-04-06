#pragma once
#include<string>
#include <string>
#include<cstring>
#include<cmath>
using namespace std;
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button0;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::TextBox^ textbox1;



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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textbox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(125, 222);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(205, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 65);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(45, 293);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(74, 65);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(125, 293);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(74, 65);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(205, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(74, 65);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(45, 364);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(74, 65);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(125, 364);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(74, 65);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(205, 364);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(74, 65);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(45, 435);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(74, 65);
			this->button10->TabIndex = 9;
			this->button10->Text = L"not";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(125, 435);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(74, 65);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(205, 435);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(74, 65);
			this->button12->TabIndex = 11;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(285, 83);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(74, 65);
			this->button13->TabIndex = 12;
			this->button13->Text = L"<|X|";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(285, 154);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(74, 65);
			this->button14->TabIndex = 13;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(285, 222);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(74, 65);
			this->button15->TabIndex = 14;
			this->button15->Text = L"x";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(285, 293);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(74, 65);
			this->button16->TabIndex = 15;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(285, 364);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(74, 65);
			this->button17->TabIndex = 16;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(285, 435);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(74, 65);
			this->button18->TabIndex = 17;
			this->button18->Text = L"=";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(45, 83);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(74, 65);
			this->button19->TabIndex = 18;
			this->button19->Text = L"/";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(125, 83);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(74, 65);
			this->button20->TabIndex = 19;
			this->button20->Text = L"CE";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(205, 83);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(74, 65);
			this->button21->TabIndex = 20;
			this->button21->Text = L"C";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(45, 154);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(74, 65);
			this->button22->TabIndex = 21;
			this->button22->Text = L"x inversat";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(125, 154);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(74, 65);
			this->button23->TabIndex = 22;
			this->button23->Text = L"power(x,2)";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(205, 154);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(74, 65);
			this->button24->TabIndex = 23;
			this->button24->Text = L"sqrt(x)";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Form1::button24_Click);
			// 
			// textbox1
			// 
			this->textbox1->Location = System::Drawing::Point(45, 27);
			this->textbox1->Name = L"textbox1";
			this->textbox1->Size = System::Drawing::Size(312, 22);
			this->textbox1->TabIndex = 24;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 523);
			this->Controls->Add(this->textbox1);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		Char operatie;
		double v1, v2, rezultat;
		//String^ operatie;


	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	textbox1->Text = textbox1->Text + "1";

}
	   
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	v2 = Double::Parse(textbox1->Text);

	if (operatie == '+')
		rezultat = v1 + v2;
	if (operatie == '-')
		rezultat = v1 - v2;
	if (operatie == 'x')
		rezultat = v1 * v2;
	if (operatie == '/')
	{
		if (v2 != 0)
			rezultat = v1 / v2;
		else
			textbox1->Text = "Division by 0!";
	}
		

	textbox1->Text = rezultat.ToString();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "9";
}
private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = textbox1->Text + "0";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	
	v1 = double::Parse(textbox1->Text);
	textbox1->Text = "";
	operatie = '/';
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	
	v1 = double::Parse(textbox1->Text);
	textbox1->Text = "";
	operatie = 'x';
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	
	v1 = double::Parse(textbox1->Text);
	textbox1->Text = "";
	operatie = '-';
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	
	v1 = double::Parse(textbox1->Text);
	textbox1->Text = "";
	operatie = '+';
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	textbox1->Text = "";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	//textbox1->Text = textbox1->Text.
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
