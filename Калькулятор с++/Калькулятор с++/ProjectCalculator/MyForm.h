#pragma once
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <cmath>
namespace ProjectCalculator 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ button_mult;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;



	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btn_minus_plus;
	private: System::Windows::Forms::Button^ btn_percent;










	private: System::Windows::Forms::Button^ button_divide;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_dot;




	private: System::Windows::Forms::Button^ button_equal;

	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button9;


	private: System::Windows::Forms::Button^ button8;

	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	private: System::Windows::Forms::Button^ btn_pow;
	private: System::Windows::Forms::Button^ btn_sqrt;


























	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->button_mult = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btn_minus_plus = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_pow = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_exit->Location = System::Drawing::Point(12, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(28, 24);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result_label->ForeColor = System::Drawing::SystemColors::Control;
			this->result_label->Location = System::Drawing::Point(12, 12);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(278, 66);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->result_label->Click += gcnew System::EventHandler(this, &MyForm::result_label_Click);
			// 
			// button_mult
			// 
			this->button_mult->BackColor = System::Drawing::Color::Violet;
			this->button_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_mult->ForeColor = System::Drawing::SystemColors::Control;
			this->button_mult->Location = System::Drawing::Point(225, 264);
			this->button_mult->Name = L"button_mult";
			this->button_mult->Size = System::Drawing::Size(65, 55);
			this->button_mult->TabIndex = 3;
			this->button_mult->Text = L"*";
			this->button_mult->UseVisualStyleBackColor = false;
			this->button_mult->Click += gcnew System::EventHandler(this, &MyForm::button_mult_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Plum;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(154, 142);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(65, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Plum;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(83, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 55);
			this->button2->TabIndex = 5;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Plum;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(11, 142);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(65, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Plum;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(83, 203);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 55);
			this->button5->TabIndex = 9;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Plum;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(154, 203);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::Violet;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::Control;
			this->button_minus->Location = System::Drawing::Point(225, 203);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(65, 55);
			this->button_minus->TabIndex = 7;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Plum;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(12, 203);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(65, 55);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_minus_plus
			// 
			this->btn_minus_plus->BackColor = System::Drawing::Color::Violet;
			this->btn_minus_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_minus_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus_plus->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_minus_plus->Location = System::Drawing::Point(63, 81);
			this->btn_minus_plus->Name = L"btn_minus_plus";
			this->btn_minus_plus->Size = System::Drawing::Size(51, 55);
			this->btn_minus_plus->TabIndex = 17;
			this->btn_minus_plus->Text = L"+/-";
			this->btn_minus_plus->UseVisualStyleBackColor = false;
			this->btn_minus_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_plus_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::Color::Violet;
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_percent->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_percent->Location = System::Drawing::Point(119, 81);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(29, 55);
			this->btn_percent->TabIndex = 16;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &MyForm::btn_percent_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::Color::Violet;
			this->button_divide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_divide->ForeColor = System::Drawing::SystemColors::Control;
			this->button_divide->Location = System::Drawing::Point(225, 325);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(64, 55);
			this->button_divide->TabIndex = 15;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &MyForm::button_divide_Click);
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::Color::Violet;
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold));
			this->btn_ac->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_ac->Location = System::Drawing::Point(12, 81);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(45, 55);
			this->btn_ac->TabIndex = 14;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::Plum;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_dot->Location = System::Drawing::Point(12, 325);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(65, 55);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L",";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::Color::Violet;
			this->button_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_equal->ForeColor = System::Drawing::SystemColors::Control;
			this->button_equal->Location = System::Drawing::Point(154, 325);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(65, 55);
			this->button_equal->TabIndex = 19;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Plum;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::Control;
			this->button21->Location = System::Drawing::Point(82, 325);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(66, 55);
			this->button21->TabIndex = 18;
			this->button21->Text = L"0";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Plum;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(12, 264);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 10;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::Violet;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::Control;
			this->button_plus->Location = System::Drawing::Point(225, 142);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(65, 55);
			this->button_plus->TabIndex = 11;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Plum;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(154, 264);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 55);
			this->button9->TabIndex = 12;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Plum;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(83, 264);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(65, 55);
			this->button8->TabIndex = 13;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::BtnNumber_Click);
			// 
			// btn_pow
			// 
			this->btn_pow->BackColor = System::Drawing::Color::Violet;
			this->btn_pow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_pow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->btn_pow->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_pow->Location = System::Drawing::Point(153, 81);
			this->btn_pow->Name = L"btn_pow";
			this->btn_pow->Size = System::Drawing::Size(66, 55);
			this->btn_pow->TabIndex = 21;
			this->btn_pow->Text = L"pow";
			this->btn_pow->UseVisualStyleBackColor = false;
			this->btn_pow->Click += gcnew System::EventHandler(this, &MyForm::btn_pow_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::Color::Violet;
			this->btn_sqrt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->btn_sqrt->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_sqrt->Location = System::Drawing::Point(225, 81);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(63, 55);
			this->btn_sqrt->TabIndex = 22;
			this->btn_sqrt->Text = L"sqrt";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MediumOrchid;
			this->ClientSize = System::Drawing::Size(300, 392);
			this->Controls->Add(this->btn_sqrt);
			this->Controls->Add(this->btn_pow);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->btn_minus_plus);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button_mult);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->result_label);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"~ Calculator ~";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}
	private: System::Void BtnNumber_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->result_label->ForeColor = Color::White;
		Button^ button = safe_cast<Button^>(sender);

		if (this->result_label->Text == "0" || is_equal) {
			this->result_label->Text = button->Text;
			is_equal = false;
		}
		else
			this->result_label->Text = this->result_label->Text + button->Text;
	}



	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void button_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');

	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";

	}
	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;
		float second = System::Convert::ToInt32(this->result_label->Text);
		float res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '^2': res = this->first_num * first_num; break;
		case '/':
			if (second == 0) {
				res = 0;
				this->result_label->ForeColor = Color::Red;
				MessageBox::Show(this, "ƒействие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				res = this->first_num / second;
			break;
		}
		this->is_equal = true;
		this->result_label->Text = System::Convert::ToString(res);

	}
	private: System::Void result_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::White;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;

	}
	private: System::Void btn_minus_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);

	}

	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_label->Text;
		if (!text->Contains(","))
			this->result_label->Text = text + ",";
	}
	private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void btn_pow_Click(System::Object^ sender, System::EventArgs^ e) {
		int num, result_label;
		num = System::Convert::ToDouble(this->result_label->Text);
		result_label = num * num;
		this->result_label->Text = System::Convert::ToString(result_label);
	}
	private: System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		double num, result_label;
		num = System::Convert::ToDouble(this->result_label->Text);
		result_label = sqrt(num);
		this->result_label->Text = System::Convert::ToString(result_label);
	}
	

		   
	};
}
