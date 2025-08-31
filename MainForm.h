#pragma once
#include <iostream>
#include <string>
#include "coffeInfo.h" //CoffeMAchine içindeki Malzemeleri deðiþtirip kontrol için burda !! 
#include "AdminRaporForm.h"//Rapor butonuna Týklandýðýnda açýlýp deðerleri deðiþtirmemizi saðlýcak !! 

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm için özet
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:

		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
			info = gcnew coffeInfo();  // info nesnesi burada baþlatýlmalý

		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Espresso;
	private: System::Windows::Forms::Button^ Latte;
	private: System::Windows::Forms::Button^ Cappuccino;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbmoney;



	private: System::Windows::Forms::Button^ MoneySubmitButton;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbWater;
	private: System::Windows::Forms::Label^ lbCoffe;
	private: System::Windows::Forms::Label^ lbMilk;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btAmericano;








	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->Espresso = (gcnew System::Windows::Forms::Button());
			this->Latte = (gcnew System::Windows::Forms::Button());
			this->Cappuccino = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbmoney = (gcnew System::Windows::Forms::TextBox());
			this->MoneySubmitButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbWater = (gcnew System::Windows::Forms::Label());
			this->lbCoffe = (gcnew System::Windows::Forms::Label());
			this->lbMilk = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btAmericano = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Espresso
			// 
			this->Espresso->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Espresso->BackgroundImage = gcnew System::Drawing::Bitmap("espresso.jpg");
			this->Espresso->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Espresso->Location = System::Drawing::Point(12, 98);
			this->Espresso->Name = L"Espresso";
			this->Espresso->Size = System::Drawing::Size(146, 60);
			this->Espresso->TabIndex = 0;
			this->Espresso->Text = L"Espresso";
			this->Espresso->UseVisualStyleBackColor = true;
			this->Espresso->Click += gcnew System::EventHandler(this, &MainForm::Espresso_Click);
			// 
			// Latte
			// 
			this->Latte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Latte->BackgroundImage = gcnew System::Drawing::Bitmap("latte.jpg");
			this->Latte->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Latte->Location = System::Drawing::Point(12, 195);
			this->Latte->Name = L"Latte";
			this->Latte->Size = System::Drawing::Size(146, 60);
			this->Latte->TabIndex = 1;
			this->Latte->Text = L"Latte";
			this->Latte->UseVisualStyleBackColor = true;
			this->Latte->Click += gcnew System::EventHandler(this, &MainForm::Latte_Click);
			// 
			// Cappuccino
			// 
			this->Cappuccino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->Cappuccino->Location = System::Drawing::Point(12, 386);
			this->Cappuccino->BackgroundImage = gcnew System::Drawing::Bitmap("cappuccino.jpg");
			this->Cappuccino->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Cappuccino->Name = L"Cappuccino";
			this->Cappuccino->Size = System::Drawing::Size(146, 60);
			this->Cappuccino->TabIndex = 2;
			this->Cappuccino->Text = L"Cappuccino";
			this->Cappuccino->UseVisualStyleBackColor = true;
			this->Cappuccino->Click += gcnew System::EventHandler(this, &MainForm::Cappuccino_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(164, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Malzemeler: 100ml Su , 18 gr Kahve , Fiyat=150TL";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(164, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(416, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Malzemeler: 200ml Su , 100ml Süt,18 gr Kahve , Fiyat=185TL";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(164, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(416, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Malzemeler: 250ml Su ,100ml Süt, 24 gr Kahve , Fiyat=225TL";
			// 
			// tbmoney
			// 
			this->tbmoney->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tbmoney->Location = System::Drawing::Point(12, 23);
			this->tbmoney->Name = L"tbmoney";
			this->tbmoney->Size = System::Drawing::Size(146, 26);
			this->tbmoney->TabIndex = 6;
			this->tbmoney->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::money_KeyPress);
			// 
			// MoneySubmitButton
			// 
			this->MoneySubmitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->MoneySubmitButton->Location = System::Drawing::Point(164, 26);
			this->MoneySubmitButton->Name = L"MoneySubmitButton";
			this->MoneySubmitButton->Size = System::Drawing::Size(38, 23);
			this->MoneySubmitButton->TabIndex = 9;
			this->MoneySubmitButton->Text = L"TL";
			this->MoneySubmitButton->UseVisualStyleBackColor = true;
			this->MoneySubmitButton->Click += gcnew System::EventHandler(this, &MainForm::MoneySubmitButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(9, 488);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(276, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Kahve makinesinde kalan malzemeler=";
			// 
			// lbWater
			// 
			this->lbWater->AutoSize = true;
			this->lbWater->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbWater->Location = System::Drawing::Point(291, 488);
			this->lbWater->Name = L"lbWater";
			this->lbWater->Size = System::Drawing::Size(25, 16);
			this->lbWater->TabIndex = 11;
			this->lbWater->Text = L"aa";
			// 
			// lbCoffe
			// 
			this->lbCoffe->AutoSize = true;
			this->lbCoffe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbCoffe->Location = System::Drawing::Point(402, 488);
			this->lbCoffe->Name = L"lbCoffe";
			this->lbCoffe->Size = System::Drawing::Size(25, 16);
			this->lbCoffe->TabIndex = 12;
			this->lbCoffe->Text = L"bb";
			// 
			// lbMilk
			// 
			this->lbMilk->AutoSize = true;
			this->lbMilk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->lbMilk->Location = System::Drawing::Point(512, 488);
			this->lbMilk->Name = L"lbMilk";
			this->lbMilk->Size = System::Drawing::Size(50, 16);
			this->lbMilk->TabIndex = 13;
			this->lbMilk->Text = L"label7";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(483, 537);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 34);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Rapor";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label5->Location = System::Drawing::Point(164, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(408, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Malzemeler: 225ml Su ,50ml Süt, 15 gr Kahve , Fiyat=200TL";
			// 
			// btAmericano
			// 
			this->btAmericano->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->btAmericano->Location = System::Drawing::Point(12, 292);
			this->btAmericano->BackgroundImage = gcnew System::Drawing::Bitmap("americano.jpg");
			this->btAmericano->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btAmericano->Name = L"btAmericano";
			this->btAmericano->Size = System::Drawing::Size(146, 60);
			this->btAmericano->TabIndex = 15;
			this->btAmericano->Text = L"Americano";
			this->btAmericano->UseVisualStyleBackColor = true;
			this->btAmericano->Click += gcnew System::EventHandler(this, &MainForm::btAmericano_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(589, 595);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btAmericano);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbMilk);
			this->Controls->Add(this->lbCoffe);
			this->Controls->Add(this->lbWater);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->MoneySubmitButton);
			this->Controls->Add(this->tbmoney);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Cappuccino);
			this->Controls->Add(this->Latte);
			this->Controls->Add(this->Espresso);
			this->Name = L"MainForm";
			this->Text = L"Caffe Machine ";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ImeModeChanged += gcnew System::EventHandler(this, &MainForm::MainForm_ImeModeChanged);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		coffeInfo^ info;
		AdminRaporForm^ adminRapor = nullptr;
	public:
		int TotalMoney; //Aþþaðýdaki Espresso Click fonksiyonunda Totalmoneyi Kontrol etmemiz gerekicek !


	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect_1(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}

	private: System::Void MainForm_ImeModeChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// program baþladýðý an itibariyle labelBoxlarý tanýmlama amacý  !  ! 
		this->lbWater->Text = info->TotalWater.ToString() + "mL Su";
		this->lbCoffe->Text = info->TotalCoffe.ToString() + "gr Kahve";
		this->lbMilk->Text = info->TotalMilk.ToString() + "mL Süt";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		adminRapor = gcnew AdminRaporForm(info);//local objeyi adminrapora gönderip coffemachin tanýmlamazsam 2 farklý nesne olduðu için
		adminRapor->Show();													//ortak deðerleri deðiþtirimiyor (totalwoter , totalcoffe vb . )

	}



	private: System::Void LatteBox1_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {
	}

	private: System::Void money_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 8) {
			// Eðer sayý deðilse, karakterin girilmesini engelle
			e->Handled = true;
		}
	}


	public: System::Void MoneySubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ money1 = this->tbmoney->Text; //money1 ifadesini textboxtan tanýmlamak amacý! ** karmaþýklýðý önlemek! ** 
		if (money1 == "") {
			money1 = "0";
		}
		try {
			// Convert String^ to int using System::Convert 
			TotalMoney = System::Convert::ToInt32(money1);

		}
		catch (System::OverflowException^ ex) {   //integar deðerinin bellekte tutabilceðinden büuük bir sayý gelirse ! 
			MessageBox::Show("Sayý çok yüksek!");
		}

	}
	private: System::Void Espresso_Click(System::Object^ sender, System::EventArgs^ e) {

			info->setAllInfo("Espresso", TotalMoney);
			if (info->infoChecker("Espresso", TotalMoney)) { TotalMoney -= 150; }
			this->lbWater->Text = info->TotalWater.ToString() + "mL Su";   // sürekli butonlara basýldýðýnda ekrandaki bilgileri güncelleme amacý !!
			this->lbCoffe->Text = info->TotalCoffe.ToString() + "gr Kahve";
			this->lbMilk->Text = info->TotalMilk.ToString() + "mL Süt";
			this->tbmoney->Text = TotalMoney.ToString();
		
		
	}
	private: System::Void Latte_Click(System::Object^ sender, System::EventArgs^ e) {
		
			info->setAllInfo("Latte", TotalMoney);
			if (info->infoChecker("Latte", TotalMoney)) { TotalMoney -= 185; }//Para her durumda azalmamasý lazým O yüzden bu iþlemi kontrol ediyoruz!
			this->lbWater->Text = info->TotalWater.ToString() + "mL Su";  // sürekli butonlara basýldýðýnda ekrandaki bilgileri güncelleme amacý !! 
			this->lbCoffe->Text = info->TotalCoffe.ToString() + "gr Kahve";
			this->lbMilk->Text = info->TotalMilk.ToString() + "mL Süt";
			this->tbmoney->Text = TotalMoney.ToString();
		
		

	}
	private: System::Void Cappuccino_Click(System::Object^ sender, System::EventArgs^ e) {
	
			info->setAllInfo("Cappuccino", TotalMoney);
			if (info->infoChecker("Cappuccino", TotalMoney)) { TotalMoney -= 225; }//Para her durumda azalmamasý lazým O yüzden bu iþlemi kontrol ediyoruz!
			this->lbWater->Text = info->TotalWater.ToString() + "mL Su";  // sürekli butonlara basýldýðýnda ekrandaki bilgileri güncelleme amacý !! 
			this->lbCoffe->Text = info->TotalCoffe.ToString() + "gr Kahve";
			this->lbMilk->Text = info->TotalMilk.ToString() + "mL Süt";
			this->tbmoney->Text = TotalMoney.ToString();
		
	}



	private: System::Void btAmericano_Click(System::Object^ sender, System::EventArgs^ e) {

		info->setAllInfo("Americano", TotalMoney);
		if (info->infoChecker("Americano", TotalMoney)) { TotalMoney -= 200; }//Para her durumda azalmamasý lazým O yüzden bu iþlemi kontrol ediyoruz!
		this->lbWater->Text = info->TotalWater.ToString() + "mL Su";  // sürekli butonlara basýldýðýnda ekrandaki bilgileri güncelleme amacý !! 
		this->lbCoffe->Text = info->TotalCoffe.ToString() + "gr Kahve";
		this->lbMilk->Text = info->TotalMilk.ToString() + "mL Süt";
		this->tbmoney->Text = TotalMoney.ToString();




	};
	};
}
