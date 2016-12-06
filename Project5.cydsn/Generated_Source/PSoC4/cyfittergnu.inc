.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* UART_rx */
.set UART_rx__0__DR, CYREG_GPIO_PRT0_DR
.set UART_rx__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set UART_rx__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set UART_rx__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set UART_rx__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set UART_rx__0__HSIOM_MASK, 0x000F0000
.set UART_rx__0__HSIOM_SHIFT, 16
.set UART_rx__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_rx__0__INTR, CYREG_GPIO_PRT0_INTR
.set UART_rx__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_rx__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set UART_rx__0__MASK, 0x10
.set UART_rx__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set UART_rx__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set UART_rx__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set UART_rx__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set UART_rx__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set UART_rx__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set UART_rx__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set UART_rx__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set UART_rx__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set UART_rx__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set UART_rx__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set UART_rx__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set UART_rx__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set UART_rx__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set UART_rx__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set UART_rx__0__PC, CYREG_GPIO_PRT0_PC
.set UART_rx__0__PC2, CYREG_GPIO_PRT0_PC2
.set UART_rx__0__PORT, 0
.set UART_rx__0__PS, CYREG_GPIO_PRT0_PS
.set UART_rx__0__SHIFT, 4
.set UART_rx__DR, CYREG_GPIO_PRT0_DR
.set UART_rx__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set UART_rx__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set UART_rx__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set UART_rx__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_rx__INTR, CYREG_GPIO_PRT0_INTR
.set UART_rx__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_rx__INTSTAT, CYREG_GPIO_PRT0_INTR
.set UART_rx__MASK, 0x10
.set UART_rx__PA__CFG0, CYREG_UDB_PA0_CFG0
.set UART_rx__PA__CFG1, CYREG_UDB_PA0_CFG1
.set UART_rx__PA__CFG10, CYREG_UDB_PA0_CFG10
.set UART_rx__PA__CFG11, CYREG_UDB_PA0_CFG11
.set UART_rx__PA__CFG12, CYREG_UDB_PA0_CFG12
.set UART_rx__PA__CFG13, CYREG_UDB_PA0_CFG13
.set UART_rx__PA__CFG14, CYREG_UDB_PA0_CFG14
.set UART_rx__PA__CFG2, CYREG_UDB_PA0_CFG2
.set UART_rx__PA__CFG3, CYREG_UDB_PA0_CFG3
.set UART_rx__PA__CFG4, CYREG_UDB_PA0_CFG4
.set UART_rx__PA__CFG5, CYREG_UDB_PA0_CFG5
.set UART_rx__PA__CFG6, CYREG_UDB_PA0_CFG6
.set UART_rx__PA__CFG7, CYREG_UDB_PA0_CFG7
.set UART_rx__PA__CFG8, CYREG_UDB_PA0_CFG8
.set UART_rx__PA__CFG9, CYREG_UDB_PA0_CFG9
.set UART_rx__PC, CYREG_GPIO_PRT0_PC
.set UART_rx__PC2, CYREG_GPIO_PRT0_PC2
.set UART_rx__PORT, 0
.set UART_rx__PS, CYREG_GPIO_PRT0_PS
.set UART_rx__SHIFT, 4

