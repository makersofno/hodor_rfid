#Hodor RFID Control
This is the access control system for the Makers of NO makerspace. It uses an Arduino Pro Mini connected to an [AWID SR-2400](https://www.amazon.com/AWID-SR-2400-Proximity-Reader/dp/B004KO5ZN4) RFID reader using the Weigand protocol to read [KT-AWID](http://www.awid.com/index.php?option=com_content&view=article&id=548:kt&catid=980:credentials-proximitylf&Itemid=449) key tags. If a valid card is presented, it unlocks an [electric strike](https://www.amazon.com/gp/product/B00V45GWTI/ref=oh_aui_detailpage_o08_s01?ie=UTF8&psc=1) to allow the door to open.

##Future Functionality
Future versions of this project will include an ESP8266 to connect to the internet to query a real-time membership database to verify if an RFID tag is authorized or not.