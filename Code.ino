/* bread board wirnig
 *  please connect the wires just like the map below
 *  
 *  lcd:
 *  SCK:13/SDA:11/RES:8/DC:9/CS:10
 *  
 *  hc05:
 *  TX:0/RX:1
 *  
 *  rtc:
 *  SDA:A4/SCL:A5/SQW:3
 *  
 *  ds18b20:
 *  TEMP:2
 *  
 *  vib:
 *  VIB:4
 *  
 *  BOTTONS:
 *  SELECT:7/MOVE:6/BACK:5
 *
 */
/////////////////////////////////////images code///////////////////////////////////////////
static const unsigned char PROGMEM MINE[306] = { //0X00,0X01,0X30,0X00,0X32,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XE0,
0X00,0X00,0X00,0X00,0X5F,0XFC,0X00,0X00,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,0X03,
0XFF,0XFF,0X00,0X00,0X00,0X07,0XF7,0XFF,0X80,0X00,0X00,0X0F,0XFF,0XFF,0XC0,0X00,
0X00,0X1F,0XFF,0XFF,0XE0,0X00,0X00,0X3F,0XFF,0XFF,0XE0,0X00,0X00,0X7F,0XFF,0XFF,
0XF0,0X00,0X00,0XFF,0XFF,0XFF,0XF0,0X00,0X01,0XFF,0XEF,0XFF,0XF8,0X00,0X01,0XFF,
0X83,0XFF,0XF8,0X00,0X01,0XFF,0X81,0XFF,0XFC,0X00,0X01,0XFE,0X00,0X7F,0XFE,0X00,
0X01,0XFC,0X00,0X3F,0XFC,0X00,0X00,0XFC,0X00,0X1F,0XFC,0X00,0X00,0X7C,0X00,0X1F,
0XFC,0X00,0X00,0X7C,0X00,0X0F,0XFC,0X00,0X00,0X78,0XF8,0XFF,0XFC,0X00,0X00,0X78,
0X34,0XFF,0XF8,0X00,0X00,0XF0,0XF8,0X7F,0XF8,0X00,0X00,0XF0,0X00,0X7F,0XF8,0X00,
0X00,0X70,0X00,0X63,0X70,0X00,0X00,0X10,0X00,0X40,0X70,0X00,0X00,0X00,0X00,0X40,
0X30,0X00,0X00,0X00,0X00,0X20,0X20,0X00,0X00,0X00,0X00,0X70,0X60,0X00,0X00,0X00,
0X00,0XE0,0X60,0X00,0X00,0X00,0X00,0X70,0XD0,0X00,0X00,0X00,0X00,0X58,0XC0,0X00,
0X00,0X00,0X10,0XF0,0XC0,0X00,0X00,0X08,0X00,0X31,0X80,0X00,0X00,0X00,0X00,0X33,
0X80,0X00,0X00,0X00,0X00,0X1F,0X00,0X00,0X00,0X00,0X00,0X0F,0X00,0X00,0X00,0X00,
0X00,0X1F,0X00,0X00,0X00,0X00,0X00,0X3F,0X80,0X00,0X00,0X04,0X00,0X7F,0XC0,0X00,
0X00,0X04,0X07,0XFF,0XE0,0X00,0X00,0X04,0X07,0XFF,0XF0,0X00,0X00,0X04,0X01,0XFF,
0XF8,0X00,0X00,0X04,0X00,0XFF,0XFF,0X00,0X00,0X02,0X00,0X7B,0XFF,0XE0,0X00,0X03,
0X00,0X33,0XFF,0XF8,0X00,0X83,0X00,0X37,0XFF,0XFE,0X00,0X01,0X80,0X07,0X7F,0XFF,
0X00,0X00,0X90,0X02,0X7F,0XFF,0X00,0X60,0X40,0X02,0XFF,0XFF,
};
static const unsigned char PROGMEM MADANI_LOGO[267] = { //0X00,0X01,0X48,0X00,0X1D,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7E,0X3C,0X3F,0X0F,0XF0,0X3F,0X0F,
0X8E,0X7E,0X7E,0X3C,0X3F,0X0F,0XF8,0X3F,0X0F,0X8E,0X7E,0X36,0X3C,0X0B,0X83,0X1C,
0X0B,0X03,0XCE,0X18,0X36,0X7C,0X1B,0X83,0X0C,0X1B,0X83,0XCE,0X18,0X36,0X6C,0X19,
0X83,0X0C,0X1B,0X82,0XCE,0X18,0X36,0X6C,0X19,0X83,0X0C,0X19,0X82,0XCE,0X18,0X36,
0X6C,0X19,0X83,0X0C,0X19,0X83,0X6E,0X18,0X37,0X6C,0X39,0X83,0X0C,0X39,0X83,0X6E,
0X18,0X33,0X6C,0X39,0X83,0X0C,0X39,0X83,0X66,0X18,0X33,0X6C,0X31,0XC3,0X0C,0X31,
0X83,0X76,0X18,0X33,0X6C,0X31,0XC3,0X0C,0X31,0XC3,0X36,0X18,0X33,0X4C,0X3F,0XC3,
0X0C,0X3F,0XC3,0X36,0X18,0X33,0XCC,0X3F,0XC3,0X0C,0X3F,0XC3,0X3E,0X18,0X33,0XCC,
0X30,0XC3,0X0C,0X30,0XC3,0X1E,0X18,0X33,0XCC,0X70,0XC3,0X0C,0X70,0XC3,0X1E,0X18,
0X31,0XCC,0X70,0XC3,0X1C,0X70,0XC3,0X1E,0X18,0X30,0X0C,0X60,0XE3,0XF8,0X60,0XE3,
0X0E,0X7E,0X30,0X0C,0X60,0XE3,0XF0,0X60,0XE7,0X0E,0X7E,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X02,0XA8,0X9E,0X70,0X40,0X00,0X00,0X00,0X00,0X02,0XD1,0X84,0X80,0X40,0X00,
0X00,0X00,0X00,0X01,0X51,0X44,0X83,0XC0,0X00,0X00,0X00,0X00,0X01,0XE2,0X44,0X80,
0X40,0X00,0X00,0X00,0X00,0X00,0XA2,0X64,0X78,0X40,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,
};
static const unsigned char PROGMEM GMAIL[60] = { //0X00,0X01,0X12,0X00,0X0D,0X00,
0X7F,0XFF,0X80,0X90,0X02,0X40,0XC8,0X04,0XC0,0XA6,0X19,0X40,0XA9,0X27,0X40,0XA4,
0XC9,0X40,0XA3,0X31,0X40,0XA0,0XC1,0X40,0XA0,0X01,0X40,0XA0,0X01,0X40,0XA0,0X01,
0X40,0XA0,0X01,0X40,0X7F,0XFF,0X80,
};
static const unsigned char PROGMEM INSTAGRAM[38] = { //0X00,0X01,0X10,0X00,0X10,0X00,
0X1F,0XF8,0X3F,0XFC,0X60,0X06,0XC0,0X1B,0XC3,0XDB,0XC7,0XE3,0XCC,0X33,0XCC,0X33,
0XCC,0X33,0XCC,0X33,0XC7,0XE3,0XC3,0XC3,0XC0,0X03,0X60,0X06,0X3F,0XFC,0X1F,0XF8,
};
static const unsigned char PROGMEM TELEGRAM[66] = { //0X00,0X01,0X14,0X00,0X14,0X00,
0X00,0X00,0X00,0X00,0XF0,0X00,0X03,0XFC,0X00,0X0F,0XFF,0X00,0X1F,0XFF,0X80,0X1F,
0XFF,0X80,0X3F,0XFB,0XC0,0X3F,0XE3,0XC0,0X7F,0X03,0XE0,0X78,0X23,0XE0,0X70,0XC3,
0XE0,0X7F,0X87,0XE0,0X3F,0X87,0XC0,0X3F,0XC7,0XC0,0X1F,0XF7,0XC0,0X1F,0XFF,0X80,
0X0F,0XFF,0X00,0X07,0XFE,0X00,0X00,0XF0,0X00,0X00,0X00,0X00,
};
static const unsigned char PROGMEM WHATSAPP[63] = { //0X00,0X01,0X14,0X00,0X13,0X00,
0X00,0XF0,0X00,0X07,0XFE,0X00,0X0F,0X0F,0X00,0X18,0X01,0X80,0X30,0X00,0XC0,0X63,
0X00,0X60,0X63,0X00,0X60,0X67,0X80,0X60,0XC3,0X00,0X30,0XC3,0X00,0X30,0XC1,0X80,
0X30,0X40,0XEE,0X20,0X60,0X7E,0X60,0X60,0X1C,0X60,0X20,0X00,0XC0,0X60,0X01,0X80,
0X7E,0X07,0X00,0X7F,0XFE,0X00,0X40,0XF0,0X00,
};
static const unsigned char PROGMEM MESSAGE[66] = { //0X00,0X01,0X14,0X00,0X14,0X00,
0X01,0XF8,0X00,0X07,0XFE,0X00,0X1F,0XFF,0X80,0X3F,0XFF,0XC0,0X3F,0XFF,0XC0,0X7F,
0XFF,0XE0,0X78,0X01,0XE0,0XFB,0XFD,0XF0,0XF8,0X01,0XF0,0XF8,0X01,0XF0,0XFB,0XFD,
0XF0,0XF8,0X01,0XF0,0XF8,0X01,0XF0,0X7F,0XE3,0XE0,0X7F,0XEF,0XE0,0X3F,0XFF,0XC0,
0X3F,0XFF,0XC0,0X1F,0XFF,0X80,0X07,0XFE,0X00,0X01,0XF8,0X00,
};
static const unsigned char PROGMEM temp[38] = { //0X00,0X01,0X08,0X00,0X09,0X00,
0XC0,0XC0,0X1E,0X20,0X20,0X20,0X20,0X20,0X1E,
};
static const unsigned char PROGMEM alarmLogo[398] = {// 0X00,0X01,0X18,0X00,0X17,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X3E,0X00,0X00,0X00,0X00,0X00,0X00,0X3E,0X00,0X00,0X00,0X00,0X03,0XE0,
0X18,0X03,0XC0,0X00,0X00,0X07,0XF0,0X18,0X07,0XF0,0X00,0X00,0X0F,0XF8,0X3E,0X0F,
0XF8,0X00,0X00,0X1F,0XF3,0XFF,0XE7,0XFC,0X00,0X00,0X3F,0XCF,0XC1,0XFB,0XFE,0X00,
0X00,0X3F,0X9E,0X00,0X3C,0XFE,0X00,0X00,0X3F,0X78,0X00,0X0F,0X7E,0X00,0X00,0X3E,
0XE0,0X00,0X03,0XBE,0X00,0X00,0X3D,0XC3,0X00,0X01,0XDC,0X00,0X00,0X13,0X83,0X00,
0X00,0XCC,0X00,0X00,0X03,0X03,0X80,0X00,0X60,0X00,0X00,0X07,0X01,0XC0,0X00,0X70,
0X00,0X00,0X06,0X00,0XC0,0X00,0X30,0X00,0X00,0X0E,0X00,0XE0,0X00,0X30,0X00,0X00,
0X0C,0X00,0X60,0X00,0X18,0X00,0X00,0X0C,0X00,0X70,0X00,0X18,0X00,0X00,0X0C,0X00,
0X30,0X00,0X18,0X00,0X00,0X1C,0X00,0X38,0X00,0X18,0X00,0X00,0X18,0X00,0X18,0X00,
0X18,0X00,0X00,0X18,0X00,0X38,0X00,0X18,0X00,0X00,0X1C,0X00,0XF0,0X00,0X18,0X00,
0X00,0X0C,0X03,0XE0,0X00,0X18,0X00,0X00,0X0C,0X07,0X80,0X00,0X18,0X00,0X00,0X0C,
0X0E,0X00,0X00,0X18,0X00,0X00,0X0C,0X0C,0X00,0X00,0X38,0X00,0X00,0X06,0X00,0X00,
0X00,0X30,0X00,0X00,0X06,0X00,0X00,0X00,0X70,0X00,0X00,0X03,0X00,0X00,0X00,0X60,
0X00,0X00,0X03,0X80,0X00,0X00,0XE0,0X00,0X00,0X01,0XC0,0X00,0X01,0XC0,0X00,0X00,
0X00,0XE0,0X00,0X03,0X80,0X00,0X00,0X00,0X70,0X00,0X07,0X00,0X00,0X00,0X00,0X3C,
0X00,0X1E,0X00,0X00,0X00,0X00,0X3F,0X00,0XFC,0X00,0X00,0X00,0X00,0X37,0XFF,0XE6,
0X00,0X00,0X00,0X00,0X70,0XFF,0X87,0X00,0X00,0X00,0X00,0X20,0X00,0X02,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};
static const unsigned char PROGMEM drctn[10] = {  //0X00,0X01,0X05,0X00,0X0A,0X00,
0X80,0XC0,0X60,0X30,0X18,0X18,0X30,0X60,0XC0,0X80,
};

/////////////////////library////////////////////////
#include <U8glib.h>
#include <DS3231.h>
//#include <Wire.h>
#include <OneWire.h>
#include <DallasTemperature.h>
//#include <SoftwareSerial.h>
#include <avr/power.h>
#include <avr/sleep.h>
#include <avr/interrupt.h>

///////////////bluetooth configuration//////////////
//#define RX  0
//#define TX  1
//SoftwareSerial notifSerial(RX,TX);
//String SMS,SMSnumber,SMStext;

//////////////////on wire configuration//////////////
#define ONE_WIRE 12
OneWire oneWire(ONE_WIRE);
DallasTemperature sensors(&oneWire);

////////////////////time/////////////////////////////
DS3231    Clock;
bool      Century=false;
bool      h12,PM,ADy,A12h,Apm;
short int alarmHour=0,alarmMinute=0,alarmYear=0,alarmMonth=1,alarmDate=1,alarmDoW=1;
short int alarmHour2=0,alarmMinute2=0,alarmYear2=0,alarmMonth2=1,alarmDate2=1,alarmDoW2=1;
short int alarmHour1=0,alarmMinute1=0,alarmYear1=0,alarmMonth1=1,alarmDate1=1,alarmDoW1=1;
short int myHour=0,myMinute=0,mySecond=0,myYear=0,myMonth=1,myDate=1,myDoW=1 ;

//////////////////oled configuration/////////////////
U8GLIB_SH1106_128X64 u8g(13, 11, 10, 9, 8);  // SCK=13, SDA=11, CS=10, DC=9, Reset=8

/////////////////////variables///////////////////////
//const int logo_time_on=1000;
bool       mute=false;
bool       alarmm1=false,alarmm2=false/*,alarmm3=false*/;
int        loopTime;
short int  Received_int;
short int  c;

//////////////////////buttons////////////////////////
#define down_btn  A1
#define up_btn     7
#define mid_btn   A0
#define back_btn  A2

#define bat_vol   A3
#define vib        3 

///////////////////////////////////void setup/////////////////////////////////////////
void setup(){
  analogReference(INTERNAL);
  /*
  PCICR  |= B00000110;    //pcint 16 to 23  (pin D4 is PCINT20)                                              
  PCMSK1 |= B00000101;
  PCMSK2 |= B00000001;
  */
  Serial.begin(9600);
  sensors.begin();
  Wire.begin();  
   
  pinMode(vib,OUTPUT);

  pinMode(down_btn,INPUT);
  pinMode(up_btn  ,INPUT);
  pinMode(mid_btn ,INPUT);
  pinMode(back_btn,INPUT);
  pinMode(bat_vol ,INPUT);
  
  turnOn_progress();
}

