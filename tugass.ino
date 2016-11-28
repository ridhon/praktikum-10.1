void setup(){
   Serial.begin(9600);
 }

void loop()
{

 Serial.println("Kalkulator mencari sudut segitiga ");
 Serial.println("MIRING: ");
 float x = getFloatFromSerialMonitor();
 Serial.println(x);
 Serial.println("SAMPING: ");  
 float y = getFloatFromSerialMonitor();
 Serial.println(y); 
 Serial.println("DEPAN: ");  
 float z = getFloatFromSerialMonitor();
 Serial.println(z);
 Serial.println("SUDUT: ");  
 float d= (atan(z/y)*(180/3.14));
 Serial.println(d);
 Serial.println("~~~~~~~~~~~~~~~~~~");    
}

  float getFloatFromSerialMonitor(){
  char inData[20];  
  float f=0;    
  int x=0;  
  while (x<1){  
  String str;   
  if (Serial.available()) {
    delay(100);
    int i=0;
    while (Serial.available() > 0) {
     char  inByte = Serial.read();
      str=str+inByte;
      inData[i]=inByte;
      i+=1;
      x=2;
    }
    f = atof(inData);
    memset(inData, 0, sizeof(inData));  
  }
  }//END WHILE X<1  
   return f; 
  }
