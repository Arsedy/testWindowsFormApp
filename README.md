# Coffee Machine Simulator

**Açıklama**  
Windows Forms C++/CLI ile yazılmış basit bir kahve makinesi simülasyonudur. Kullanıcı, Espresso, Latte, Cappuccino ve Americano kahvelerinden birini seçebilir ve makinenin mevcut malzemelerine göre kahve alabilir. Eksik malzemeler veya yetersiz bakiye durumunda kullanıcıya uyarı mesajı gösterilir.

---

## Özellikler
- Kahve seçenekleri: Espresso, Latte, Cappuccino, Americano
- Malzeme yönetimi: Su, Kahve, Süt ve kasa parası
- Mevcut malzemeleri görüntüleme
- Eksik malzeme veya yetersiz bakiye uyarısı
- Admin raporu: Malzeme ve kasa durumunu görüntüleme ve güncelleme

---

## Kurulum
1. Visual Studio 2022 kullanın.
2. Projeyi açın (`.sln` dosyası ile).
3. Gerekli resimleri (`espresso.jpg`, `latte.jpg`, `cappuccino.jpg`, `americano.jpg`) projenin çalıştırılabilir dizinine ekleyin(eğer kurulumda sorun çıktıysa ama resimler projede ekli).
4. Projeyi derleyip çalıştırın (`F5`).

---

## Kullanım
1. Para miktarını üstteki textbox’a girin ve `TL` butonuna basın.
2. Bir kahve butonuna tıklayın.
3. Makine yeterli malzemeye sahipse kahve hazırlanır ve kasa bakiyesi güncellenir.
4. Malzeme eksikse veya para yetersizse MessageBox ile uyarı gösterilir.
5. `Rapor` butonuna tıklayarak admin formunu açabilir ve malzeme bilgilerini güncelleyebilirsiniz.

---

## Teknik Bilgiler
- Dil: C++/CLI
- Platform: Windows Forms (.NET Framework tabanlı)
