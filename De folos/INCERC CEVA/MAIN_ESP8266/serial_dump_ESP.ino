
//pretty simple function - read everything out of the serial buffer and whats coming and get rid of it
void serial_dump_ESP(){
  char temp;
  while(EspSerial.available()){
    temp =EspSerial.read();
    delay(1);//could play around with this value if buffer overflows are occuring
  }//while
  //Serial.println("DUMPED");
}//serial dump
