# Joystick ESP8266 wifi control car
Control your car with joystick, arduino uno, esp8266 and wifi

## Getting Started
### First what you need?
1. Arduino uno [Aliexpress link](https://www.aliexpress.com/item/32697443734.html?spm=a2g0o.productlist.0.0.791a3b7fi4FVkT&algo_pvid=176c989d-c1b1-4cbc-a109-d20b4a198680&algo_expid=176c989d-c1b1-4cbc-a109-d20b4a198680-1&btsid=d0cf192a-004a-49ee-805d-8742d7761d57&ws_ab_test=searchweb0_0,searchweb201602_1,searchweb201603_55)

2. 2xESP8266 Di mini [Aliexpress link](https://www.aliexpress.com/item/32662942091.html?spm=a2g0o.productlist.0.0.69854586Ka9Wnl&s=p&algo_pvid=a94b0640-c2f6-450f-98b5-9309346dd0b6&algo_expid=a94b0640-c2f6-450f-98b5-9309346dd0b6-2&btsid=c5fc0bf8-5279-4ffe-a544-122bec05b031&ws_ab_test=searchweb0_0,searchweb201602_1,searchweb201603_55)

3. Joystick module [Aliexpress link](https://www.aliexpress.com/item/32656963271.html?spm=a2g0o.productlist.0.0.9a5475c6lkPSqr&algo_pvid=e0692ff0-57c9-4434-97b7-177e1ffa3837&algo_expid=e0692ff0-57c9-4434-97b7-177e1ffa3837-0&btsid=95b5a6c9-f1e9-46ae-88a4-5898177b332f&ws_ab_test=searchweb0_0,searchweb201602_1,searchweb201603_55)

4. L298N driver board module [Aliexpress link](https://www.aliexpress.com/item/32857475920.html?spm=a2g0o.productlist.0.0.1e427c3afNENON&algo_pvid=91c924ef-ef46-46e9-8098-94372b253af3&algo_expid=91c924ef-ef46-46e9-8098-94372b253af3-0&btsid=16ee2a4e-9c24-4bac-a794-67bd0d4ee1c7&ws_ab_test=searchweb0_0,searchweb201602_1,searchweb201603_55)

5. Two weel car Chassis [Aliexpress link](https://www.aliexpress.com/item/32849603447.html?spm=a2g0o.productlist.0.0.4d9b27a8ISPalc&s=p&algo_pvid=04ef511d-6b31-43d5-86e6-8399f06ba448&algo_expid=04ef511d-6b31-43d5-86e6-8399f06ba448-4&btsid=6dceb569-5f1b-4cef-89cd-6fd06515f0f9&ws_ab_test=searchweb0_0,searchweb201602_1,searchweb201603_55)

### Installing Software
1. Donload [Arduino IDE](https://www.arduino.cc/en/Main/Software)

### Build control pad
1. Connect joystick module with arduino uno board like photo 1-3

2. Connect arduino uno board with ESP8266 module like photo 4-6

### Build car
1. Build car chassis temple like photo 7-8

2. Connect ESP8266 module with L298N driver board module like photo 9-12

### Prepare upload program code
1. Change ESP8266 program code. You need to change wifi connection code to your wifi or change your wifi to code wifi name

```
/* WIFI settings */
const char* ssid = "Nelys";
const char* password = "11111111";
```

### Upload code with Arduino IDE into control board
1. Upload  arduino_joystick.ino file code into control pad arduino uno board

2. Upload esp8266_control_pad.ino file code into control pad ESP8266 module board 

3. Upload esp8266_car.ino file code into car ESP8266 module board

### Run test
1. Connect power to your control pad ESP8266 module. After power connection you will see that new device connet to wifi

2. Connect power to your car motor module and second power to ESP8266 module. After power connecton also you will see that new device connet to wifi

3. Wait 1 minute and try move joystick diferent side the car shoud working

## Authors

* **Martynas Razbadauskis** - [Other project](https://github.com/marraz1)

## License

This project is licensed is opensource

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc
