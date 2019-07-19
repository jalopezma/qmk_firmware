```
➜ cd qmk_firmware 
➜ make lets_split-rev2-jalopezma 
➜ sudo avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 -U flash:w:lets_split_rev2_jalopezma.hex`
```

For some reason if you get an error, do this [https://arduino.stackexchange.com/questions/61359/avrdude-error-butterfly-programmer-uses-avr-write-page-but-does-not-provide](link):
```
➜ sudo systemctl stop ModemManager.service
```
