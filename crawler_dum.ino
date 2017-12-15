#include <VarSpeedServo.h>

VarSpeedServo m1;
VarSpeedServo m2;
VarSpeedServo m3;
VarSpeedServo m4;
VarSpeedServo m5;
VarSpeedServo m6;
VarSpeedServo m7;
VarSpeedServo m8;
String readString;
int x;


void setup() {
x = 1;
  // put your setup code here, to run once:
m1.attach(2);
m2.attach(3);
m3.attach(4);
m4.attach(5);
m5.attach(6);
m6.attach(7);
m7.attach(8);
m8.attach(9);
Serial.begin(9600);

}

void loop() {
  while(Serial.available()) {
    delay(3);
    char c = Serial.read();
    readString += c;
  }
  

  if (readString.length() >0){
    Serial.println(readString);

    if(readString=="stop")
    {
      x = 0;
      stand();      
    }
    
    if(readString== "forward")
    {
      Serial.print("x before loop: ");
      Serial.println(x);
      Serial.print("String: ");
      Serial.println(readString);
      for (x = 2; x > 1; x++) {
        Serial.print("x after loop: ");
        Serial.println(x);
        Serial.print("String: ");
        Serial.println(readString);
        forward1();
        readString = "";
        while(Serial.available()) {
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        Serial.print("String: ");
        Serial.println(readString);
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
    }
  if(readString== "backward")
  {
    backward1(); 
      for (x = 2; x > 1; x++) {              // for looping
        backward1();                         //void
        readString = "";
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
       
  }
  if(readString=="spintoleft")
  {
    spintoleft();
      for (x = 2; x > 1; x++) {              // for looping
        spintoleft();                         //void
        readString = "";
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="stand")
  {
    stand();
      for (x = 2; x > 1; x++) {              // for looping
        stand();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="spintoright")
  {
    spintoright();
    for (x = 2; x > 1; x++) {              // for looping
        spintoright();                     //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
    
  }
  if(readString=="wiggle")
  {
    wiggle();
    for (x = 2; x > 1; x++) {              // for looping
        wiggle();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="play1")
  {
    down();
    for (x = 2; x > 1; x++) {              // for looping
        down();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="play2")
  {
    dagan();
    for (x = 2; x > 1; x++) {              // for looping
        dagan();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="play3")
  {
    play3();
    for (x = 2; x > 1; x++) {              // for looping
        play3();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="play4")
  {
    play4();
    for (x = 2; x > 1; x++) {              // for looping
        play4();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="play5")
  {
    play5();
    for (x = 2; x > 1; x++) {              // for looping
        play5();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }
  if(readString=="play6")
  {
    play6();
    for (x = 2; x > 1; x++) {              // for looping
        play6();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }  
  if(readString=="play7")
  {
    play7();
    for (x = 2; x > 1; x++) {              // for looping
        play7();                            //void
        readString = "";    
        while(Serial.available()) {          // code sa void loop sa taas
          delay(3);
          char c = Serial.read();
           readString += c;
        }
        if (readString.length() > 0 && readString=="stop") {
          x = 0;
        }
      }
  }  
  readString="";
  }
  
}


//voids for the funtions
      

void stand(){
  m1.write(90,80);
  m2.write(90,80);
  m3.write(90,80);
  m4.write(90,80);
  m5.write(90,80);
  m6.write(90,80);
  m7.write(90,80);
  m8.write(90,80);
  
}

void forward(){          

  
  m6.write(70,160);
  m4.write(70,160,true);
  m5.write(130,160);
  m3.write(50,160,true);
  
  m6.write(90,160);
  m4.write(90,160,true);
  m5.write(90,160);
  m3.write(90,160,true);

  m8.write(70,160);
  m2.write(70,160,true);
  m7.write(50,160);
  m1.write(130,160,true);

  m8.write(90,160);
  m2.write(90,160,true);
  m7.write(90,160);
  m1.write(90,160,true);

}

void forward1(){
  
  m6.write(130,160,true);
  m5.write(130,160,true);
  m6.write(90,160,true);
  m5.write(90,160,true);

  m4.write(50,160,true);
  m3.write(50,160,true);
  m4.write(90,160,true);
  m3.write(90,160,true);

  m2.write(130,160,true);
  m1.write(130,160,true);
  m2.write(90,160,true);
  m1.write(90,160,true);

  m8.write(50,160,true);
  m7.write(50,160,true);
  m8.write(90,160,true);
  m7.write(90,160,true);
  
}

void backward(){         
  
  m4.write(110,160);
  m6.write(110,160,true);
  m3.write(130,160);
  m5.write(50,160,true);

  m4.write(90,160);
  m6.write(90,160);
  m3.write(90,160);
  m5.write(90,160,true);

  m2.write(110,160);
  m8.write(110,160,true);
  m1.write(50,160);
  m7.write(130,160,true);

  m2.write(90,160);
  m8.write(90,160);
  m1.write(90,160);
  m7.write(90,160,true);
}

void backward1(){

  m4.write(50,160,true);
  m3.write(130,160,true);
  m4.write(90,160,true);
  m3.write(90,160,true);

  m6.write(130,160,true);
  m5.write(50,160,true);
  m6.write(90,160,true);
  m5.write(90,160,true);

  m8.write(50,160,true);
  m7.write(130,160,true);
  m8.write(90,160,true);
  m7.write(90,160,true);

  m2.write(130,160,true);
  m1.write(50,160,true);
  m2.write(90,160,true);
  m1.write(90,160,true);
  
}


void spintoleft(){
 m6.write(130,160,true);
 m5.write(130,160,true);
 m6.write(90,160,true);

 m8.write(50,160,true);
 m7.write(130,160,true);
 m8.write(90,160,true);

 m4.write(50,160,true);
 m3.write(130,160,true);
 m4.write(90,160,true);

 m2.write(130,160,true);
 m1.write(130,160,true);
 m2.write(90,160,true);

  m1.write(90,160);
  m2.write(90,160);
  m3.write(90,160);
  m4.write(90,160);
  m5.write(90,160);
  m6.write(90,160);
  m7.write(90,160);
  m8.write(90,160,true);
  
  
  
}

void spintoright(){

   m8.write(50,160,true);
  m7.write(50,160,true);
  m8.write(90,160,true);

  m6.write(130,160,true);
  m5.write(50,160,true);
  m6.write(90,160,true);

  m2.write(130,160,true);
  m1.write(50,160,true);
  m2.write(90,160,true);

  m4.write(50,160,true);
  m3.write(50,160,true);
  m4.write(90,160,true);

  m1.write(90,160);
  m2.write(90,160);
  m3.write(90,160);
  m4.write(90,160);
  m5.write(90,160);
  m6.write(90,160);
  m7.write(90,160);
  m8.write(90,160,true);
  

 
}

void down(){
  m2.write(135,180);
  m6.write(135,180);
  m8.write(45,180);
  m4.write(45,180,true);

  m2.write(85,180);
  m6.write(85,180);
  m8.write(100,180);
  m4.write(100,180,true);


}

void wiggle(){
  m5.write(30,150);
  m7.write(150,150);
  m1.write(170,150);  
  m3.write(10,150,true);
  
  m6.write(10,150);
  m8.write(170,150);
  m2.write(130,150);
  m4.write(50,150,true);

  m5.write(0,140);
  m7.write(120,140,true);
  
  m5.write(60,140);
  m7.write(180,140,true);
  
//  m5.write(0,140);
//  m7.write(120,140,true);
//  
//  m5.write(60,140);
//  m7.write(180,140,true); 
//
//  m5.write(0,140);
//  m7.write(120,140,true);
//  
//  m5.write(60,140);
//  m7.write(180,140,true); 
//
//  m5.write(0,140);
//  m7.write(120,140,true);
//  
//  m5.write(60,140);
//  m7.write(180,140,true); 
     
  
}

void play3(){
  //kick
  m5.write(20,150);
  m7.write(150,150);
  m1.write(160,150);  
  m3.write(20,150,true);
  
  m6.write(140,150);
  m8.write(40,150);
  m2.write(140,150);
  m4.write(40,150,true);

  m6.write(120,150);
  m8.write(120,150,true);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
  m8.write(60,150);
  m6.write(60,150,true);
  m6.write(120,150);
  m8.write(120,150,true);
//  m8.write(60,150);
//  m6.write(60,150,true);
//  m6.write(120,150);
//  m8.write(120,150,true);
//  m8.write(60,150);
//  m6.write(60,150,true); 

// m6.write(160,150);
// m8.write(40,150,true);
//
// m8.write(20,150);
// m6.write(140,150,true);
//
// m6.write(160,150);
// m8.write(40,150,true);
//
// m8.write(20,150);
// m6.write(140,150,true);
//
// m6.write(160,150);
// m8.write(40,150,true);
//
// m8.write(20,150);
// m6.write(140,150,true);


  

}

void play4(){
 //walk slow then run 
 forward1();
 forward1();
 forward1();
 dagan();
 dagan();
 dagan();

}


void dagan (){
  m6.write(130,220,true);
  m5.write(130,220,true);
  m6.write(90,220,true);
  m5.write(90,220,true);

  m4.write(50,220,true);
  m3.write(50,220,true);
  m4.write(90,220,true);
  m3.write(90,220,true);

  m2.write(130,220,true);
  m1.write(130,220,true);
  m2.write(90,220,true);
  m1.write(90,220,true);

  m8.write(50,220,true);
  m7.write(50,220,true);
  m8.write(90,220,true);
  m7.write(90,220,true);

 
  
}

void play5(){
  //close open slowmotion
  m1.write(90,150);
  m3.write(90,150);
  m5.write(90,150);
  m7.write(90,150,true);

  m2.write(30,100);
  m4.write(150,100);
  m8.write(150,100);
  m6.write(30,100,true);

  m2.write(150,100);
  m4.write(30,100);
  m8.write(30,100);
  m6.write(150,100,true);  


}

void play6(){
  
   //shake sa iyang feet
m6.write(140,120);
m2.write(110,120);
m8.write(75,120,true);

m3.write(110,120);
m4.write(70,120,true);
m3.write(40,120);
m4.write(20,120,true);

m3.write(110,120);
m4.write(70,120,true);
m3.write(40,120);
m4.write(20,120,true);


}

void play7(){

 //swim
  
 m2.write(140,100,true);
 m1.write(160,100,true);
 m2.write(110,100,true);
 m4.write(40,100,true);
 m3.write(20,100,true);
 m4.write(70,100,true);
 
 m6.write(90,100);
 m8.write(90,100,true);
 m5.write(150,100);
 m7.write(30,100,true);

 m6.write(130,100);
 m8.write(50,100,true);
 m5.write(20,100);
 m7.write(160,100,true);

 m2.write(90,100);
 m1.write(90,100,true);
 m2.write(140,100,true);
 m1.write(160,100,true);
 m2.write(110,100,true);
 
 m4.write(90,100);
 m3.write(90,100,true);
 m4.write(40,100,true);
 m3.write(20,100,true);
 m4.write(70,100,true);

 m6.write(90,100);
 m8.write(90,100);
 m5.write(150,100);
 m7.write(30,100,true);
 m6.write(130,100);
 m8.write(50,100);
 m5.write(20,100);
 m7.write(160,100,true);

 m2.write(90,100);
 m1.write(90,100,true);
 m2.write(140,100,true);
 m1.write(160,100,true);
 m2.write(110,100,true);
 
 m4.write(90,100);
 m3.write(90,100,true);
 m4.write(40,100,true);
 m3.write(20,100,true);
 m4.write(70,100,true);

 m6.write(90,100);
 m8.write(90,100);
 m5.write(150,100);
 m7.write(30,100,true);
 m6.write(130,100);
 m8.write(50,100);
 m5.write(20,100);
 m7.write(160,100,true);
 
 
 

 
 
}

