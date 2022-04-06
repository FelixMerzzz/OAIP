#pragma once

namespace Lab25 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button8;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������� �������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"������ �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 92);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 26);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�������� ���� ����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 133);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 25);
			this->button4->TabIndex = 3;
			this->button4->Text = L"�������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(206, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 4;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(12, 173);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(135, 21);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"�����\\�������";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_Click);
			this->checkBox1->Click += gcnew System::EventHandler(this, &MyForm::checkBox1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 200);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(89, 21);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"������";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(12, 227);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(84, 21);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"Ƹ����";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(174, 164);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(141, 106);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(7, 49);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(105, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"����������";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Click += gcnew System::EventHandler(this, &MyForm::radioButton2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 22);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"�����";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Click += gcnew System::EventHandler(this, &MyForm::radioButton1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 326);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 22);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"�������";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 326);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"��������";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(433, 326);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(133, 22);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"������ �� ��������";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(294, 325);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"���������";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(572, 325);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"��������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(430, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 17);
			this->label2->TabIndex = 14;
			this->label2->Text = L"������� ������ � �����";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(457, 53);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 15;
			this->textBox4->Text = L"�����";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(457, 81);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 24);
			this->button7->TabIndex = 16;
			this->button7->Text = L"����������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(457, 133);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"���������";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(457, 161);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 23);
			this->button8->TabIndex = 18;
			this->button8->Text = L"��������";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 394);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "������ ��������";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->BackColor == SystemColors::ButtonFace)
	{
		this->BackColor = Color::Red;
	}
	else {
		this->BackColor = SystemColors::ButtonFace;
	}
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void checkBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->BackColor == Color::Red) {
		this->BackColor = SystemColors::ButtonFace;
	}
	else {
		this->BackColor = Color::Red;
	}
	this->checkBox2->CheckState = CheckState::Unchecked;
	this->checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Green;
	this->checkBox1->CheckState = CheckState::Unchecked;
	this->checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Yellow;
	this->checkBox2->CheckState = CheckState::Unchecked;
	this->checkBox1->CheckState = CheckState::Unchecked;
}
private: System::Void radioButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "���������� ����� �.�. (�)2022";
}

private: System::Void radioButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "��� Windows Forms ����������";
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Clear();
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->Clear();
}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double a = Convert::ToDouble(this->textBox1->Text);
			double b = Convert::ToDouble(this->textBox2->Text);
			if (b == 0 || a / b < 0) {
				MessageBox::Show("������� ������� �� ���� ��� ���������� ����� �� �������������� �����");
			}
			else {
				double c = Math::Sqrt(a / b);
				this->textBox3->Clear();
				this->textBox3->Text = c.ToString();
				this->Text = c.ToString();
			}
		}
		catch (System::FormatException^ e) {
			MessageBox::Show(e->Message->ToString(), "������ ������� ������!");
		}
	}
		
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->textBox3->Clear();
	this->textBox3->Text = "������ �� ��������";
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox4->Clear();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox4->Clear();
	this->textBox5->Clear();
	this->textBox4->Text = "";
	this->textBox5->Text = "���������";
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double c = Convert::ToDouble(this->textBox4->Text);
		if (c <= 0) {
			MessageBox::Show("������������ ���������� ������");
		}
		else {
			double d = (c / 491.96);
			this->textBox5->Clear();
			this->textBox5->Text = d.ToString();
			this->Text = d.ToString();
		}
	}
	catch (System::FormatException^ e) {
		MessageBox::Show(e->Message->ToString(), "������ ������� ������!");
	}
}
};
}