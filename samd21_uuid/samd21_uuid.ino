void setup()
{
  Serial.begin(115200);
  delay(3000);
  Serial.println("SAMD21 UUID Extractor...");
  //read the UUID in one way
  Serial.print("UUID1: ");
  get_uuid1();
  Serial.println();


  //read the UUID in another way
  Serial.print("UUID2: ");
  get_uuid2();
  Serial.println();
}

void loop()
{

}

void get_uuid1()
{
  /*
     This method is based on reading UUID for STM32 microcontrollers
  */
  uint32_t *idBase0   = (uint32_t *) (0x0080A00C);
  uint32_t *idBase1   = (uint32_t *) (0x0080A040);
  uint32_t *idBase2   = (uint32_t *) (0x0080A044);
  uint32_t *idBase3   = (uint32_t *) (0x0080A048);

  String uuid_id = String(*idBase0, HEX) +
                   String(*idBase1, HEX) +
                   String(*idBase2, HEX) +
                   String(*idBase3, HEX);
  Serial.println(uuid_id);
}

void get_uuid2()
{
  /*
     This methos is as mentioned in Microchip support.
     URL: https://microchipsupport.force.com/s/article/Reading-unique-serial-number-on-SAM-D20-SAM-D21-SAM-R21-devices
  */
  uint32_t val1, val2, val3, val4;
  uint32_t *ptr1 = (uint32_t *)(0x0080A00C);
  val1 = *ptr1;
  uint32_t *ptr = (uint32_t *)(0x0080A040);
  val2 = *ptr;
  ptr++;
  val3 = *ptr;
  ptr++;
  val4 = *ptr;

  Serial.print(val1, HEX);
  Serial.print(val2, HEX);
  Serial.print(val3, HEX);
  Serial.print(val4, HEX);
  Serial.println();
}