//////////////////////////////////void loop////////////////////////////////////////////
void loop() {

  check();

  while(1){
    
    if(alarmm1==true){
      if((alarmYear1==Clock.getYear() && alarmMonth1==Clock.getMonth(Century) && alarmDate1==Clock.getDate())){   
        if((alarmHour1==Clock.getHour(h12, PM) && alarmMinute1==Clock.getMinute())){
          while(digitalRead(mid_btn)==0 && alarmMinute1==Clock.getMinute() && digitalRead(back_btn)==0){
            //u8g.drawBitmapP( 30, 8, 7, 56, alarmLogo);
            digitalWrite(vib,HIGH);
            delay(200);
            digitalWrite(vib,LOW);
            delay(100);
            digitalWrite(vib,HIGH);
            delay(200);
            digitalWrite(vib,LOW);
            delay(100);          
          }
            alarmm1=false;
        }
      }
    }

    
    if(alarmm2==true){
      if((alarmYear2==Clock.getYear() && alarmMonth2==Clock.getMonth(Century) && alarmDate2==Clock.getDate())){   
        if((alarmHour2==Clock.getHour(h12, PM) && alarmMinute2==Clock.getMinute() && alarmDoW2==Clock.getDoW())){
         while(digitalRead(mid_btn)==0 && alarmMinute2==Clock.getMinute() && digitalRead(back_btn)==0){
            //u8g.drawBitmapP( 30, 8, 7, 56, alarmLogo);
            digitalWrite(vib,HIGH);
            delay(200);
            digitalWrite(vib,LOW);
            delay(100);
            digitalWrite(vib,HIGH);
            delay(200);
            digitalWrite(vib,LOW);
            delay(100);
          }
            alarmm2=false;
        }
      }
    }
    
////////////////////////////////////////////////
    if(digitalRead(mid_btn)){
      delay(200);
      menu();
      //break;
    }
////////////////////////////////////////////////
    if(digitalRead(back_btn)){
      delay(200);
      //u8g.sleepOff();
      loop();
      //break ;
    }
////////////////////////////////////////////////
    if(Serial.available()){ 
      //SMS=notifSerial.readString();
      //SMSnumber=SMS.substring(0,(SMS.indexOf('\n')));
      //SMStext=SMS.substring((SMS.indexOf('\n')+1),SMS.length());
      //sms();
      Received_int = Serial.parseInt();
      //Serial.print(Received_int);
      blth();
    }
    /*else{
      set_sleep_mode(SLEEP_MODE_PWR_DOWN);/////////////////////////
      cli();///////////////////////////////////////////////////////
      sleep_enable();//////////////////////////////////////////////
      sleep_bod_disable();/////////////////////////////////////////
      sei();///////////////////////////////////////////////////////
      sleep_cpu();/////////////////////////////////////////////////
    }*/
  }//while(1) end
}//loop end



/*ISR(PCINT2_vect)
{ 
  


  
  

  //if(PIND & B00010000)
  //{
  //  sleep_disable();
   // power_adc_enable();
 // }//end of push button

  /*
  if(PIND & B10000000)  //Interruption on D7 from RTC  //D2
  {
    
    sleep_disable();
    alarm_detected = true;  
    prev_alarm_toggle_millis = millis();
    
  }//end of RTC interruption
  

  if(!(PIND & B00000001)) 
  {
    sleep_disable();
    power_adc_enable();
  }//end of serial RX interruption
}*/
 
///////////////////////////////////////////////////////////////////////////////////////
void turnOn_progress() {
  loopTime=0;
  while(loopTime<50){
    u8g.firstPage();
    do{
      u8g.drawBitmapP( 75, 5, 6, 50, MINE);
      u8g.drawBitmapP( 25, 20, 9, 29, MADANI_LOGO);
    }while(u8g.nextPage());
  loopTime=loopTime+1;
  }u8g.sleepOn();
}

