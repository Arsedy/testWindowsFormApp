#pragma once
#include "coffeInfo.h"
#include <iostream>
#include <string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// AdminRaporForm i�in �zet
	/// </summary>
	public ref class AdminRaporForm : public System::Windows::Forms::Form
	{
	public:
		AdminRaporForm(coffeInfo^ coffee)
		{
			InitializeComponent();
			info = coffee;  // info nesnesi burada ba�lat�lmal� ayn� nesneyle i�lem yapmam laz�m 
						   //info kodlar�n� burdada kullanmam gerek !! 

			this->lbSafe->Text = info->TotalMoneyinSafe.ToString()+" TL"; // kasadaki paray� formu initialize ederken olu�turuyor !! 
			//
			//TODO: Olu�turucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullan�lan t�m kaynaklar� temizleyin.
		/// </summary>
		~AdminRaporForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbWater;
	protected:
	private: System::Windows::Forms::TextBox^ tbCoffe;
	private: System::Windows::Forms::TextBox^ tbMilk;
	private: System::Windows::Forms::TextBox^ tbsafemoney;
	private: System::Windows::Forms::Button^ btOK;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lbSafe;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		///Gerekli tasar�mc� de�i�keni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasar�mc� deste�i i�in gerekli metot - bu metodun 
		///i�eri�ini kod d�zenleyici ile de�i�tirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbWater = (gcnew System::Windows::Forms::TextBox());
			this->tbCoffe = (gcnew System::Windows::Forms::TextBox());
			this->tbMilk = (gcnew System::Windows::Forms::TextBox());
			this->tbsafemoney = (gcnew System::Windows::Forms::TextBox());
			this->btOK = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lbSafe = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbWater
			// 
			this->tbWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tbWater->Location = System::Drawing::Point(12, 53);
			this->tbWater->Name = L"tbWater";
			this->tbWater->Size = System::Drawing::Size(164, 24);
			this->tbWater->TabIndex = 0;
			this->tbWater->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminRaporForm::tbWater_KeyPress);
			// 
			// tbCoffe
			// 
			this->tbCoffe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tbCoffe->Location = System::Drawing::Point(12, 129);
			this->tbCoffe->Name = L"tbCoffe";
			this->tbCoffe->Size = System::Drawing::Size(164, 24);
			this->tbCoffe->TabIndex = 1;
			this->tbCoffe->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminRaporForm::tbCoffe_KeyPress);
			// 
			// tbMilk
			// 
			this->tbMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tbMilk->Location = System::Drawing::Point(12, 209);
			this->tbMilk->Name = L"tbMilk";
			this->tbMilk->Size = System::Drawing::Size(164, 24);
			this->tbMilk->TabIndex = 2;
			this->tbMilk->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminRaporForm::tbMilk_KeyPress);
			// 
			// tbsafemoney
			// 
			this->tbsafemoney->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tbsafemoney->Location = System::Drawing::Point(12, 309);
			this->tbsafemoney->Name = L"tbsafemoney";
			this->tbsafemoney->Size = System::Drawing::Size(164, 24);
			this->tbsafemoney->TabIndex = 3;
			this->tbsafemoney->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminRaporForm::tbsafemoney_KeyPress);
			// 
			// btOK
			// 
			this->btOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btOK->Location = System::Drawing::Point(196, 345);
			this->btOK->Name = L"btOK";
			this->btOK->Size = System::Drawing::Size(78, 37);
			this->btOK->TabIndex = 4;
			this->btOK->Text = L"OK";
			this->btOK->UseVisualStyleBackColor = true;
			this->btOK->Click += gcnew System::EventHandler(this, &AdminRaporForm::btOK_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Eklenicek Malzemeler:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(193, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"mL Su";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(191, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"mg Kahve ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(193, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"mL S�t";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(191, 314);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"TL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label6->Location = System::Drawing::Point(9, 264);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(265, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Kasadan Para  �ekmek �stiyorsan�z Doldurun!";
			// 
			// lbSafe
			// 
			this->lbSafe->AutoSize = true;
			this->lbSafe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbSafe->Location = System::Drawing::Point(12, 293);
			this->lbSafe->Name = L"lbSafe";
			this->lbSafe->Size = System::Drawing::Size(50, 16);
			this->lbSafe->TabIndex = 11;
			this->lbSafe->Text = L"label7";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(15, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 37);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminRaporForm::button1_Click);
			// 
			// AdminRaporForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(291, 394);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbSafe);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btOK);
			this->Controls->Add(this->tbsafemoney);
			this->Controls->Add(this->tbMilk);
			this->Controls->Add(this->tbCoffe);
			this->Controls->Add(this->tbWater);
			this->Name = L"AdminRaporForm";
			this->Text = L"Admin Rapor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		int water1, coffe1, milk1, safemoney1;
		
		coffeInfo^ info;//yukarda tan�mlad�k burda olu�turduk ! 
		System::Void tbWater_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// E�er say� de�ilse, karakterin girilmesini engelle
			e->Handled = true;
		}
	}
private: System::Void tbCoffe_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
		// E�er say� de�ilse, karakterin girilmesini engelle
		e->Handled = true;
	}
}
private: System::Void tbMilk_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
		// E�er say� de�ilse, karakterin girilmesini engelle
		e->Handled = true;
	}
}

private: System::Void tbsafemoney_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
		// E�er say� de�ilse, karakterin girilmesini engelle
		e->Handled = true;
	}
}
private: System::Void btOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ water = this->tbWater->Text;
	String^ coffe = this->tbCoffe->Text;
	String^ milk = this->tbMilk->Text;
	String^ safemoney = this->tbsafemoney->Text;
	if (water == "") {//e�er kullan�c� de�er koymad�ysa tan�mlamaya yard�mc� oluyorum !! 
		water = "0";
		
	}
	if (coffe == "") {//e�er kullan�c� de�er koymad�ysa tan�mlamaya yard�mc� oluyorum !! 
		coffe = "0";
	}
	if (milk == "") {//e�er kullan�c� de�er koymad�ysa tan�mlamaya yard�mc� oluyorum !! 
		milk = "0";
	}
	if (safemoney == "") {//e�er kullan�c� de�er koymad�ysa tan�mlamaya yard�mc� oluyorum !! 
		safemoney = "0";
	}
	try {
		// Convert String^ to int using System::Convert 
		water1 = System::Convert::ToInt32(water);
		coffe1 = System::Convert::ToInt32(coffe);
		milk1 = System::Convert::ToInt32(milk);
		safemoney1 = System::Convert::ToInt32(safemoney);
	}
	catch (System::OverflowException^ ex) {   //integar de�erinin bellekte tutabilce�inden b�u�k bir say� gelirse ! 
		MessageBox::Show("Say� �ok y�ksek!");
	}
	info->changeWaterInfo(water1);
	info->changeCoffeInfo(coffe1);
	info->changeMilkInfo(milk1);
	info->takeSafeMoney(safemoney1); 
	 
	this->Close();//b�t�n set i�lemleri hallolduktan sonra formu kapat�r !!
	MessageBox::Show("Malzemeler eklendi ! ");

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); 
	MessageBox::Show("��lem iptal edildi !");
	
}
};
}
