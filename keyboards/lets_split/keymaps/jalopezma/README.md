```
➜ cd qmk_firmware 
➜ make lets_split-rev2-jalopezma 
➜ sudo avrdude -p atmega32u4 -P /dev/ttyACM0 -c avr109 -U flash:w:lets_split_rev2_jalopezma.hex`
```