/////////////////////////////////check//////////////////////////////////////////////
void check() {
  loopTime=0;
  sensors.requestTemperatures();
  int temp = sensors.getTempCByIndex(0);
  int voltage_read = analogRead(bat_vol);
  int percent = map(voltage_read,0,250,0,100);
  while(loopTime<20){
    u8g.firstPage();  
    do{
      u8g.setFont(u8g_font_tpss);////////////battery level///////////
      u8g.setPrintPos(102,12);  
      u8g.print('%');
      u8g.print(percent);
      u8g.setPrintPos(70, 13);////////////////temp///////////////////
      u8g.print(temp);
      u8g.drawBitmapP( 84, 3, 1, 9, temp);
      u8g.setPrintPos(25,52);
      
      switch(Clock.getDoW()){
          case 1:
            u8g.print("Sun");
            break;
          case 2:
            u8g.print("Mon");
            break;
          case 3:
            u8g.print("Thu");
            break;
          case 4:
            u8g.print("Wed");
            break;
          case 5:
            u8g.print("The");
            break;
          case 6:
            u8g.print("Fri");
            break;
          case 7:
            u8g.print("Sat");
            break;
         }
         
      u8g.print(" , ");
      u8g.print(Clock.getDate());
      u8g.print(' ');
      switch(Clock.getMonth(Century)){
          case 1:
            u8g.print("January");
            break;
          case 2:
            u8g.print("Febuary");
            break;
          case 3:
            u8g.print("March");
            break;
          case 4:
            u8g.print("April");
            break;
          case 5:
            u8g.print("May");
            break;
          case 6:
            u8g.print("June");
            break;
          case 7:
            u8g.print("July");
            break;
          case 8:
            u8g.print("August");
            break;
          case 9:
            u8g.print("September");
            break;
          case 10:
            u8g.print("October");
            break;
          case 11:
            u8g.print("November");
            break;
          case 12:
            u8g.print("December");
            break;
         }
  
      u8g.setPrintPos(0,13);
      u8g.print(2000+Clock.getYear(), DEC);
      u8g.print('/');
      u8g.print(Clock.getMonth(Century), DEC);
      u8g.print('/');
      timeStyle(Clock.getDate());
      
      u8g.setFont(u8g_font_courR18);/////////font///////////
      u8g.setPrintPos(25, 38);
      //8g.setFont(u8g_font_helvR14);
      //u8g.setPrintPos(40, 35);
      timeStyle(Clock.getHour(h12, PM));
      u8g.print(':');
      timeStyle(Clock.getMinute());
      //u8g.setFont(u8g_font_helvR08);
      //u8g.print(' ');
      //timeStyle(Clock.getSecond()); 
         
      //u8g.drawBitmapP( 2  ,29, 3, 13, GMAIL    );////////app icon//////////
      //u8g.drawBitmapP( 30 , 8, 7, 56, alarmLogo);
      //u8g.drawBitmapP( 27 ,28, 2, 16, INSTAGRAM);
      //u8g.drawBitmapP( 49 ,26, 3, 20, TELEGRAM );
      //u8g.drawBitmapP( 74 ,26, 3, 19, WHATSAPP );
      //u8g.drawBitmapP( 100,26, 3, 20, MESSAGE  );
      
    }while(u8g.nextPage());
  loopTime=loopTime+1;
} u8g.sleepOn();
}//end check

//////////////////////////////////menu//////////////////////////////////////////
void menu() {
  loopTime=0;
  c=0;
  //u8g.sleepOff();
  while(loopTime<100){
  loopTime=loopTime+1;
    u8g.firstPage();
    do{
      u8g.setFont(u8g_font_tpss);
      u8g.drawStr(45,12,"MENU");
      u8g.drawStr(8,25,"ALARM");
      u8g.drawStr(8,40,"TIME");

    if(mute==false) u8g.drawStr(8,55,"MUTE");
    else            u8g.drawStr(8,55,"UNMUTE");

    if(digitalRead(back_btn)){
        delay(200);
        loop();
    }
      
    if(digitalRead(down_btn)){
        //delay(200);
        loopTime=0;
        c=c+15;
        if(c==45) c=0;
        delay(500);
    }

    if(digitalRead(up_btn)){
        //delay(200);
        loopTime=0;
        c=c-15;
        if(c==-15) c=30;
        delay(500);
    }
    
    if     (c==0 ) u8g.drawBitmapP(0,16,1,10,drctn);
    else if(c==15) u8g.drawBitmapP(0,31,1,10,drctn);
    else if(c==30) u8g.drawBitmapP(0,46,1,10,drctn);
       
    if(digitalRead(mid_btn)){
      delay(200);
      if     (c==0 ) alarm()  ;
      else if(c==15) setTime();
      else if(c==30){
         if(mute==false){
            mute=true;
            loopTime=0;
            while(loopTime<700){
              u8g.firstPage();
              do{
                u8g.drawStr(40,40,"MUTED");
                loopTime=loopTime+1;
              }while(u8g.nextPage());
            }u8g.sleepOn();
          }
         else if(mute==true){
            mute=false; 
            loopTime=0;
            while(loopTime<700){
              u8g.firstPage();
              do{
                u8g.drawStr(35,40,"UNMUTED");
                loopTime=loopTime+1;
              }while(u8g.nextPage());
            }u8g.sleepOn();
          }
        }
      }
    }while(u8g.nextPage());
  }loop();
 }//end menu