/* UART_SCB */
.set UART_SCB__CTRL, CYREG_SCB0_CTRL
.set UART_SCB__EZ_DATA000, CYREG_SCB0_EZ_DATA000
.set UART_SCB__EZ_DATA001, CYREG_SCB0_EZ_DATA001
.set UART_SCB__EZ_DATA002, CYREG_SCB0_EZ_DATA002
.set UART_SCB__EZ_DATA003, CYREG_SCB0_EZ_DATA003
.set UART_SCB__EZ_DATA004, CYREG_SCB0_EZ_DATA004
.set UART_SCB__EZ_DATA005, CYREG_SCB0_EZ_DATA005
.set UART_SCB__EZ_DATA006, CYREG_SCB0_EZ_DATA006
.set UART_SCB__EZ_DATA007, CYREG_SCB0_EZ_DATA007
.set UART_SCB__EZ_DATA008, CYREG_SCB0_EZ_DATA008
.set UART_SCB__EZ_DATA009, CYREG_SCB0_EZ_DATA009
.set UART_SCB__EZ_DATA010, CYREG_SCB0_EZ_DATA010
.set UART_SCB__EZ_DATA011, CYREG_SCB0_EZ_DATA011
.set UART_SCB__EZ_DATA012, CYREG_SCB0_EZ_DATA012
.set UART_SCB__EZ_DATA013, CYREG_SCB0_EZ_DATA013
.set UART_SCB__EZ_DATA014, CYREG_SCB0_EZ_DATA014
.set UART_SCB__EZ_DATA015, CYREG_SCB0_EZ_DATA015
.set UART_SCB__EZ_DATA016, CYREG_SCB0_EZ_DATA016
.set UART_SCB__EZ_DATA017, CYREG_SCB0_EZ_DATA017
.set UART_SCB__EZ_DATA018, CYREG_SCB0_EZ_DATA018
.set UART_SCB__EZ_DATA019, CYREG_SCB0_EZ_DATA019
.set UART_SCB__EZ_DATA020, CYREG_SCB0_EZ_DATA020
.set UART_SCB__EZ_DATA021, CYREG_SCB0_EZ_DATA021
.set UART_SCB__EZ_DATA022, CYREG_SCB0_EZ_DATA022
.set UART_SCB__EZ_DATA023, CYREG_SCB0_EZ_DATA023
.set UART_SCB__EZ_DATA024, CYREG_SCB0_EZ_DATA024
.set UART_SCB__EZ_DATA025, CYREG_SCB0_EZ_DATA025
.set UART_SCB__EZ_DATA026, CYREG_SCB0_EZ_DATA026
.set UART_SCB__EZ_DATA027, CYREG_SCB0_EZ_DATA027
.set UART_SCB__EZ_DATA028, CYREG_SCB0_EZ_DATA028
.set UART_SCB__EZ_DATA029, CYREG_SCB0_EZ_DATA029
.set UART_SCB__EZ_DATA030, CYREG_SCB0_EZ_DATA030
.set UART_SCB__EZ_DATA031, CYREG_SCB0_EZ_DATA031
.set UART_SCB__I2C_CFG, CYREG_SCB0_I2C_CFG
.set UART_SCB__I2C_CTRL, CYREG_SCB0_I2C_CTRL
.set UART_SCB__I2C_M_CMD, CYREG_SCB0_I2C_M_CMD
.set UART_SCB__I2C_S_CMD, CYREG_SCB0_I2C_S_CMD
.set UART_SCB__I2C_STATUS, CYREG_SCB0_I2C_STATUS
.set UART_SCB__INTR_CAUSE, CYREG_SCB0_INTR_CAUSE
.set UART_SCB__INTR_I2C_EC, CYREG_SCB0_INTR_I2C_EC
.set UART_SCB__INTR_I2C_EC_MASK, CYREG_SCB0_INTR_I2C_EC_MASK
.set UART_SCB__INTR_I2C_EC_MASKED, CYREG_SCB0_INTR_I2C_EC_MASKED
.set UART_SCB__INTR_M, CYREG_SCB0_INTR_M
.set UART_SCB__INTR_M_MASK, CYREG_SCB0_INTR_M_MASK
.set UART_SCB__INTR_M_MASKED, CYREG_SCB0_INTR_M_MASKED
.set UART_SCB__INTR_M_SET, CYREG_SCB0_INTR_M_SET
.set UART_SCB__INTR_RX, CYREG_SCB0_INTR_RX
.set UART_SCB__INTR_RX_MASK, CYREG_SCB0_INTR_RX_MASK
.set UART_SCB__INTR_RX_MASKED, CYREG_SCB0_INTR_RX_MASKED
.set UART_SCB__INTR_RX_SET, CYREG_SCB0_INTR_RX_SET
.set UART_SCB__INTR_S, CYREG_SCB0_INTR_S
.set UART_SCB__INTR_S_MASK, CYREG_SCB0_INTR_S_MASK
.set UART_SCB__INTR_S_MASKED, CYREG_SCB0_INTR_S_MASKED
.set UART_SCB__INTR_S_SET, CYREG_SCB0_INTR_S_SET
.set UART_SCB__INTR_SPI_EC, CYREG_SCB0_INTR_SPI_EC
.set UART_SCB__INTR_SPI_EC_MASK, CYREG_SCB0_INTR_SPI_EC_MASK
.set UART_SCB__INTR_SPI_EC_MASKED, CYREG_SCB0_INTR_SPI_EC_MASKED
.set UART_SCB__INTR_TX, CYREG_SCB0_INTR_TX
.set UART_SCB__INTR_TX_MASK, CYREG_SCB0_INTR_TX_MASK
.set UART_SCB__INTR_TX_MASKED, CYREG_SCB0_INTR_TX_MASKED
.set UART_SCB__INTR_TX_SET, CYREG_SCB0_INTR_TX_SET
.set UART_SCB__RX_CTRL, CYREG_SCB0_RX_CTRL
.set UART_SCB__RX_FIFO_CTRL, CYREG_SCB0_RX_FIFO_CTRL
.set UART_SCB__RX_FIFO_RD, CYREG_SCB0_RX_FIFO_RD
.set UART_SCB__RX_FIFO_RD_SILENT, CYREG_SCB0_RX_FIFO_RD_SILENT
.set UART_SCB__RX_FIFO_STATUS, CYREG_SCB0_RX_FIFO_STATUS
.set UART_SCB__RX_MATCH, CYREG_SCB0_RX_MATCH
.set UART_SCB__SPI_CTRL, CYREG_SCB0_SPI_CTRL
.set UART_SCB__SPI_STATUS, CYREG_SCB0_SPI_STATUS
.set UART_SCB__SS0_POSISTION, 0
.set UART_SCB__SS1_POSISTION, 1
.set UART_SCB__SS2_POSISTION, 2
.set UART_SCB__SS3_POSISTION, 3
.set UART_SCB__STATUS, CYREG_SCB0_STATUS
.set UART_SCB__TX_CTRL, CYREG_SCB0_TX_CTRL
.set UART_SCB__TX_FIFO_CTRL, CYREG_SCB0_TX_FIFO_CTRL
.set UART_SCB__TX_FIFO_STATUS, CYREG_SCB0_TX_FIFO_STATUS
.set UART_SCB__TX_FIFO_WR, CYREG_SCB0_TX_FIFO_WR
.set UART_SCB__UART_CTRL, CYREG_SCB0_UART_CTRL
.set UART_SCB__UART_FLOW_CTRL, CYREG_SCB0_UART_FLOW_CTRL
.set UART_SCB__UART_RX_CTRL, CYREG_SCB0_UART_RX_CTRL
.set UART_SCB__UART_RX_STATUS, CYREG_SCB0_UART_RX_STATUS
.set UART_SCB__UART_TX_CTRL, CYREG_SCB0_UART_TX_CTRL

