#pragma once

namespace WinProba {

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
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Label^ result_label;
	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn_pls_mns;
	private: System::Windows::Forms::Button^ btn_present;






	private: System::Windows::Forms::Button^ btn_devide;
	private: System::Windows::Forms::Button^ btn_mult;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btn_minus;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ btn_plus;

	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ btn_eq;
	private: System::Windows::Forms::Button^ btn_dot;




	private: System::Windows::Forms::Button^ button20;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_eq = false;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->result_label = (gcnew System::Windows::Forms::Label());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn_pls_mns = (gcnew System::Windows::Forms::Button());
			this->btn_present = (gcnew System::Windows::Forms::Button());
			this->btn_devide = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->btn_eq = (gcnew System::Windows::Forms::Button());
			this->btn_dot = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_exit->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_exit->Location = System::Drawing::Point(12, 12);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(33, 22);
			this->btn_exit->TabIndex = 0;
			this->btn_exit->Text = L"X";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyForm::btn_exit_Click);
			// 
			// result_label
			// 
			this->result_label->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->result_label->Location = System::Drawing::Point(11, 12);
			this->result_label->Name = L"result_label";
			this->result_label->Size = System::Drawing::Size(260, 68);
			this->result_label->TabIndex = 1;
			this->result_label->Text = L"0";
			this->result_label->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_ac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_ac->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_ac->Location = System::Drawing::Point(12, 103);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(60, 50);
			this->btn_ac->TabIndex = 2;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &MyForm::btn_ac_Click);
			// 
			// btn_pls_mns
			// 
			this->btn_pls_mns->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_pls_mns->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_pls_mns->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_pls_mns->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_pls_mns->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_pls_mns->Location = System::Drawing::Point(78, 103);
			this->btn_pls_mns->Name = L"btn_pls_mns";
			this->btn_pls_mns->Size = System::Drawing::Size(60, 50);
			this->btn_pls_mns->TabIndex = 3;
			this->btn_pls_mns->Text = L"+/-";
			this->btn_pls_mns->UseVisualStyleBackColor = false;
			this->btn_pls_mns->Click += gcnew System::EventHandler(this, &MyForm::btn_pls_mns_Click);
			// 
			// btn_present
			// 
			this->btn_present->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_present->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_present->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_present->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_present->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_present->Location = System::Drawing::Point(144, 103);
			this->btn_present->Name = L"btn_present";
			this->btn_present->Size = System::Drawing::Size(60, 50);
			this->btn_present->TabIndex = 4;
			this->btn_present->Text = L"%";
			this->btn_present->UseVisualStyleBackColor = false;
			this->btn_present->Click += gcnew System::EventHandler(this, &MyForm::btn_present_Click);
			// 
			// btn_devide
			// 
			this->btn_devide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_devide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_devide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_devide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_devide->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_devide->Location = System::Drawing::Point(210, 103);
			this->btn_devide->Name = L"btn_devide";
			this->btn_devide->Size = System::Drawing::Size(60, 50);
			this->btn_devide->TabIndex = 5;
			this->btn_devide->Text = L"/";
			this->btn_devide->UseVisualStyleBackColor = false;
			this->btn_devide->Click += gcnew System::EventHandler(this, &MyForm::btn_devide_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_mult->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_mult->Location = System::Drawing::Point(210, 159);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(60, 50);
			this->btn_mult->TabIndex = 9;
			this->btn_mult->Text = L"*";
			this->btn_mult->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::Window;
			this->button6->Location = System::Drawing::Point(144, 159);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(60, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::Window;
			this->button7->Location = System::Drawing::Point(78, 159);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 50);
			this->button7->TabIndex = 7;
			this->button7->Text = L"8";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::Window;
			this->button8->Location = System::Drawing::Point(12, 159);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 50);
			this->button8->TabIndex = 6;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_minus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_minus->Location = System::Drawing::Point(210, 215);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(60, 50);
			this->btn_minus->TabIndex = 13;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::Window;
			this->button10->Location = System::Drawing::Point(144, 215);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(60, 50);
			this->button10->TabIndex = 12;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::Window;
			this->button11->Location = System::Drawing::Point(78, 215);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(60, 50);
			this->button11->TabIndex = 11;
			this->button11->Text = L"5";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::Window;
			this->button12->Location = System::Drawing::Point(12, 215);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(60, 50);
			this->button12->TabIndex = 10;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_plus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_plus->Location = System::Drawing::Point(210, 271);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(60, 50);
			this->btn_plus->TabIndex = 17;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::Window;
			this->button14->Location = System::Drawing::Point(144, 271);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(60, 50);
			this->button14->TabIndex = 16;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::Window;
			this->button15->Location = System::Drawing::Point(78, 271);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(60, 50);
			this->button15->TabIndex = 15;
			this->button15->Text = L"2";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::Window;
			this->button16->Location = System::Drawing::Point(12, 271);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(60, 50);
			this->button16->TabIndex = 14;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// btn_eq
			// 
			this->btn_eq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->btn_eq->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_eq->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_eq->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_eq->Location = System::Drawing::Point(210, 327);
			this->btn_eq->Name = L"btn_eq";
			this->btn_eq->Size = System::Drawing::Size(60, 50);
			this->btn_eq->TabIndex = 21;
			this->btn_eq->Text = L"=";
			this->btn_eq->UseVisualStyleBackColor = false;
			this->btn_eq->Click += gcnew System::EventHandler(this, &MyForm::btn_eq_Click);
			// 
			// btn_dot
			// 
			this->btn_dot->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btn_dot->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_dot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_dot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_dot->ForeColor = System::Drawing::SystemColors::Window;
			this->btn_dot->Location = System::Drawing::Point(144, 327);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(60, 50);
			this->btn_dot->TabIndex = 20;
			this->btn_dot->Text = L",";
			this->btn_dot->UseVisualStyleBackColor = false;
			this->btn_dot->Click += gcnew System::EventHandler(this, &MyForm::btn_dot_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::Window;
			this->button20->Location = System::Drawing::Point(12, 327);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(126, 50);
			this->button20->TabIndex = 18;
			this->button20->Text = L"0";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::NumberClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(284, 390);
			this->Controls->Add(this->btn_eq);
			this->Controls->Add(this->btn_dot);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btn_devide);
			this->Controls->Add(this->btn_present);
			this->Controls->Add(this->btn_pls_mns);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->result_label);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void NumberClick(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->ForeColor = Color::FromArgb(94, 132, 224);
		Button^ button = safe_cast<Button^>(sender);

		if (this->result_label->Text == "0" || is_eq) {
			this->result_label->Text = button->Text;
			is_eq = false;
		}
		else {
			this->result_label->Text = this->result_label->Text + button->Text;
		}
	}
	private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		MathAction('+');
	}
	private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		MathAction('-');
	}
	private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		MathAction('*');
	}
	private: System::Void btn_devide_Click(System::Object^ sender, System::EventArgs^ e) {
		MathAction('/');
	}

	private: System::Void MathAction(char action) {
		this->first_num = System::Convert::ToDouble(this->result_label->Text);
		this->user_action = action;
		this->result_label->Text = "0";
	}
	private: System::Void btn_eq_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ') {
			return;
		}
		
		float second = System::Convert::ToDouble(this->result_label->Text);
		float res;
		switch (this->user_action) {
		case '+': res = this->first_num + second; break;
		case '-': res = this->first_num - second; break;
		case '*': res = this->first_num * second; break;
		case '%': res = this->first_num * second / 100; break;
		case '/': 
			if (second == 0) {
				res = 0;
				this->result_label->ForeColor = Color::DarkRed;
				MessageBox::Show(this, "ƒействие запрещено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				res = this->first_num / second;
			}
			break;
		}
		is_eq = true;
		this->result_label->Text = System::Convert::ToString(res);
	}
	private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
		this->result_label->Text = "0";
		this->result_label->ForeColor = Color::FromArgb(94, 132, 224);
		this->first_num = 0;
		this->user_action = ' ';
		this->is_eq = false;
	}
	private: System::Void btn_pls_mns_Click(System::Object^ sender, System::EventArgs^ e) {
		float num = System::Convert::ToDouble(this->result_label->Text);
		num *= -1;
		this->result_label->Text = System::Convert::ToString(num);
	}
	private: System::Void btn_present_Click(System::Object^ sender, System::EventArgs^ e) {
		MathAction('%');
	}
	private: System::Void btn_dot_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->result_label->Text;
		if (!text->Contains(",")) {
			this->result_label->Text = text + ",";
		}		
	}
};
}
