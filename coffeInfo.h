#pragma once
#include <Windows.h>
#include <iostream>
#include <list>


using namespace std;
using namespace System;
using namespace System;
using namespace System::Windows::Forms;//yarattýðým mesage boxlarý çalýþtýrmasý gerek !! 
public ref class coffeInfo {
	public:
		int TotalWater = 3000;
		int TotalCoffe = 600;
		int TotalMilk = 1000;
		int TotalMoneyinSafe = 0;
		bool wtr;
		bool cfe;
		bool milk;
		bool chmon;

		void changeWaterInfo(int x) //yeni Formda su miktarýný arttýrmak için 
		{
			TotalWater += x;//gönderilen x kadar miktarý arttýrýr !! 
		}

		void changeCoffeInfo(int x)//yeni Formda kahve miktarýný arttýrmak için 
		{
			TotalCoffe += x;//gönderilen x kadar miktarý arttýrýr !!
		}

		void changeMilkInfo(int x)//yeni Formda süt miktarýný arttýrmak için 
		{
			TotalMilk += x; //gönderilen x kadar miktarý arttýrýr !!
		}

		void takeSafeMoney(int x)
		{
			if (TotalMoneyinSafe < x) {}
			else{TotalMoneyinSafe -= x;}
		
		}


		string mesager(bool x,bool y,bool z,bool m)//Olmayan malzeme belirlenir ve birleþtirilerek return edilir
		{
			string ingridient[] = { "Su", "Kahve", "Süt", "Para" };
			string	prtr = ""; //hangi malzemeler eksikse buraya eklencek ! 
			bool boolchecker[] = {x,y,z,m};
			int length = sizeof(boolchecker) / sizeof(boolchecker[0]);//c++ ta .size yada .length kütüphanesi yok elle ölçmek gerekti! 
			for (int i=0;i<length;i++)
			{
				if (boolchecker[i])
				{
					prtr += ingridient[i] + ",";//malzemeler arasý virgül 
				}
			}
			return prtr;
		}
		bool infoChecker(string coffename, int money) //  gelen parayý ve makinedeki malzemeyi kontrol edip booolean türde bi veri döndürür!!
		{
			string coffeName = coffename;
			int money1 = money;
			bool infocheck = true;
			string str;

			if (coffeName == "Espresso")
			{
				wtr = TotalWater < 100;
				cfe = TotalCoffe < 18;
				milk = false;
				chmon = money1 < 150;

				if (wtr || cfe || chmon)
				{
					str = mesager(wtr, cfe, milk, chmon);
					System::String^ cliString = gcnew System::String(str.c_str()); // bu ifadeyi kullanma sebebim overload oluyordu message boxta ! ! 

					MessageBox::Show(cliString + " Eksik"); // Hangi malzeme eksik ifadesini küçük bi mesaj kutusunda gösterir 
					infocheck = false;
				}
				return infocheck;
			}
			else if (coffeName == "Latte")
			{
				wtr = TotalWater < 200;
				cfe = TotalCoffe < 18;
				milk = TotalMilk < 100;
				chmon = money1 < 185;

				if (wtr || cfe || milk || chmon)
				{
					str = mesager(wtr, cfe, milk, chmon);
					System::String^ cliString = gcnew System::String(str.c_str());
					MessageBox::Show(cliString + " Eksik"); // Hangi malzeme eksik ifadesini küçük bi mesaj kutusunda gösterir 
					infocheck = false;
				}
				return infocheck;
			}
			else if (coffeName == "Cappuccino")
			{
				wtr = TotalWater < 250;
				cfe = TotalCoffe < 24;
				milk = TotalMilk < 100;
				chmon = money1 < 225;

				if (wtr || cfe || milk || chmon)
				{
					str = mesager(wtr, cfe, milk, chmon);
					System::String^ cliString = gcnew System::String(str.c_str());
					MessageBox::Show(cliString + " Eksik"); // Hangi malzeme eksik ifadesini küçük bi mesaj kutusunda gösterir 
					infocheck = false;
				}
				return infocheck;

			}
			else if (coffeName == "Americano")
			{
				wtr = TotalWater < 225;
				cfe = TotalCoffe < 15;
				milk = TotalMilk < 50;
				chmon = money1 < 200;

				if (wtr || cfe || milk || chmon)
				{
					str = mesager(wtr, cfe, milk, chmon);
					System::String^ cliString = gcnew System::String(str.c_str());
					MessageBox::Show(cliString + " Eksik"); // Hangi malzeme eksik ifadesini küçük bi mesaj kutusunda gösterir 
					infocheck = false;
				}
				return infocheck; // boolean ifadesini aþþaðýdaki kodda if else bloklarýnda kontrol edebilmek için return ediyoruz ! 
			}
			return infocheck;
		}
		void setAllInfo(string coffeName,int money){
			int money1 = money; 
			string coffename = coffeName;
			if (coffename=="Espresso"&& infoChecker("Espresso", money1))
			{//kontrol edip deðerleri günceller 
				TotalWater -= 100;
				TotalCoffe -= 18;
				TotalMoneyinSafe += 150;
			}
			else if (coffename == "Latte"&& infoChecker("Latte", money1))
			{//kontrol edip deðerleri günceller 
				TotalWater -= 200;
				TotalCoffe -= 18;
				TotalMilk -= 100;
				TotalMoneyinSafe += 185;
			}
			else if (coffename == "Cappuccino"&& infoChecker("Cappuccino", money1))
			{//kontrol edip deðerleri günceller 
				TotalWater -= 250;
				TotalCoffe -= 24;
				TotalMilk -= 100;
				TotalMoneyinSafe += 225;
			}
			else if (coffename == "Americano" && infoChecker("Americano", money1))
			{//kontrol edip deðerleri günceller 
				TotalWater -= 225;
				TotalCoffe -= 15;
				TotalMilk -= 50;
				TotalMoneyinSafe += 200;
			}//else kullanmaya ihtiyaç yok çünkü butonlar dýþýnda bir kahve ismi almýyoruz! 
		}
		

};
