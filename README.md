#Hodor RFID Control
This is the access control system for the Makers of NO makerspace. It uses an Arduino Pro Mini connected to an [AWID SR-2400](https://www.amazon.com/AWID-SR-2400-Proximity-Reader/dp/B004KO5ZN4) RFID reader using the Weigand protocol to read [KT-AWID](http://www.awid.com/index.php?option=com_content&view=article&id=548:kt&catid=980:credentials-proximitylf&Itemid=449) key tags. If a valid card is presented, it unlocks an [electric strike](https://www.amazon.com/gp/product/B00V45GWTI/ref=oh_aui_detailpage_o08_s01?ie=UTF8&psc=1) to allow the door to open.
![Fritizing Diagram](https://github.com/makersofno/hodor_rfid/blob/master/hodor_rfid_bb.png)
###Parts
* [12v power supply](https://www.amazon.com/gp/product/B00NBJ3PQS/ref=oh_aui_detailpage_o08_s00?ie=UTF8&psc=1)
* [3.3v Arduino Pro Mini](https://www.arduino.cc/en/Main/ArduinoBoardProMini)
* [FTDI Basic](https://www.sparkfun.com/products/9873)
* [Diode](https://www.digikey.com/product-detail/en/fairchild-semiconductor/1N4148/1N4148FS-ND/458603)
* [Transistor](https://www.digikey.com/product-detail/en/micro-commercial-co/2N3904-AP/2N3904-APCT-ND/950591)
* [3v SPDT Relay](https://www.digikey.com/product-detail/en/omron-electronics-inc-emc-div/G5LE-14-DC3/Z3326-ND/1815628)
* 1x 1kΩ resistor
* 2x 20kΩ resistors
* 2x 47kΩ resistors

The 20kΩ and 47kΩ resistors are used as voltage dividers to bring the Weigand Data0 and Data1 voltages from 5v down to the 3v needed by the 3v Arduino Pro Mini.

The other resistor, transistor, and diode are all used to properly control the relay via Arduino.

##Future Functionality
Future versions of this project will include an ESP8266 to connect to the internet to query a real-time membership database to verify if an RFID tag is authorized or not.