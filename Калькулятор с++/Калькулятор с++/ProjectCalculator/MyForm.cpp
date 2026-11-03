#include "MyForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ProjectCalculator::MyForm form;
	Application::Run(% form);

}

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
		this->SuspendLayout();
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::MenuHighlight;
		this->ClientSize = System::Drawing::Size(284, 261);
		this->ForeColor = System::Drawing::SystemColors::ControlText;
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
		this->Name = L"MyForm";
		this->Text = L"~ Calculator ~";
		this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
		this->ResumeLayout(false);

	}
#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};


