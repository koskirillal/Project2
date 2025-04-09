#pragma once

namespace Project2 {

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
	private: System::Windows::Forms::Button^ ExitB;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ b_C;
	private: System::Windows::Forms::Button^ b_delete;


	private: System::Windows::Forms::Button^ b_delen;





	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ b_umnog;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ b_minus;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ b_plus;
	private: System::Windows::Forms::Button^ b_stepen;


	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ b_target;

	private: System::Windows::Forms::Button^ b_ravno;
	private: float first_num;
	private:char useraction = ' ';
	private:bool is_equal = false;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ExitB = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->b_C = (gcnew System::Windows::Forms::Button());
			this->b_delete = (gcnew System::Windows::Forms::Button());
			this->b_delen = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->b_umnog = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->b_minus = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->b_plus = (gcnew System::Windows::Forms::Button());
			this->b_stepen = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->b_target = (gcnew System::Windows::Forms::Button());
			this->b_ravno = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ExitB
			// 
			this->ExitB->BackColor = System::Drawing::Color::Red;
			this->ExitB->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitB->ForeColor = System::Drawing::SystemColors::Window;
			this->ExitB->Location = System::Drawing::Point(242, 12);
			this->ExitB->Name = L"ExitB";
			this->ExitB->Size = System::Drawing::Size(30, 30);
			this->ExitB->TabIndex = 0;
			this->ExitB->Text = L"X";
			this->ExitB->UseVisualStyleBackColor = false;
			this->ExitB->Click += gcnew System::EventHandler(this, &MyForm::ExitB_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 89);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// b_C
			// 
			this->b_C->BackColor = System::Drawing::Color::Black;
			this->b_C->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_C->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_C->Location = System::Drawing::Point(8, 129);
			this->b_C->Name = L"b_C";
			this->b_C->Size = System::Drawing::Size(61, 55);
			this->b_C->TabIndex = 2;
			this->b_C->Text = L"C";
			this->b_C->UseVisualStyleBackColor = false;
			this->b_C->Click += gcnew System::EventHandler(this, &MyForm::b_C_Click);
			// 
			// b_delete
			// 
			this->b_delete->BackColor = System::Drawing::Color::Black;
			this->b_delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_delete->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_delete->Location = System::Drawing::Point(75, 129);
			this->b_delete->Name = L"b_delete";
			this->b_delete->Size = System::Drawing::Size(61, 55);
			this->b_delete->TabIndex = 3;
			this->b_delete->Text = L"<";
			this->b_delete->UseVisualStyleBackColor = false;
			this->b_delete->Click += gcnew System::EventHandler(this, &MyForm::b_delete_Click);
			// 
			// b_delen
			// 
			this->b_delen->BackColor = System::Drawing::Color::Black;
			this->b_delen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_delen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_delen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_delen->Location = System::Drawing::Point(206, 129);
			this->b_delen->Name = L"b_delen";
			this->b_delen->Size = System::Drawing::Size(59, 55);
			this->b_delen->TabIndex = 5;
			this->b_delen->Text = L"/";
			this->b_delen->UseVisualStyleBackColor = false;
			this->b_delen->Click += gcnew System::EventHandler(this, &MyForm::b_delen_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(12, 190);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 55);
			this->button5->TabIndex = 7;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(75, 190);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(61, 55);
			this->button6->TabIndex = 8;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(139, 190);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(61, 55);
			this->button7->TabIndex = 9;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// b_umnog
			// 
			this->b_umnog->BackColor = System::Drawing::Color::Black;
			this->b_umnog->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_umnog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_umnog->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_umnog->Location = System::Drawing::Point(204, 190);
			this->b_umnog->Name = L"b_umnog";
			this->b_umnog->Size = System::Drawing::Size(61, 55);
			this->b_umnog->TabIndex = 10;
			this->b_umnog->Text = L"*";
			this->b_umnog->UseVisualStyleBackColor = false;
			this->b_umnog->Click += gcnew System::EventHandler(this, &MyForm::b_umnog_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(8, 251);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(61, 55);
			this->button9->TabIndex = 11;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(75, 251);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(61, 55);
			this->button10->TabIndex = 12;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(139, 251);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(61, 55);
			this->button11->TabIndex = 13;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// b_minus
			// 
			this->b_minus->BackColor = System::Drawing::Color::Black;
			this->b_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_minus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_minus->Location = System::Drawing::Point(204, 251);
			this->b_minus->Name = L"b_minus";
			this->b_minus->Size = System::Drawing::Size(61, 55);
			this->b_minus->TabIndex = 14;
			this->b_minus->Text = L"-";
			this->b_minus->UseVisualStyleBackColor = false;
			this->b_minus->Click += gcnew System::EventHandler(this, &MyForm::b_minus_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(8, 312);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(61, 55);
			this->button13->TabIndex = 15;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(75, 312);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(61, 55);
			this->button14->TabIndex = 16;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(139, 312);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(61, 55);
			this->button15->TabIndex = 17;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// b_plus
			// 
			this->b_plus->BackColor = System::Drawing::Color::Black;
			this->b_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_plus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_plus->Location = System::Drawing::Point(204, 312);
			this->b_plus->Name = L"b_plus";
			this->b_plus->Size = System::Drawing::Size(61, 55);
			this->b_plus->TabIndex = 18;
			this->b_plus->Text = L"+";
			this->b_plus->UseVisualStyleBackColor = false;
			this->b_plus->Click += gcnew System::EventHandler(this, &MyForm::b_plus_Click);
			// 
			// b_stepen
			// 
			this->b_stepen->BackColor = System::Drawing::Color::Black;
			this->b_stepen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_stepen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_stepen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_stepen->Location = System::Drawing::Point(8, 373);
			this->b_stepen->Name = L"b_stepen";
			this->b_stepen->Size = System::Drawing::Size(61, 55);
			this->b_stepen->TabIndex = 19;
			this->b_stepen->Text = L"^";
			this->b_stepen->UseVisualStyleBackColor = false;
			this->b_stepen->Click += gcnew System::EventHandler(this, &MyForm::b_stepen_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(75, 373);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(61, 55);
			this->button18->TabIndex = 20;
			this->button18->Text = L"0";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::Button_number_click);
			// 
			// b_target
			// 
			this->b_target->BackColor = System::Drawing::Color::Black;
			this->b_target->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_target->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_target->ForeColor = System::Drawing::Color::White;
			this->b_target->Location = System::Drawing::Point(139, 373);
			this->b_target->Name = L"b_target";
			this->b_target->Size = System::Drawing::Size(61, 55);
			this->b_target->TabIndex = 21;
			this->b_target->Text = L".";
			this->b_target->UseVisualStyleBackColor = false;
			this->b_target->Click += gcnew System::EventHandler(this, &MyForm::b_target_Click);
			// 
			// b_ravno
			// 
			this->b_ravno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->b_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b_ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_ravno->ForeColor = System::Drawing::Color::White;
			this->b_ravno->Location = System::Drawing::Point(204, 373);
			this->b_ravno->Name = L"b_ravno";
			this->b_ravno->Size = System::Drawing::Size(61, 55);
			this->b_ravno->TabIndex = 22;
			this->b_ravno->Text = L"=";
			this->b_ravno->UseVisualStyleBackColor = false;
			this->b_ravno->Click += gcnew System::EventHandler(this, &MyForm::b_ravno_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(72)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(139, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 55);
			this->button1->TabIndex = 23;
			this->button1->Text = L"+/-";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(286, 461);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->b_ravno);
			this->Controls->Add(this->b_target);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->b_stepen);
			this->Controls->Add(this->b_plus);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->b_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->b_umnog);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->b_delen);
			this->Controls->Add(this->b_delete);
			this->Controls->Add(this->b_C);
			this->Controls->Add(this->ExitB);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Culculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ExitB_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Button_number_click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (this->label1->Text == "0" || is_equal == true) {
			this->label1->Text = button->Text;
			is_equal = false;
		}
		else
			this->label1->Text += button->Text;

	}
	
	private: System::Void b_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_action('+');
	}
	private: System::Void b_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_action('-');
	}
	private: System::Void b_umnog_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_action('*');
	}
	private: System::Void b_delen_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_action('/');
	}
	private: System::Void b_stepen_Click(System::Object^ sender, System::EventArgs^ e) {
		Math_action('^');
	}
	private: System::Void Math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->label1->Text);
		this->useraction = action;
		this->label1->Text = "0";

	}
	private: System::Void b_ravno_Click(System::Object^ sender, System::EventArgs^ e) {
		if (useraction == ' ') {
			return;
		}
		this->label1->ForeColor = Color::White;
		float second = System::Convert::ToDouble(this->label1->Text);
		float res = 0;
		switch (this->useraction)
		{
		case '+':res = this->first_num + second; break;
		case '-':
			if (this->first_num == 0) {
				res = second * -1;
			}
			else {
				res = this->first_num - second; 
			}
			break;
		case '*':res = this->first_num * second; break;
		case '/':
			if (second == 0) {
				res = 0;
				this->label1->ForeColor = Color::Red;
				MessageBox::Show(this, "ERROR", "???", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				res = this->first_num / second;
			}
			break;
		case '^':
			res = 1;
			for (int i = 0 ; i < second;i++){
				res = res * this->first_num;
			}
			break;
		}
		is_equal = true;
		this->label1->Text = System::Convert::ToString(res);
	}

	private: System::Void b_C_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Text = "0";
		this->label1->ForeColor = Color::White;
		this->first_num = 0;
		this->useraction = ' ';
		this->is_equal = false;
	}
	private: System::Void b_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->label1->Text != "0") {
			float nnum = System::Convert::ToDouble(this->label1->Text);
			nnum = nnum / 10;
			this->label1->Text = System::Convert::ToString(nnum);	
		}
	}
	private: System::Void b_target_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->label1->Text->Contains(",") == false) {
			this->label1->Text = this->label1->Text + ",";
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->label1->Text);
		num *= -1;
		this->label1->Text = System::Convert::ToString(num);
	}
};
}
