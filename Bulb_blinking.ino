void setup() {
  
   for(int i=13;i>=9;i--)
   {
    pinMode(i,OUTPUT);
   }
}

void loop() {
  // put your main code here, to run repeatedly:
   
   for(int i=13;i>=9;i--)
   {   
      
      digitalWrite(i,HIGH);
      delay(100);
      digitalWrite(i,LOW);
      
   }
}
