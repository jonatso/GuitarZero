# GuitarZero constraints file made some help from our great friend Geir

# SPI-Boot-Flash
# set_property -dict { PACKAGE_PIN J13   IOSTANDARD LVCMOS33 } [get_ports { boot_dq0 }];
# set_property -dict { PACKAGE_PIN J14   IOSTANDARD LVCMOS33 } [get_ports { boot_dq1 }];
# set_property -dict { PACKAGE_PIN K15   IOSTANDARD LVCMOS33 } [get_ports { boot_dq2 }];
# set_property -dict { PACKAGE_PIN K16   IOSTANDARD LVCMOS33 } [get_ports { boot_dq3 }];
# set_property -dict { PACKAGE_PIN L12   IOSTANDARD LVCMOS33 } [get_ports { boot_s_hash }]; # is called S#
# set_property -dict { PACKAGE_PIN E8    IOSTANDARD LVCMOS33 } [get_ports { boot_c }];

#MCU-SPI - mosi and miso are switched! connected wrong in the schematics...
set_property -dict {PACKAGE_PIN L14 IOSTANDARD LVCMOS33} [get_ports mcu_clck]
set_property -dict {PACKAGE_PIN K13 IOSTANDARD LVCMOS33} [get_ports mcu_mosi]
set_property -dict {PACKAGE_PIN M14 IOSTANDARD LVCMOS33} [get_ports mcu_miso]
set_property -dict {PACKAGE_PIN L13 IOSTANDARD LVCMOS33} [get_ports mcu_cs]

# DAC-I2S
set_property -dict {PACKAGE_PIN M16 IOSTANDARD LVCMOS33} [get_ports dac_data]
set_property -dict {PACKAGE_PIN N16 IOSTANDARD LVCMOS33} [get_ports dac_lrclck]
set_property -dict {PACKAGE_PIN P15 IOSTANDARD LVCMOS33} [get_ports dac_sysclck]
set_property -dict {PACKAGE_PIN P16 IOSTANDARD LVCMOS33} [get_ports dac_bclck]

# DEBUG-LEDS
set_property -dict {PACKAGE_PIN T14 IOSTANDARD LVCMOS33} [get_ports led1]
set_property -dict {PACKAGE_PIN T15 IOSTANDARD LVCMOS33} [get_ports led2]

# Oscillator
set_property -dict {PACKAGE_PIN N11 IOSTANDARD LVCMOS33} [get_ports osc]
create_clock -period 50.000 -name osc_clk -add [get_ports osc]

# # DEBUG-CONNECTOR
# set_property -dict { PACKAGE_PIN N7    IOSTANDARD LVCMOS33 } [get_ports { tdi }];
# set_property -dict { PACKAGE_PIN N8    IOSTANDARD LVCMOS33 } [get_ports { tdo }];
# set_property -dict { PACKAGE_PIN M7    IOSTANDARD LVCMOS33 } [get_ports { tms }];
# set_property -dict { PACKAGE_PIN L7    IOSTANDARD LVCMOS33 } [get_ports { tck }];
# set_property -dict { PACKAGE_PIN M9    IOSTANDARD LVCMOS33 } [get_ports { vcc_debug1 }];
# set_property -dict { PACKAGE_PIN E7    IOSTANDARD LVCMOS33 } [get_ports { vcc_debug2 }];

# # GPIO
#set_property -dict { PACKAGE_PIN T13   IOSTANDARD LVCMOS33 } [get_ports { gpio_15 }];
#set_property -dict { PACKAGE_PIN R10   IOSTANDARD LVCMOS33 } [get_ports { gpio_13 }];
set_property -dict {PACKAGE_PIN R11 IOSTANDARD LVCMOS33} [get_ports gpio_11]
set_property -dict {PACKAGE_PIN N9 IOSTANDARD LVCMOS33} [get_ports gpio_9]
set_property -dict {PACKAGE_PIN P9 IOSTANDARD LVCMOS33} [get_ports gpio_7]
set_property -dict { PACKAGE_PIN M6    IOSTANDARD LVCMOS33 } [get_ports { gpio_5 }];
set_property -dict { PACKAGE_PIN B6    IOSTANDARD LVCMOS33 } [get_ports { gpio_3 }];
set_property -dict { PACKAGE_PIN P8    IOSTANDARD LVCMOS33 } [get_ports { gpio_1 }];
set_property -dict { PACKAGE_PIN R5    IOSTANDARD LVCMOS33 } [get_ports { gpio_2 }];
set_property -dict { PACKAGE_PIN T5    IOSTANDARD LVCMOS33 } [get_ports { gpio_4 }];
set_property -dict {PACKAGE_PIN R6 IOSTANDARD LVCMOS33} [get_ports gpio_6]
set_property -dict {PACKAGE_PIN R7 IOSTANDARD LVCMOS33} [get_ports gpio_8]
set_property -dict {PACKAGE_PIN R8 IOSTANDARD LVCMOS33} [get_ports gpio_10]
set_property -dict {PACKAGE_PIN T8 IOSTANDARD LVCMOS33} [get_ports gpio_12]
# set_property -dict { PACKAGE_PIN T9    IOSTANDARD LVCMOS33 } [get_ports { gpio_14 }];
# set_property -dict { PACKAGE_PIN T10   IOSTANDARD LVCMOS33 } [get_ports { gpio_16 }];

##################
# created from
##################

#SPI-Boot-Flash
#J13 - DQ0
#J14 - DQ1
#K15 - DQ2
#K16 - DQ3
#L12 - S#
#E8 -> C
#
#MCU-SPI
#L14 - CLCK
#M14 - MOSI
#K13 - MISO
#L13 - CS
#
#DAC-I2S
#M16 - DATA
#N16 - LRCLCK
#P15 - SYSCLCK
#P16 - BCLCK
#
#DEBUG-LEDS
#T14
#T15
#
#Oscillator
#N11
#
#DEBUG-CONNECTOR
#N7 - TDI
#N8 - TDO
#M7 - TMS
#L7 - TCK
#M9 - Vcc
#E7 - Vcc
#
#GPIO
#T13 - GPIO_15
#R10 - GPIO_13
#R11 - GPIO_11
#N9  - GPIO_9
#P9  - GPIO_7
#M6  - GPIO_5
#B6  - GPIO_3
#P8  - GPIO_1
#R5  - GPIO_2
#T5  - GPIO_ 4
#R6  - GPIO_6
#R7  - GPIO_8
#R8  - GPIO_10
#T8  - GPIO_12
#T9  - GPIO_14
#T10 - GPIO_16