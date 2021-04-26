/////////////////////////////////////////////
// written by Technnical PK team           //
// This is non profitable Video            //
// Code for relay control                  //
// only for eductional porpuse             //
// this code can be regenreted             //
//Please Subscribe And do like the video   //
/////////////////////////////////////////////

void setup() {
  pinMode(12, OUTPUT);// connected to S terminal of Relay

}

void loop() {

  digitalWrite(12,LOW);// turn relay ON
  delay(5000);// turn on for 5 sec

  digitalWrite(12, HIGH);// turn relay OFF
 delay(5000);// turn of for 5 sec

}
 
