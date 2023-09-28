#pragma once
#include<math.h>

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int f;
		double *arr = new double[f];
		double n;
		double m;
		double c;
		double summa = 0;
	private: System::Windows::Forms::ComboBox^ comboBox1;
		   double k;
		   double l;
		  
	public:
		MyForm(void)
		{
			InitializeComponent();
			comboBox1->SelectedItem = comboBox1->Items[0];
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ summakred;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->summakred = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 75);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(227, 57);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(199, 168);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(227, 57);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 257);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 57);
			this->textBox3->TabIndex = 2;
			// 
			// summakred
			// 
			this->summakred->BackColor = System::Drawing::SystemColors::Control;
			this->summakred->FlatAppearance->BorderSize = 0;
			this->summakred->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->summakred->Location = System::Drawing::Point(23, 75);
			this->summakred->Name = L"summakred";
			this->summakred->Size = System::Drawing::Size(138, 57);
			this->summakred->TabIndex = 3;
			this->summakred->Text = L" сумма кредита";
			this->summakred->UseVisualStyleBackColor = false;
			this->summakred->Click += gcnew System::EventHandler(this, &MyForm::summakred_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(23, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 57);
			this->button2->TabIndex = 4;
			this->button2->Text = L"срок кредита";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(12, 257);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 57);
			this->button3->TabIndex = 5;
			this->button3->Text = L"процентная ставка";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 342);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 75);
			this->button1->TabIndex = 6;
			this->button1->Text = L"расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(501, 351);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(195, 30);
			this->button4->TabIndex = 7;
			this->button4->Text = L"0";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(366, 342);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 39);
			this->button5->TabIndex = 8;
			this->button5->Text = L"платеж";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(366, 378);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(138, 39);
			this->button6->TabIndex = 9;
			this->button6->Text = L"переплата";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(366, 423);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 39);
			this->button7->TabIndex = 10;
			this->button7->Text = L"общая сумма";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(501, 427);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(195, 30);
			this->button8->TabIndex = 11;
			this->button8->Text = L"0";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(501, 387);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(195, 30);
			this->button9->TabIndex = 12;
			this->button9->Text = L"0";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"annuitetni", L"difference" });
			this->comboBox1->Location = System::Drawing::Point(552, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 486);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->summakred);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Kredit calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void summakred_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->comboBox1->Text == "annuitetni")
	{
		this->button4->Text = Convert::ToString(Convert::ToDouble(this->textBox1->Text) * ((Convert::ToDouble(this->textBox3->Text) / 100 / 12) * pow((1 + (Convert::ToDouble(this->textBox3->Text) / 100 / 12)), Convert::ToDouble(this->textBox2->Text))) / (pow((1 + (Convert::ToDouble(this->textBox3->Text) / 100 / 12)), Convert::ToDouble(this->textBox2->Text)) - 1));
		n = Convert::ToDouble(this->button4->Text);
		this->button4->Text = Math::Round(n, 2).ToString();

		this->button8->Text = Convert::ToString(Convert::ToDouble(this->textBox2->Text) * n);
		m = Convert::ToDouble(this->button8->Text);
		this->button8->Text = Math::Round(m, 2).ToString();

		this->button9->Text = Convert::ToString(m - Convert::ToDouble(this->textBox1->Text));
		k = Convert::ToDouble(this->button9->Text);
		this->button9->Text = Math::Round(k, 2).ToString();
	}
	else if(this->comboBox1->Text == "difference")
	{
		f = Convert::ToDouble(this->textBox2->Text);
		for(int i = 0; i < f; i++)
		{
			arr[i] = Convert::ToDouble(this->button4->Text);
			arr[i] = (Convert::ToDouble(this->textBox1->Text) / Convert::ToDouble(this->textBox2->Text) + (Convert::ToDouble(this->textBox1->Text) - Convert::ToDouble(this->textBox1->Text) / Convert::ToDouble(this->textBox2->Text) * i) * Convert::ToDouble(this->textBox3->Text) / 100 / 12);
			summa += arr[i];
		}
		this->button4->Text = Convert::ToString(Math::Round(arr[0], 2).ToString() + "..." + Convert::ToString(Math::Round(arr[59], 2).ToString()));

		this->button8->Text = Convert::ToString(summa);
		this->button8->Text = Math::Round(summa, 2).ToString();
	    
		this->button9->Text = Convert::ToString(summa - Convert::ToDouble(this->textBox1->Text));
		l = Convert::ToDouble(this->button9->Text); 
		this->button9->Text = Math::Round(l, 2).ToString();
	}  
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

};
}
 