//////////////////////////////////bluetooth////////////////////////////////////////
void blth(){
   if(mute==false){
      digitalWrite(vib,HIGH);
      delay(200);
      digitalWrite(vib,LOW);
      delay(100);
      digitalWrite(vib,HIGH);
      delay(200);
      digitalWrite(vib,LOW);
    }
  else digitalWrite(vib,LOW); 
  //delay(500);
  
  u8g.setFont(u8g_font_tpss);
  u8g.sleepOff();
  
  loopTime=0;

switch (Received_int){
  case 49://///////////email/////////////
     while(loopTime<100){
       loopTime=loopTime+1;
       u8g.firstPage();
       do{
         u8g.drawBitmapP( 52, 22, 3, 13, GMAIL);
         u8g.drawStr(50,55,"Email");
       }while(u8g.nextPage());
     }u8g.sleepOn(); 
  case 51://///////////message/////////////
     while(loopTime<100){
       loopTime=loopTime+1;
       u8g.firstPage();
       do{
         u8g.drawBitmapP(52,22,3,20,MESSAGE);
         u8g.drawStr(42,55,"Message");
       }while(u8g.nextPage());
     }u8g.sleepOn(); 
      break;
  case 50://///////////instagram/////////////
     while(loopTime<100){
       loopTime=loopTime+1;
       u8g.firstPage();
       do{
         u8g.drawBitmapP( 52, 22, 2, 16, INSTAGRAM);
         u8g.drawStr(37,55,"Instagram");
       }while(u8g.nextPage());
     }u8g.sleepOn();
     break;
  case 52://///////////telegram/////////////
     while(loopTime<100){
       loopTime=loopTime+1;
       u8g.firstPage();
       do{
         u8g.drawBitmapP( 54, 22, 3, 20, TELEGRAM);
         u8g.drawStr(40,55,"Telegram");
       }while(u8g.nextPage());
     }u8g.sleepOn();
     break;
  case 53://///////////whatsapp/////////////
     loopTime=0;
     while(loopTime<100){
       u8g.firstPage();
       do{
         u8g.drawBitmapP( 52, 22, 3, 19, WHATSAPP);
         u8g.drawStr(36,55,"WhatsApp");
       }while(u8g.nextPage());
       loopTime=loopTime+1;
     }u8g.sleepOn();
     break;
}
   u8g.firstPage();
   do{
   }while(u8g.nextPage());
      
}//end blth

/////////////////////////////////sms receive from arduino sms//////////////////////
/*void sms()  { 

  u8g.firstPage();
   do{
    u8g.drawBitmapP(52,22,3,20,MESSAGE);
    }while(u8g.nextPage());
   if(mute==false){
    digitalWrite(vib,HIGH);
    delay(300);
    digitalWrite(vib,LOW);
    delay(200);
    digitalWrite(vib,HIGH);
    delay(300);
    digitalWrite(vib,LOW);
  }
  
  else{
    digitalWrite(vib,LOW);
  }
   
    u8g.firstPage();
  do{
    u8g.setFont(u8g_font_tpss);
    u8g.setPrintPos(2,12);
    u8g.print("from : ");
    u8g.print(SMSnumber);
    u8g.setPrintPos(2,27);
    //u8g.print(SMStext);
    }while(u8g.nextPage());
}


/*
void sms(){
    SMS=notifSerial.readString();
    SMSnumber=SMS.substring(0,(SMS.indexOf('\n')));
    SMStext=SMS.substring((SMS.indexOf('\n')+1),SMS.length());
    u8g.firstPage();
    do{
    u8g.drawBitmapP(52,22,3,20,MESSAGE);
    }while(u8g.nextPage());
    delay(3000);
    
    u8g.firstPage();
  do{
    u8g.setFont(u8g_font_tpss);
    u8g.setPrintPos(30,12);
    u8g.print(SMSnumber);
    u8g.setPrintPos(2,27);
    u8g.print(SMStext);
    //u8g.sleepOff();
    //delay(5000);
    }while(u8g.nextPage());
   }
*/

         

////////////////////////////////////alarm///////////////////////////////////////
void alarm(){
  loopTime=0;
  c=0;
  u8g.sleepOff();
  while(loopTime<100){
    u8g.firstPage();
    do{
      u8g.setFont(u8g_font_tpss);
      u8g.drawStr(35,12,"SET ALARM");
      u8g.drawStr(8,25,"DAILY ALARM");
      u8g.drawStr(8,40,"WEEKLY ALARM");
      //u8g.drawStr(8,55,"ALARM 3");

    if(alarmm1==true) u8g.drawBox(76,17,6,6);
    if(alarmm2==true) u8g.drawBox(86,33,6,6);
    //if(alarmm3==true) u8g.drawBox(43,45,6,6);
    
   if(digitalRead(back_btn)) {
        delay(200);
        loop();
      }
      
    if(digitalRead(down_btn)){
        //delay(200);
        loopTime=0;
        c=c+15;
        if(c==30) c=0;
        delay(500);
    }

    if(digitalRead(up_btn)){
        //delay(200);
        loopTime=0;
        c=c-15;
        if(c==-15) c=15;
        delay(500);
    }
    
        if(c==0)  u8g.drawBitmapP(0,16,1,10,drctn);
        if(c==15) u8g.drawBitmapP(0,31,1,10,drctn);
        //if(c==30) u8g.drawBitmapP(0,46,1,10,drctn);

    if(digitalRead(mid_btn)){
      delay(200);
      alarmm();
    }


    }while(u8g.nextPage());
    loopTime=loopTime+1;
   }loop();
}//end alarm


