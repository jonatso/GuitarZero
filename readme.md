# GUITAR ZEEROOOOO MCU PROJECT

Bare minimum example, schmekket fra eksempelene:
- [USB Host Enum](https://github.com/EnergyMicro/EFM32GG_STK3700/tree/master/examples/usbhenum)
- [USB Host kbd](https://github.com/EnergyMicro/EFM32WG_DK3850/blob/master/examples/usbhhidkbd)

## Setup

- bruk linux eller WSL dings
- clone repoet
- i en annen dir, clone gecko sdk-en: [Gecko SDK](https://github.com/SiliconLabs/gecko_sdk), eller bare kopier hele sdk-en
- gå til cmake/GuitarZeroMCU.cmake og endre SDK_PATH til forrige step


## REQUIREMENTS

### ARM gcc toolchain
arm-none-eabi toolchain lagt til som binary executable i /usr/bin
- Last ned tarballen for linux [HER](https://launchpad.net/gcc-arm-embedded/+download) (jeg la den i /tmp)

```sh
# jeg pakket ut i /usr/share
sudo tar xjf gcc-arm-none-eabi-YOUR-VERSION.bz2 -C /usr/share/

# lager symolic links fra executablene til /usr/bin
sudo ln -s /usr/share/gcc-arm-none-eabi-YOUR-VERSION/bin/arm-none-eabi-gcc /usr/bin/arm-none-eabi-gcc 
sudo ln -s /usr/share/gcc-arm-none-eabi-YOUR-VERSION/bin/arm-none-eabi-g++ /usr/bin/arm-none-eabi-g++
sudo ln -s /usr/share/gcc-arm-none-eabi-YOUR-VERSION/bin/arm-none-eabi-gdb /usr/bin/arm-none-eabi-gdb
sudo ln -s /usr/share/gcc-arm-none-eabi-YOUR-VERSION/bin/arm-none-eabi-size /usr/bin/arm-none-eabi-size
sudo ln -s /usr/share/gcc-arm-none-eabi-YOUR-VERSION/bin/arm-none-eabi-objcopy /usr/bin/arm-none-eabi-objcopy
sudo ln -s /usr/share/gcc-arm-none-eabi-YOUR-VERSION/bin/arm-none-eabi-gcc-ranlib /usr/bin/arm-none-eabi-gcc-ranlib
sudo ln -s /usr/share/gcc-arm-none-eabi-YOUR-VERSION/bin/arm-none-eabi-ar /usr/bin/arm-none-eabi-ar

# check at de er lagt til i pathen
arm-none-eabi-gcc --version
arm-none-eabi-g++ --version
arm-none-eabi-gdb --version
arm-none-eabi-size --version
# osv ...
```

### CMAKE 3.25 eller nyere (Jeg brukte 3.27.7)
Man får ikke de nyere versjonene av Cmake med apt eller apt-get, så måtte installere manuelt. 
Jeg brukte denne guiden [HER](https://graspingtech.com/upgrade-cmake/), men den var meget slow... 
