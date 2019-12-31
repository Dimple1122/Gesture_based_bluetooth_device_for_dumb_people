int flexs0=A0;
int flexs1=A1;
int flexs2=A2;
int flexs3=A3;
int data0=0;
int count=0;
int LED=13;
int data1=0;
int data2=0;
int data3=0;
int Switch=8;
int temp=0;
int temp1=0;
int temp2=0;
char str0[20]="I need medicine";
char str1[20]="Give me food";
char str2[50]="I want to go to washroom";
char str3[30]="Help";

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(flexs0,INPUT);
pinMode(flexs1,INPUT);
pinMode(flexs2,INPUT);
pinMode(flexs3,INPUT);
pinMode(LED,OUTPUT);
pinMode(Switch,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
digitalWrite(LED,LOW);
digitalWrite(Switch,LOW);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
data0=analogRead(flexs0);
data1=analogRead(flexs1);
data2=analogRead(flexs2);
data3=analogRead(flexs3);
//Serial.println(data3);
/*Serial.print(data0);
Serial.print("\t");
Serial.print(data1);
Serial.print("\t");
Serial.print(data2);
Serial.print("\t");*/
//Serial.println(data3);

if (digitalRead(Switch)==0)
{
  if(data0>100 && data0<250)
{
 Serial.println(str0);
 delay(400);
}
else if(data1>10)
{ Serial.println(str1);
 delay(400);
  
}
else if(data2>100 && data2<225)
{
 Serial.println(str2);
 delay(400);
 }
else if(data3>280 && data3<295)
{
 //Serial.println(str2);
 Serial.println(str3);
 delay(400);
  }
}


//Serial.println(count);


 else{
 if(data0>100 && data0<250)
{if(count%2==0){
 digitalWrite(13,LOW);
 Serial.println("Lights ON");
 delay(400);
 count=count+1;}
 else{
 digitalWrite(13,HIGH);
 Serial.println("Lights OFF");
 delay(400);
 count=count+1;
  }
}
else if(data1>10)
{ if(temp%2==0){
 digitalWrite(12,LOW);
 Serial.println("Fan ON");
 delay(400);
 temp=temp+1;}
 else{
 digitalWrite(12,HIGH);
 Serial.println("Fan OFF");
 delay(400);
 temp=temp+1;}
}
else if(data2>100 && data2<225)
{
 if(temp1%2==0){
 digitalWrite(11,LOW);
 Serial.println("Television ON");
 delay(400);
 temp1=temp1+1;}
 else{
 digitalWrite(11,HIGH);
 Serial.println("Television OFF");
 delay(400);
 temp1=temp1+1;}
 }
else if(data3>270 && data3<279)
{
 //Serial.println(str2);
 if(temp2%2==0){
 digitalWrite(10,LOW);
 Serial.println("AC ON");
 delay(400);
 temp2=temp2+1;}
 else{
 digitalWrite(10,HIGH);
 Serial.println("AC OFF");
 delay(400);
 temp2=temp2+1;
  } 
}

  
 }
  /*else if(data3>60&&data3<300&&count==0)
  { digitalWrite(LED, HIGH);
    count=1;
    delay(2000);
    }
    else if(data3>60&&data3<300&&count==1)
    {
      digitalWrite(LED, LOW);
    count=0;
    delay(2000);
    }
    */

delay(500);
}