/////////////////////////////////////////////////////////////////////////////////////
void alarmm(){
  loopTime=0;
  int w=-10;
  int h=0;

 if(alarmm1==true && c==0){
    alarmm1=false;
    while(loopTime<200){
    u8g.firstPage();
    do{
      u8g.drawStr(7,35,"DAILY ALARM DISABLED");
      loopTime=loopTime+1;
     }while(u8g.nextPage());
    }loop();
 }
 else if(alarmm2==true && c==15){
    alarmm2=false;
    while(loopTime<200){
    u8g.firstPage();
    do{
      u8g.drawStr(7,35,"WEEKLY ALARM DISABLED");
      loopTime=loopTime+1;
     }while(u8g.nextPage());
    }loop();
  }
  
 /*else if(alarmm3==true && c==30){
    alarmm3=false;
    while(loopTime<100){
    u8g.firstPage();
    do{
      u8g.drawStr(20,35,"ALARM 3 DISABLED");
      loopTime=loopTime+1;
     }while(u8g.nextPage());
    }loop();
  }*/
  
else
{
 while(loopTime<700){
  u8g.firstPage();
  do{
    u8g.setFont(u8g_font_tpss);
    u8g.drawStr(43,12,"SET ALARM");
    u8g.setPrintPos(0,27);
    u8g.print("Time  ");
    timeStyle(alarmHour);
    u8g.print(" : ");
    timeStyle(alarmMinute);
    u8g.setPrintPos(0,42);
    u8g.print("Date  ");
    u8g.print(alarmYear+2000);
    u8g.print(" / ");
    timeStyle(alarmMonth);
    u8g.print(" / ");
    timeStyle(alarmDate);
    u8g.setPrintPos(0,57);
    u8g.print("DoW  ");
    if (c==0) u8g.print("DAILY");
    if (c==15) u8g.print(alarmDoW);
    
    if(digitalRead(mid_btn)){
       delay(500);
       loopTime=0;
       w=w+20;
     if(w==50 && h==0){
       w=10;
       h=15;
     }
     else if(w==70 && h==15){
       w=10;
       h=30;  
      }
     else if(w==30 && h==30){
       if(c==0){
        alarmm1=true;
       }
       else if(c==15){
        alarmm2=true;
        alarmHour2=alarmHour;
        alarmMinute2=alarmMinute;
        alarmYear2=alarmYear;
        alarmMonth2=alarmMonth;
        alarmDate2=alarmDate;
        alarmDoW2=alarmDoW;
       }
       /*else if(c==30){
        alarmm3=true;
        alarmHour3=alarmHour;
        alarmMinute3=alarmMinute;
        alarmYear3=alarmYear;
        alarmMonth3=alarmMonth;
        alarmDate3=alarmDate;
        alarmDoW3=alarmDoW;
       }*/
     
       delay(300);
       u8g.firstPage();
       do{
       u8g.drawStr(28,35,"ALARM ENABLED");
       }while(u8g.nextPage());
       delay(1500);
       loop();
      }
    }
////////////////////////////////////////////////////
    if(w==10 && h==0)  u8g.drawLine(30,28,40,28);
    if(w==30 && h==0)  u8g.drawLine(53,28,65,28);
    if(w==10 && h==15) u8g.drawLine(30,43,53,43);
    if(w==30 && h==15) u8g.drawLine(68,43,80,43);
    if(w==50 && h==15) u8g.drawLine(95,43,108,43);
    if(w==10 && h==30) u8g.drawLine(25,58,35,58);
////////////////////////////////////////////////////

  if(digitalRead(down_btn)){
    if(w==10 && h==0){
      delay(200);
      loopTime=0;
      alarmHour=alarmHour+1;
      if(alarmHour==24) alarmHour=0;
    }
    else if(w==30 && h==0){      
      delay(200);
      loopTime=0;
      alarmMinute=alarmMinute+1;
      if(alarmMinute==60) alarmMinute=0;
    }
    else if(w==10 && h==15){
      delay(200);
      loopTime=0;
      alarmYear=alarmYear+1;
      if(alarmYear==100) alarmYear=0;
    }
    else if(w==30 && h==15){
      delay(200);
      loopTime=0;
      alarmMonth=alarmMonth+1;
      if(alarmMonth==13) alarmMonth=1;
    }
    else if(w==50 && h==15){
      delay(200);
      loopTime=0;
      alarmDate=alarmDate+1;
      if(alarmDate==32) alarmDate=1;
    }
    else if(w==10 && h==30){
      delay(200);
      loopTime=0;
      alarmDoW=alarmDoW+1;
      if(alarmDoW==8) alarmDoW=1;
    }
  }
////////////////////////////////////////////////
  else if(digitalRead(up_btn)){
    if(w==10 && h==0){
      delay(200);
      loopTime=0;
      alarmHour=alarmHour-1;
      if(alarmHour==-1) alarmHour=23;
    }
    else if(w==30 && h==0){      
      delay(200);
      loopTime=0;
      alarmMinute=alarmMinute-1;
      if(alarmMinute==-1) alarmMinute=59;
    }
    else if(w==10 && h==15){
      delay(200);
      loopTime=0;
      alarmYear=alarmYear-1;
      if(alarmYear==-1) alarmYear=100;
    }
    else if(w==30 && h==15){
      delay(200);
      loopTime=0;
      alarmMonth=alarmMonth-1;
      if(alarmMonth==0) alarmMonth=12;
    }
    else if(w==50 && h==15){
      delay(200);
      loopTime=0;
      alarmDate=alarmDate-1;
      if(alarmDate==0) alarmDate=31;
    }
    else if(w==10 && h==30){
      delay(200);
      loopTime=0;
      alarmDoW=alarmDoW-1;
      if(alarmDoW==0) alarmDoW=7;
    }
  }
///////////////////////////////////////////////
    else if(digitalRead(back_btn)) loop(); 
///////////////////////////////////////////////
    loopTime=loopTime+1;
  }while(u8g.nextPage());
 }loop();
}
}//end alarmm