/* UART_SCBCLK */
.set UART_SCBCLK__CTRL_REGISTER, CYREG_PERI_PCLK_CTL01
.set UART_SCBCLK__DIV_ID, 0x00000040
.set UART_SCBCLK__DIV_REGISTER, CYREG_PERI_DIV_16_CTL00
.set UART_SCBCLK__PA_DIV_ID, 0x000000FF

/* UART_tx */
.set UART_tx__0__DR, CYREG_GPIO_PRT0_DR
.set UART_tx__0__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set UART_tx__0__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set UART_tx__0__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set UART_tx__0__HSIOM, CYREG_HSIOM_PORT_SEL0
.set UART_tx__0__HSIOM_MASK, 0x00F00000
.set UART_tx__0__HSIOM_SHIFT, 20
.set UART_tx__0__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_tx__0__INTR, CYREG_GPIO_PRT0_INTR
.set UART_tx__0__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_tx__0__INTSTAT, CYREG_GPIO_PRT0_INTR
.set UART_tx__0__MASK, 0x20
.set UART_tx__0__OUT_SEL, CYREG_UDB_PA0_CFG10
.set UART_tx__0__OUT_SEL_SHIFT, 10
.set UART_tx__0__OUT_SEL_VAL, -1
.set UART_tx__0__PA__CFG0, CYREG_UDB_PA0_CFG0
.set UART_tx__0__PA__CFG1, CYREG_UDB_PA0_CFG1
.set UART_tx__0__PA__CFG10, CYREG_UDB_PA0_CFG10
.set UART_tx__0__PA__CFG11, CYREG_UDB_PA0_CFG11
.set UART_tx__0__PA__CFG12, CYREG_UDB_PA0_CFG12
.set UART_tx__0__PA__CFG13, CYREG_UDB_PA0_CFG13
.set UART_tx__0__PA__CFG14, CYREG_UDB_PA0_CFG14
.set UART_tx__0__PA__CFG2, CYREG_UDB_PA0_CFG2
.set UART_tx__0__PA__CFG3, CYREG_UDB_PA0_CFG3
.set UART_tx__0__PA__CFG4, CYREG_UDB_PA0_CFG4
.set UART_tx__0__PA__CFG5, CYREG_UDB_PA0_CFG5
.set UART_tx__0__PA__CFG6, CYREG_UDB_PA0_CFG6
.set UART_tx__0__PA__CFG7, CYREG_UDB_PA0_CFG7
.set UART_tx__0__PA__CFG8, CYREG_UDB_PA0_CFG8
.set UART_tx__0__PA__CFG9, CYREG_UDB_PA0_CFG9
.set UART_tx__0__PC, CYREG_GPIO_PRT0_PC
.set UART_tx__0__PC2, CYREG_GPIO_PRT0_PC2
.set UART_tx__0__PORT, 0
.set UART_tx__0__PS, CYREG_GPIO_PRT0_PS
.set UART_tx__0__SHIFT, 5
.set UART_tx__DR, CYREG_GPIO_PRT0_DR
.set UART_tx__DR_CLR, CYREG_GPIO_PRT0_DR_CLR
.set UART_tx__DR_INV, CYREG_GPIO_PRT0_DR_INV
.set UART_tx__DR_SET, CYREG_GPIO_PRT0_DR_SET
.set UART_tx__INTCFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_tx__INTR, CYREG_GPIO_PRT0_INTR
.set UART_tx__INTR_CFG, CYREG_GPIO_PRT0_INTR_CFG
.set UART_tx__INTSTAT, CYREG_GPIO_PRT0_INTR
.set UART_tx__MASK, 0x20
.set UART_tx__PA__CFG0, CYREG_UDB_PA0_CFG0
.set UART_tx__PA__CFG1, CYREG_UDB_PA0_CFG1
.set UART_tx__PA__CFG10, CYREG_UDB_PA0_CFG10
.set UART_tx__PA__CFG11, CYREG_UDB_PA0_CFG11
.set UART_tx__PA__CFG12, CYREG_UDB_PA0_CFG12
.set UART_tx__PA__CFG13, CYREG_UDB_PA0_CFG13
.set UART_tx__PA__CFG14, CYREG_UDB_PA0_CFG14
.set UART_tx__PA__CFG2, CYREG_UDB_PA0_CFG2
.set UART_tx__PA__CFG3, CYREG_UDB_PA0_CFG3
.set UART_tx__PA__CFG4, CYREG_UDB_PA0_CFG4
.set UART_tx__PA__CFG5, CYREG_UDB_PA0_CFG5
.set UART_tx__PA__CFG6, CYREG_UDB_PA0_CFG6
.set UART_tx__PA__CFG7, CYREG_UDB_PA0_CFG7
.set UART_tx__PA__CFG8, CYREG_UDB_PA0_CFG8
.set UART_tx__PA__CFG9, CYREG_UDB_PA0_CFG9
.set UART_tx__PC, CYREG_GPIO_PRT0_PC
.set UART_tx__PC2, CYREG_GPIO_PRT0_PC2
.set UART_tx__PORT, 0
.set UART_tx__PS, CYREG_GPIO_PRT0_PS
.set UART_tx__SHIFT, 5

