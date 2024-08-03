# jose_gaming

*A short description of the keyboard/project*

* Keyboard Maintainer: [Jose Lopez](https://github.com/Jose Lopez)
* Hardware Supported: ProMicro

Make example for this keyboard (after setting up your build environment):

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

```shell
# option 1
make jose_gaming:default

# option 2
qmk compile -kb jose_gaming -km default
```

Flashing example for this keyboard:

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead/connect RST and GND
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


```shell
# option 1
make jose_gaming:default:flash

# option 2
qmk flash -kb jose_gaming -km default
```
