# bm65rgb

![bm65rgb](https://i.imgur.com/DskSCve.jpeg)

A 65% hotswap in switch RGB keyboard from KPRepublic.

* Hardware Supported: BM65HSRGB
* Hardware Availability: [KP Republic](https://kprepublic.com/products/bm65rgb-bm65-rgb-65-hot-swappable-custom-mechanical-keyboard-pcb-programmed-qmk-via-firmware-full-rgb-switch-underglow-type-c?_pos=1&_sid=5b9a6a5d0&_ss=r)

Make example for this keyboard (after setting up your build environment):

    for rev1: make kprepublic/bm65rgb/rev1:default
    for rev2: make kprepublic/bm65rgb/rev2:default

Flashing example for this keyboard:

    for rev1: make kprepublic/bm65rgb/rev1:default:flash
    for rev2: make kprepublic/bm65rgb/rev2:default:flash

To reset the board into bootloader mode, do one of the following:

* Press the reset switch on the back of the board, near the mcu, while the board is plugged in
* Hold the Esc key while connecting the USB cable (also erases persistent settings)

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
