#pragma once

namespace work30 {

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
	public:
		MyForm(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Label^ result_label;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ btn_change;

	private: System::Windows::Forms::Button^ btn_div;

	private: System::Windows::Forms::Button^ btn_mult;

	private: System::Windows::Forms::Button^ btn_min;

	private: System::Windows::Forms::Button^ btn_add;
	private: System::Windows::Forms::Button^ btn_clear;




	private: System::Windows::Forms::Button^ btn_equal;

	private: int first_number;
	private: char user_action = ' ';
	private: bool is_equal = false;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->btn_change = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->btn_min = (gcnew System::Windows::Forms::Button());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_clear = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->BackColor = System::Drawing::Color::Red;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->btn_close->Location = System::Drawing::Point(1, 2);
			this->btn_close->Margin = System::Windows::Forms::Padding(5);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(81, 76);
			this->btn_close->TabIndex = 0;
			this->btn_close->Text = L"X";
			this->btn_close->UseVisualStyleBackColor = false;
			this->btn_close->UseWaitCursor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::btn_close_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result_label->Location = System::Drawing::Point(152, 2);
			this->result_label->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(289, 95);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result_label->UseWaitCursor = true;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(45, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(157, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 60);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->UseWaitCursor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(275, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(60, 60);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->UseWaitCursor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(45, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(60, 60);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->UseWaitCursor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(157, 290);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(60, 60);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->UseWaitCursor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(275, 290);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 60);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->UseWaitCursor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(47, 368);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 60);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->UseWaitCursor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(157, 368);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 60);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->UseWaitCursor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(275, 368);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(60, 60);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->UseWaitCursor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(47, 446);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 60);
			this->button10->TabIndex = 11;
			this->button10->Text = L".";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->UseWaitCursor = true;
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(157, 446);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 60);
			this->button11->TabIndex = 12;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->UseWaitCursor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::BtnNum_Click);
			// 
			// btn_change
			// 
			this->btn_change->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_change->Location = System::Drawing::Point(275, 446);
			this->btn_change->Name = L"btn_change";
			this->btn_change->Size = System::Drawing::Size(60, 60);
			this->btn_change->TabIndex = 13;
			this->btn_change->Text = L"+/-";
			this->btn_change->UseVisualStyleBackColor = true;
			this->btn_change->UseWaitCursor = true;
			this->btn_change->Click += gcnew System::EventHandler(this, &MyForm::btn_change_Click);
			// 
			// btn_div
			// 
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_div->Location = System::Drawing::Point(381, 446);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(60, 60);
			this->btn_div->TabIndex = 14;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = true;
			this->btn_div->UseWaitCursor = true;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mult->Location = System::Drawing::Point(381, 368);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 60);
			this->btn_mult->TabIndex = 15;
			this->btn_mult->Text = L"*";
			this->btn_mult->UseVisualStyleBackColor = true;
			this->btn_mult->UseWaitCursor = true;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// btn_min
			// 
			this->btn_min->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_min->Location = System::Drawing::Point(381, 290);
			this->btn_min->Name = L"btn_min";
			this->btn_min->Size = System::Drawing::Size(60, 60);
			this->btn_min->TabIndex = 16;
			this->btn_min->Text = L"-";
			this->btn_min->UseVisualStyleBackColor = true;
			this->btn_min->UseWaitCursor = true;
			this->btn_min->Click += gcnew System::EventHandler(this, &MyForm::btn_min_Click);
			// 
			// btn_add
			// 
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Location = System::Drawing::Point(381, 212);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(60, 60);
			this->btn_add->TabIndex = 17;
			this->btn_add->Text = L"+";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->UseWaitCursor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &MyForm::btn_add_Click);
			// 
			// btn_clear
			// 
			this->btn_clear->BackColor = System::Drawing::Color::Coral;
			this->btn_clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clear->Location = System::Drawing::Point(45, 126);
			this->btn_clear->Name = L"btn_clear";
			this->btn_clear->Size = System::Drawing::Size(172, 60);
			this->btn_clear->TabIndex = 18;
			this->btn_clear->Text = L"AC";
			this->btn_clear->UseVisualStyleBackColor = false;
			this->btn_clear->UseWaitCursor = true;
			this->btn_clear->Click += gcnew System::EventHandler(this, &MyForm::btn_clear_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::Moccasin;
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_equal->Location = System::Drawing::Point(275, 126);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(166, 60);
			this->btn_equal->TabIndex = 19;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->UseWaitCursor = true;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(495, 552);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_clear);
			this->Controls->Add(this->btn_add);
			this->Controls->Add(this->btn_min);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_change);
			this->Controls->Add(this->button11);
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
			this->Controls->Add(this->result_label);
			this->Controls->Add(this->btn_close);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->UseWaitCursor = true;
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void BtnNum_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (this->result_label->Text == "0" || this->is_equal == true) {
			this->result_label->Text = button->Text;
			this->is_equal = false;
		}
		else {
			this->result_label->Text = this->result_label->Text + button->Text;
		}
		
	}
	
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void btn_min_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void math_action(char action) {
		this->first_number = System::Convert::ToInt32(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}
	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') {
			return;
		}
		int following_num = System::Convert::ToInt32(this->result_label->Text);
		int res;
		switch (this->user_action) {
		case '+':
			res = this->first_number + following_num;
			break;
		case '-':
			res = this->first_number - following_num;
			break;
		case '*':
			res = this->first_number * following_num;
			break;
		case '/':
			if (following_num == 0) {
				res = 0;
				MessageBox::Show(this, "Деление на 0 запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				res = this->first_number / following_num;
				break;
			}
			
		}
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->first_number = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
	private: System::Void btn_change_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = System::Convert::ToInt32(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}
};
}