/* Pin_1 */
.set Pin_1__0__DR, CYREG_GPIO_PRT2_DR
.set Pin_1__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_1__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_1__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_1__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set Pin_1__0__HSIOM_MASK, 0xF0000000
.set Pin_1__0__HSIOM_SHIFT, 28
.set Pin_1__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__0__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_1__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_1__0__MASK, 0x80
.set Pin_1__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_1__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_1__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_1__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_1__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_1__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_1__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_1__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_1__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_1__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_1__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_1__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_1__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_1__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_1__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_1__0__PC, CYREG_GPIO_PRT2_PC
.set Pin_1__0__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_1__0__PORT, 2
.set Pin_1__0__PS, CYREG_GPIO_PRT2_PS
.set Pin_1__0__SHIFT, 7
.set Pin_1__DR, CYREG_GPIO_PRT2_DR
.set Pin_1__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_1__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_1__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_1__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_1__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_1__MASK, 0x80
.set Pin_1__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_1__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_1__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_1__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_1__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_1__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_1__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_1__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_1__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_1__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_1__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_1__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_1__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_1__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_1__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_1__PC, CYREG_GPIO_PRT2_PC
.set Pin_1__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_1__PORT, 2
.set Pin_1__PS, CYREG_GPIO_PRT2_PS
.set Pin_1__SHIFT, 7

