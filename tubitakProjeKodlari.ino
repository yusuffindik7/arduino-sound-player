#include <pcmConfig.h>
#include <pcmRF.h>
#include <TMRpcm.h>
#include "SD.h"
#include "SPI.h"

#define SD_ChipSelectPin 53

TMRpcm au;
String nowPlaying = "";

void setup(){
 
 pinMode(2, INPUT);
 pinMode(3, INPUT);
 pinMode(4, INPUT);
 pinMode(5, INPUT);
 pinMode(6, INPUT);
 pinMode(7, INPUT);
 pinMode(8, INPUT);
 pinMode(9, INPUT);
 pinMode(10, INPUT);
 pinMode(11, INPUT);
 pinMode(12, INPUT);
 pinMode(13, INPUT);

 au.speakerPin = 46;
 au.setVolume(5.7);
 
 Serial.begin(9600);

 if(!SD.begin(SD_ChipSelectPin)) {
    Serial.println("SD Card Not Found");
    return;
  }else{
    Serial.println("SD Card Reading Success");
  }
}

void loop() {
  
  if(!au.isPlaying()){
    if(digitalRead(2) == HIGH){
    Serial.println("a oynatiliyor"); //2. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
    au.play("a.wav"); //2. pinde hangi parça çalacaksa a.wav yerine o parçanın adını yazınız
    nowPlaying = "a.wav"; //2. pinde hangi parça çalacaksa a.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
    }
    else if(digitalRead(3) == HIGH){
      Serial.println("b oynatiliyor"); //3. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("b.wav"); //3. pinde hangi parça çalacaksa b.wav yerine o parçanın adını yazınız
      nowPlaying = "b.wav"; //3. pinde hangi parça çalacaksa b.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(4) == HIGH){
      Serial.println("c oynatiliyor"); //4. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("c.wav"); //4. pinde hangi parça çalacaksa c.wav yerine o parçanın adını yazınız
      nowPlaying = "c.wav"; //4. pinde hangi parça çalacaksa c.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(5) == HIGH){
      Serial.println("d oynatiliyor"); //5. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("d.wav"); //5. pinde hangi parça çalacaksa d.wav yerine o parçanın adını yazınız
      nowPlaying = "d.wav"; //5. pinde hangi parça çalacaksa d.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(6) == HIGH){
      Serial.println("e oynatiliyor"); //6. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("e.wav"); //6. pinde hangi parça çalacaksa e.wav yerine o parçanın adını yazınız
      nowPlaying = "e.wav"; //6. pinde hangi parça çalacaksa e.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(7) == HIGH){
      Serial.println("f oynatiliyor"); //7. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("f.wav"); //7. pinde hangi parça çalacaksa f.wav yerine o parçanın adını yazınız
      nowPlaying = "f.wav"; //7. pinde hangi parça çalacaksa f.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(8) == HIGH){
      Serial.println("g oynatiliyor"); //8. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("g.wav"); //8. pinde hangi parça çalacaksa g.wav yerine o parçanın adını yazınız
      nowPlaying = "g.wav"; //8. pinde hangi parça çalacaksa g.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(9) == HIGH){
      Serial.println("h oynatiliyor"); //9. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("h.wav"); //9. pinde hangi parça çalacaksa h.wav yerine o parçanın adını yazınız
      nowPlaying = "h.wav"; //9. pinde hangi parça çalacaksa h.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(10) == HIGH){
      Serial.println("i oynatiliyor"); //10. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("i.wav"); //10. pinde hangi parça çalacaksa i.wav yerine o parçanın adını yazınız
      nowPlaying = "i.wav"; //10. pinde hangi parça çalacaksa i.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(11) == HIGH){
      Serial.println("j oynatiliyor"); //11. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("j.wav"); //11. pinde hangi parça çalacaksa j.wav yerine o parçanın adını yazınız
      nowPlaying = "j.wav"; //11. pinde hangi parça çalacaksa j.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(12) == HIGH){
      Serial.println("k oynatiliyor"); //12. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("k.wav"); //12. pinde hangi parça çalacaksa k.wav yerine o parçanın adını yazınız
      nowPlaying = "k.wav"; //12. pinde hangi parça çalacaksa k.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
      else if(digitalRead(13) == HIGH){
      Serial.println("m oynatiliyor"); //13. pin için hangi parçayı oynatacaksanız çıktısında ilgili parçayı belirtebilirsiniz
      au.play("m.wav"); //13. pinde hangi parça çalacaksa m.wav yerine o parçanın adını yazınız
      nowPlaying = "m.wav"; //13. pinde hangi parça çalacaksa m.wav yerine o parçanın adını yazınız (bir üst satırda belirttiğiniz parçayı aynen buna da yazınız)
      }
  }else{
    
    /*Kodlarda kesinlikle hiçbir hata veya mantık hatası yoktur. Kablo başka bir pine takıldığında hemen yanındaki pin veya bir önceki çıkarıldığı pinde akım mevcut olduğundan
    takılıyor gibi oluyor ama en sonunda en son takılan pindeki parça çalmaya başlıyor. Kodu aşama aşama inceleyebilirsiniz, zaten alınan çıktılara göre pinde akım kaldığı sonucuna ulaştım.
    Takılma esnasındaki sesi önlemek adına Delay koydum, isterseniz kaldırabilirsiniz.*/
    
    if(digitalRead(2) == HIGH && nowPlaying != "a.wav"){ //2. pin için daha önce üst kısımda hangi parçayı belirlediyseniz a.wav yerine o parçanın adını yazınız
    Serial.println(nowPlaying + " durduruldu (NOW PIN2)");
    au.disable();
    delay(3000);
    }
    else if(digitalRead(3) == HIGH && nowPlaying != "b.wav"){ //3. pin için daha önce üst kısımda hangi parçayı belirlediyseniz b.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN3)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(4) == HIGH && nowPlaying != "c.wav"){ //4. pin için daha önce üst kısımda hangi parçayı belirlediyseniz c.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN4)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(5) == HIGH && nowPlaying != "d.wav"){ //5. pin için daha önce üst kısımda hangi parçayı belirlediyseniz d.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN5)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(6) == HIGH && nowPlaying != "e.wav"){ //6. pin için daha önce üst kısımda hangi parçayı belirlediyseniz e.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN6)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(7) == HIGH && nowPlaying != "f.wav"){ //7. pin için daha önce üst kısımda hangi parçayı belirlediyseniz f.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN7)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(8) == HIGH && nowPlaying != "g.wav"){ //8. pin için daha önce üst kısımda hangi parçayı belirlediyseniz g.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN8)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(9) == HIGH && nowPlaying != "h.wav"){ //9. pin için daha önce üst kısımda hangi parçayı belirlediyseniz h.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN9)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(10) == HIGH && nowPlaying != "i.wav"){ //10. pin için daha önce üst kısımda hangi parçayı belirlediyseniz i.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN10)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(11) == HIGH && nowPlaying != "j.wav"){ //11. pin için daha önce üst kısımda hangi parçayı belirlediyseniz j.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN11)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(12) == HIGH && nowPlaying != "k.wav"){ //12. pin için daha önce üst kısımda hangi parçayı belirlediyseniz k.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN12)");
      au.disable();
      delay(3000);
      }
      else if(digitalRead(13) == HIGH && nowPlaying != "m.wav"){ //13. pin için daha önce üst kısımda hangi parçayı belirlediyseniz m.wav yerine o parçanın adını yazınız
      Serial.println(nowPlaying + " durduruldu (NOW PIN13)");
      au.disable();
      delay(3000);
      }
    }
}
