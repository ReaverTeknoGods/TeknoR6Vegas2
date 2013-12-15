#pragma once
#include <windows.h>
#include "PE.h"
#include "memory.h"
_CONTEXT mycontext;
STARTUPINFO si;
PROCESS_INFORMATION pi;
#define Roundby1000(a) (a / 0x1000 + ((a % 0x1000) > 0 ? 1 : 0)) * 0x1000

namespace TeknoR6Vegas2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security::Cryptography;
	using namespace System::IO;
	using namespace System::Threading;
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox7;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1028, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->DisplayMember = L"16";
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(15) {L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12", L"13", L"14", L"15", L"16"});
			this->comboBox1->Location = System::Drawing::Point(9, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(218, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(6, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Force MaxPlayers";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(6, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Terrorist Count";
			// 
			// comboBox2
			// 
			this->comboBox2->DisplayMember = L"16";
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(98) {L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9", 
				L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26", L"27", 
				L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44", L"45", 
				L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62", L"63", 
				L"64", L"65", L"66", L"67", L"68", L"69", L"70", L"71", L"72", L"73", L"74", L"75", L"76", L"77", L"78", L"79", L"90", L"81", 
				L"82", L"83", L"84", L"85", L"86", L"87", L"88", L"89", L"90", L"91", L"92", L"93", L"94", L"95", L"96", L"97", L"98", L"99"});
			this->comboBox2->Location = System::Drawing::Point(9, 90);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(218, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Launch";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox7);
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(756, 118);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(264, 204);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Host options";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->Location = System::Drawing::Point(9, 181);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(217, 17);
			this->checkBox7->TabIndex = 16;
			this->checkBox7->Text = L"Unlimited Weapon Restrictions in Versus";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->Location = System::Drawing::Point(10, 158);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(139, 17);
			this->checkBox6->TabIndex = 15;
			this->checkBox6->Text = L"Disable Join-In-Progress";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(233, 133);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(15, 14);
			this->checkBox5->TabIndex = 14;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(233, 50);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(15, 14);
			this->checkBox4->TabIndex = 13;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(233, 90);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(15, 14);
			this->checkBox3->TabIndex = 12;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->DisplayMember = L"16";
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(16) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16"});
			this->comboBox3->Location = System::Drawing::Point(10, 130);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(218, 21);
			this->comboBox3->TabIndex = 10;
			this->comboBox3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(7, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Respawn Count Multiplier";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(10, 14);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(87, 17);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"I am the host";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(756, 384);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(264, 142);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Game is Running";
			this->label5->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Location = System::Drawing::Point(756, 525);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(264, 41);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Location = System::Drawing::Point(756, 328);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(264, 56);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Other Options";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 20);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(158, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"3 Monitor AR (Eyefinity only)";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1023, 577);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Reaver\'s Rainbow Six Vegas 2 Toolkit v4.0 / www.TeknoGods.com";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

bool LoadProcess(LPCSTR Filename)
{
		if( !CreateProcess(Filename, // No module name (use command line). 
		NULL,			  // Command line.
		NULL,             // Process handle not inheritable. 
		NULL,             // Thread handle not inheritable. 
		FALSE,            // Set handle inheritance to FALSE. 
		CREATE_SUSPENDED | CREATE_NEW_PROCESS_GROUP, // suspended creation flags. 
		NULL,             // Use parent's environment block. 
		NULL,             // Use parent's starting directory. 
		&si,              // Pointer to STARTUPINFO structure.
		&pi )             // Pointer to PROCESS_INFORMATION structure.
		)
			{
				 return false;
			}
		mycontext.ContextFlags = 0x00010000+1+2+4+8+0x10;
		return true;
}
int RunTo(DWORD Address, DWORD Mode, DWORD Eip)
	 {
		char tempbuf[4];
		int count = 0;
		if(Eip != 0)
		{
			GetThreadContext(pi.hThread,&mycontext);
			mycontext.Eip = Eip;
			SetThreadContext(pi.hThread,&mycontext);
		}
		ReadProcessMemory(pi.hProcess,(LPVOID)Address,tempbuf,4,0);
		WriteProcessMemory(pi.hProcess,(LPVOID)Address,"\xEB\xFE",2,0);
		ResumeThread(pi.hThread);
		while(1)
		{
			if(count == 10) return 0;
			if(!GetThreadContext(pi.hThread, &mycontext)) count++;
			else count = 0;
			if(Mode == 0) Sleep(500);
			if(Mode == 1) WriteProcessMemory(pi.hProcess,(LPVOID)Address,"\xEB\xFE",2,0);
			if(mycontext.Eip == Address) break;
		}
		SuspendThread(pi.hThread);
		if(!GetThreadContext(pi.hThread, &mycontext)) return 0;
		WriteProcessMemory(pi.hProcess,(LPVOID)Address,tempbuf,4,0);
		return 1;
	 }

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
			 {
				Control::CheckForIllegalCrossThreadCalls = false;
				 if(File::Exists("R6Vegas2_Game.exe") == false)
				 {
					 MessageBox::Show("Unable to find R6Vegas2_Game.exe", "Error");
					 Application::Exit();
					 return;
				 }
				 //array<byte> ^Myarray = File::ReadAllBytes("R6Vegas2_Game.exe");
				 //String ^cock = BitConverter::ToString(MD5CryptoServiceProvider().ComputeHash(Myarray))->Replace("-", "")->ToLower();
				 //if(cock != "1584315ad01fa03ca71066135fa7471a" && cock != "835a6aa804f4f26cfa21adea54d0313a")
				 //{
					// MessageBox::Show("Your R6Vegas2_Game.exe is not supported, please use the 1.03 NOCD executable.", "Error");
					// Application::Exit();
					// return;
				 //}
				 comboBox1->SelectedIndex = 0;
				 comboBox2->SelectedIndex = 0;
				 comboBox3->SelectedIndex = 0;
				 comboBox1->Enabled = false;
				 comboBox2->Enabled = false;
				 comboBox3->Enabled = false;
				 checkBox3->Enabled = false;
				 checkBox4->Enabled = false;
				 checkBox5->Enabled = false;
			 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(checkBox2->Checked == true)
			 {
				comboBox1->Enabled = true;
				if(checkBox3->Checked == true) comboBox2->Enabled = true;
				else comboBox2->Enabled = false;
				if(checkBox4->Checked == true) comboBox1->Enabled = true;
				else comboBox1->Enabled = false;
				 if(checkBox5->Checked == true)	comboBox3->Enabled = true;
				 else comboBox3->Enabled = false;
				checkBox3->Enabled = true;
				checkBox4->Enabled = true;
				checkBox5->Enabled = true;
				checkBox6->Enabled = true;
				checkBox7->Enabled = true;
			 }
			 else
			 {
				comboBox1->Enabled = false;
				comboBox2->Enabled = false;
				comboBox3->Enabled = false;
				checkBox3->Enabled = false;
				checkBox4->Enabled = false;
				checkBox5->Enabled = false;
				checkBox6->Enabled = false;
				checkBox7->Enabled = false;
			 }
		 }
	private: void WriteLog(String ^Writto)
			 {
				richTextBox1->Text = richTextBox1->Text + Writto + "\n";
				richTextBox1->SelectionStart = richTextBox1->Text->Length;
				richTextBox1->ScrollToCaret();
			 }
private: void MyThread()
		 {
			 PEStruct FilePEFile = getPEFileInformation("R6Vegas2_Game.exe");
			if(!LoadProcess("R6Vegas2_Game.exe"))
			{
				WriteLog("Unable to create process for R6Vegas2_Game.exe");
				return;
			}
			else WriteLog("Created process for R6Vegas2_Game.exe");
			DWORD OEP = FilePEFile.image_nt_headers.OptionalHeader.AddressOfEntryPoint + FilePEFile.image_nt_headers.OptionalHeader.ImageBase;
			if(!RunTo(OEP, 1, 0))
			{
				WriteLog("Process crashed on init");
				return;
			}
			else WriteLog("Process initialized");
			DWORD codesize = Roundby1000(FilePEFile.image_section_header[0].Misc.VirtualSize);
			DWORD codebase = FilePEFile.image_section_header[0].VirtualAddress + FilePEFile.image_nt_headers.OptionalHeader.ImageBase;
			DWORD oldprot = 0;
			DWORD newprot = 0;
			VirtualProtectEx(pi.hProcess, (LPVOID)codebase, codesize, 0x40, &oldprot);
			if(checkBox2->Checked == true)
			{
				// Respawn Count
				if(checkBox5->Checked == true)
				{
					//DWORD myval = Convert::ToInt32(comboBox3->SelectedItem);
					//WriteProcessMemory(pi.hProcess, (LPVOID)0x10C8BF50, "\x8B\x44\x24\x04\x6B\xC0\x10\xEB\x06", 9, 0);
					//WriteProcessMemory(pi.hProcess, (LPVOID)0x10C8BF56, &myval, 1, 0);
				}
				// Player Cap
				if(checkBox4->Checked == true)
				{
					DWORD myval = Convert::ToInt32(comboBox1->SelectedItem);
					//WriteProcessMemory(pi.hProcess,(LPVOID)0x113B7DB9, "\x90\x90\x90\x90\x90\x90\x90", 7, 0);
					//WriteProcessMemory(pi.hProcess,(LPVOID)0x113BA630, "\x90\x90\x90\x90\x90\x90", 6, 0);
					//WriteProcessMemory(pi.hProcess,(LPVOID)0x11162580, "\x90\x90\x90\x90\x90\x90\x90", 7, 0);
					//WriteProcessMemory(pi.hProcess,(LPVOID)0x111624A0, "\x90\x90\x90\x90\x90\x90", 6, 0);
					//WriteProcessMemory(pi.hProcess,(LPVOID)0x113DEAC1, "\xBA\x01\x00\x00\x00\x90", 6, 0);
					//WriteProcessMemory(pi.hProcess,(LPVOID)0x113DE3A9, "\xBA\x01\x00\x00\x00\x90", 6, 0);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D4DA72, "\x90\x90", 2, 0);
					// Player count #1 here
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D4DA74, "\xBE\x00\x00\x00\x00", 5, 0);
					WriteProcessMemory(pi.hProcess, (LPVOID)0x10D4DA75, &myval, 4, 0);
					// Player count #2 here
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D67C41, "\xC7\x46\x14\x10\x00\x00\x00\x8B\x7E\x24\xEB\x1D", 12, 0);
					WriteProcessMemory(pi.hProcess, (LPVOID)0x10D67C44, &myval, 4, 0);
					//
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D67C67, "\xEB\xD8\x90", 3, 0);
					// Player count #3 here
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D63911, "\x83\x7E\x18\x02\x75\x47\xC7\x46\x14\x10\x00\x00\x00\xEB\x18", 15, 0);
					WriteProcessMemory(pi.hProcess, (LPVOID)0x10D6391A, &myval, 4, 0);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D63936, "\xEB\xD9\x83\x7E\x04\x00\x90", 7, 0);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D6395E, "\xEB\x4D", 2, 0);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D639AD, "\xEB\x42", 2, 0);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D639F1, "\x89\x46\x14\xE9\x3F\xFF\xFF\xFF", 8, 0);
				}
				// Terrorist Count
				if(checkBox3->Checked == true)
				{
					DWORD myval = Convert::ToInt32(comboBox2->SelectedItem);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10A2B60C, "\xEB\x45\x90\x90", 4, 0);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10A2B653, "\xB8\x00\x00\x00\x00\xEB\xB6", 7, 0);
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10A2B654, &myval, 4, 0);
				}
				// Disable Join in Progress
				if(checkBox6->Checked == true)
				{
					WriteProcessMemory(pi.hProcess,(LPVOID)0x10D65EFB, "\x31\xC9\x90", 3, 0);
				}
				// Weapon Restriction Count on Versus
				if(checkBox7->Checked == true)
				{
					WriteProcessMemory(pi.hProcess,(LPVOID)0x114F0402, "\x90\x90", 2, 0);
				}
			}
			// Eyefinity
			if(checkBox1->Checked == true)
			{
				WriteProcessMemory(pi.hProcess,(LPVOID)0x12172ab8, "\x00\x00\x70\x40\x9A\x99\x99\x40\x00\x00\x80\x40", 12, 0);
			}
			VirtualProtectEx(pi.hProcess, (LPVOID)codebase, codesize, oldprot, &newprot);
			button1->Enabled = false;
			label5->Visible = true;
			checkBox2->Enabled = false;
			checkBox3->Enabled = false;
			checkBox1->Enabled = false;
			comboBox3->Enabled = false;
			comboBox1->Enabled = false;
			comboBox2->Enabled = false;
			checkBox6->Enabled = false;
			checkBox7->Enabled = false;
			checkBox1->Checked = false;
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;
			checkBox5->Checked = false;
			checkBox6->Checked = false;
			checkBox7->Checked = false;
			ResumeThread(pi.hThread);
			while(GetThreadContext(pi.hThread, &mycontext)) Sleep(1000);
			WriteLog("Process exited");
			button1->Enabled = true;
			checkBox1->Enabled = true;
			label5->Visible = false;
			checkBox3->Enabled = true;
			checkBox2->Checked = false;
			checkBox2->Enabled = true;
		 }
		 private: Thread ^trd;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			ThreadStart ^munthread = gcnew ThreadStart(this,&TeknoR6Vegas2::Form1::MyThread);
			trd = gcnew Thread(munthread);
			trd->ApartmentState = ApartmentState::STA;
			trd->IsBackground = true;
			trd->Start();
		 }
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(checkBox3->Checked == true)	comboBox2->Enabled = true;
			 else comboBox2->Enabled = false;
		 }
private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(checkBox5->Checked == true)	comboBox3->Enabled = true;
			 else comboBox3->Enabled = false;
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(checkBox4->Checked == true)	comboBox1->Enabled = true;
			 else comboBox1->Enabled = false;
		 }
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

