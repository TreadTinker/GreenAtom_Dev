#include "rel_sum.h"
#include <stdio.h>
#include <typeinfo>
#include <iostream>
#include <sstream>
#include <string>
#pragma once

namespace GreenAtomDev {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
















	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ percent_textBox;
	private: System::Windows::Forms::TextBox^ summa_textBox;


	private: System::Windows::Forms::Button^ btn_otchet;
	private: System::Windows::Forms::Button^ btn_raschet;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::DateTimePicker^ date_end_tab2;


	private: System::Windows::Forms::DateTimePicker^ date_start_tab2;

	private: System::Windows::Forms::Label^ date_change;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ percent_tab2;


	private: System::Windows::Forms::TextBox^ summa_tab2;

	private: System::Windows::Forms::Label^ new_percent;
	private: System::Windows::Forms::DateTimePicker^ newpercent_date_tab2;


	private: System::Windows::Forms::TextBox^ new_percent_tab2;


	private: System::Windows::Forms::Label^ summ_label;
	private: System::Windows::Forms::Label^ percent_label;
	private: System::Windows::Forms::Label^ dateEnd_label;
	private: System::Windows::Forms::Label^ dateStart_label;
	private: System::Windows::Forms::Label^ summa_percent_label;
	private: System::Windows::Forms::Label^ summa_percent_zaim;
	private: System::Windows::Forms::Button^ btn_tab2_raschet;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btn_raschet_tab3;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ date_end_label_tab3;
	private: System::Windows::Forms::TextBox^ summ_gashenmia_tab3;
	private: System::Windows::Forms::DateTimePicker^ date_end_chast_tab3;
	private: System::Windows::Forms::TextBox^ new_percent_tab3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DateTimePicker^ date_change_tab3;
	private: System::Windows::Forms::DateTimePicker^ date_end_tab3;
	private: System::Windows::Forms::DateTimePicker^ date_start_tab3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ percent_tab3;
	private: System::Windows::Forms::TextBox^ summ_zaim_tab3;
	private: System::Windows::Forms::Label^ repayment_summ_label;






















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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->summa_percent_zaim = (gcnew System::Windows::Forms::Label());
			this->summa_percent_label = (gcnew System::Windows::Forms::Label());
			this->dateEnd_label = (gcnew System::Windows::Forms::Label());
			this->dateStart_label = (gcnew System::Windows::Forms::Label());
			this->percent_label = (gcnew System::Windows::Forms::Label());
			this->summ_label = (gcnew System::Windows::Forms::Label());
			this->btn_otchet = (gcnew System::Windows::Forms::Button());
			this->btn_raschet = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->percent_textBox = (gcnew System::Windows::Forms::TextBox());
			this->summa_textBox = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_tab2_raschet = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->new_percent_tab2 = (gcnew System::Windows::Forms::TextBox());
			this->new_percent = (gcnew System::Windows::Forms::Label());
			this->newpercent_date_tab2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_end_tab2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_start_tab2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_change = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->percent_tab2 = (gcnew System::Windows::Forms::TextBox());
			this->summa_tab2 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->repayment_summ_label = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btn_raschet_tab3 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->date_end_label_tab3 = (gcnew System::Windows::Forms::Label());
			this->summ_gashenmia_tab3 = (gcnew System::Windows::Forms::TextBox());
			this->date_end_chast_tab3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->new_percent_tab3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->date_change_tab3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_end_tab3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->date_start_tab3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->percent_tab3 = (gcnew System::Windows::Forms::TextBox());
			this->summ_zaim_tab3 = (gcnew System::Windows::Forms::TextBox());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(539, 411);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->summa_percent_zaim);
			this->tabPage1->Controls->Add(this->summa_percent_label);
			this->tabPage1->Controls->Add(this->dateEnd_label);
			this->tabPage1->Controls->Add(this->dateStart_label);
			this->tabPage1->Controls->Add(this->percent_label);
			this->tabPage1->Controls->Add(this->summ_label);
			this->tabPage1->Controls->Add(this->btn_otchet);
			this->tabPage1->Controls->Add(this->btn_raschet);
			this->tabPage1->Controls->Add(this->dateTimePicker2);
			this->tabPage1->Controls->Add(this->dateTimePicker1);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->percent_textBox);
			this->tabPage1->Controls->Add(this->summa_textBox);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(531, 385);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Срочный займ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// summa_percent_zaim
			// 
			this->summa_percent_zaim->AutoSize = true;
			this->summa_percent_zaim->Location = System::Drawing::Point(150, 257);
			this->summa_percent_zaim->Name = L"summa_percent_zaim";
			this->summa_percent_zaim->Size = System::Drawing::Size(0, 13);
			this->summa_percent_zaim->TabIndex = 58;
			// 
			// summa_percent_label
			// 
			this->summa_percent_label->AutoSize = true;
			this->summa_percent_label->Location = System::Drawing::Point(16, 256);
			this->summa_percent_label->Name = L"summa_percent_label";
			this->summa_percent_label->Size = System::Drawing::Size(104, 13);
			this->summa_percent_label->TabIndex = 57;
			this->summa_percent_label->Text = L"Сумма % по займу:";
			// 
			// dateEnd_label
			// 
			this->dateEnd_label->AutoSize = true;
			this->dateEnd_label->Location = System::Drawing::Point(150, 187);
			this->dateEnd_label->Name = L"dateEnd_label";
			this->dateEnd_label->Size = System::Drawing::Size(0, 13);
			this->dateEnd_label->TabIndex = 56;
			// 
			// dateStart_label
			// 
			this->dateStart_label->AutoSize = true;
			this->dateStart_label->Location = System::Drawing::Point(150, 163);
			this->dateStart_label->Name = L"dateStart_label";
			this->dateStart_label->Size = System::Drawing::Size(0, 13);
			this->dateStart_label->TabIndex = 55;
			// 
			// percent_label
			// 
			this->percent_label->AutoSize = true;
			this->percent_label->Location = System::Drawing::Point(150, 233);
			this->percent_label->Name = L"percent_label";
			this->percent_label->Size = System::Drawing::Size(0, 13);
			this->percent_label->TabIndex = 54;
			// 
			// summ_label
			// 
			this->summ_label->AutoSize = true;
			this->summ_label->Location = System::Drawing::Point(150, 210);
			this->summ_label->Name = L"summ_label";
			this->summ_label->Size = System::Drawing::Size(0, 13);
			this->summ_label->TabIndex = 53;
			// 
			// btn_otchet
			// 
			this->btn_otchet->Location = System::Drawing::Point(396, 69);
			this->btn_otchet->Name = L"btn_otchet";
			this->btn_otchet->Size = System::Drawing::Size(119, 33);
			this->btn_otchet->TabIndex = 51;
			this->btn_otchet->Text = L"Отчет";
			this->btn_otchet->UseVisualStyleBackColor = true;
			// 
			// btn_raschet
			// 
			this->btn_raschet->Location = System::Drawing::Point(396, 17);
			this->btn_raschet->Name = L"btn_raschet";
			this->btn_raschet->Size = System::Drawing::Size(120, 33);
			this->btn_raschet->TabIndex = 50;
			this->btn_raschet->Text = L"Рассчитать";
			this->btn_raschet->UseVisualStyleBackColor = true;
			this->btn_raschet->Click += gcnew System::EventHandler(this, &MyForm::btn_raschet_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(150, 43);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(148, 20);
			this->dateTimePicker2->TabIndex = 49;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker1->Location = System::Drawing::Point(150, 17);
			this->dateTimePicker1->MaxDate = System::DateTime(2100, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(148, 20);
			this->dateTimePicker1->TabIndex = 48;
			this->dateTimePicker1->Value = System::DateTime(2023, 3, 9, 21, 17, 51, 0);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 102);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 46;
			this->label10->Text = L"Процентная ставка";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 13);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Сумма займа";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Дата гашения";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 23);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 13);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Дата выдачи";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 41;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 13);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Процентная ставка, %: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Сумма займа: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Дата гашения: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 164);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Дата выдачи: ";
			// 
			// percent_textBox
			// 
			this->percent_textBox->Location = System::Drawing::Point(150, 95);
			this->percent_textBox->Name = L"percent_textBox";
			this->percent_textBox->Size = System::Drawing::Size(148, 20);
			this->percent_textBox->TabIndex = 35;
			this->percent_textBox->WordWrap = false;
			this->percent_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::percent_textBox_TextChanged);
			// 
			// summa_textBox
			// 
			this->summa_textBox->Location = System::Drawing::Point(150, 69);
			this->summa_textBox->MaxLength = 11;
			this->summa_textBox->Name = L"summa_textBox";
			this->summa_textBox->Size = System::Drawing::Size(148, 20);
			this->summa_textBox->TabIndex = 34;
			this->summa_textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->btn_tab2_raschet);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->new_percent_tab2);
			this->tabPage2->Controls->Add(this->new_percent);
			this->tabPage2->Controls->Add(this->newpercent_date_tab2);
			this->tabPage2->Controls->Add(this->date_end_tab2);
			this->tabPage2->Controls->Add(this->date_start_tab2);
			this->tabPage2->Controls->Add(this->date_change);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->percent_tab2);
			this->tabPage2->Controls->Add(this->summa_tab2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(531, 385);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Займ с изменением процентной ставки";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 65;
			this->label6->Text = L"label6";
			// 
			// btn_tab2_raschet
			// 
			this->btn_tab2_raschet->Location = System::Drawing::Point(31, 328);
			this->btn_tab2_raschet->Name = L"btn_tab2_raschet";
			this->btn_tab2_raschet->Size = System::Drawing::Size(150, 32);
			this->btn_tab2_raschet->TabIndex = 64;
			this->btn_tab2_raschet->Text = L"Рассчитать";
			this->btn_tab2_raschet->UseVisualStyleBackColor = true;
			this->btn_tab2_raschet->Click += gcnew System::EventHandler(this, &MyForm::btn_tab2_raschet_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(346, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 32);
			this->button1->TabIndex = 63;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// new_percent_tab2
			// 
			this->new_percent_tab2->Location = System::Drawing::Point(226, 145);
			this->new_percent_tab2->Name = L"new_percent_tab2";
			this->new_percent_tab2->Size = System::Drawing::Size(148, 20);
			this->new_percent_tab2->TabIndex = 62;
			// 
			// new_percent
			// 
			this->new_percent->AutoSize = true;
			this->new_percent->Location = System::Drawing::Point(28, 152);
			this->new_percent->Name = L"new_percent";
			this->new_percent->Size = System::Drawing::Size(153, 13);
			this->new_percent->TabIndex = 61;
			this->new_percent->Text = L"Новая процентная ставка, %";
			// 
			// newpercent_date_tab2
			// 
			this->newpercent_date_tab2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->newpercent_date_tab2->Location = System::Drawing::Point(226, 119);
			this->newpercent_date_tab2->MaxDate = System::DateTime(2099, 12, 31, 0, 0, 0, 0);
			this->newpercent_date_tab2->MinDate = System::DateTime(2000, 1, 2, 0, 0, 0, 0);
			this->newpercent_date_tab2->Name = L"newpercent_date_tab2";
			this->newpercent_date_tab2->Size = System::Drawing::Size(148, 20);
			this->newpercent_date_tab2->TabIndex = 60;
			// 
			// date_end_tab2
			// 
			this->date_end_tab2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date_end_tab2->Location = System::Drawing::Point(226, 40);
			this->date_end_tab2->Name = L"date_end_tab2";
			this->date_end_tab2->Size = System::Drawing::Size(148, 20);
			this->date_end_tab2->TabIndex = 59;
			// 
			// date_start_tab2
			// 
			this->date_start_tab2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date_start_tab2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->date_start_tab2->Location = System::Drawing::Point(226, 14);
			this->date_start_tab2->MaxDate = System::DateTime(2100, 1, 1, 0, 0, 0, 0);
			this->date_start_tab2->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->date_start_tab2->Name = L"date_start_tab2";
			this->date_start_tab2->Size = System::Drawing::Size(148, 20);
			this->date_start_tab2->TabIndex = 58;
			this->date_start_tab2->Value = System::DateTime(2023, 3, 9, 21, 17, 51, 0);
			// 
			// date_change
			// 
			this->date_change->AutoSize = true;
			this->date_change->Location = System::Drawing::Point(28, 125);
			this->date_change->Name = L"date_change";
			this->date_change->Size = System::Drawing::Size(192, 13);
			this->date_change->TabIndex = 57;
			this->date_change->Text = L"Дата изменения процентной ставки";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 99);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(106, 13);
			this->label12->TabIndex = 56;
			this->label12->Text = L"Процентная ставка";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(28, 73);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(76, 13);
			this->label13->TabIndex = 55;
			this->label13->Text = L"Сумма займа";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(28, 47);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 13);
			this->label14->TabIndex = 54;
			this->label14->Text = L"Дата гашения";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(28, 20);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(73, 13);
			this->label15->TabIndex = 53;
			this->label15->Text = L"Дата выдачи";
			// 
			// percent_tab2
			// 
			this->percent_tab2->Location = System::Drawing::Point(226, 92);
			this->percent_tab2->Name = L"percent_tab2";
			this->percent_tab2->Size = System::Drawing::Size(148, 20);
			this->percent_tab2->TabIndex = 51;
			this->percent_tab2->WordWrap = false;
			// 
			// summa_tab2
			// 
			this->summa_tab2->Location = System::Drawing::Point(226, 66);
			this->summa_tab2->Name = L"summa_tab2";
			this->summa_tab2->Size = System::Drawing::Size(148, 20);
			this->summa_tab2->TabIndex = 50;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->repayment_summ_label);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->btn_raschet_tab3);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->date_end_label_tab3);
			this->tabPage3->Controls->Add(this->summ_gashenmia_tab3);
			this->tabPage3->Controls->Add(this->date_end_chast_tab3);
			this->tabPage3->Controls->Add(this->new_percent_tab3);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->date_change_tab3);
			this->tabPage3->Controls->Add(this->date_end_tab3);
			this->tabPage3->Controls->Add(this->date_start_tab3);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->percent_tab3);
			this->tabPage3->Controls->Add(this->summ_zaim_tab3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(531, 385);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Займ с досрочным гашением";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// repayment_summ_label
			// 
			this->repayment_summ_label->AutoSize = true;
			this->repayment_summ_label->Location = System::Drawing::Point(21, 247);
			this->repayment_summ_label->Name = L"repayment_summ_label";
			this->repayment_summ_label->Size = System::Drawing::Size(0, 13);
			this->repayment_summ_label->TabIndex = 81;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(278, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(144, 33);
			this->button3->TabIndex = 80;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// btn_raschet_tab3
			// 
			this->btn_raschet_tab3->Location = System::Drawing::Point(11, 340);
			this->btn_raschet_tab3->Name = L"btn_raschet_tab3";
			this->btn_raschet_tab3->Size = System::Drawing::Size(144, 33);
			this->btn_raschet_tab3->TabIndex = 79;
			this->btn_raschet_tab3->Text = L"Рассчитать";
			this->btn_raschet_tab3->UseVisualStyleBackColor = true;
			this->btn_raschet_tab3->Click += gcnew System::EventHandler(this, &MyForm::btn_raschet_tab3_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(10, 196);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(146, 13);
			this->label22->TabIndex = 78;
			this->label22->Text = L"Сумма частичного гашения";
			// 
			// date_end_label_tab3
			// 
			this->date_end_label_tab3->AutoSize = true;
			this->date_end_label_tab3->Location = System::Drawing::Point(10, 169);
			this->date_end_label_tab3->Name = L"date_end_label_tab3";
			this->date_end_label_tab3->Size = System::Drawing::Size(138, 13);
			this->date_end_label_tab3->TabIndex = 77;
			this->date_end_label_tab3->Text = L"Дата частичного гашения";
			// 
			// summ_gashenmia_tab3
			// 
			this->summ_gashenmia_tab3->Location = System::Drawing::Point(208, 189);
			this->summ_gashenmia_tab3->Name = L"summ_gashenmia_tab3";
			this->summ_gashenmia_tab3->Size = System::Drawing::Size(148, 20);
			this->summ_gashenmia_tab3->TabIndex = 76;
			// 
			// date_end_chast_tab3
			// 
			this->date_end_chast_tab3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date_end_chast_tab3->Location = System::Drawing::Point(208, 163);
			this->date_end_chast_tab3->MaxDate = System::DateTime(2099, 12, 31, 0, 0, 0, 0);
			this->date_end_chast_tab3->MinDate = System::DateTime(2000, 1, 2, 0, 0, 0, 0);
			this->date_end_chast_tab3->Name = L"date_end_chast_tab3";
			this->date_end_chast_tab3->Size = System::Drawing::Size(148, 20);
			this->date_end_chast_tab3->TabIndex = 75;
			// 
			// new_percent_tab3
			// 
			this->new_percent_tab3->Location = System::Drawing::Point(208, 137);
			this->new_percent_tab3->Name = L"new_percent_tab3";
			this->new_percent_tab3->Size = System::Drawing::Size(148, 20);
			this->new_percent_tab3->TabIndex = 74;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(10, 144);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(153, 13);
			this->label11->TabIndex = 73;
			this->label11->Text = L"Новая процентная ставка, %";
			// 
			// date_change_tab3
			// 
			this->date_change_tab3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date_change_tab3->Location = System::Drawing::Point(208, 111);
			this->date_change_tab3->MaxDate = System::DateTime(2099, 12, 31, 0, 0, 0, 0);
			this->date_change_tab3->MinDate = System::DateTime(2000, 1, 2, 0, 0, 0, 0);
			this->date_change_tab3->Name = L"date_change_tab3";
			this->date_change_tab3->Size = System::Drawing::Size(148, 20);
			this->date_change_tab3->TabIndex = 72;
			// 
			// date_end_tab3
			// 
			this->date_end_tab3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date_end_tab3->Location = System::Drawing::Point(208, 32);
			this->date_end_tab3->Name = L"date_end_tab3";
			this->date_end_tab3->Size = System::Drawing::Size(148, 20);
			this->date_end_tab3->TabIndex = 71;
			// 
			// date_start_tab3
			// 
			this->date_start_tab3->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->date_start_tab3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->date_start_tab3->Location = System::Drawing::Point(208, 6);
			this->date_start_tab3->MaxDate = System::DateTime(2100, 1, 1, 0, 0, 0, 0);
			this->date_start_tab3->MinDate = System::DateTime(2000, 1, 1, 0, 0, 0, 0);
			this->date_start_tab3->Name = L"date_start_tab3";
			this->date_start_tab3->Size = System::Drawing::Size(148, 20);
			this->date_start_tab3->TabIndex = 70;
			this->date_start_tab3->Value = System::DateTime(2023, 3, 9, 21, 17, 51, 0);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(10, 117);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(192, 13);
			this->label16->TabIndex = 69;
			this->label16->Text = L"Дата изменения процентной ставки";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(10, 91);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(106, 13);
			this->label17->TabIndex = 68;
			this->label17->Text = L"Процентная ставка";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(10, 65);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(76, 13);
			this->label18->TabIndex = 67;
			this->label18->Text = L"Сумма займа";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(10, 39);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(79, 13);
			this->label19->TabIndex = 66;
			this->label19->Text = L"Дата гашения";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(10, 12);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(73, 13);
			this->label20->TabIndex = 65;
			this->label20->Text = L"Дата выдачи";
			// 
			// percent_tab3
			// 
			this->percent_tab3->Location = System::Drawing::Point(208, 84);
			this->percent_tab3->Name = L"percent_tab3";
			this->percent_tab3->Size = System::Drawing::Size(148, 20);
			this->percent_tab3->TabIndex = 64;
			this->percent_tab3->WordWrap = false;
			// 
			// summ_zaim_tab3
			// 
			this->summ_zaim_tab3->Location = System::Drawing::Point(208, 58);
			this->summ_zaim_tab3->Name = L"summ_zaim_tab3";
			this->summ_zaim_tab3->Size = System::Drawing::Size(148, 20);
			this->summ_zaim_tab3->TabIndex = 63;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 435);
			this->splitter1->TabIndex = 1;
			this->splitter1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 435);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Расчет процентов";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		double summ = double::Parse(summa_textBox->Text);
	}

	private: System::Void percent_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		double percent = double::Parse(percent_textBox->Text);
	}

	private: System::Void btn_raschet_Click(System::Object^ sender, System::EventArgs^ e) {
		//
		//Parse textbox для получения суммы и процентов по займу
		//
		double summ = double::Parse(summa_textBox->Text);
		summ_label->Text = summ.ToString();
		double percent = double::Parse(percent_textBox->Text);
		percent_label->Text = percent.ToString();
		//
		//забираем значение дат старта и конца
		//
		auto thTH = gcnew System::Globalization::GregorianCalendarTypes();
		System::DateTime date_start = dateTimePicker1->Value;
		System::DateTime date_end = dateTimePicker2->Value;
		dateStart_label->Text = date_start.ToString("d");
		dateEnd_label->Text = date_end.ToString("d");
		//
		// Вычисление разности дат
		//
		System::TimeSpan diff = date_end.Subtract(date_start);
		//
		// Кладем полученный результат расчета в поле
		//
		summa_percent_zaim->Text = rel_sum::SummaryZaim(summ, percent, date_start, date_end).ToString();
	}
	private: System::Void btn_tab2_raschet_Click(System::Object^ sender, System::EventArgs^ e) {
		//
		// Parse textBox
		//
		double summ = double::Parse(summa_tab2->Text);
		double percent = double::Parse(percent_tab2->Text);
		double new_percent = double::Parse(new_percent_tab2->Text);

		//
		// Значение дат 
		//
		auto thTh = gcnew System::Globalization::GregorianCalendarTypes();
		System::DateTime date_start = date_start_tab2->Value;
		System::DateTime date_end = date_end_tab2->Value;
		System::DateTime newpercent_date = newpercent_date_tab2->Value;


		//
		// Вычисление параметров
		//
		label6->Text = rel_sum::ChangePercentZaim(summ,percent,new_percent,date_start,date_end,newpercent_date).ToString();
	}
	private: System::Void btn_raschet_tab3_Click(System::Object^ sender, System::EventArgs^ e) {
		//
		// Parse textBox
		//
		double summ = double::Parse(summ_zaim_tab3->Text);
		double percent = double::Parse(percent_tab3->Text);
		double new_percent = double::Parse(new_percent_tab3->Text);
		double repayment_summ = double::Parse(summ_gashenmia_tab3->Text);

		//
		// Значение дат 
		//
		auto thTh = gcnew System::Globalization::GregorianCalendarTypes();
		System::DateTime date_start = date_start_tab3->Value;
		System::DateTime date_end = date_end_tab3->Value;
		System::DateTime date_changePercent = date_change_tab3->Value;
		System::DateTime repayment_date = date_end_chast_tab3->Value;

		repayment_summ_label->Text = rel_sum::EarlyRepaymentZaim(summ,percent,new_percent,repayment_summ,date_start,date_end,date_changePercent,repayment_date).ToString();
	}
};
}