/* Pin_Red */
.set Pin_Red__0__DR, CYREG_GPIO_PRT2_DR
.set Pin_Red__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_Red__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_Red__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_Red__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set Pin_Red__0__HSIOM_MASK, 0x0F000000
.set Pin_Red__0__HSIOM_SHIFT, 24
.set Pin_Red__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__0__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_Red__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_Red__0__MASK, 0x40
.set Pin_Red__0__OUT_SEL, CYREG_UDB_PA2_CFG10
.set Pin_Red__0__OUT_SEL_SHIFT, 12
.set Pin_Red__0__OUT_SEL_VAL, 0
.set Pin_Red__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_Red__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_Red__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_Red__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_Red__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_Red__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_Red__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_Red__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_Red__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_Red__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_Red__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_Red__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_Red__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_Red__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_Red__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_Red__0__PC, CYREG_GPIO_PRT2_PC
.set Pin_Red__0__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_Red__0__PORT, 2
.set Pin_Red__0__PS, CYREG_GPIO_PRT2_PS
.set Pin_Red__0__SHIFT, 6
.set Pin_Red__DR, CYREG_GPIO_PRT2_DR
.set Pin_Red__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_Red__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_Red__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_Red__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_Red__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_Red__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_Red__MASK, 0x40
.set Pin_Red__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_Red__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_Red__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_Red__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_Red__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_Red__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_Red__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_Red__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_Red__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_Red__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_Red__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_Red__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_Red__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_Red__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_Red__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_Red__PC, CYREG_GPIO_PRT2_PC
.set Pin_Red__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_Red__PORT, 2
.set Pin_Red__PS, CYREG_GPIO_PRT2_PS
.set Pin_Red__SHIFT, 6

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 6
.set CYDEV_CHIP_DIE_PSOC4A, 3
.set CYDEV_CHIP_DIE_PSOC5LP, 5
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x0E34119E
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 3
.set CYDEV_CHIP_MEMBER_4D, 2
.set CYDEV_CHIP_MEMBER_4F, 4
.set CYDEV_CHIP_MEMBER_5A, 6
.set CYDEV_CHIP_MEMBER_5B, 5
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4F
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4F_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDR_MV, 3300
.set CYIPBLOCK_m0s8bless_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif