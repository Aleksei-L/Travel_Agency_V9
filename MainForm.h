#pragma once
#include "MyConvert.h"
#include "Client.h"
#include "Table.h"
#include "MyString.h"
#include "Vector.h"
#include "MyDate.h"

namespace TravelAgencyV9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form {
	public:
		MainForm(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ File;
	private: System::Windows::Forms::ToolStripMenuItem^ Create;
	private: System::Windows::Forms::ToolStripMenuItem^ Open;
	private: System::Windows::Forms::ToolStripMenuItem^ Close;
	private: System::Windows::Forms::ToolStripMenuItem^ Save;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveAs;
	private: System::Windows::Forms::ToolStripMenuItem^ Exit;
	private: System::Windows::Forms::ToolStripMenuItem^ Edit;
	private: System::Windows::Forms::ToolStripMenuItem^ Add;
	private: System::Windows::Forms::ToolStripMenuItem^ Erase;
	private: System::Windows::Forms::ToolStripMenuItem^ Search;
	private: System::Windows::Forms::ToolStripMenuItem^ SearchNext;
	private: System::Windows::Forms::ToolStripMenuItem^ Replace;
	private: System::Windows::Forms::ToolStripMenuItem^ Clear;
	private: System::Windows::Forms::ToolStripMenuItem^ View;
	private: System::Windows::Forms::ToolStripMenuItem^ Order;
	private: System::Windows::Forms::ToolStripMenuItem^ Help;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;

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
		void InitializeComponent(void) {
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->File = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Create = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Open = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Close = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Save = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Edit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Add = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Erase = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Search = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SearchNext = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Replace = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Clear = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->View = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Order = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Help = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->menuStrip1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->File, this->Edit,
					this->View, this->Help
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(693, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// File
			// 
			this->File->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Create, this->Open,
					this->Close, this->Save, this->SaveAs, this->Exit
			});
			this->File->Name = L"File";
			this->File->Size = System::Drawing::Size(48, 20);
			this->File->Text = L"Файл";
			// 
			// Create
			// 
			this->Create->Name = L"Create";
			this->Create->Size = System::Drawing::Size(154, 22);
			this->Create->Text = L"Создать";
			// 
			// Open
			// 
			this->Open->Name = L"Open";
			this->Open->Size = System::Drawing::Size(154, 22);
			this->Open->Text = L"Открыть";
			// 
			// Close
			// 
			this->Close->Name = L"Close";
			this->Close->Size = System::Drawing::Size(154, 22);
			this->Close->Text = L"Закрыть";
			// 
			// Save
			// 
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(154, 22);
			this->Save->Text = L"Сохранить";
			// 
			// SaveAs
			// 
			this->SaveAs->Name = L"SaveAs";
			this->SaveAs->Size = System::Drawing::Size(154, 22);
			this->SaveAs->Text = L"Сохранить как";
			// 
			// Exit
			// 
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(154, 22);
			this->Exit->Text = L"Выход";
			// 
			// Edit
			// 
			this->Edit->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->Add, this->Erase,
					this->Search, this->SearchNext, this->Replace, this->Clear
			});
			this->Edit->Name = L"Edit";
			this->Edit->Size = System::Drawing::Size(59, 20);
			this->Edit->Text = L"Правка";
			// 
			// Add
			// 
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(142, 22);
			this->Add->Text = L"Добавить";
			this->Add->Click += gcnew System::EventHandler(this, &MainForm::Add_Click);
			// 
			// Erase
			// 
			this->Erase->Name = L"Erase";
			this->Erase->Size = System::Drawing::Size(142, 22);
			this->Erase->Text = L"Удалить";
			this->Erase->Click += gcnew System::EventHandler(this, &MainForm::Delete_Click);
			// 
			// Search
			// 
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(142, 22);
			this->Search->Text = L"Найти";
			this->Search->Click += gcnew System::EventHandler(this, &MainForm::Search_Click);
			// 
			// SearchNext
			// 
			this->SearchNext->Name = L"SearchNext";
			this->SearchNext->Size = System::Drawing::Size(142, 22);
			this->SearchNext->Text = L"Найти далее";
			this->SearchNext->Click += gcnew System::EventHandler(this, &MainForm::SearchNext_Click);
			// 
			// Replace
			// 
			this->Replace->Name = L"Replace";
			this->Replace->Size = System::Drawing::Size(142, 22);
			this->Replace->Text = L"Заменить";
			this->Replace->Click += gcnew System::EventHandler(this, &MainForm::Replace_Click);
			// 
			// Clear
			// 
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(142, 22);
			this->Clear->Text = L"Очистить";
			this->Clear->Click += gcnew System::EventHandler(this, &MainForm::Clear_Click);
			// 
			// View
			// 
			this->View->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Order });
			this->View->Name = L"View";
			this->View->Size = System::Drawing::Size(39, 20);
			this->View->Text = L"Вид";
			// 
			// Order
			// 
			this->Order->Name = L"Order";
			this->Order->Size = System::Drawing::Size(146, 22);
			this->Order->Text = L"Упорядочить";
			// 
			// Help
			// 
			this->Help->Name = L"Help";
			this->Help->Size = System::Drawing::Size(68, 20);
			this->Help->Text = L"Помощь";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(693, 631);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Имя";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Город";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Телефон";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Возраст";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Дата рождения";
			this->columnHeader5->Width = 99;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(685, 269);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Правка";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Location = System::Drawing::Point(8, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(669, 257);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Данные для ввода, поиска и редактирования";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Location = System::Drawing::Point(284, 19);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(216, 232);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Действия";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(62, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(87, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::Clear_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(62, 157);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(87, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Заменить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::Replace_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(62, 122);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Найти далее";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::SearchNext_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(62, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Найти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::Search_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(62, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::Delete_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::Add_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(6, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(272, 232);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Клиент";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(130, 191);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(39, 20);
			this->textBox7->TabIndex = 11;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(82, 191);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(42, 20);
			this->textBox6->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(23, 191);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(53, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(130, 119);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(130, 88);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(130, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 162);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Дата рождения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Возраст";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Телефон";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Город";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Location = System::Drawing::Point(0, 360);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(693, 295);
			this->tabControl1->TabIndex = 2;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(693, 655);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Travel Agency";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


		/*Table* t;
		TextBox^* m;
		int	_foundNext, flag, SelectIndex;
		char* FileName;*/
	public: Table* t, * rezQuery;
	private: T* cur;
	private: int _foundNext, count, SelectIndex;
	private: T _current, _found;
	private: System::EventHandler^ h;
	private:
		/*int TextBoxOutput(T r) {
			textBox1->Text = gcnew String(r->name);
			textBox2->Text = gcnew String(r->city);
			textBox3->Text = r->price.ToString();
			textBox4->Text = r->number.ToString();
			DateTime data = DateTime(r->year, r->month, r->day);
			textBox11->Text = data.ToString();
			return 0;
		}*/
		/*int TextBoxInput(T r) {
			if (!String::Equals(textBox1->Text, String::Empty))
				MyConvert::ToArrayASCII(r->autor, 10, textBox1->Text);
			if (!String::Equals(textBox2->Text, String::Empty))
				MyConvert::ToArrayASCII(r->title, 20, textBox2->Text);
			if (!String::Equals(textBox3->Text, String::Empty)) {
				for (int i = 0; i < textBox3->Text->Length; i++)
					if (!Char::IsDigit(textBox3->Text->Chars[i]) && textBox3->Text->Chars[i] != '-' && textBox3->Text->Chars[i] != '+') {
						MessageBox::Show("TextBoxInput: Поле price должно быть числовым");
						return 0;
					}
				r->price = Convert::ToInt32(textBox3->Text);
			}
			if (!String::Equals(textBox4->Text, String::Empty)) {
				for (int i = 0; i < textBox3->Text->Length; i++)
					if (!Char::IsDigit(textBox3->Text->Chars[i])
						&& textBox3->Text->Chars[i] != '-' && textBox3->Text->Chars[i] != '+')
					{
						MessageBox::Show("TextBoxInput: Поле number должно быть числовым");
						return 0;
					}
				r->number = Convert::ToInt64(textBox4->Text);
			}
			if (!String::Equals(textBox11->Text, String::Empty)) {
				DateTime data = Convert::ToDateTime(textBox11->Text);
				r->day = data.Day;
				r->month = data.Month;
				r->year = data.Year;
			}
			return r->validate();
		}*/
		/*int ListViewOutput(Table* t)
		{
			listView1->Items->Clear(); count = 0;
			T* i;
			for (i = t->begin(); i < t->end(); i++)
			{
				ListViewOutput(*i); count++;
			}
			return 0;
		}*/
		/*int ListViewOutput(T r)
		{
			String* s[] = new String * [13];
			s[0] = count.ToString();
			s[1] = new String(r->autor);
			s[2] = new String(r->title);
			s[3] = r->price.ToString();
			s[4] = r->number.ToString();
			s[10] = r->day.ToString();
			s[11] = r->month.ToString();
			s[12] = r->year.ToString();
			listView1->Items->Add(new ListViewItem(s));
			return count;
		}*/


#pragma endregion

		/*array<TextBox^>^ m;
		int _foundNext;
		int flag;

		T _current, _found;*/

	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		/*_foundNext = -1;
		flag = 0;
		m = gcnew array<TextBox^>(5);
		m[0] = textBox1;
		m[1] = textBox2;
		m[2] = textBox3;
		m[3] = textBox4;
		m[4] = textBox5;

		t = 0; _current = 0; _found = 0;
		t = init(t, 100);
		_current = init(_current);     _found = init(_found);
		_foundNext = -1; flag = 0;
		m = new TextBox * [7];
		m[0] = textBox1; m[1] = textBox2; m[2] = textBox4; m[3] = textBox3;
		m[4] = textBox11; m[5] = textBox9; m[6] = textBox10;*/

		t = new Table;
		_current = new Client;
		_found = new Client;
	}

	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
		/*array<String^ >^ ms = gcnew array< System::String^ >(5);
		MyConvert::copyto(ms, m, 5);
		ListViewItem^ listViewItem0 = gcnew ListViewItem(ms);
		listView1->Items->Add(listViewItem0);*/
	}

	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		/*for (int i = listView1->SelectedIndices->Count - 1; i >= 0; i--) {
			int d = listView1->SelectedIndices[i];
			listView1->Items->RemoveAt(d);
		}*/
	}

	private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
		/*int ind;
		for (ind = 0; ind < listView1->Items->Count; ind++) {
			String^ s1 = listView1->Items[ind]->SubItems[0]->Text;
			String^ s2 = m[0]->Text;
			if (String::Equals(s1, s2)) {
				_foundNext = ind;
				MessageBox::Show(ind.ToString(), "Find Index");
				return;
			}
		}
		MessageBox::Show("No Found", "Find");
		_foundNext = -1;*/
	}

	private: System::Void SearchNext_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (_foundNext == -1)
			return; int ind;
		for (ind = _foundNext + 1; ind < listView1->Items->Count; ind++) {
			String^ s1 = listView1->Items[ind]->SubItems[0]->Text;
			String^ s2 = m[0]->Text;
			if (String::Equals(s1, s2)) {
				_foundNext = ind; MessageBox::Show(ind.ToString(), "Find Index");
				return;
			}
		}
		MessageBox::Show("No Found", "Find");
		_foundNext = -1;*/
	}

	private: System::Void Replace_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (flag == 0) {
			flag = 1;
			MessageBox::Show("Введите данные для замены и нажмите кнопку \"Заменить\" еще раз", "Поиск");
			return;
		}
		flag = 0;
		int ind = listView1->SelectedIndices->Count - 1;
		if (ind != -1) {
			ListViewItem^ listViewItem0 = listView1->SelectedItems[ind];
			MyConvert::copyto(listViewItem0, m, 5);
		}*/
	}

	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		/*MyConvert::copyto(m, "", 5);
		listView1->Items->Clear();*/
	}


	public: void ExeptionLetters(char* str) {
		String^ s = gcnew String(str);
		s = String::Concat("\nString\t", s, "\t must include English letters\n");
		MessageBox::Show(s, "ExeptionLetters");
	}

	public: void ExeptionInt(char* str) {
		String^ s = gcnew String(str);
		s = String::Concat("\nString\t", s, "\t must include letters of digits\n");
		MessageBox::Show(s, "ExeptionInt");
	}

	public: void ExeptionRange(double d, double min, double max) {
		String^ s1 = d.ToString();
		String^ s2 = min.ToString();
		String^ s3 = max.ToString();
		s1 = String::Concat("\n Value\t", s1, "\t must be latter then ", s2, "and must be greater then", s3);
		MessageBox::Show(s1, "ExeptionRange");
	}

	public: void ExeptionFound() {
		MessageBox::Show("Просмотр закончен. Искомый элемент не найден", "Поиск");
	}

	public: void ExeptionEmpty() {
		MessageBox::Show("Поля ввода не должны быть пустыми", "Input");
	}
	};
}