////////////////////////////////////set time////////////////////////////////////
void setTime(){
  int h=0;
  int w=-10;
  loopTime=0;
  while(loopTime<700){
  u8g.firstPage();
  do{
    u8g.setFont(u8g_font_tpss);
    u8g.drawStr(30,12,"SET THE TIME");
    u8g.setPrintPos(0,27);
    u8g.print("Time  ");
    timeStyle(myHour);
    u8g.print(" : ");
    timeStyle(myMinute);
    u8g.setPrintPos(0,42);
    u8g.print("Date  ");
    u8g.print(myYear+2000);
    u8g.print(" / ");
    timeStyle(myMonth);
    u8g.print(" / ");
    timeStyle(myDate);
    u8g.setPrintPos(0,57);
    u8g.print("DoW  ");
    u8g.print(myDoW);

    if(digitalRead(mid_btn)){
      delay(500);
      loopTime=0;
      w=w+20;
    if(w==50 && h==0){
      w=10;
      h=15;
    }
    else if(w==70 && h==15){
      w=10;
      h=30;  
      }
    else if(w==30 && h==30){
      
      Clock.setClockMode(false);
      Clock.setHour(myHour);
      Clock.setMinute(myMinute);
      Clock.setSecond(mySecond);
      Clock.setYear(myYear);
      Clock.setMonth(myMonth);
      Clock.setDate(myDate);
      Clock.setDoW(myDoW);
      delay(500);
      u8g.firstPage();
      do{
      u8g.drawStr(35,35,"TIME IS SET");
    }while(u8g.nextPage());
      delay(2000);
      loop();
      }
    }
//////////////////////////////////////////////////
    if(w==10 && h==0)  u8g.drawLine(30,28,40 ,28);
    if(w==30 && h==0)  u8g.drawLine(53,28,65 ,28);
    if(w==10 && h==15) u8g.drawLine(30,43,53 ,43);
    if(w==30 && h==15) u8g.drawLine(68,43,80 ,43);
    if(w==50 && h==15) u8g.drawLine(95,43,108,43);
    if(w==10 && h==30) u8g.drawLine(25,58,35 ,58);
//////////////////////////////////////////////////
  if(digitalRead(down_btn))
  {
    if(w==10 && h==0){
      delay(200);
      loopTime=0;
      myHour=myHour+1;
      if(myHour==24) myHour=0;
    }
    else if(w==30 && h==0){      
      delay(200);
      loopTime=0;
      myMinute=myMinute+1;
      if(myMinute==60) myMinute=0;
    }
    else if(w==10 && h==15){
      delay(200);
      loopTime=0;
      myYear=myYear+1;
      if(myYear==2100) myYear=2000;
    }
    else if(w==30 && h==15){
      delay(200);
      loopTime=0;
      myMonth=myMonth+1;
      if(myMonth==13) myMonth=1;
    }
    else if(w==50 && h==15){
      delay(200);
      loopTime=0;
      myDate=myDate+1;
      if(myDate==32) myDate=1;
    }
    else //if(w==10 && h==30)
    {
      delay(200);
      loopTime=0;
      myDoW=myDoW+1;
      if(myDoW==8) myDoW=1;
    }
  }
//////////////////////////////////////////////
  else if(digitalRead(up_btn))
  {
    if(w==10 && h==0){
      delay(200);
      loopTime=0;
      myHour=myHour-1;
      if(myHour==-1) myHour=23;
    }
    else if(w==30 && h==0){      
      delay(200);
      loopTime=0;
      myMinute=myMinute-1;
      if(myMinute==-1) myMinute=59;
    }
    else if(w==10 && h==15){
      delay(200);
      loopTime=0;
      myYear=myYear-1;
      if(myYear==1999) myYear=2100;
    }
    else if(w==30 && h==15){
      delay(200);
      loopTime=0;
      myMonth=myMonth-1;
      if(myMonth==0) myMonth=12;
    }
    else if(w==50 && h==15){
      delay(200);
      loopTime=0;
      myDate=myDate-1;
      if(myDate==0) myDate=31;
    }
    else //if(w==10 && h==30)
    {
      delay(200);
      loopTime=0;
      myDoW=myDoW-1;
      if(myDoW==0) myDoW=7;
    }
  }
  
   else if(digitalRead(back_btn)) loop();

   loopTime=loopTime+1;
  }while(u8g.nextPage());
 }
 loop();
}//end set time

//////////////////////////////////2digit time style/////////////////////////////
void timeStyle(int style){
  if(style<10) u8g.print('0');
  u8g.print(style,DEC);
}
