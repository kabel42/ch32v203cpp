#ifndef CH32V203_REG_H
#define CH32V203_REG_H

#include <cppreg.h>
using namespace cppreg;

namespace USB
{
    using USB_pack = RegisterPack<0x40005c00, 1024>;
    struct EP0R : PackedRegister<USB_pack, RegBitSize::b16, 0 * 8> // endpoint 0 register
    {
        using EA = Field<EP0R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP0R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP0R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP0R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP0R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP0R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP0R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP0R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP0R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP0R, 1, 15, read_write>;  // Correct transfer for
    };
    struct EP1R : PackedRegister<USB_pack, RegBitSize::b16, 4 * 8> // endpoint 1 register
    {
        using EA = Field<EP1R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP1R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP1R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP1R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP1R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP1R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP1R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP1R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP1R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP1R, 1, 15, read_write>;  // Correct transfer for
    };
    struct EP2R : PackedRegister<USB_pack, RegBitSize::b16, 8 * 8> // endpoint 2 register
    {
        using EA = Field<EP2R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP2R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP2R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP2R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP2R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP2R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP2R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP2R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP2R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP2R, 1, 15, read_write>;  // Correct transfer for
    };
    struct EP3R : PackedRegister<USB_pack, RegBitSize::b16, 12 * 8> // endpoint 3 register
    {
        using EA = Field<EP3R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP3R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP3R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP3R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP3R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP3R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP3R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP3R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP3R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP3R, 1, 15, read_write>;  // Correct transfer for
    };
    struct EP4R : PackedRegister<USB_pack, RegBitSize::b16, 16 * 8> // endpoint 4 register
    {
        using EA = Field<EP4R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP4R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP4R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP4R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP4R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP4R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP4R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP4R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP4R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP4R, 1, 15, read_write>;  // Correct transfer for
    };
    struct EP5R : PackedRegister<USB_pack, RegBitSize::b16, 20 * 8> // endpoint 5 register
    {
        using EA = Field<EP5R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP5R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP5R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP5R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP5R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP5R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP5R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP5R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP5R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP5R, 1, 15, read_write>;  // Correct transfer for
    };
    struct EP6R : PackedRegister<USB_pack, RegBitSize::b16, 24 * 8> // endpoint 6 register
    {
        using EA = Field<EP6R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP6R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP6R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP6R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP6R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP6R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP6R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP6R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP6R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP6R, 1, 15, read_write>;  // Correct transfer for
    };
    struct EP7R : PackedRegister<USB_pack, RegBitSize::b16, 28 * 8> // endpoint 7 register
    {
        using EA = Field<EP7R, 4, 0, read_write>;       // Endpoint address
        using STAT_TX = Field<EP7R, 2, 4, read_write>;  // Status bits, for transmission
        using DTOG_TX = Field<EP7R, 1, 6, read_write>;  // Data Toggle, for transmission
        using CTR_TX = Field<EP7R, 1, 7, read_write>;   // Correct Transfer for
        using EP_KIND = Field<EP7R, 1, 8, read_write>;  // Endpoint kind
        using EP_TYPE = Field<EP7R, 2, 9, read_write>;  // Endpoint type
        using SETUP = Field<EP7R, 1, 11, read_write>;   // Setup transaction
        using STAT_RX = Field<EP7R, 2, 12, read_write>; // Status bits, for reception
        using DTOG_RX = Field<EP7R, 1, 14, read_write>; // Data Toggle, for reception
        using CTR_RX = Field<EP7R, 1, 15, read_write>;  // Correct transfer for
    };
    struct CNTR : PackedRegister<USB_pack, RegBitSize::b16, 64 * 8> // control register
    {
        using FRES = Field<CNTR, 1, 0, read_write>;     // Force USB Reset
        using PDWN = Field<CNTR, 1, 1, read_write>;     // Power down
        using LPMODE = Field<CNTR, 1, 2, read_write>;   // Low-power mode
        using FSUSP = Field<CNTR, 1, 3, read_write>;    // Force suspend
        using RESUME = Field<CNTR, 1, 4, read_write>;   // Resume request
        using ESOFM = Field<CNTR, 1, 8, read_write>;    // Expected start of frame interrupt
        using SOFM = Field<CNTR, 1, 9, read_write>;     // Start of frame interrupt
        using RESETM = Field<CNTR, 1, 10, read_write>;  // USB reset interrupt mask
        using SUSPM = Field<CNTR, 1, 11, read_write>;   // Suspend mode interrupt
        using WKUPM = Field<CNTR, 1, 12, read_write>;   // Wakeup interrupt mask
        using ERRM = Field<CNTR, 1, 13, read_write>;    // Error interrupt mask
        using PMAOVRM = Field<CNTR, 1, 14, read_write>; // Packet memory area over / underrun
        using CTRM = Field<CNTR, 1, 15, read_write>;    // Correct transfer interrupt
    };
    struct ISTR : PackedRegister<USB_pack, RegBitSize::b16, 68 * 8> // interrupt status register
    {
        using EP_ID = Field<ISTR, 4, 0, read_write>;   // Endpoint Identifier
        using DIR = Field<ISTR, 1, 4, read_write>;     // Direction of transaction
        using ESOF = Field<ISTR, 1, 8, read_write>;    // Expected start frame
        using SOF = Field<ISTR, 1, 9, read_write>;     // start of frame
        using RESET = Field<ISTR, 1, 10, read_write>;  // reset request
        using SUSP = Field<ISTR, 1, 11, read_write>;   // Suspend mode request
        using WKUP = Field<ISTR, 1, 12, read_write>;   // Wakeup
        using ERR = Field<ISTR, 1, 13, read_write>;    // Error
        using PMAOVR = Field<ISTR, 1, 14, read_write>; // Packet memory area over /
        using CTR = Field<ISTR, 1, 15, read_write>;    // Correct transfer
    };
    struct FNR : PackedRegister<USB_pack, RegBitSize::b16, 72 * 8> // frame number register
    {
        using FN = Field<FNR, 11, 0, read_only>;   // Frame number
        using LSOF = Field<FNR, 2, 11, read_only>; // Lost SOF
        using LCK = Field<FNR, 1, 13, read_only>;  // Locked
        using RXDM = Field<FNR, 1, 14, read_only>; // Receive data - line status
        using RXDP = Field<FNR, 1, 15, read_only>; // Receive data + line status
    };
    struct DADDR : PackedRegister<USB_pack, RegBitSize::b16, 76 * 8> // device address
    {
        using ADD = Field<DADDR, 7, 0, read_write>; // Device address
        using EF = Field<DADDR, 1, 7, read_write>;  // Enable function
    };
    struct BTABLE : PackedRegister<USB_pack, RegBitSize::b32, 80 * 8> // Buffer table address
    {
        using BTABLEfield = Field<BTABLE, 13, 3, read_write>; // Buffer table
    };
}
namespace CAN1
{
    using CAN1_pack = RegisterPack<0x40006400, 1024>;
    struct CTLR : PackedRegister<CAN1_pack, RegBitSize::b32, 0 * 8> // CAN Master control register
    {
        using DBF = Field<CTLR, 1, 16, read_write>;   // Debug freeze
        using RESET = Field<CTLR, 1, 15, read_write>; // Software master reset
        using TTCM = Field<CTLR, 1, 7, read_write>;   // Time triggered communication mode
        using ABOM = Field<CTLR, 1, 6, read_write>;   // Automatic bus-off management
        using AWUM = Field<CTLR, 1, 5, read_write>;   // Automatic wakeup mode
        using NART = Field<CTLR, 1, 4, read_write>;   // No automatic retransmission
        using RFLM = Field<CTLR, 1, 3, read_write>;   // Receive FIFO locked mode
        using TXFP = Field<CTLR, 1, 2, read_write>;   // Transmit FIFO priority
        using SLEEP = Field<CTLR, 1, 1, read_write>;  // Sleep mode request
        using INRQ = Field<CTLR, 1, 0, read_write>;   // Initialization request
    };
    struct STATR : PackedRegister<CAN1_pack, RegBitSize::b32, 4 * 8> // CAN master status register
    {
        using RX = Field<STATR, 1, 11, read_only>;    // Rx signal
        using SAMP = Field<STATR, 1, 10, read_only>;  // Last sample point
        using RXM = Field<STATR, 1, 9, read_only>;    // Receive mode
        using TXM = Field<STATR, 1, 8, read_only>;    // Transmit mode
        using SLAKI = Field<STATR, 1, 4, read_write>; // Sleep acknowledge interrupt
        using WKUI = Field<STATR, 1, 3, read_write>;  // Wakeup interrupt
        using ERRI = Field<STATR, 1, 2, read_write>;  // Error interrupt
        using SLAK = Field<STATR, 1, 1, read_only>;   // Sleep acknowledge
        using INAK = Field<STATR, 1, 0, read_only>;   // Initialization acknowledge
    };
    struct TSTATR : PackedRegister<CAN1_pack, RegBitSize::b32, 8 * 8> // CAN transmit status register
    {
        using LOW2 = Field<TSTATR, 1, 31, read_only>;   // Lowest priority flag for mailbox
        using LOW1 = Field<TSTATR, 1, 30, read_only>;   // Lowest priority flag for mailbox
        using LOW0 = Field<TSTATR, 1, 29, read_only>;   // Lowest priority flag for mailbox
        using TME2 = Field<TSTATR, 1, 28, read_only>;   // Transmit mailbox 2 empty
        using TME1 = Field<TSTATR, 1, 27, read_only>;   // Transmit mailbox 1 empty
        using TME0 = Field<TSTATR, 1, 26, read_only>;   // Transmit mailbox 0 empty
        using CODE = Field<TSTATR, 2, 24, read_only>;   // Mailbox code
        using ABRQ2 = Field<TSTATR, 1, 23, read_write>; // Abort request for mailbox 2
        using TERR2 = Field<TSTATR, 1, 19, read_write>; // Transmission error of mailbox 2
        using ALST2 = Field<TSTATR, 1, 18, read_write>; // Arbitration lost for mailbox 2
        using TXOK2 = Field<TSTATR, 1, 17, read_write>; // Transmission OK of mailbox 2
        using RQCP2 = Field<TSTATR, 1, 16, read_write>; // Request completed mailbox2
        using ABRQ1 = Field<TSTATR, 1, 15, read_write>; // Abort request for mailbox 1
        using TERR1 = Field<TSTATR, 1, 11, read_write>; // Transmission error of mailbox1
        using ALST1 = Field<TSTATR, 1, 10, read_write>; // Arbitration lost for mailbox1
        using TXOK1 = Field<TSTATR, 1, 9, read_write>;  // Transmission OK of mailbox1
        using RQCP1 = Field<TSTATR, 1, 8, read_write>;  // Request completed mailbox1
        using ABRQ0 = Field<TSTATR, 1, 7, read_write>;  // Abort request for mailbox0
        using TERR0 = Field<TSTATR, 1, 3, read_write>;  // Transmission error of mailbox0
        using ALST0 = Field<TSTATR, 1, 2, read_write>;  // Arbitration lost for mailbox0
        using TXOK0 = Field<TSTATR, 1, 1, read_write>;  // Transmission OK of mailbox0
        using RQCP0 = Field<TSTATR, 1, 0, read_write>;  // Request completed mailbox0
    };
    struct RFIFO0 : PackedRegister<CAN1_pack, RegBitSize::b32, 12 * 8> // CAN receive FIFO 0 register
    {
        using RFOM0 = Field<RFIFO0, 1, 5, read_write>; // Release FIFO 0 output mailbox
        using FOVR0 = Field<RFIFO0, 1, 4, read_write>; // FIFO 0 overrun
        using FULL0 = Field<RFIFO0, 1, 3, read_write>; // FIFO 0 full
        using FMP0 = Field<RFIFO0, 2, 0, read_only>;   // FIFO 0 message pending
    };
    struct RFIFO1 : PackedRegister<CAN1_pack, RegBitSize::b32, 16 * 8> // CAN receive FIFO 1 register
    {
        using RFOM1 = Field<RFIFO1, 1, 5, read_write>; // Release FIFO 1 output mailbox
        using FOVR1 = Field<RFIFO1, 1, 4, read_write>; // FIFO 1 overrun
        using FULL1 = Field<RFIFO1, 1, 3, read_write>; // FIFO 1 full
        using FMP1 = Field<RFIFO1, 2, 0, read_only>;   // FIFO 1 message pending
    };
    struct INTENR : PackedRegister<CAN1_pack, RegBitSize::b32, 20 * 8> // CAN interrupt enable register
    {
        using SLKIE = Field<INTENR, 1, 17, read_write>; // Sleep interrupt
        using WKUIE = Field<INTENR, 1, 16, read_write>; // Wakeup interrupt
        using ERRIE = Field<INTENR, 1, 15, read_write>; // Error interrupt
        using LECIE = Field<INTENR, 1, 11, read_write>; // Last error code interrupt
        using BOFIE = Field<INTENR, 1, 10, read_write>; // Bus-off interrupt
        using EPVIE = Field<INTENR, 1, 9, read_write>;  // Error passive interrupt
        using EWGIE = Field<INTENR, 1, 8, read_write>;  // Error warning interrupt
        using FOVIE1 = Field<INTENR, 1, 6, read_write>; // FIFO overrun interrupt
        using FFIE1 = Field<INTENR, 1, 5, read_write>;  // FIFO full interrupt
        using FMPIE1 = Field<INTENR, 1, 4, read_write>; // FIFO message pending interrupt
        using FOVIE0 = Field<INTENR, 1, 3, read_write>; // FIFO overrun interrupt
        using FFIE0 = Field<INTENR, 1, 2, read_write>;  // FIFO full interrupt
        using FMPIE0 = Field<INTENR, 1, 1, read_write>; // FIFO message pending interrupt
        using TMEIE = Field<INTENR, 1, 0, read_write>;  // Transmit mailbox empty interrupt
    };
    struct ERRSR : PackedRegister<CAN1_pack, RegBitSize::b32, 24 * 8> // CAN error status register
    {
        using REC = Field<ERRSR, 8, 24, read_only>; // Receive error counter
        using TEC = Field<ERRSR, 8, 16, read_only>; // Least significant byte of the 9-bit
        using LEC = Field<ERRSR, 3, 4, read_write>; // Last error code
        using BOFF = Field<ERRSR, 1, 2, read_only>; // Bus-off
        using EPVF = Field<ERRSR, 1, 1, read_only>; // Error passive
        using EWGF = Field<ERRSR, 1, 0, read_only>; // Error warning
    };
    struct BTIMR : PackedRegister<CAN1_pack, RegBitSize::b32, 28 * 8> // CAN bit timing register
    {
        using SILM = Field<BTIMR, 1, 31, read_write>; // Silent mode (debug)
        using LBKM = Field<BTIMR, 1, 30, read_write>; // Loop back mode (debug)
        using SJW = Field<BTIMR, 2, 24, read_write>;  // Resynchronization jump width
        using TS2 = Field<BTIMR, 3, 20, read_write>;  // Time segment 2
        using TS1 = Field<BTIMR, 4, 16, read_write>;  // Time segment 1
        using BRP = Field<BTIMR, 10, 0, read_write>;  // Baud rate prescaler
    };
    struct TXMIR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 384 * 8> // CAN TX mailbox identifier register
    {
        using STID = Field<TXMIR0, 11, 21, read_write>; // Standard identifier
        using EXID = Field<TXMIR0, 18, 3, read_write>;  // extended identifier
        using IDE = Field<TXMIR0, 1, 2, read_write>;    // Identifier extension
        using RTR = Field<TXMIR0, 1, 1, read_write>;    // Remote transmission request
        using TXRQ = Field<TXMIR0, 1, 0, read_write>;   // Transmit mailbox request
    };
    struct TXMDTR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 388 * 8> // CAN mailbox data length control and time stamp register
    {
        using TIME = Field<TXMDTR0, 16, 16, read_write>; // Message time stamp
        using TGT = Field<TXMDTR0, 1, 8, read_write>;    // Transmit global time
        using DLC = Field<TXMDTR0, 4, 0, read_write>;    // Data length code
    };
    struct TXMDLR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 392 * 8> // CAN mailbox data low register
    {
        using DATA3 = Field<TXMDLR0, 8, 24, read_write>; // Data byte 3
        using DATA2 = Field<TXMDLR0, 8, 16, read_write>; // Data byte 2
        using DATA1 = Field<TXMDLR0, 8, 8, read_write>;  // Data byte 1
        using DATA0 = Field<TXMDLR0, 8, 0, read_write>;  // Data byte 0
    };
    struct TXMDHR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 396 * 8> // CAN mailbox data high register
    {
        using DATA7 = Field<TXMDHR0, 8, 24, read_write>; // Data byte 7
        using DATA6 = Field<TXMDHR0, 8, 16, read_write>; // Data byte 6
        using DATA5 = Field<TXMDHR0, 8, 8, read_write>;  // Data byte 5
        using DATA4 = Field<TXMDHR0, 8, 0, read_write>;  // Data byte 4
    };
    struct TXMIR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 400 * 8> // CAN TX mailbox identifier register
    {
        using STID = Field<TXMIR1, 11, 21, read_write>; // Standard identifier
        using EXID = Field<TXMIR1, 18, 3, read_write>;  // extended identifier
        using IDE = Field<TXMIR1, 1, 2, read_write>;    // Identifier extension
        using RTR = Field<TXMIR1, 1, 1, read_write>;    // Remote transmission request
        using TXRQ = Field<TXMIR1, 1, 0, read_write>;   // Transmit mailbox request
    };
    struct TXMDTR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 404 * 8> // CAN mailbox data length control and time stamp register
    {
        using TIME = Field<TXMDTR1, 16, 16, read_write>; // Message time stamp
        using TGT = Field<TXMDTR1, 1, 8, read_write>;    // Transmit global time
        using DLC = Field<TXMDTR1, 4, 0, read_write>;    // Data length code
    };
    struct TXMDLR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 408 * 8> // CAN mailbox data low register
    {
        using DATA3 = Field<TXMDLR1, 8, 24, read_write>; // Data byte 3
        using DATA2 = Field<TXMDLR1, 8, 16, read_write>; // Data byte 2
        using DATA1 = Field<TXMDLR1, 8, 8, read_write>;  // Data byte 1
        using DATA0 = Field<TXMDLR1, 8, 0, read_write>;  // Data byte 0
    };
    struct TXMDHR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 412 * 8> // CAN mailbox data high register
    {
        using DATA7 = Field<TXMDHR1, 8, 24, read_write>; // Data byte 7
        using DATA6 = Field<TXMDHR1, 8, 16, read_write>; // Data byte 6
        using DATA5 = Field<TXMDHR1, 8, 8, read_write>;  // Data byte 5
        using DATA4 = Field<TXMDHR1, 8, 0, read_write>;  // Data byte 4
    };
    struct TXMIR2 : PackedRegister<CAN1_pack, RegBitSize::b32, 416 * 8> // CAN TX mailbox identifier register
    {
        using STID = Field<TXMIR2, 11, 21, read_write>; // Standard identifier
        using EXID = Field<TXMIR2, 18, 3, read_write>;  // extended identifier
        using IDE = Field<TXMIR2, 1, 2, read_write>;    // Identifier extension
        using RTR = Field<TXMIR2, 1, 1, read_write>;    // Remote transmission request
        using TXRQ = Field<TXMIR2, 1, 0, read_write>;   // Transmit mailbox request
    };
    struct TXMDTR2 : PackedRegister<CAN1_pack, RegBitSize::b32, 420 * 8> // CAN mailbox data length control and time stamp register
    {
        using TIME = Field<TXMDTR2, 16, 16, read_write>; // Message time stamp
        using TGT = Field<TXMDTR2, 1, 8, read_write>;    // Transmit global time
        using DLC = Field<TXMDTR2, 4, 0, read_write>;    // Data length code
    };
    struct TXMDLR2 : PackedRegister<CAN1_pack, RegBitSize::b32, 424 * 8> // CAN mailbox data low register
    {
        using DATA3 = Field<TXMDLR2, 8, 24, read_write>; // Data byte 3
        using DATA2 = Field<TXMDLR2, 8, 16, read_write>; // Data byte 2
        using DATA1 = Field<TXMDLR2, 8, 8, read_write>;  // Data byte 1
        using DATA0 = Field<TXMDLR2, 8, 0, read_write>;  // Data byte 0
    };
    struct TXMDHR2 : PackedRegister<CAN1_pack, RegBitSize::b32, 428 * 8> // CAN mailbox data high register
    {
        using DATA7 = Field<TXMDHR2, 8, 24, read_write>; // Data byte 7
        using DATA6 = Field<TXMDHR2, 8, 16, read_write>; // Data byte 6
        using DATA5 = Field<TXMDHR2, 8, 8, read_write>;  // Data byte 5
        using DATA4 = Field<TXMDHR2, 8, 0, read_write>;  // Data byte 4
    };
    struct RXMIR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 432 * 8> // CAN receive FIFO mailbox identifier register
    {
        using STID = Field<RXMIR0, 11, 21, read_only>; // Standard identifier
        using EXID = Field<RXMIR0, 18, 3, read_only>;  // extended identifier
        using IDE = Field<RXMIR0, 1, 2, read_only>;    // Identifier extension
        using RTR = Field<RXMIR0, 1, 1, read_only>;    // Remote transmission request
    };
    struct RXMDTR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 436 * 8> // CAN receive FIFO mailbox data length control and time stamp
    {
        using TIME = Field<RXMDTR0, 16, 16, read_only>; // Message time stamp
        using FMI = Field<RXMDTR0, 8, 8, read_only>;    // Filter match index
        using DLC = Field<RXMDTR0, 4, 0, read_only>;    // Data length code
    };
    struct RXMDLR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 440 * 8> // CAN receive FIFO mailbox data low register
    {
        using DATA3 = Field<RXMDLR0, 8, 24, read_only>; // Data Byte 3
        using DATA2 = Field<RXMDLR0, 8, 16, read_only>; // Data Byte 2
        using DATA1 = Field<RXMDLR0, 8, 8, read_only>;  // Data Byte 1
        using DATA0 = Field<RXMDLR0, 8, 0, read_only>;  // Data Byte 0
    };
    struct RXMDHR0 : PackedRegister<CAN1_pack, RegBitSize::b32, 444 * 8> // CAN receive FIFO mailbox data high register
    {
        using DATA7 = Field<RXMDHR0, 8, 24, read_only>; // DATA7
        using DATA6 = Field<RXMDHR0, 8, 16, read_only>; // DATA6
        using DATA5 = Field<RXMDHR0, 8, 8, read_only>;  // DATA5
        using DATA4 = Field<RXMDHR0, 8, 0, read_only>;  // DATA4
    };
    struct RXMIR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 448 * 8> // CAN receive FIFO mailbox identifier register
    {
        using STID = Field<RXMIR1, 11, 21, read_only>; // Standard identifier
        using EXID = Field<RXMIR1, 18, 3, read_only>;  // extended identifier
        using IDE = Field<RXMIR1, 1, 2, read_only>;    // Identifier extension
        using RTR = Field<RXMIR1, 1, 1, read_only>;    // Remote transmission request
    };
    struct RXMDTR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 452 * 8> // CAN receive FIFO mailbox data length control and time stamp
    {
        using TIME = Field<RXMDTR1, 16, 16, read_only>; // Message time stamp
        using FMI = Field<RXMDTR1, 8, 8, read_only>;    // Filter match index
        using DLC = Field<RXMDTR1, 4, 0, read_only>;    // Data length code
    };
    struct RXMDLR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 456 * 8> // CAN receive FIFO mailbox data low register
    {
        using DATA3 = Field<RXMDLR1, 8, 24, read_only>; // Data Byte 3
        using DATA2 = Field<RXMDLR1, 8, 16, read_only>; // Data Byte 2
        using DATA1 = Field<RXMDLR1, 8, 8, read_only>;  // Data Byte 1
        using DATA0 = Field<RXMDLR1, 8, 0, read_only>;  // Data Byte 0
    };
    struct RXMDHR1 : PackedRegister<CAN1_pack, RegBitSize::b32, 460 * 8> // CAN receive FIFO mailbox data high register
    {
        using DATA7 = Field<RXMDHR1, 8, 24, read_only>; // DATA7
        using DATA6 = Field<RXMDHR1, 8, 16, read_only>; // DATA6
        using DATA5 = Field<RXMDHR1, 8, 8, read_only>;  // DATA5
        using DATA4 = Field<RXMDHR1, 8, 0, read_only>;  // DATA4
    };
    struct FCTLR : PackedRegister<CAN1_pack, RegBitSize::b32, 512 * 8> // CAN filter master register
    {
        using FINIT = Field<FCTLR, 1, 0, read_write>; // Filter init mode
    };
    struct FMCFGR : PackedRegister<CAN1_pack, RegBitSize::b32, 516 * 8> // CAN filter mode register
    {
        using FBM0 = Field<FMCFGR, 1, 0, read_write>;   // Filter mode
        using FBM1 = Field<FMCFGR, 1, 1, read_write>;   // Filter mode
        using FBM2 = Field<FMCFGR, 1, 2, read_write>;   // Filter mode
        using FBM3 = Field<FMCFGR, 1, 3, read_write>;   // Filter mode
        using FBM4 = Field<FMCFGR, 1, 4, read_write>;   // Filter mode
        using FBM5 = Field<FMCFGR, 1, 5, read_write>;   // Filter mode
        using FBM6 = Field<FMCFGR, 1, 6, read_write>;   // Filter mode
        using FBM7 = Field<FMCFGR, 1, 7, read_write>;   // Filter mode
        using FBM8 = Field<FMCFGR, 1, 8, read_write>;   // Filter mode
        using FBM9 = Field<FMCFGR, 1, 9, read_write>;   // Filter mode
        using FBM10 = Field<FMCFGR, 1, 10, read_write>; // Filter mode
        using FBM11 = Field<FMCFGR, 1, 11, read_write>; // Filter mode
        using FBM12 = Field<FMCFGR, 1, 12, read_write>; // Filter mode
        using FBM13 = Field<FMCFGR, 1, 13, read_write>; // Filter mode
    };
    struct FSCFGR : PackedRegister<CAN1_pack, RegBitSize::b32, 524 * 8> // CAN filter scale register
    {
        using FSC0 = Field<FSCFGR, 1, 0, read_write>;   // Filter scale configuration
        using FSC1 = Field<FSCFGR, 1, 1, read_write>;   // Filter scale configuration
        using FSC2 = Field<FSCFGR, 1, 2, read_write>;   // Filter scale configuration
        using FSC3 = Field<FSCFGR, 1, 3, read_write>;   // Filter scale configuration
        using FSC4 = Field<FSCFGR, 1, 4, read_write>;   // Filter scale configuration
        using FSC5 = Field<FSCFGR, 1, 5, read_write>;   // Filter scale configuration
        using FSC6 = Field<FSCFGR, 1, 6, read_write>;   // Filter scale configuration
        using FSC7 = Field<FSCFGR, 1, 7, read_write>;   // Filter scale configuration
        using FSC8 = Field<FSCFGR, 1, 8, read_write>;   // Filter scale configuration
        using FSC9 = Field<FSCFGR, 1, 9, read_write>;   // Filter scale configuration
        using FSC10 = Field<FSCFGR, 1, 10, read_write>; // Filter scale configuration
        using FSC11 = Field<FSCFGR, 1, 11, read_write>; // Filter scale configuration
        using FSC12 = Field<FSCFGR, 1, 12, read_write>; // Filter scale configuration
        using FSC13 = Field<FSCFGR, 1, 13, read_write>; // Filter scale configuration
    };
    struct FAFIFOR : PackedRegister<CAN1_pack, RegBitSize::b32, 532 * 8> // CAN filter FIFO assignment register
    {
        using FFA0 = Field<FAFIFOR, 1, 0, read_write>;   // Filter FIFO assignment for filter
        using FFA1 = Field<FAFIFOR, 1, 1, read_write>;   // Filter FIFO assignment for filter
        using FFA2 = Field<FAFIFOR, 1, 2, read_write>;   // Filter FIFO assignment for filter
        using FFA3 = Field<FAFIFOR, 1, 3, read_write>;   // Filter FIFO assignment for filter
        using FFA4 = Field<FAFIFOR, 1, 4, read_write>;   // Filter FIFO assignment for filter
        using FFA5 = Field<FAFIFOR, 1, 5, read_write>;   // Filter FIFO assignment for filter
        using FFA6 = Field<FAFIFOR, 1, 6, read_write>;   // Filter FIFO assignment for filter
        using FFA7 = Field<FAFIFOR, 1, 7, read_write>;   // Filter FIFO assignment for filter
        using FFA8 = Field<FAFIFOR, 1, 8, read_write>;   // Filter FIFO assignment for filter
        using FFA9 = Field<FAFIFOR, 1, 9, read_write>;   // Filter FIFO assignment for filter
        using FFA10 = Field<FAFIFOR, 1, 10, read_write>; // Filter FIFO assignment for filter
        using FFA11 = Field<FAFIFOR, 1, 11, read_write>; // Filter FIFO assignment for filter
        using FFA12 = Field<FAFIFOR, 1, 12, read_write>; // Filter FIFO assignment for filter
        using FFA13 = Field<FAFIFOR, 1, 13, read_write>; // Filter FIFO assignment for filter
    };
    struct FWR : PackedRegister<CAN1_pack, RegBitSize::b32, 540 * 8> // CAN filter activation register
    {
        using FACT0 = Field<FWR, 1, 0, read_write>;   // Filter active
        using FACT1 = Field<FWR, 1, 1, read_write>;   // Filter active
        using FACT2 = Field<FWR, 1, 2, read_write>;   // Filter active
        using FACT3 = Field<FWR, 1, 3, read_write>;   // Filter active
        using FACT4 = Field<FWR, 1, 4, read_write>;   // Filter active
        using FACT5 = Field<FWR, 1, 5, read_write>;   // Filter active
        using FACT6 = Field<FWR, 1, 6, read_write>;   // Filter active
        using FACT7 = Field<FWR, 1, 7, read_write>;   // Filter active
        using FACT8 = Field<FWR, 1, 8, read_write>;   // Filter active
        using FACT9 = Field<FWR, 1, 9, read_write>;   // Filter active
        using FACT10 = Field<FWR, 1, 10, read_write>; // Filter active
        using FACT11 = Field<FWR, 1, 11, read_write>; // Filter active
        using FACT12 = Field<FWR, 1, 12, read_write>; // Filter active
        using FACT13 = Field<FWR, 1, 13, read_write>; // Filter active
    };
    struct F0R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 576 * 8> // Filter bank 0 register 1
    {
        using FB0 = Field<F0R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F0R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F0R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F0R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F0R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F0R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F0R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F0R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F0R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F0R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F0R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F0R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F0R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F0R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F0R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F0R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F0R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F0R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F0R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F0R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F0R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F0R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F0R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F0R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F0R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F0R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F0R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F0R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F0R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F0R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F0R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F0R1, 1, 31, read_write>; // Filter bits
    };
    struct F0R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 580 * 8> // Filter bank 0 register 2
    {
        using FB0 = Field<F0R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F0R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F0R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F0R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F0R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F0R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F0R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F0R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F0R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F0R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F0R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F0R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F0R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F0R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F0R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F0R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F0R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F0R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F0R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F0R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F0R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F0R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F0R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F0R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F0R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F0R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F0R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F0R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F0R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F0R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F0R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F0R2, 1, 31, read_write>; // Filter bits
    };
    struct F1R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 584 * 8> // Filter bank 1 register 1
    {
        using FB0 = Field<F1R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F1R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F1R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F1R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F1R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F1R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F1R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F1R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F1R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F1R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F1R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F1R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F1R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F1R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F1R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F1R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F1R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F1R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F1R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F1R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F1R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F1R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F1R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F1R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F1R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F1R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F1R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F1R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F1R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F1R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F1R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F1R1, 1, 31, read_write>; // Filter bits
    };
    struct F1R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 588 * 8> // Filter bank 1 register 2
    {
        using FB0 = Field<F1R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F1R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F1R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F1R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F1R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F1R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F1R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F1R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F1R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F1R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F1R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F1R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F1R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F1R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F1R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F1R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F1R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F1R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F1R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F1R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F1R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F1R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F1R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F1R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F1R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F1R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F1R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F1R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F1R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F1R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F1R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F1R2, 1, 31, read_write>; // Filter bits
    };
    struct F2R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 592 * 8> // Filter bank 2 register 1
    {
        using FB0 = Field<F2R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F2R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F2R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F2R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F2R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F2R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F2R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F2R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F2R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F2R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F2R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F2R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F2R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F2R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F2R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F2R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F2R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F2R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F2R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F2R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F2R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F2R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F2R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F2R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F2R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F2R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F2R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F2R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F2R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F2R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F2R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F2R1, 1, 31, read_write>; // Filter bits
    };
    struct F2R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 596 * 8> // Filter bank 2 register 2
    {
        using FB0 = Field<F2R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F2R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F2R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F2R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F2R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F2R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F2R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F2R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F2R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F2R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F2R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F2R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F2R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F2R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F2R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F2R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F2R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F2R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F2R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F2R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F2R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F2R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F2R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F2R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F2R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F2R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F2R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F2R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F2R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F2R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F2R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F2R2, 1, 31, read_write>; // Filter bits
    };
    struct F3R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 600 * 8> // Filter bank 3 register 1
    {
        using FB0 = Field<F3R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F3R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F3R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F3R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F3R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F3R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F3R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F3R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F3R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F3R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F3R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F3R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F3R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F3R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F3R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F3R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F3R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F3R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F3R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F3R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F3R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F3R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F3R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F3R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F3R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F3R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F3R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F3R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F3R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F3R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F3R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F3R1, 1, 31, read_write>; // Filter bits
    };
    struct F3R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 604 * 8> // Filter bank 3 register 2
    {
        using FB0 = Field<F3R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F3R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F3R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F3R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F3R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F3R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F3R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F3R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F3R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F3R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F3R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F3R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F3R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F3R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F3R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F3R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F3R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F3R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F3R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F3R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F3R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F3R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F3R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F3R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F3R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F3R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F3R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F3R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F3R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F3R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F3R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F3R2, 1, 31, read_write>; // Filter bits
    };
    struct F4R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 608 * 8> // Filter bank 4 register 1
    {
        using FB0 = Field<F4R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F4R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F4R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F4R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F4R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F4R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F4R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F4R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F4R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F4R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F4R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F4R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F4R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F4R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F4R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F4R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F4R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F4R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F4R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F4R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F4R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F4R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F4R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F4R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F4R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F4R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F4R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F4R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F4R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F4R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F4R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F4R1, 1, 31, read_write>; // Filter bits
    };
    struct F4R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 612 * 8> // Filter bank 4 register 2
    {
        using FB0 = Field<F4R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F4R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F4R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F4R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F4R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F4R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F4R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F4R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F4R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F4R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F4R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F4R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F4R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F4R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F4R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F4R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F4R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F4R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F4R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F4R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F4R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F4R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F4R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F4R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F4R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F4R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F4R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F4R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F4R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F4R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F4R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F4R2, 1, 31, read_write>; // Filter bits
    };
    struct F5R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 616 * 8> // Filter bank 5 register 1
    {
        using FB0 = Field<F5R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F5R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F5R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F5R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F5R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F5R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F5R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F5R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F5R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F5R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F5R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F5R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F5R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F5R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F5R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F5R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F5R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F5R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F5R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F5R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F5R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F5R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F5R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F5R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F5R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F5R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F5R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F5R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F5R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F5R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F5R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F5R1, 1, 31, read_write>; // Filter bits
    };
    struct F5R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 620 * 8> // Filter bank 5 register 2
    {
        using FB0 = Field<F5R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F5R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F5R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F5R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F5R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F5R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F5R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F5R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F5R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F5R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F5R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F5R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F5R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F5R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F5R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F5R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F5R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F5R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F5R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F5R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F5R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F5R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F5R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F5R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F5R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F5R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F5R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F5R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F5R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F5R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F5R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F5R2, 1, 31, read_write>; // Filter bits
    };
    struct F6R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 624 * 8> // Filter bank 6 register 1
    {
        using FB0 = Field<F6R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F6R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F6R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F6R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F6R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F6R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F6R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F6R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F6R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F6R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F6R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F6R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F6R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F6R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F6R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F6R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F6R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F6R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F6R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F6R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F6R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F6R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F6R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F6R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F6R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F6R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F6R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F6R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F6R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F6R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F6R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F6R1, 1, 31, read_write>; // Filter bits
    };
    struct F6R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 628 * 8> // Filter bank 6 register 2
    {
        using FB0 = Field<F6R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F6R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F6R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F6R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F6R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F6R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F6R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F6R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F6R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F6R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F6R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F6R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F6R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F6R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F6R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F6R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F6R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F6R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F6R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F6R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F6R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F6R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F6R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F6R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F6R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F6R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F6R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F6R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F6R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F6R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F6R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F6R2, 1, 31, read_write>; // Filter bits
    };
    struct F7R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 632 * 8> // Filter bank 7 register 1
    {
        using FB0 = Field<F7R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F7R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F7R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F7R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F7R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F7R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F7R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F7R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F7R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F7R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F7R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F7R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F7R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F7R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F7R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F7R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F7R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F7R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F7R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F7R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F7R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F7R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F7R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F7R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F7R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F7R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F7R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F7R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F7R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F7R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F7R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F7R1, 1, 31, read_write>; // Filter bits
    };
    struct F7R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 636 * 8> // Filter bank 7 register 2
    {
        using FB0 = Field<F7R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F7R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F7R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F7R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F7R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F7R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F7R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F7R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F7R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F7R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F7R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F7R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F7R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F7R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F7R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F7R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F7R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F7R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F7R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F7R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F7R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F7R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F7R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F7R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F7R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F7R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F7R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F7R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F7R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F7R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F7R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F7R2, 1, 31, read_write>; // Filter bits
    };
    struct F8R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 640 * 8> // Filter bank 8 register 1
    {
        using FB0 = Field<F8R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F8R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F8R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F8R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F8R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F8R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F8R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F8R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F8R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F8R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F8R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F8R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F8R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F8R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F8R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F8R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F8R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F8R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F8R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F8R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F8R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F8R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F8R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F8R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F8R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F8R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F8R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F8R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F8R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F8R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F8R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F8R1, 1, 31, read_write>; // Filter bits
    };
    struct F8R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 644 * 8> // Filter bank 8 register 2
    {
        using FB0 = Field<F8R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F8R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F8R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F8R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F8R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F8R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F8R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F8R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F8R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F8R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F8R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F8R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F8R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F8R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F8R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F8R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F8R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F8R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F8R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F8R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F8R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F8R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F8R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F8R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F8R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F8R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F8R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F8R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F8R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F8R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F8R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F8R2, 1, 31, read_write>; // Filter bits
    };
    struct F9R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 648 * 8> // Filter bank 9 register 1
    {
        using FB0 = Field<F9R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F9R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F9R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F9R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F9R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F9R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F9R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F9R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F9R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F9R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F9R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F9R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F9R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F9R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F9R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F9R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F9R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F9R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F9R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F9R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F9R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F9R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F9R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F9R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F9R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F9R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F9R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F9R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F9R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F9R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F9R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F9R1, 1, 31, read_write>; // Filter bits
    };
    struct F9R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 652 * 8> // Filter bank 9 register 2
    {
        using FB0 = Field<F9R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F9R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F9R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F9R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F9R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F9R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F9R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F9R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F9R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F9R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F9R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F9R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F9R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F9R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F9R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F9R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F9R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F9R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F9R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F9R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F9R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F9R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F9R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F9R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F9R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F9R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F9R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F9R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F9R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F9R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F9R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F9R2, 1, 31, read_write>; // Filter bits
    };
    struct F10R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 656 * 8> // Filter bank 10 register 1
    {
        using FB0 = Field<F10R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F10R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F10R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F10R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F10R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F10R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F10R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F10R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F10R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F10R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F10R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F10R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F10R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F10R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F10R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F10R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F10R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F10R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F10R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F10R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F10R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F10R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F10R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F10R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F10R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F10R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F10R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F10R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F10R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F10R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F10R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F10R1, 1, 31, read_write>; // Filter bits
    };
    struct F10R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 660 * 8> // Filter bank 10 register 2
    {
        using FB0 = Field<F10R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F10R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F10R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F10R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F10R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F10R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F10R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F10R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F10R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F10R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F10R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F10R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F10R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F10R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F10R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F10R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F10R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F10R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F10R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F10R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F10R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F10R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F10R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F10R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F10R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F10R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F10R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F10R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F10R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F10R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F10R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F10R2, 1, 31, read_write>; // Filter bits
    };
    struct F11R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 664 * 8> // Filter bank 11 register 1
    {
        using FB0 = Field<F11R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F11R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F11R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F11R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F11R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F11R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F11R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F11R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F11R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F11R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F11R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F11R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F11R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F11R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F11R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F11R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F11R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F11R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F11R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F11R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F11R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F11R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F11R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F11R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F11R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F11R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F11R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F11R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F11R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F11R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F11R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F11R1, 1, 31, read_write>; // Filter bits
    };
    struct F11R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 668 * 8> // Filter bank 11 register 2
    {
        using FB0 = Field<F11R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F11R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F11R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F11R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F11R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F11R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F11R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F11R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F11R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F11R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F11R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F11R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F11R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F11R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F11R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F11R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F11R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F11R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F11R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F11R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F11R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F11R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F11R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F11R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F11R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F11R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F11R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F11R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F11R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F11R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F11R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F11R2, 1, 31, read_write>; // Filter bits
    };
    struct F12R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 672 * 8> // Filter bank 4 register 1
    {
        using FB0 = Field<F12R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F12R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F12R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F12R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F12R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F12R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F12R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F12R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F12R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F12R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F12R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F12R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F12R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F12R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F12R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F12R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F12R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F12R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F12R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F12R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F12R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F12R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F12R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F12R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F12R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F12R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F12R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F12R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F12R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F12R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F12R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F12R1, 1, 31, read_write>; // Filter bits
    };
    struct F12R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 676 * 8> // Filter bank 12 register 2
    {
        using FB0 = Field<F12R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F12R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F12R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F12R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F12R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F12R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F12R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F12R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F12R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F12R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F12R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F12R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F12R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F12R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F12R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F12R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F12R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F12R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F12R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F12R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F12R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F12R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F12R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F12R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F12R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F12R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F12R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F12R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F12R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F12R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F12R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F12R2, 1, 31, read_write>; // Filter bits
    };
    struct F13R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 680 * 8> // Filter bank 13 register 1
    {
        using FB0 = Field<F13R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F13R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F13R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F13R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F13R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F13R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F13R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F13R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F13R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F13R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F13R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F13R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F13R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F13R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F13R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F13R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F13R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F13R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F13R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F13R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F13R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F13R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F13R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F13R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F13R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F13R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F13R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F13R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F13R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F13R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F13R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F13R1, 1, 31, read_write>; // Filter bits
    };
    struct F13R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 684 * 8> // Filter bank 13 register 2
    {
        using FB0 = Field<F13R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F13R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F13R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F13R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F13R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F13R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F13R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F13R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F13R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F13R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F13R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F13R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F13R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F13R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F13R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F13R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F13R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F13R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F13R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F13R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F13R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F13R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F13R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F13R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F13R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F13R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F13R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F13R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F13R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F13R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F13R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F13R2, 1, 31, read_write>; // Filter bits
    };
    struct F14R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 688 * 8> // Filter bank 14 register 1
    {
        using FB0 = Field<F14R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F14R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F14R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F14R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F14R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F14R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F14R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F14R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F14R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F14R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F14R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F14R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F14R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F14R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F14R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F14R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F14R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F14R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F14R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F14R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F14R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F14R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F14R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F14R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F14R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F14R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F14R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F14R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F14R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F14R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F14R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F14R1, 1, 31, read_write>; // Filter bits
    };
    struct F14R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 692 * 8> // Filter bank 14 register 2
    {
        using FB0 = Field<F14R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F14R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F14R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F14R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F14R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F14R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F14R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F14R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F14R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F14R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F14R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F14R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F14R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F14R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F14R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F14R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F14R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F14R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F14R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F14R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F14R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F14R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F14R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F14R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F14R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F14R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F14R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F14R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F14R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F14R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F14R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F14R2, 1, 31, read_write>; // Filter bits
    };
    struct F15R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 696 * 8> // Filter bank 15 register 1
    {
        using FB0 = Field<F15R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F15R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F15R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F15R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F15R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F15R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F15R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F15R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F15R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F15R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F15R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F15R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F15R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F15R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F15R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F15R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F15R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F15R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F15R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F15R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F15R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F15R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F15R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F15R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F15R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F15R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F15R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F15R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F15R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F15R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F15R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F15R1, 1, 31, read_write>; // Filter bits
    };
    struct F15R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 700 * 8> // Filter bank 15 register 2
    {
        using FB0 = Field<F15R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F15R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F15R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F15R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F15R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F15R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F15R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F15R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F15R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F15R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F15R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F15R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F15R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F15R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F15R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F15R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F15R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F15R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F15R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F15R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F15R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F15R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F15R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F15R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F15R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F15R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F15R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F15R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F15R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F15R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F15R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F15R2, 1, 31, read_write>; // Filter bits
    };
    struct F16R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 704 * 8> // Filter bank 16 register 1
    {
        using FB0 = Field<F16R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F16R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F16R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F16R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F16R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F16R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F16R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F16R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F16R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F16R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F16R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F16R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F16R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F16R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F16R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F16R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F16R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F16R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F16R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F16R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F16R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F16R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F16R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F16R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F16R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F16R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F16R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F16R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F16R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F16R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F16R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F16R1, 1, 31, read_write>; // Filter bits
    };
    struct F16R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 708 * 8> // Filter bank 16 register 2
    {
        using FB0 = Field<F16R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F16R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F16R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F16R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F16R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F16R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F16R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F16R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F16R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F16R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F16R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F16R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F16R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F16R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F16R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F16R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F16R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F16R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F16R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F16R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F16R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F16R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F16R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F16R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F16R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F16R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F16R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F16R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F16R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F16R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F16R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F16R2, 1, 31, read_write>; // Filter bits
    };
    struct F17R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 712 * 8> // Filter bank 17 register 1
    {
        using FB0 = Field<F17R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F17R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F17R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F17R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F17R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F17R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F17R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F17R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F17R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F17R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F17R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F17R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F17R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F17R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F17R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F17R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F17R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F17R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F17R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F17R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F17R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F17R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F17R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F17R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F17R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F17R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F17R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F17R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F17R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F17R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F17R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F17R1, 1, 31, read_write>; // Filter bits
    };
    struct F17R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 716 * 8> // Filter bank 17 register 2
    {
        using FB0 = Field<F17R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F17R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F17R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F17R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F17R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F17R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F17R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F17R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F17R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F17R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F17R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F17R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F17R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F17R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F17R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F17R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F17R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F17R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F17R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F17R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F17R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F17R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F17R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F17R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F17R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F17R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F17R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F17R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F17R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F17R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F17R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F17R2, 1, 31, read_write>; // Filter bits
    };
    struct F18R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 720 * 8> // Filter bank 18 register 1
    {
        using FB0 = Field<F18R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F18R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F18R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F18R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F18R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F18R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F18R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F18R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F18R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F18R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F18R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F18R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F18R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F18R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F18R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F18R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F18R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F18R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F18R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F18R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F18R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F18R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F18R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F18R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F18R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F18R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F18R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F18R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F18R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F18R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F18R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F18R1, 1, 31, read_write>; // Filter bits
    };
    struct F18R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 724 * 8> // Filter bank 18 register 2
    {
        using FB0 = Field<F18R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F18R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F18R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F18R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F18R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F18R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F18R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F18R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F18R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F18R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F18R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F18R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F18R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F18R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F18R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F18R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F18R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F18R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F18R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F18R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F18R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F18R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F18R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F18R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F18R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F18R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F18R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F18R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F18R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F18R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F18R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F18R2, 1, 31, read_write>; // Filter bits
    };
    struct F19R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 728 * 8> // Filter bank 19 register 1
    {
        using FB0 = Field<F19R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F19R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F19R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F19R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F19R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F19R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F19R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F19R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F19R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F19R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F19R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F19R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F19R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F19R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F19R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F19R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F19R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F19R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F19R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F19R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F19R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F19R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F19R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F19R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F19R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F19R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F19R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F19R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F19R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F19R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F19R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F19R1, 1, 31, read_write>; // Filter bits
    };
    struct F19R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 732 * 8> // Filter bank 19 register 2
    {
        using FB0 = Field<F19R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F19R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F19R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F19R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F19R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F19R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F19R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F19R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F19R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F19R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F19R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F19R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F19R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F19R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F19R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F19R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F19R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F19R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F19R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F19R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F19R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F19R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F19R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F19R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F19R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F19R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F19R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F19R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F19R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F19R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F19R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F19R2, 1, 31, read_write>; // Filter bits
    };
    struct F20R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 736 * 8> // Filter bank 20 register 1
    {
        using FB0 = Field<F20R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F20R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F20R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F20R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F20R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F20R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F20R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F20R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F20R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F20R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F20R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F20R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F20R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F20R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F20R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F20R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F20R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F20R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F20R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F20R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F20R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F20R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F20R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F20R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F20R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F20R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F20R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F20R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F20R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F20R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F20R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F20R1, 1, 31, read_write>; // Filter bits
    };
    struct F20R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 740 * 8> // Filter bank 20 register 2
    {
        using FB0 = Field<F20R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F20R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F20R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F20R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F20R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F20R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F20R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F20R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F20R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F20R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F20R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F20R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F20R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F20R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F20R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F20R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F20R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F20R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F20R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F20R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F20R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F20R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F20R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F20R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F20R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F20R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F20R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F20R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F20R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F20R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F20R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F20R2, 1, 31, read_write>; // Filter bits
    };
    struct F21R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 744 * 8> // Filter bank 21 register 1
    {
        using FB0 = Field<F21R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F21R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F21R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F21R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F21R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F21R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F21R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F21R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F21R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F21R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F21R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F21R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F21R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F21R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F21R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F21R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F21R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F21R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F21R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F21R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F21R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F21R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F21R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F21R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F21R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F21R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F21R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F21R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F21R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F21R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F21R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F21R1, 1, 31, read_write>; // Filter bits
    };
    struct F21R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 748 * 8> // Filter bank 21 register 2
    {
        using FB0 = Field<F21R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F21R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F21R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F21R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F21R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F21R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F21R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F21R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F21R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F21R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F21R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F21R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F21R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F21R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F21R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F21R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F21R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F21R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F21R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F21R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F21R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F21R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F21R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F21R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F21R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F21R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F21R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F21R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F21R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F21R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F21R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F21R2, 1, 31, read_write>; // Filter bits
    };
    struct F22R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 752 * 8> // Filter bank 22 register 1
    {
        using FB0 = Field<F22R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F22R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F22R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F22R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F22R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F22R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F22R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F22R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F22R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F22R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F22R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F22R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F22R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F22R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F22R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F22R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F22R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F22R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F22R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F22R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F22R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F22R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F22R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F22R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F22R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F22R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F22R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F22R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F22R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F22R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F22R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F22R1, 1, 31, read_write>; // Filter bits
    };
    struct F22R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 756 * 8> // Filter bank 22 register 2
    {
        using FB0 = Field<F22R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F22R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F22R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F22R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F22R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F22R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F22R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F22R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F22R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F22R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F22R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F22R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F22R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F22R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F22R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F22R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F22R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F22R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F22R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F22R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F22R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F22R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F22R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F22R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F22R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F22R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F22R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F22R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F22R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F22R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F22R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F22R2, 1, 31, read_write>; // Filter bits
    };
    struct F23R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 760 * 8> // Filter bank 23 register 1
    {
        using FB0 = Field<F23R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F23R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F23R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F23R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F23R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F23R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F23R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F23R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F23R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F23R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F23R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F23R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F23R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F23R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F23R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F23R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F23R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F23R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F23R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F23R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F23R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F23R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F23R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F23R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F23R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F23R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F23R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F23R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F23R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F23R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F23R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F23R1, 1, 31, read_write>; // Filter bits
    };
    struct F23R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 764 * 8> // Filter bank 23 register 2
    {
        using FB0 = Field<F23R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F23R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F23R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F23R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F23R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F23R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F23R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F23R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F23R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F23R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F23R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F23R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F23R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F23R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F23R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F23R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F23R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F23R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F23R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F23R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F23R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F23R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F23R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F23R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F23R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F23R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F23R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F23R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F23R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F23R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F23R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F23R2, 1, 31, read_write>; // Filter bits
    };
    struct F24R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 768 * 8> // Filter bank 24 register 1
    {
        using FB0 = Field<F24R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F24R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F24R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F24R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F24R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F24R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F24R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F24R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F24R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F24R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F24R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F24R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F24R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F24R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F24R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F24R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F24R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F24R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F24R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F24R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F24R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F24R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F24R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F24R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F24R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F24R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F24R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F24R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F24R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F24R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F24R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F24R1, 1, 31, read_write>; // Filter bits
    };
    struct F24R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 772 * 8> // Filter bank 24 register 2
    {
        using FB0 = Field<F24R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F24R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F24R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F24R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F24R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F24R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F24R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F24R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F24R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F24R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F24R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F24R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F24R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F24R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F24R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F24R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F24R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F24R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F24R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F24R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F24R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F24R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F24R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F24R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F24R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F24R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F24R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F24R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F24R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F24R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F24R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F24R2, 1, 31, read_write>; // Filter bits
    };
    struct F25R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 776 * 8> // Filter bank 25 register 1
    {
        using FB0 = Field<F25R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F25R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F25R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F25R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F25R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F25R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F25R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F25R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F25R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F25R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F25R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F25R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F25R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F25R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F25R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F25R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F25R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F25R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F25R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F25R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F25R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F25R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F25R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F25R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F25R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F25R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F25R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F25R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F25R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F25R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F25R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F25R1, 1, 31, read_write>; // Filter bits
    };
    struct F25R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 780 * 8> // Filter bank 25 register 2
    {
        using FB0 = Field<F25R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F25R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F25R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F25R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F25R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F25R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F25R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F25R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F25R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F25R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F25R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F25R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F25R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F25R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F25R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F25R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F25R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F25R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F25R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F25R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F25R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F25R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F25R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F25R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F25R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F25R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F25R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F25R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F25R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F25R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F25R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F25R2, 1, 31, read_write>; // Filter bits
    };
    struct F26R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 784 * 8> // Filter bank 26 register 1
    {
        using FB0 = Field<F26R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F26R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F26R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F26R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F26R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F26R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F26R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F26R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F26R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F26R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F26R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F26R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F26R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F26R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F26R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F26R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F26R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F26R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F26R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F26R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F26R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F26R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F26R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F26R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F26R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F26R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F26R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F26R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F26R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F26R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F26R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F26R1, 1, 31, read_write>; // Filter bits
    };
    struct F26R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 788 * 8> // Filter bank 26 register 2
    {
        using FB0 = Field<F26R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F26R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F26R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F26R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F26R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F26R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F26R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F26R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F26R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F26R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F26R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F26R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F26R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F26R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F26R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F26R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F26R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F26R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F26R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F26R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F26R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F26R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F26R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F26R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F26R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F26R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F26R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F26R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F26R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F26R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F26R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F26R2, 1, 31, read_write>; // Filter bits
    };
    struct F27R1 : PackedRegister<CAN1_pack, RegBitSize::b32, 792 * 8> // Filter bank 27 register 1
    {
        using FB0 = Field<F27R1, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F27R1, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F27R1, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F27R1, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F27R1, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F27R1, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F27R1, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F27R1, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F27R1, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F27R1, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F27R1, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F27R1, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F27R1, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F27R1, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F27R1, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F27R1, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F27R1, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F27R1, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F27R1, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F27R1, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F27R1, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F27R1, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F27R1, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F27R1, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F27R1, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F27R1, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F27R1, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F27R1, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F27R1, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F27R1, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F27R1, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F27R1, 1, 31, read_write>; // Filter bits
    };
    struct F27R2 : PackedRegister<CAN1_pack, RegBitSize::b32, 796 * 8> // Filter bank 27 register 2
    {
        using FB0 = Field<F27R2, 1, 0, read_write>;   // Filter bits
        using FB1 = Field<F27R2, 1, 1, read_write>;   // Filter bits
        using FB2 = Field<F27R2, 1, 2, read_write>;   // Filter bits
        using FB3 = Field<F27R2, 1, 3, read_write>;   // Filter bits
        using FB4 = Field<F27R2, 1, 4, read_write>;   // Filter bits
        using FB5 = Field<F27R2, 1, 5, read_write>;   // Filter bits
        using FB6 = Field<F27R2, 1, 6, read_write>;   // Filter bits
        using FB7 = Field<F27R2, 1, 7, read_write>;   // Filter bits
        using FB8 = Field<F27R2, 1, 8, read_write>;   // Filter bits
        using FB9 = Field<F27R2, 1, 9, read_write>;   // Filter bits
        using FB10 = Field<F27R2, 1, 10, read_write>; // Filter bits
        using FB11 = Field<F27R2, 1, 11, read_write>; // Filter bits
        using FB12 = Field<F27R2, 1, 12, read_write>; // Filter bits
        using FB13 = Field<F27R2, 1, 13, read_write>; // Filter bits
        using FB14 = Field<F27R2, 1, 14, read_write>; // Filter bits
        using FB15 = Field<F27R2, 1, 15, read_write>; // Filter bits
        using FB16 = Field<F27R2, 1, 16, read_write>; // Filter bits
        using FB17 = Field<F27R2, 1, 17, read_write>; // Filter bits
        using FB18 = Field<F27R2, 1, 18, read_write>; // Filter bits
        using FB19 = Field<F27R2, 1, 19, read_write>; // Filter bits
        using FB20 = Field<F27R2, 1, 20, read_write>; // Filter bits
        using FB21 = Field<F27R2, 1, 21, read_write>; // Filter bits
        using FB22 = Field<F27R2, 1, 22, read_write>; // Filter bits
        using FB23 = Field<F27R2, 1, 23, read_write>; // Filter bits
        using FB24 = Field<F27R2, 1, 24, read_write>; // Filter bits
        using FB25 = Field<F27R2, 1, 25, read_write>; // Filter bits
        using FB26 = Field<F27R2, 1, 26, read_write>; // Filter bits
        using FB27 = Field<F27R2, 1, 27, read_write>; // Filter bits
        using FB28 = Field<F27R2, 1, 28, read_write>; // Filter bits
        using FB29 = Field<F27R2, 1, 29, read_write>; // Filter bits
        using FB30 = Field<F27R2, 1, 30, read_write>; // Filter bits
        using FB31 = Field<F27R2, 1, 31, read_write>; // Filter bits
    };
}
namespace ETHERNET_MAC
{
    using ETHERNET_MAC_pack = RegisterPack<0x40028000, 1024>;
    struct MACCR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 0 * 8> // Ethernet MAC configuration register
    {
        using TCES = Field<MACCR, 1, 0, read_write>;  // Send clock selection bit
        using TCF = Field<MACCR, 1, 1, read_write>;   // Send clock reversal
        using RE = Field<MACCR, 1, 2, read_write>;    // Receiver enable
        using TE = Field<MACCR, 1, 3, read_write>;    // Transmitter enable
        using DC = Field<MACCR, 1, 4, read_write>;    // Deferral check
        using BL = Field<MACCR, 2, 5, read_write>;    // Back-off limit
        using APCS = Field<MACCR, 1, 7, read_write>;  // Automatic pad/CRC
        using RD = Field<MACCR, 1, 9, read_write>;    // Retry disable
        using IPCO = Field<MACCR, 1, 10, read_write>; // IPv4 checksum offload
        using DM = Field<MACCR, 1, 11, read_write>;   // Duplex mode
        using LM = Field<MACCR, 1, 12, read_write>;   // Loopback mode
        using ROD = Field<MACCR, 1, 13, read_write>;  // Receive own disable
        using FES = Field<MACCR, 1, 14, read_write>;  // Fast Ethernet speed
        using CSD = Field<MACCR, 1, 16, read_write>;  // Carrier sense disable
        using IFG = Field<MACCR, 3, 17, read_write>;  // Interframe gap
        using IRE = Field<MACCR, 1, 20, read_write>;  // 10MPHY 50Ω set
        using PDI = Field<MACCR, 1, 21, read_write>;  // 10MPHY TX DRIVER bisa current
        using JD = Field<MACCR, 1, 22, read_write>;   // Jabber disable
        using WD = Field<MACCR, 1, 23, read_write>;   // Watchdog disable
        using TCD = Field<MACCR, 3, 29, read_write>;  // SEND clock delay
    };
    struct MACFFR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 4 * 8> // Ethernet MAC frame filter register
    {
        using PM = Field<MACFFR, 1, 0, read_write>;   // Promiscuous mode
        using HU = Field<MACFFR, 1, 1, read_write>;   // Hash unicast
        using HM = Field<MACFFR, 1, 2, read_write>;   // Hash multicast
        using DAIF = Field<MACFFR, 1, 3, read_write>; // Destination address inverse
        using PAM = Field<MACFFR, 1, 4, read_write>;  // Pass all multicast
        using BFD = Field<MACFFR, 1, 5, read_write>;  // Broadcast frames disable
        using PCF = Field<MACFFR, 2, 6, read_write>;  // Pass control frames
        using SAIF = Field<MACFFR, 1, 8, read_write>; // Source address inverse
        using SAF = Field<MACFFR, 1, 9, read_write>;  // Source address filter
        using HPF = Field<MACFFR, 1, 10, read_write>; // Hash or perfect filter
        using RA = Field<MACFFR, 1, 31, read_write>;  // Receive all
    };
    struct MACHTHR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 8 * 8> // Ethernet MAC hash table high
    {
        using HTH = Field<MACHTHR, 32, 0, read_write>; // Hash table high
    };
    struct MACHTLR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 12 * 8> // Ethernet MAC hash table low
    {
        using HTL = Field<MACHTLR, 32, 0, read_write>; // Hash table low
    };
    struct MACMIIAR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 16 * 8> // Ethernet MAC MII address register
    {
        using MB = Field<MACMIIAR, 1, 0, read_write>;  // MII busy
        using MW = Field<MACMIIAR, 1, 1, read_write>;  // MII write
        using CR = Field<MACMIIAR, 3, 2, read_write>;  // Clock range
        using MR = Field<MACMIIAR, 5, 6, read_write>;  // MII register
        using PA = Field<MACMIIAR, 5, 11, read_write>; // PHY address
    };
    struct MACMIIDR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 20 * 8> // Ethernet MAC MII data register
    {
        using MD = Field<MACMIIDR, 16, 0, read_write>; // MII data
    };
    struct MACFCR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 24 * 8> // Ethernet MAC flow control register
    {
        using FCB_BPA = Field<MACFCR, 1, 0, read_write>; // Flow control busy/back pressure
        using TFCE = Field<MACFCR, 1, 1, read_write>;    // Transmit flow control
        using RFCE = Field<MACFCR, 1, 2, read_write>;    // Receive flow control
        using UPFD = Field<MACFCR, 1, 3, read_write>;    // Unicast pause frame detect
        using PLT = Field<MACFCR, 2, 4, read_write>;     // Pause low threshold
        using ZQPD = Field<MACFCR, 1, 7, read_write>;    // Zero-quanta pause disable
        using PT = Field<MACFCR, 16, 16, read_write>;    // Pass control frames
    };
    struct MACVLANTR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 28 * 8> // Ethernet MAC VLAN tag register
    {
        using VLANTI = Field<MACVLANTR, 16, 0, read_write>; // VLAN tag identifier (for receive
        using VLANTC = Field<MACVLANTR, 1, 16, read_write>; // 12-bit VLAN tag comparison
    };
    struct MACRWUFFR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 40 * 8> // Ethernet MAC remote wakeup frame filter
    {
    };
    struct MACPMTCSR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 44 * 8> // Ethernet MAC PMT control and status register
    {
        using PD = Field<MACPMTCSR, 1, 0, read_write>;      // Power down
        using MPE = Field<MACPMTCSR, 1, 1, read_write>;     // Magic Packet enable
        using WFE = Field<MACPMTCSR, 1, 2, read_write>;     // Wakeup frame enable
        using MPR = Field<MACPMTCSR, 1, 5, read_write>;     // Magic packet received
        using WFR = Field<MACPMTCSR, 1, 6, read_write>;     // Wakeup frame received
        using GU = Field<MACPMTCSR, 1, 9, read_write>;      // Global unicast
        using WFFRPR = Field<MACPMTCSR, 1, 31, read_write>; // Wakeup frame filter register pointer
    };
    struct MACSR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 56 * 8> // Ethernet MAC interrupt status register
    {
        using PMTS = Field<MACSR, 1, 3, read_write>;  // PMT status
        using MMCS = Field<MACSR, 1, 4, read_write>;  // MMC status
        using MMCRS = Field<MACSR, 1, 5, read_write>; // MMC receive status
        using MMCTS = Field<MACSR, 1, 6, read_write>; // MMC transmit status
        using TSTS = Field<MACSR, 1, 9, read_write>;  // Time stamp trigger status
    };
    struct MACIMR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 60 * 8> // Ethernet MAC interrupt mask register
    {
        using PMTIM = Field<MACIMR, 1, 3, read_write>; // PMT interrupt mask
        using TSTIM = Field<MACIMR, 1, 9, read_write>; // Time stamp trigger interrupt
    };
    struct MACA0HR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 64 * 8> // Ethernet MAC address 0 high register
    {
        using MACA0H = Field<MACA0HR, 16, 0, read_write>; // MAC address0 high
        using MO = Field<MACA0HR, 1, 31, read_only>;      // Always 1
    };
    struct MACA0LR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 68 * 8> // Ethernet MAC address 0 low
    {
        using MACA0L = Field<MACA0LR, 32, 0, read_write>; // MAC address0 low
    };
    struct MACA1HR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 72 * 8> // Ethernet MAC address 1 high register
    {
        using MACA1H = Field<MACA1HR, 16, 0, read_write>; // MAC address1 high
        using MBC = Field<MACA1HR, 6, 24, read_write>;    // Mask byte control
        using SA = Field<MACA1HR, 1, 30, read_write>;     // Source address
        using AE = Field<MACA1HR, 1, 31, read_write>;     // Address enable
    };
    struct MACA1LR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 76 * 8> // Ethernet MAC address1 low
    {
        using MACA1L = Field<MACA1LR, 32, 0, read_write>; // MAC address1 low
    };
    struct MACA2HR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 80 * 8> // Ethernet MAC address 2 high register
    {
        using ETH_MACA2HR = Field<MACA2HR, 16, 0, read_write>; // Ethernet MAC address 2 high
        using MBC = Field<MACA2HR, 6, 24, read_write>;         // Mask byte control
        using SA = Field<MACA2HR, 1, 30, read_write>;          // Source address
        using AE = Field<MACA2HR, 1, 31, read_write>;          // Address enable
    };
    struct MACA2LR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 84 * 8> // Ethernet MAC address 2 low
    {
        using MACA2L = Field<MACA2LR, 31, 0, read_write>; // MAC address2 low
    };
    struct MACA3HR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 88 * 8> // Ethernet MAC address 3 high register
    {
        using MACA3H = Field<MACA3HR, 16, 0, read_write>; // MAC address3 high
        using MBC = Field<MACA3HR, 6, 24, read_write>;    // Mask byte control
        using SA = Field<MACA3HR, 1, 30, read_write>;     // Source address
        using AE = Field<MACA3HR, 1, 31, read_write>;     // Address enable
    };
    struct MACA3LR : PackedRegister<ETHERNET_MAC_pack, RegBitSize::b32, 92 * 8> // Ethernet MAC address 3 low
    {
        using MBCA3L = Field<MACA3LR, 32, 0, read_write>; // MAC address3 low
    };
}
namespace ETHERNET_MMC
{
    using ETHERNET_MMC_pack = RegisterPack<0x40028100, 1024>;
    struct MMCCR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 0 * 8> // Ethernet MMC control register
    {
        using CR = Field<MMCCR, 1, 0, read_write>;   // Counter reset
        using CSR = Field<MMCCR, 1, 1, read_write>;  // Counter stop rollover
        using ROR = Field<MMCCR, 1, 2, read_write>;  // Reset on read
        using MCF = Field<MMCCR, 1, 31, read_write>; // MMC counter freeze
    };
    struct MMCRIR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 4 * 8> // Ethernet MMC receive interrupt register
    {
        using RFCES = Field<MMCRIR, 1, 5, read_write>;  // Received frames CRC error
        using RFAES = Field<MMCRIR, 1, 6, read_write>;  // Received frames alignment error
        using RGUFS = Field<MMCRIR, 1, 17, read_write>; // Received Good Unicast Frames
    };
    struct MMCTIR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 8 * 8> // Ethernet MMC transmit interrupt register
    {
        using TGFSCS = Field<MMCTIR, 1, 14, read_write>;  // Transmitted good frames single collision
        using TGFMSCS = Field<MMCTIR, 1, 15, read_write>; // Transmitted good frames more single
        using TGFS = Field<MMCTIR, 1, 21, read_write>;    // Transmitted good frames
    };
    struct MMCRIMR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 12 * 8> // Ethernet MMC receive interrupt mask register
    {
        using RFCEM = Field<MMCRIMR, 1, 5, read_write>;  // Received frame CRC error
        using RFAEM = Field<MMCRIMR, 1, 6, read_write>;  // Received frames alignment error
        using RGUFM = Field<MMCRIMR, 1, 17, read_write>; // Received good unicast frames
    };
    struct MMCTIMR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 16 * 8> // Ethernet MMC transmit interrupt mask
    {
        using TGFSCM = Field<MMCTIMR, 1, 14, read_write>;  // Transmitted good frames single collision
        using TGFMSCM = Field<MMCTIMR, 1, 15, read_write>; // Transmitted good frames more single
        using TGFM = Field<MMCTIMR, 1, 21, read_write>;    // Transmitted good frames
    };
    struct MMCTGFSCCR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 76 * 8> // Ethernet MMC transmitted good frames after a
    {
        using TGFSCC = Field<MMCTGFSCCR, 32, 0, read_only>; // Transmitted good frames after a single
    };
    struct MMCTGFMSCCR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 80 * 8> // Ethernet MMC transmitted good frames after
    {
        using TGFMSCC = Field<MMCTGFMSCCR, 32, 0, read_only>; // Transmitted good frames after more than
    };
    struct MMCTGFCR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 104 * 8> // Ethernet MMC transmitted good frames counter
    {
        using TGFC = Field<MMCTGFCR, 32, 0, read_only>; // Transmitted good frames
    };
    struct MMCRFCECR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 148 * 8> // Ethernet MMC received frames with CRC error
    {
        using RFCFC = Field<MMCRFCECR, 32, 0, read_only>; // Received frames with CRC error
    };
    struct MMCRFAECR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 152 * 8> // Ethernet MMC received frames with alignment
    {
        using RFAEC = Field<MMCRFAECR, 32, 0, read_only>; // Received frames with alignment error
    };
    struct MMCRGUFCR : PackedRegister<ETHERNET_MMC_pack, RegBitSize::b32, 196 * 8> // MMC received good unicast frames counter
    {
        using RGUFC = Field<MMCRGUFCR, 32, 0, read_only>; // Received good unicast frames
    };
}
namespace ETHERNET_PTP
{
    using ETHERNET_PTP_pack = RegisterPack<0x40028700, 1024>;
    struct PTPTSCR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 0 * 8> // Ethernet PTP time stamp control register
    {
        using TSE = Field<PTPTSCR, 1, 0, read_write>;   // Time stamp enable
        using TSFCU = Field<PTPTSCR, 1, 1, read_write>; // Time stamp fine or coarse
        using TSSTI = Field<PTPTSCR, 1, 2, read_write>; // Time stamp system time
        using TSSTU = Field<PTPTSCR, 1, 3, read_write>; // Time stamp system time
        using TSITE = Field<PTPTSCR, 1, 4, read_write>; // Time stamp interrupt trigger
        using TSARU = Field<PTPTSCR, 1, 5, read_write>; // Time stamp addend register
    };
    struct PTPSSIR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 4 * 8> // Ethernet PTP subsecond increment
    {
        using STSSI = Field<PTPSSIR, 8, 0, read_write>; // System time subsecond
    };
    struct PTPTSHR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 8 * 8> // Ethernet PTP time stamp high
    {
        using STS = Field<PTPTSHR, 32, 0, read_only>; // System time second
    };
    struct PTPTSLR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 12 * 8> // Ethernet PTP time stamp low register
    {
        using STSS = Field<PTPTSLR, 31, 0, read_only>;  // System time subseconds
        using STPNS = Field<PTPTSLR, 1, 31, read_only>; // System time positive or negative
    };
    struct PTPTSHUR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 16 * 8> // Ethernet PTP time stamp high update
    {
        using TSUS = Field<PTPTSHUR, 32, 0, read_write>; // Time stamp update second
    };
    struct PTPTSLUR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 20 * 8> // Ethernet PTP time stamp low update register
    {
        using TSUSS = Field<PTPTSLUR, 31, 0, read_write>;  // Time stamp update
        using TSUPNS = Field<PTPTSLUR, 1, 31, read_write>; // Time stamp update positive or negative
    };
    struct PTPTSAR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 24 * 8> // Ethernet PTP time stamp addend
    {
        using TSA = Field<PTPTSAR, 32, 0, read_write>; // Time stamp addend
    };
    struct PTPTTHR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 28 * 8> // Ethernet PTP target time high
    {
        using TTSH = Field<PTPTTHR, 32, 0, read_write>; // Target time stamp high
    };
    struct PTPTTLR : PackedRegister<ETHERNET_PTP_pack, RegBitSize::b32, 32 * 8> // Ethernet PTP target time low
    {
        using TTSL = Field<PTPTTLR, 32, 0, read_write>; // Target time stamp low
    };
}
namespace ETHERNET_DMA
{
    using ETHERNET_DMA_pack = RegisterPack<0x40029000, 1024>;
    struct DMABMR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 0 * 8> // Ethernet DMA bus mode register
    {
        using SR = Field<DMABMR, 1, 0, read_write>;    // Software reset
        using DA = Field<DMABMR, 1, 1, read_write>;    // DMA Arbitration
        using DSL = Field<DMABMR, 5, 2, read_write>;   // Descriptor skip length
        using PBL = Field<DMABMR, 6, 8, read_write>;   // Programmable burst length
        using RTPR = Field<DMABMR, 2, 14, read_write>; // Rx Tx priority ratio
        using FB = Field<DMABMR, 1, 16, read_write>;   // Fixed burst
        using RDP = Field<DMABMR, 6, 17, read_write>;  // Rx DMA PBL
        using USP = Field<DMABMR, 1, 23, read_write>;  // Use separate PBL
        using FPM = Field<DMABMR, 1, 24, read_write>;  // 4xPBL mode
        using AAB = Field<DMABMR, 1, 25, read_write>;  // Address-aligned beats
    };
    struct DMATPDR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 4 * 8> // Ethernet DMA transmit poll demand
    {
        using TPD = Field<DMATPDR, 32, 0, read_write>; // Transmit poll demand
    };
    struct DMARPDR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 8 * 8> // EHERNET DMA receive poll demand
    {
        using RPD = Field<DMARPDR, 32, 0, read_write>; // Receive poll demand
    };
    struct DMARDLAR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 12 * 8> // Ethernet DMA receive descriptor list address
    {
        using SRL = Field<DMARDLAR, 32, 0, read_write>; // Start of receive list
    };
    struct DMATDLAR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 16 * 8> // Ethernet DMA transmit descriptor list
    {
        using STL = Field<DMATDLAR, 32, 0, read_write>; // Start of transmit list
    };
    struct DMASR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 20 * 8> // Ethernet DMA status register
    {
        using TS = Field<DMASR, 1, 0, read_only>;         // Transmit status
        using TPSS = Field<DMASR, 1, 1, read_only>;       // Transmit process stopped
        using TBUS = Field<DMASR, 1, 2, read_only>;       // Transmit buffer unavailable
        using TJTS = Field<DMASR, 1, 3, read_only>;       // Transmit jabber timeout
        using ROS = Field<DMASR, 1, 4, read_only>;        // Receive overflow status
        using TUS = Field<DMASR, 1, 5, read_only>;        // Transmit underflow status
        using RS = Field<DMASR, 1, 6, read_only>;         // Receive status
        using RBUS = Field<DMASR, 1, 7, read_only>;       // Receive buffer unavailable
        using RPSS = Field<DMASR, 1, 8, read_only>;       // Receive process stopped
        using PWTS = Field<DMASR, 1, 9, read_only>;       // Receive watchdog timeout
        using ETS = Field<DMASR, 1, 10, read_only>;       // Early transmit status
        using FBES = Field<DMASR, 1, 13, read_only>;      // Fatal bus error status
        using ERS = Field<DMASR, 1, 14, read_only>;       // Early receive status
        using AIS = Field<DMASR, 1, 15, read_only>;       // Abnormal interrupt summary
        using NIS = Field<DMASR, 1, 16, read_only>;       // Normal interrupt summary
        using RPS = Field<DMASR, 3, 17, read_only>;  // Receive process state
        using TPS = Field<DMASR, 3, 20, read_only>;  // Transmit process state
        using EBS = Field<DMASR, 3, 23, read_only>;  // Error bits status
        using MMCS = Field<DMASR, 1, 27, read_only>; // MMC status
        using PMTS = Field<DMASR, 1, 28, read_only>; // PMT status
        using TSTS = Field<DMASR, 1, 29, read_only>; // Time stamp trigger status
        using IPLS = Field<DMASR, 1, 31, read_only>; // 10MPHY Physical layer variation
    };
    struct DMAOMR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 24 * 8> // Ethernet DMA operation mode
    {
        using SR = Field<DMAOMR, 1, 1, read_write>;      // SR
        using OSF = Field<DMAOMR, 1, 2, read_write>;     // OSF
        using RTC = Field<DMAOMR, 2, 3, read_write>;     // RTC
        using FUGF = Field<DMAOMR, 1, 6, read_write>;    // FUGF
        using FEF = Field<DMAOMR, 1, 7, read_write>;     // FEF
        using ST = Field<DMAOMR, 1, 13, read_write>;     // ST
        using TTC = Field<DMAOMR, 3, 14, read_write>;    // TTC
        using FTF = Field<DMAOMR, 1, 20, read_write>;    // FTF
        using TSF = Field<DMAOMR, 1, 21, read_write>;    // TSF
        using DFRF = Field<DMAOMR, 1, 24, read_write>;   // DFRF
        using RSF = Field<DMAOMR, 1, 25, read_write>;    // RSF
        using DTCEFD = Field<DMAOMR, 1, 26, read_write>; // DTCEFD
    };
    struct DMAIER : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 28 * 8> // Ethernet DMA interrupt enable
    {
        using TIE = Field<DMAIER, 1, 0, read_write>;    // Transmit interrupt enable
        using TPSIE = Field<DMAIER, 1, 1, read_write>;  // Transmit process stopped interrupt
        using TBUIE = Field<DMAIER, 1, 2, read_write>;  // Transmit buffer unavailable interrupt
        using TJTIE = Field<DMAIER, 1, 3, read_write>;  // Transmit jabber timeout interrupt
        using ROIE = Field<DMAIER, 1, 4, read_write>;   // Overflow interrupt enable
        using TUIE = Field<DMAIER, 1, 5, read_write>;   // Underflow interrupt enable
        using RIE = Field<DMAIER, 1, 6, read_write>;    // Receive interrupt enable
        using RBUIE = Field<DMAIER, 1, 7, read_write>;  // Receive buffer unavailable interrupt
        using RPSIE = Field<DMAIER, 1, 8, read_write>;  // Receive process stopped interrupt
        using RWTIE = Field<DMAIER, 1, 9, read_write>;  // receive watchdog timeout interrupt
        using ETIE = Field<DMAIER, 1, 10, read_write>;  // Early transmit interrupt
        using FBEIE = Field<DMAIER, 1, 13, read_write>; // Fatal bus error interrupt
        using ERIE = Field<DMAIER, 1, 14, read_write>;  // Early receive interrupt
        using AISE = Field<DMAIER, 1, 15, read_write>;  // Abnormal interrupt summary
        using NISE = Field<DMAIER, 1, 16, read_write>;  // Normal interrupt summary
        using IPLE = Field<DMAIER, 1, 31, read_write>;  // 10M Physical layer connection
    };
    struct DMAMFBOCR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 32 * 8> // Ethernet DMA missed frame and buffer
    {
        using MFC = Field<DMAMFBOCR, 16, 0, read_only>;  // Missed frames by the
        using OMFC = Field<DMAMFBOCR, 1, 16, read_only>; // Overflow bit for missed frame
        using MFA = Field<DMAMFBOCR, 11, 17, read_only>; // Missed frames by the
        using OFOC = Field<DMAMFBOCR, 1, 28, read_only>; // Overflow bit for FIFO overflow
    };
    struct DMACHTDR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 72 * 8> // Ethernet DMA current host transmit
    {
        using HTDAP = Field<DMACHTDR, 32, 0, read_only>; // Host transmit descriptor address
    };
    struct DMACHRDR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 76 * 8> // Ethernet DMA current host receive descriptor
    {
        using HRDAP = Field<DMACHRDR, 32, 0, read_only>; // Host receive descriptor address
    };
    struct DMACHTBAR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 80 * 8> // Ethernet DMA current host transmit buffer
    {
        using HTBAP = Field<DMACHTBAR, 32, 0, read_only>; // Host transmit buffer address
    };
    struct DMACHRBAR : PackedRegister<ETHERNET_DMA_pack, RegBitSize::b32, 84 * 8> // Ethernet DMA current host receive buffer
    {
        using HRBAP = Field<DMACHRBAR, 32, 0, read_only>; // Host receive buffer address
    };
}
namespace DAC
{
    using DAC_pack = RegisterPack<0x40007400, 1024>;
    struct CTLR : PackedRegister<DAC_pack, RegBitSize::b32, 0 * 8> // Control register (DAC_CR)
    {
        using EN1 = Field<CTLR, 1, 0, read_write>;     // DAC channel1 enable
        using BOFF1 = Field<CTLR, 1, 1, read_write>;   // DAC channel1 output buffer
        using TEN1 = Field<CTLR, 1, 2, read_write>;    // DAC channel1 trigger
        using TSEL1 = Field<CTLR, 3, 3, read_write>;   // DAC channel1 trigger
        using WAVE1 = Field<CTLR, 2, 6, read_write>;   // DAC channel1 noise/triangle wave
        using MAMP1 = Field<CTLR, 4, 8, read_write>;   // DAC channel1 mask/amplitude
        using DMAEN1 = Field<CTLR, 1, 12, read_write>; // DAC channel1 DMA enable
        using EN2 = Field<CTLR, 1, 16, read_write>;    // DAC channel2 enable
        using BOFF2 = Field<CTLR, 1, 17, read_write>;  // DAC channel2 output buffer
        using TEN2 = Field<CTLR, 1, 18, read_write>;   // DAC channel2 trigger
        using TSEL2 = Field<CTLR, 3, 19, read_write>;  // DAC channel2 trigger
        using WAVE2 = Field<CTLR, 2, 22, read_write>;  // DAC channel2 noise/triangle wave
        using MAMP2 = Field<CTLR, 4, 24, read_write>;  // DAC channel2 mask/amplitude
        using DMAEN2 = Field<CTLR, 1, 28, read_write>; // DAC channel2 DMA enable
    };
    struct SWTR : PackedRegister<DAC_pack, RegBitSize::b32, 4 * 8> // DAC software trigger register
    {
        using SWTRIG1 = Field<SWTR, 1, 0, write_only>; // DAC channel1 software
        using SWTRIG2 = Field<SWTR, 1, 1, write_only>; // DAC channel2 software
    };
    struct R12BDHR1 : PackedRegister<DAC_pack, RegBitSize::b32, 8 * 8> // DAC channel1 12-bit right-aligned data
    {
        using DACC1DHR = Field<R12BDHR1, 12, 0, read_write>; // DAC channel1 12-bit right-aligned
    };
    struct L12BDHR1 : PackedRegister<DAC_pack, RegBitSize::b32, 12 * 8> // DAC channel1 12-bit left aligned data
    {
        using DACC1DHR = Field<L12BDHR1, 12, 4, read_write>; // DAC channel1 12-bit left-aligned
    };
    struct R8BDHR1 : PackedRegister<DAC_pack, RegBitSize::b32, 16 * 8> // DAC channel1 8-bit right aligned data
    {
        using DACC1DHR = Field<R8BDHR1, 8, 0, read_write>; // DAC channel1 8-bit right-aligned
    };
    struct R12BDHR2 : PackedRegister<DAC_pack, RegBitSize::b32, 20 * 8> // DAC channel2 12-bit right aligned data
    {
        using DACC2DHR = Field<R12BDHR2, 12, 0, read_write>; // DAC channel2 12-bit right-aligned
    };
    struct L12BDHR2 : PackedRegister<DAC_pack, RegBitSize::b32, 24 * 8> // DAC channel2 12-bit left aligned data
    {
        using DACC2DHR = Field<L12BDHR2, 12, 4, read_write>; // DAC channel2 12-bit left-aligned
    };
    struct R8BDHR2 : PackedRegister<DAC_pack, RegBitSize::b32, 28 * 8> // DAC channel2 8-bit right-aligned data
    {
        using DACC2DHR = Field<R8BDHR2, 8, 0, read_write>; // DAC channel2 8-bit right-aligned
    };
    struct RD12BDHR : PackedRegister<DAC_pack, RegBitSize::b32, 32 * 8> // Dual DAC 12-bit right-aligned data holding
    {
        using DACC1DHR = Field<RD12BDHR, 12, 0, read_write>;  // DAC channel1 12-bit right-aligned
        using DACC2DHR = Field<RD12BDHR, 12, 16, read_write>; // DAC channel2 12-bit right-aligned
    };
    struct LD12BDHR : PackedRegister<DAC_pack, RegBitSize::b32, 36 * 8> // DUAL DAC 12-bit left aligned data holding
    {
        using DACC1DHR = Field<LD12BDHR, 12, 4, read_write>;  // DAC channel1 12-bit left-aligned
        using DACC2DHR = Field<LD12BDHR, 12, 20, read_write>; // DAC channel2 12-bit right-aligned
    };
    struct RD8BDHR : PackedRegister<DAC_pack, RegBitSize::b32, 40 * 8> // DUAL DAC 8-bit right aligned data holding
    {
        using DACC1DHR = Field<RD8BDHR, 8, 0, read_write>; // DAC channel1 8-bit right-aligned
        using DACC2DHR = Field<RD8BDHR, 8, 8, read_write>; // DAC channel2 8-bit right-aligned
    };
    struct DOR1 : PackedRegister<DAC_pack, RegBitSize::b32, 44 * 8> // DAC channel1 data output register
    {
        using DACC1DOR = Field<DOR1, 12, 0, read_only>; // DAC channel1 data output
    };
    struct DOR2 : PackedRegister<DAC_pack, RegBitSize::b32, 48 * 8> // DAC channel2 data output register
    {
        using DACC2DOR = Field<DOR2, 12, 0, read_only>; // DAC channel2 data output
    };
}
namespace PWR
{
    using PWR_pack = RegisterPack<0x40007000, 1024>;
    struct CTLR : PackedRegister<PWR_pack, RegBitSize::b32, 0 * 8> // Power control register
    {
        using LPDS = Field<CTLR, 1, 0, read_write>;         // Low Power Deep Sleep
        using PDDS = Field<CTLR, 1, 1, read_write>;         // Power Down Deep Sleep
        using CWUF = Field<CTLR, 1, 2, read_write>;         // Clear Wake-up Flag
        using CSBF = Field<CTLR, 1, 3, read_write>;         // Clear STANDBY Flag
        using PVDE = Field<CTLR, 1, 4, read_write>;         // Power Voltage Detector
        using PLS = Field<CTLR, 3, 5, read_write>;          // PVD Level Selection
        using DBP = Field<CTLR, 1, 8, read_write>;          // Disable Backup Domain write
        using R2K_STYEN = Field<CTLR, 1, 16, read_write>;   // standby 2k ram enable
        using R30K_STYEN = Field<CTLR, 1, 17, read_write>;  // standby 30k ram enable
        using R2K_VBATEN = Field<CTLR, 1, 18, read_write>;  // VBAT 30k ram enable
        using R30K_VBATEN = Field<CTLR, 1, 19, read_write>; // VBAT 30k ram enable
        using RAM_LVEN = Field<CTLR, 1, 20, read_write>;    // Ram LV Enable
    };
    struct CSR : PackedRegister<PWR_pack, RegBitSize::b32, 4 * 8> // Power control register
    {
        using WUF = Field<CSR, 1, 0, read_only>;   // Wake-Up Flag
        using SBF = Field<CSR, 1, 1, read_only>;   // STANDBY Flag
        using PVDO = Field<CSR, 1, 2, read_only>;  // PVD Output
        using EWUP = Field<CSR, 1, 8, read_write>; // Enable WKUP pin
    };
}
namespace RCC
{
    using RCC_pack = RegisterPack<0x40021000, 1024>;
    struct CTLR : PackedRegister<RCC_pack, RegBitSize::b32, 0 * 8> // Clock control register
    {
        using HSION = Field<CTLR, 1, 0, read_write>;   // Internal High Speed clock
        using HSIRDY = Field<CTLR, 1, 1, read_only>;   // Internal High Speed clock ready
        using HSITRIM = Field<CTLR, 5, 3, read_write>; // Internal High Speed clock
        using HSICAL = Field<CTLR, 8, 8, read_only>;   // Internal High Speed clock
        using HSEON = Field<CTLR, 1, 16, read_write>;  // External High Speed clock
        using HSERDY = Field<CTLR, 1, 17, read_only>;  // External High Speed clock ready
        using HSEBYP = Field<CTLR, 1, 18, read_write>; // External High Speed clock
        using CSSON = Field<CTLR, 1, 19, read_write>;  // Clock Security System
        using PLLON = Field<CTLR, 1, 24, read_write>;  // PLL enable
        using PLLRDY = Field<CTLR, 1, 25, read_only>;  // PLL clock ready flag
    };
    struct CFGR0 : PackedRegister<RCC_pack, RegBitSize::b32, 4 * 8> // Clock configuration register
    {
        using SW = Field<CFGR0, 2, 0, read_write>;           // System clock Switch
        using SWS = Field<CFGR0, 2, 2, read_only>;           // System Clock Switch Status
        using HPRE = Field<CFGR0, 4, 4, read_write>;         // AHB prescaler
        using PPRE1 = Field<CFGR0, 3, 8, read_write>;        // APB Low speed prescaler
        using PPRE2 = Field<CFGR0, 3, 11, read_write>;       // APB High speed prescaler
        using ADCPRE = Field<CFGR0, 2, 14, read_write>;      // ADC prescaler
        using PLLSRC = Field<CFGR0, 1, 16, read_write>;      // PLL entry clock source
        using PLLXTPRE = Field<CFGR0, 1, 17, read_write>;    // HSE divider for PLL entry
        using PLLMUL = Field<CFGR0, 4, 18, read_write>;      // PLL Multiplication Factor
        using USBPRE = Field<CFGR0, 2, 22, read_write>;      // USB prescaler
        using MCO = Field<CFGR0, 4, 24, read_write>;         // Microcontroller clock
        using ETHPRE = Field<CFGR0, 1, 28, read_write>;      // ETH prescaler
        using ADC_CLK_ADJ = Field<CFGR0, 1, 31, read_write>; // ADC clock ADJ
    };
    struct INTR : PackedRegister<RCC_pack, RegBitSize::b32, 8 * 8> // Clock interrupt register
    {
        using LSIRDYF = Field<INTR, 1, 0, read_only>;    // LSI Ready Interrupt flag
        using LSERDYF = Field<INTR, 1, 1, read_only>;    // LSE Ready Interrupt flag
        using HSIRDYF = Field<INTR, 1, 2, read_only>;    // HSI Ready Interrupt flag
        using HSERDYF = Field<INTR, 1, 3, read_only>;    // HSE Ready Interrupt flag
        using PLLRDYF = Field<INTR, 1, 4, read_only>;    // PLL Ready Interrupt flag
        using CSSF = Field<INTR, 1, 7, read_only>;       // Clock Security System Interrupt
        using LSIRDYIE = Field<INTR, 1, 8, read_write>;  // LSI Ready Interrupt Enable
        using LSERDYIE = Field<INTR, 1, 9, read_write>;  // LSE Ready Interrupt Enable
        using HSIRDYIE = Field<INTR, 1, 10, read_write>; // HSI Ready Interrupt Enable
        using HSERDYIE = Field<INTR, 1, 11, read_write>; // HSE Ready Interrupt Enable
        using PLLRDYIE = Field<INTR, 1, 12, read_write>; // PLL Ready Interrupt Enable
        using LSIRDYC = Field<INTR, 1, 16, write_only>;  // LSI Ready Interrupt Clear
        using LSERDYC = Field<INTR, 1, 17, write_only>;  // LSE Ready Interrupt Clear
        using HSIRDYC = Field<INTR, 1, 18, write_only>;  // HSI Ready Interrupt Clear
        using HSERDYC = Field<INTR, 1, 19, write_only>;  // HSE Ready Interrupt Clear
        using PLLRDYC = Field<INTR, 1, 20, write_only>;  // PLL Ready Interrupt Clear
        using CSSC = Field<INTR, 1, 23, write_only>;     // Clock security system interrupt
    };
    struct APB2PRSTR : PackedRegister<RCC_pack, RegBitSize::b32, 12 * 8> // APB2 peripheral reset register
    {
        using AFIORST = Field<APB2PRSTR, 1, 0, read_write>;    // Alternate function I/O
        using IOPARST = Field<APB2PRSTR, 1, 2, read_write>;    // IO port A reset
        using IOPBRST = Field<APB2PRSTR, 1, 3, read_write>;    // IO port B reset
        using IOPCRST = Field<APB2PRSTR, 1, 4, read_write>;    // IO port C reset
        using IOPDRST = Field<APB2PRSTR, 1, 5, read_write>;    // IO port D reset
        using IOPERST = Field<APB2PRSTR, 1, 6, read_write>;    // IO port E reset
        using ADC1RST = Field<APB2PRSTR, 1, 9, read_write>;    // ADC 1 interface reset
        using ADC2RST = Field<APB2PRSTR, 1, 10, read_write>;   // ADC 2 interface reset
        using TIM1RST = Field<APB2PRSTR, 1, 11, read_write>;   // TIM1 timer reset
        using SPI1RST = Field<APB2PRSTR, 1, 12, read_write>;   // SPI 1 reset
        using TIM8RST = Field<APB2PRSTR, 1, 13, read_write>;   // TIM8 timer reset
        using USART1RST = Field<APB2PRSTR, 1, 14, read_write>; // USART1 reset
        using TIM9RST = Field<APB2PRSTR, 1, 19, read_write>;   // TIM9 timer reset
        using TIM10RST = Field<APB2PRSTR, 1, 20, read_write>;  // TIM10 timer reset
    };
    struct APB1PRSTR : PackedRegister<RCC_pack, RegBitSize::b32, 16 * 8> // APB1 peripheral reset register
    {
        using TIM2RST = Field<APB1PRSTR, 1, 0, read_write>;    // Timer 2 reset
        using TIM3RST = Field<APB1PRSTR, 1, 1, read_write>;    // Timer 3 reset
        using TIM4RST = Field<APB1PRSTR, 1, 2, read_write>;    // Timer 4 reset
        using TIM5RST = Field<APB1PRSTR, 1, 3, read_write>;    // Timer 5 reset
        using TIM6RST = Field<APB1PRSTR, 1, 4, read_write>;    // Timer 6 reset
        using TIM7RST = Field<APB1PRSTR, 1, 5, read_write>;    // Timer 7 reset
        using UART6RST = Field<APB1PRSTR, 1, 6, read_write>;   // UART 6 reset
        using UART7RST = Field<APB1PRSTR, 1, 7, read_write>;   // UART 7 reset
        using UART8RST = Field<APB1PRSTR, 1, 8, read_write>;   // UART 8 reset
        using WWDGRST = Field<APB1PRSTR, 1, 11, read_write>;   // Window watchdog reset
        using SPI2RST = Field<APB1PRSTR, 1, 14, read_write>;   // SPI2 reset
        using SPI3RST = Field<APB1PRSTR, 1, 15, read_write>;   // SPI3 reset
        using USART2RST = Field<APB1PRSTR, 1, 17, read_write>; // USART 2 reset
        using USART3RST = Field<APB1PRSTR, 1, 18, read_write>; // USART 3 reset
        using USART4RST = Field<APB1PRSTR, 1, 19, read_write>; // USART 4 reset
        using USART5RST = Field<APB1PRSTR, 1, 20, read_write>; // USART 5 reset
        using I2C1RST = Field<APB1PRSTR, 1, 21, read_write>;   // I2C1 reset
        using I2C2RST = Field<APB1PRSTR, 1, 22, read_write>;   // I2C2 reset
        using USBDRST = Field<APB1PRSTR, 1, 23, read_write>;   // USBD reset
        using CAN1RST = Field<APB1PRSTR, 1, 25, read_write>;   // CAN1 reset
        using CAN2RST = Field<APB1PRSTR, 1, 26, read_write>;   // CAN2 reset
        using BKPRST = Field<APB1PRSTR, 1, 27, read_write>;    // Backup interface reset
        using PWRRST = Field<APB1PRSTR, 1, 28, read_write>;    // Power interface reset
        using DACRST = Field<APB1PRSTR, 1, 29, read_write>;    // DAC interface reset
    };
    struct AHBPCENR : PackedRegister<RCC_pack, RegBitSize::b32, 20 * 8> // AHB Peripheral Clock enable register
    {
        using DMA1EN = Field<AHBPCENR, 1, 0, read_write>;      // DMA clock enable
        using DMA2EN = Field<AHBPCENR, 1, 1, read_write>;      // DMA2 clock enable
        using SRAMEN = Field<AHBPCENR, 1, 2, read_write>;      // SRAM interface clock
        using FLITFEN = Field<AHBPCENR, 1, 4, read_write>;     // FLITF clock enable
        using CRCEN = Field<AHBPCENR, 1, 6, read_write>;       // CRC clock enable
        using FSMCEN = Field<AHBPCENR, 1, 8, read_write>;      // FSMC clock enable
        using TRNG_EN = Field<AHBPCENR, 1, 9, read_write>;     // TRNG clock enable
        using SDIOEN = Field<AHBPCENR, 1, 10, read_write>;     // SDIO clock enable
        using USBHS_EN = Field<AHBPCENR, 1, 11, read_write>;   // USBHS clock enable
        using OTG_EN = Field<AHBPCENR, 1, 12, read_write>;     // OTG clock enable
        using DVP_EN = Field<AHBPCENR, 1, 13, read_write>;     // DVP clock enable
        using ETHMACEN = Field<AHBPCENR, 1, 14, read_write>;   // Ethernet MAC clock enable
        using ETHMACTXEN = Field<AHBPCENR, 1, 15, read_write>; // Ethernet MAC TX clock
        using ETHMACRXEN = Field<AHBPCENR, 1, 16, read_write>; // Ethernet MAC RX clock
    };
    struct APB2PCENR : PackedRegister<RCC_pack, RegBitSize::b32, 24 * 8> // APB2 peripheral clock enable register
    {
        using AFIOEN = Field<APB2PCENR, 1, 0, read_write>;    // Alternate function I/O clock
        using IOPAEN = Field<APB2PCENR, 1, 2, read_write>;    // I/O port A clock enable
        using IOPBEN = Field<APB2PCENR, 1, 3, read_write>;    // I/O port B clock enable
        using IOPCEN = Field<APB2PCENR, 1, 4, read_write>;    // I/O port C clock enable
        using IOPDEN = Field<APB2PCENR, 1, 5, read_write>;    // I/O port D clock enable
        using IOPEEN = Field<APB2PCENR, 1, 6, read_write>;    // I/O port E clock enable
        using ADC1EN = Field<APB2PCENR, 1, 9, read_write>;    // ADC1 interface clock
        using ADC2EN = Field<APB2PCENR, 1, 10, read_write>;   // ADC 2 interface clock
        using TIM1EN = Field<APB2PCENR, 1, 11, read_write>;   // TIM1 Timer clock enable
        using SPI1EN = Field<APB2PCENR, 1, 12, read_write>;   // SPI 1 clock enable
        using TIM8EN = Field<APB2PCENR, 1, 13, read_write>;   // TIM8 Timer clock enable
        using USART1EN = Field<APB2PCENR, 1, 14, read_write>; // USART1 clock enable
        using TIM9_EN = Field<APB2PCENR, 1, 19, read_write>;  // TIM9 Timer clock enable
        using TIM10_EN = Field<APB2PCENR, 1, 20, read_write>; // TIM10 Timer clock enable
    };
    struct APB1PCENR : PackedRegister<RCC_pack, RegBitSize::b32, 28 * 8> // APB1 peripheral clock enable register
    {
        using TIM2EN = Field<APB1PCENR, 1, 0, read_write>;    // Timer 2 clock enable
        using TIM3EN = Field<APB1PCENR, 1, 1, read_write>;    // Timer 3 clock enable
        using TIM4EN = Field<APB1PCENR, 1, 2, read_write>;    // Timer 4 clock enable
        using TIM5EN = Field<APB1PCENR, 1, 3, read_write>;    // Timer 5 clock enable
        using TIM6EN = Field<APB1PCENR, 1, 4, read_write>;    // Timer 6 clock enable
        using TIM7EN = Field<APB1PCENR, 1, 5, read_write>;    // Timer 7 clock enable
        using USART6_EN = Field<APB1PCENR, 1, 6, read_write>; // USART 6 clock enable
        using USART7_EN = Field<APB1PCENR, 1, 7, read_write>; // USART 7 clock enable
        using USART8_EN = Field<APB1PCENR, 1, 8, read_write>; // USART 8 clock enable
        using WWDGEN = Field<APB1PCENR, 1, 11, read_write>;   // Window watchdog clock
        using SPI2EN = Field<APB1PCENR, 1, 14, read_write>;   // SPI 2 clock enable
        using SPI3EN = Field<APB1PCENR, 1, 15, read_write>;   // SPI 3 clock enable
        using USART2EN = Field<APB1PCENR, 1, 17, read_write>; // USART 2 clock enable
        using USART3EN = Field<APB1PCENR, 1, 18, read_write>; // USART 3 clock enable
        using UART4EN = Field<APB1PCENR, 1, 19, read_write>;  // UART 4 clock enable
        using UART5EN = Field<APB1PCENR, 1, 20, read_write>;  // UART 5 clock enable
        using I2C1EN = Field<APB1PCENR, 1, 21, read_write>;   // I2C 1 clock enable
        using I2C2EN = Field<APB1PCENR, 1, 22, read_write>;   // I2C 2 clock enable
        using USBDEN = Field<APB1PCENR, 1, 23, read_write>;   // USBD clock enable
        using CAN1EN = Field<APB1PCENR, 1, 25, read_write>;   // CAN1 clock enable
        using CAN2EN = Field<APB1PCENR, 1, 26, read_write>;   // CAN2 clock enable
        using BKPEN = Field<APB1PCENR, 1, 27, read_write>;    // Backup interface clock
        using PWREN = Field<APB1PCENR, 1, 28, read_write>;    // Power interface clock
        using DACEN = Field<APB1PCENR, 1, 29, read_write>;    // DAC interface clock enable
    };
    struct BDCTLR : PackedRegister<RCC_pack, RegBitSize::b32, 32 * 8> // Backup domain control register
    {
        using LSEON = Field<BDCTLR, 1, 0, read_write>;  // External Low Speed oscillator
        using LSERDY = Field<BDCTLR, 1, 1, read_only>;  // External Low Speed oscillator
        using LSEBYP = Field<BDCTLR, 1, 2, read_write>; // External Low Speed oscillator
        using RTCSEL = Field<BDCTLR, 2, 8, read_write>; // RTC clock source selection
        using RTCEN = Field<BDCTLR, 1, 15, read_write>; // RTC clock enable
        using BDRST = Field<BDCTLR, 1, 16, read_write>; // Backup domain software
    };
    struct RSTSCKR : PackedRegister<RCC_pack, RegBitSize::b32, 36 * 8> // Control/status register
    {
        using LSION = Field<RSTSCKR, 1, 0, read_write>;     // Internal low speed oscillator
        using LSIRDY = Field<RSTSCKR, 1, 1, read_only>;     // Internal low speed oscillator
        using RMVF = Field<RSTSCKR, 1, 24, read_write>;     // Remove reset flag
        using PINRSTF = Field<RSTSCKR, 1, 26, read_write>;  // PIN reset flag
        using PORRSTF = Field<RSTSCKR, 1, 27, read_write>;  // POR/PDR reset flag
        using SFTRSTF = Field<RSTSCKR, 1, 28, read_write>;  // Software reset flag
        using IWDGRSTF = Field<RSTSCKR, 1, 29, read_write>; // Independent watchdog reset
        using WWDGRSTF = Field<RSTSCKR, 1, 30, read_write>; // Window watchdog reset flag
        using LPWRRSTF = Field<RSTSCKR, 1, 31, read_write>; // Low-power reset flag
    };
    struct AHBRSTR : PackedRegister<RCC_pack, RegBitSize::b32, 40 * 8> // AHB reset register
    {
        using USBHDRST = Field<AHBRSTR, 1, 12, read_write>;  // USBHD reset
        using DVPRST = Field<AHBRSTR, 1, 13, read_only>;     // DVP reset
        using ETHMACRST = Field<AHBRSTR, 1, 14, read_write>; // Ethernet MAC reset
    };
    struct CFGR2 : PackedRegister<RCC_pack, RegBitSize::b32, 44 * 8> // Clock configuration register2
    {
        using PREDIV1 = Field<CFGR2, 4, 0, read_write>;          // PREDIV1 division factor
        using PREDIV2 = Field<CFGR2, 4, 4, read_write>;          // PREDIV2 division factor
        using PLL2MUL = Field<CFGR2, 4, 8, read_write>;          // PLL2 Multiplication Factor
        using PLL3MUL = Field<CFGR2, 4, 12, read_write>;         // PLL3 Multiplication Factor
        using PREDIV1SRC = Field<CFGR2, 1, 16, read_write>;      // PREDIV1 entry clock source
        using I2S2SRC = Field<CFGR2, 1, 17, read_write>;         // I2S2 clock source
        using I2S3SRC = Field<CFGR2, 1, 18, read_write>;         // I2S3 clock source
        using TRNG_SRC = Field<CFGR2, 1, 19, read_write>;        // TRNG clock source
        using ETH1G_SRC = Field<CFGR2, 2, 20, read_write>;       // ETH1G clock source
        using ETH1G_125M_EN = Field<CFGR2, 1, 22, read_write>;   // ETH1G _125M clock enable
        using USBHS_PREDIY = Field<CFGR2, 3, 24, read_write>;    // USB HS PREDIV division factor
        using USBHS_PLL_SRC = Field<CFGR2, 1, 27, read_write>;   // USB HS Multiplication Factor clock source
        using USBHS_CKPEF_SEL = Field<CFGR2, 2, 28, read_write>; // USB HS Peference Clock source
        using USBHS_PLLALIVE = Field<CFGR2, 1, 30, read_write>;  // USB HS Multiplication control
        using USBHS_CLK_SRC = Field<CFGR2, 1, 31, read_write>;   // USB HS clock source
    };
}
namespace EXTEND
{
    using EXTEND_pack = RegisterPack<0x40023800, 1024>;
    struct EXTEND_CTR : PackedRegister<EXTEND_pack, RegBitSize::b32, 0 * 8> // EXTEND register
    {
        using USBDLS = Field<EXTEND_CTR, 1, 0, read_write>;       // USBD Lowspeed Enable
        using USBDPU = Field<EXTEND_CTR, 1, 1, read_write>;       // USBD pullup Enable
        using ETH_10M_EN = Field<EXTEND_CTR, 1, 2, read_write>;   // ETH 10M Enable
        using ETH_RGMII_EN = Field<EXTEND_CTR, 1, 3, read_write>; // ETH RGMII Enable
        using PLL_HSI_PRE = Field<EXTEND_CTR, 1, 4, read_write>;  // Whether HSI is divided
        using LOCKUP_EN = Field<EXTEND_CTR, 1, 6, read_write>;    // LOCKUP_Eable
        using LOCKUP_RSTF = Field<EXTEND_CTR, 1, 7, read_only>;        // LOCKUP RESET
        using ULLDO_TRIM = Field<EXTEND_CTR, 2, 8, read_write>;   // ULLDO_TRIM
        using LDO_TRIM = Field<EXTEND_CTR, 2, 10, read_write>;    // LDO_TRIM
        using HSE_KEEP_LP = Field<EXTEND_CTR, 1, 12, read_write>; // HSE_KEEP_LP
    };
}
namespace OPA
{
    using OPA_pack = RegisterPack<0x40023804, 512>;
    struct CR : PackedRegister<OPA_pack, RegBitSize::b32, 0 * 8> // Control register
    {
        using EN1 = Field<CR, 1, 0, read_write>;    // OPA Enable1
        using MODE1 = Field<CR, 1, 1, read_write>;  // OPA MODE1
        using NSEL1 = Field<CR, 1, 2, read_write>;  // OPA NSEL1
        using PSEL1 = Field<CR, 1, 3, read_write>;  // OPA PSEL1
        using EN2 = Field<CR, 1, 4, read_write>;    // OPA Enable2
        using MODE2 = Field<CR, 1, 5, read_write>;  // OPA MODE2
        using NSEL2 = Field<CR, 1, 6, read_write>;  // OPA NSEL2
        using PSEL2 = Field<CR, 1, 7, read_write>;  // OPA PSEL2
        using EN3 = Field<CR, 1, 8, read_write>;    // OPA Eable3
        using MODE3 = Field<CR, 1, 9, read_write>;  // OPA MODE3
        using NSEL3 = Field<CR, 1, 10, read_write>; // OPA NSEL3
        using PSEL3 = Field<CR, 1, 11, read_write>; // OPA PSEL3
        using EN4 = Field<CR, 1, 12, read_write>;   // OPA Enable4
        using MODE4 = Field<CR, 1, 13, read_write>; // OPA MODE4
        using NSEL4 = Field<CR, 1, 14, read_write>; // OPA NSEL4
        using PSEL4 = Field<CR, 1, 15, read_write>; // OPA PSEL4
    };
}
namespace GPIOA
{
    using GPIOA_pack = RegisterPack<0x40010800, 1024>;
    struct CFGLR : PackedRegister<GPIOA_pack, RegBitSize::b32, 0 * 8> // Port configuration register low
    {
        using MODE0 = Field<CFGLR, 4, 4 * 0, read_write>;
        using MODE1 = Field<CFGLR, 4, 4 * 1, read_write>;
        using MODE2 = Field<CFGLR, 4, 4 * 2, read_write>;
        using MODE3 = Field<CFGLR, 4, 4 * 3, read_write>;
        using MODE4 = Field<CFGLR, 4, 4 * 4, read_write>;
        using MODE5 = Field<CFGLR, 4, 4 * 5, read_write>;
        using MODE6 = Field<CFGLR, 4, 4 * 6, read_write>;
        using MODE7 = Field<CFGLR, 4, 4 * 7, read_write>;
    };
    struct CFGHR : PackedRegister<GPIOA_pack, RegBitSize::b32, 4 * 8> // Port configuration register high
    {
        using MODE8 = Field<CFGHR, 4, 4 * 8, read_write>;
        using MODE9 = Field<CFGHR, 4, 4 * 9, read_write>;
        using MODE10 = Field<CFGHR, 4, 4 * 10, read_write>;
        using MODE11 = Field<CFGHR, 4, 4 * 11, read_write>;
        using MODE12 = Field<CFGHR, 4, 4 * 12, read_write>;
        using MODE13 = Field<CFGHR, 4, 4 * 13, read_write>;
        using MODE14 = Field<CFGHR, 4, 4 * 14, read_write>;
        using MODE15 = Field<CFGHR, 4, 4 * 15, read_write>;
    };
    struct INDR : PackedRegister<GPIOA_pack, RegBitSize::b32, 8 * 8> // Port input data register
    {
        using IDR0 = Field<INDR, 1, 0, read_only>;   // Port input data
        using IDR1 = Field<INDR, 1, 1, read_only>;   // Port input data
        using IDR2 = Field<INDR, 1, 2, read_only>;   // Port input data
        using IDR3 = Field<INDR, 1, 3, read_only>;   // Port input data
        using IDR4 = Field<INDR, 1, 4, read_only>;   // Port input data
        using IDR5 = Field<INDR, 1, 5, read_only>;   // Port input data
        using IDR6 = Field<INDR, 1, 6, read_only>;   // Port input data
        using IDR7 = Field<INDR, 1, 7, read_only>;   // Port input data
        using IDR8 = Field<INDR, 1, 8, read_only>;   // Port input data
        using IDR9 = Field<INDR, 1, 9, read_only>;   // Port input data
        using IDR10 = Field<INDR, 1, 10, read_only>; // Port input data
        using IDR11 = Field<INDR, 1, 11, read_only>; // Port input data
        using IDR12 = Field<INDR, 1, 12, read_only>; // Port input data
        using IDR13 = Field<INDR, 1, 13, read_only>; // Port input data
        using IDR14 = Field<INDR, 1, 14, read_only>; // Port input data
        using IDR15 = Field<INDR, 1, 15, read_only>; // Port input data
    };
    struct OUTDR : PackedRegister<GPIOA_pack, RegBitSize::b32, 12 * 8> // Port output data register
    {
        using ODR0 = Field<OUTDR, 1, 0, read_write>;   // Port output data
        using ODR1 = Field<OUTDR, 1, 1, read_write>;   // Port output data
        using ODR2 = Field<OUTDR, 1, 2, read_write>;   // Port output data
        using ODR3 = Field<OUTDR, 1, 3, read_write>;   // Port output data
        using ODR4 = Field<OUTDR, 1, 4, read_write>;   // Port output data
        using ODR5 = Field<OUTDR, 1, 5, read_write>;   // Port output data
        using ODR6 = Field<OUTDR, 1, 6, read_write>;   // Port output data
        using ODR7 = Field<OUTDR, 1, 7, read_write>;   // Port output data
        using ODR8 = Field<OUTDR, 1, 8, read_write>;   // Port output data
        using ODR9 = Field<OUTDR, 1, 9, read_write>;   // Port output data
        using ODR10 = Field<OUTDR, 1, 10, read_write>; // Port output data
        using ODR11 = Field<OUTDR, 1, 11, read_write>; // Port output data
        using ODR12 = Field<OUTDR, 1, 12, read_write>; // Port output data
        using ODR13 = Field<OUTDR, 1, 13, read_write>; // Port output data
        using ODR14 = Field<OUTDR, 1, 14, read_write>; // Port output data
        using ODR15 = Field<OUTDR, 1, 15, read_write>; // Port output data
    };
    struct BSHR : PackedRegister<GPIOA_pack, RegBitSize::b32, 16 * 8> // Port bit set/reset register
    {
        using BS0 = Field<BSHR, 1, 0, write_only>;   // Set bit 0
        using BS1 = Field<BSHR, 1, 1, write_only>;   // Set bit 1
        using BS2 = Field<BSHR, 1, 2, write_only>;   // Set bit 1
        using BS3 = Field<BSHR, 1, 3, write_only>;   // Set bit 3
        using BS4 = Field<BSHR, 1, 4, write_only>;   // Set bit 4
        using BS5 = Field<BSHR, 1, 5, write_only>;   // Set bit 5
        using BS6 = Field<BSHR, 1, 6, write_only>;   // Set bit 6
        using BS7 = Field<BSHR, 1, 7, write_only>;   // Set bit 7
        using BS8 = Field<BSHR, 1, 8, write_only>;   // Set bit 8
        using BS9 = Field<BSHR, 1, 9, write_only>;   // Set bit 9
        using BS10 = Field<BSHR, 1, 10, write_only>; // Set bit 10
        using BS11 = Field<BSHR, 1, 11, write_only>; // Set bit 11
        using BS12 = Field<BSHR, 1, 12, write_only>; // Set bit 12
        using BS13 = Field<BSHR, 1, 13, write_only>; // Set bit 13
        using BS14 = Field<BSHR, 1, 14, write_only>; // Set bit 14
        using BS15 = Field<BSHR, 1, 15, write_only>; // Set bit 15
        using BR0 = Field<BSHR, 1, 16, write_only>;  // Reset bit 0
        using BR1 = Field<BSHR, 1, 17, write_only>;  // Reset bit 1
        using BR2 = Field<BSHR, 1, 18, write_only>;  // Reset bit 2
        using BR3 = Field<BSHR, 1, 19, write_only>;  // Reset bit 3
        using BR4 = Field<BSHR, 1, 20, write_only>;  // Reset bit 4
        using BR5 = Field<BSHR, 1, 21, write_only>;  // Reset bit 5
        using BR6 = Field<BSHR, 1, 22, write_only>;  // Reset bit 6
        using BR7 = Field<BSHR, 1, 23, write_only>;  // Reset bit 7
        using BR8 = Field<BSHR, 1, 24, write_only>;  // Reset bit 8
        using BR9 = Field<BSHR, 1, 25, write_only>;  // Reset bit 9
        using BR10 = Field<BSHR, 1, 26, write_only>; // Reset bit 10
        using BR11 = Field<BSHR, 1, 27, write_only>; // Reset bit 11
        using BR12 = Field<BSHR, 1, 28, write_only>; // Reset bit 12
        using BR13 = Field<BSHR, 1, 29, write_only>; // Reset bit 13
        using BR14 = Field<BSHR, 1, 30, write_only>; // Reset bit 14
        using BR15 = Field<BSHR, 1, 31, write_only>; // Reset bit 15
    };
    struct BCR : PackedRegister<GPIOA_pack, RegBitSize::b32, 20 * 8> // Port bit reset register
    {
        using BR0 = Field<BCR, 1, 0, write_only>;   // Reset bit 0
        using BR1 = Field<BCR, 1, 1, write_only>;   // Reset bit 1
        using BR2 = Field<BCR, 1, 2, write_only>;   // Reset bit 1
        using BR3 = Field<BCR, 1, 3, write_only>;   // Reset bit 3
        using BR4 = Field<BCR, 1, 4, write_only>;   // Reset bit 4
        using BR5 = Field<BCR, 1, 5, write_only>;   // Reset bit 5
        using BR6 = Field<BCR, 1, 6, write_only>;   // Reset bit 6
        using BR7 = Field<BCR, 1, 7, write_only>;   // Reset bit 7
        using BR8 = Field<BCR, 1, 8, write_only>;   // Reset bit 8
        using BR9 = Field<BCR, 1, 9, write_only>;   // Reset bit 9
        using BR10 = Field<BCR, 1, 10, write_only>; // Reset bit 10
        using BR11 = Field<BCR, 1, 11, write_only>; // Reset bit 11
        using BR12 = Field<BCR, 1, 12, write_only>; // Reset bit 12
        using BR13 = Field<BCR, 1, 13, write_only>; // Reset bit 13
        using BR14 = Field<BCR, 1, 14, write_only>; // Reset bit 14
        using BR15 = Field<BCR, 1, 15, write_only>; // Reset bit 15
    };
    struct LCKR : PackedRegister<GPIOA_pack, RegBitSize::b32, 24 * 8> // Port configuration lock
    {
        using LCK0 = Field<LCKR, 1, 0, read_write>;   // Port A Lock bit 0
        using LCK1 = Field<LCKR, 1, 1, read_write>;   // Port A Lock bit 1
        using LCK2 = Field<LCKR, 1, 2, read_write>;   // Port A Lock bit 2
        using LCK3 = Field<LCKR, 1, 3, read_write>;   // Port A Lock bit 3
        using LCK4 = Field<LCKR, 1, 4, read_write>;   // Port A Lock bit 4
        using LCK5 = Field<LCKR, 1, 5, read_write>;   // Port A Lock bit 5
        using LCK6 = Field<LCKR, 1, 6, read_write>;   // Port A Lock bit 6
        using LCK7 = Field<LCKR, 1, 7, read_write>;   // Port A Lock bit 7
        using LCK8 = Field<LCKR, 1, 8, read_write>;   // Port A Lock bit 8
        using LCK9 = Field<LCKR, 1, 9, read_write>;   // Port A Lock bit 9
        using LCK10 = Field<LCKR, 1, 10, read_write>; // Port A Lock bit 10
        using LCK11 = Field<LCKR, 1, 11, read_write>; // Port A Lock bit 11
        using LCK12 = Field<LCKR, 1, 12, read_write>; // Port A Lock bit 12
        using LCK13 = Field<LCKR, 1, 13, read_write>; // Port A Lock bit 13
        using LCK14 = Field<LCKR, 1, 14, read_write>; // Port A Lock bit 14
        using LCK15 = Field<LCKR, 1, 15, read_write>; // Port A Lock bit 15
        using LCKK = Field<LCKR, 1, 16, read_write>;  // Lock key
    };
}
namespace GPIOB
{
    using GPIOB_pack = RegisterPack<0x40010c00, 1024>;
    struct CFGLR : PackedRegister<GPIOB_pack, RegBitSize::b32, 0 * 8> // Port configuration register low
    {
            using MODE0 = Field<CFGLR, 4, 4 * 0, read_write>;
            using MODE1 = Field<CFGLR, 4, 4 * 1, read_write>;
            using MODE2 = Field<CFGLR, 4, 4 * 2, read_write>;
            using MODE3 = Field<CFGLR, 4, 4 * 3, read_write>;
            using MODE4 = Field<CFGLR, 4, 4 * 4, read_write>;
            using MODE5 = Field<CFGLR, 4, 4 * 5, read_write>;
            using MODE6 = Field<CFGLR, 4, 4 * 6, read_write>;
            using MODE7 = Field<CFGLR, 4, 4 * 7, read_write>;
    };
    struct CFGHR : PackedRegister<GPIOB_pack, RegBitSize::b32, 4 * 8> // Port configuration register high
    {
        using MODE8 = Field<CFGHR, 4, 4 * 8, read_write>;
        using MODE9 = Field<CFGHR, 4, 4 * 9, read_write>;
        using MODE10 = Field<CFGHR, 4, 4 * 10, read_write>;
        using MODE11 = Field<CFGHR, 4, 4 * 11, read_write>;
        using MODE12 = Field<CFGHR, 4, 4 * 12, read_write>;
        using MODE13 = Field<CFGHR, 4, 4 * 13, read_write>;
        using MODE14 = Field<CFGHR, 4, 4 * 14, read_write>;
        using MODE15 = Field<CFGHR, 4, 4 * 15, read_write>;
    };
    struct INDR : PackedRegister<GPIOB_pack, RegBitSize::b32, 8 * 8> // Port input data register
    {
        using IDR0 = Field<INDR, 1, 0, read_only>;   // Port input data
        using IDR1 = Field<INDR, 1, 1, read_only>;   // Port input data
        using IDR2 = Field<INDR, 1, 2, read_only>;   // Port input data
        using IDR3 = Field<INDR, 1, 3, read_only>;   // Port input data
        using IDR4 = Field<INDR, 1, 4, read_only>;   // Port input data
        using IDR5 = Field<INDR, 1, 5, read_only>;   // Port input data
        using IDR6 = Field<INDR, 1, 6, read_only>;   // Port input data
        using IDR7 = Field<INDR, 1, 7, read_only>;   // Port input data
        using IDR8 = Field<INDR, 1, 8, read_only>;   // Port input data
        using IDR9 = Field<INDR, 1, 9, read_only>;   // Port input data
        using IDR10 = Field<INDR, 1, 10, read_only>; // Port input data
        using IDR11 = Field<INDR, 1, 11, read_only>; // Port input data
        using IDR12 = Field<INDR, 1, 12, read_only>; // Port input data
        using IDR13 = Field<INDR, 1, 13, read_only>; // Port input data
        using IDR14 = Field<INDR, 1, 14, read_only>; // Port input data
        using IDR15 = Field<INDR, 1, 15, read_only>; // Port input data
    };
    struct OUTDR : PackedRegister<GPIOB_pack, RegBitSize::b32, 12 * 8> // Port output data register
    {
        using ODR0 = Field<OUTDR, 1, 0, read_write>;   // Port output data
        using ODR1 = Field<OUTDR, 1, 1, read_write>;   // Port output data
        using ODR2 = Field<OUTDR, 1, 2, read_write>;   // Port output data
        using ODR3 = Field<OUTDR, 1, 3, read_write>;   // Port output data
        using ODR4 = Field<OUTDR, 1, 4, read_write>;   // Port output data
        using ODR5 = Field<OUTDR, 1, 5, read_write>;   // Port output data
        using ODR6 = Field<OUTDR, 1, 6, read_write>;   // Port output data
        using ODR7 = Field<OUTDR, 1, 7, read_write>;   // Port output data
        using ODR8 = Field<OUTDR, 1, 8, read_write>;   // Port output data
        using ODR9 = Field<OUTDR, 1, 9, read_write>;   // Port output data
        using ODR10 = Field<OUTDR, 1, 10, read_write>; // Port output data
        using ODR11 = Field<OUTDR, 1, 11, read_write>; // Port output data
        using ODR12 = Field<OUTDR, 1, 12, read_write>; // Port output data
        using ODR13 = Field<OUTDR, 1, 13, read_write>; // Port output data
        using ODR14 = Field<OUTDR, 1, 14, read_write>; // Port output data
        using ODR15 = Field<OUTDR, 1, 15, read_write>; // Port output data
    };
    struct BSHR : PackedRegister<GPIOB_pack, RegBitSize::b32, 16 * 8> // Port bit set/reset register
    {
        using BS0 = Field<BSHR, 1, 0, write_only>;   // Set bit 0
        using BS1 = Field<BSHR, 1, 1, write_only>;   // Set bit 1
        using BS2 = Field<BSHR, 1, 2, write_only>;   // Set bit 1
        using BS3 = Field<BSHR, 1, 3, write_only>;   // Set bit 3
        using BS4 = Field<BSHR, 1, 4, write_only>;   // Set bit 4
        using BS5 = Field<BSHR, 1, 5, write_only>;   // Set bit 5
        using BS6 = Field<BSHR, 1, 6, write_only>;   // Set bit 6
        using BS7 = Field<BSHR, 1, 7, write_only>;   // Set bit 7
        using BS8 = Field<BSHR, 1, 8, write_only>;   // Set bit 8
        using BS9 = Field<BSHR, 1, 9, write_only>;   // Set bit 9
        using BS10 = Field<BSHR, 1, 10, write_only>; // Set bit 10
        using BS11 = Field<BSHR, 1, 11, write_only>; // Set bit 11
        using BS12 = Field<BSHR, 1, 12, write_only>; // Set bit 12
        using BS13 = Field<BSHR, 1, 13, write_only>; // Set bit 13
        using BS14 = Field<BSHR, 1, 14, write_only>; // Set bit 14
        using BS15 = Field<BSHR, 1, 15, write_only>; // Set bit 15
        using BR0 = Field<BSHR, 1, 16, write_only>;  // Reset bit 0
        using BR1 = Field<BSHR, 1, 17, write_only>;  // Reset bit 1
        using BR2 = Field<BSHR, 1, 18, write_only>;  // Reset bit 2
        using BR3 = Field<BSHR, 1, 19, write_only>;  // Reset bit 3
        using BR4 = Field<BSHR, 1, 20, write_only>;  // Reset bit 4
        using BR5 = Field<BSHR, 1, 21, write_only>;  // Reset bit 5
        using BR6 = Field<BSHR, 1, 22, write_only>;  // Reset bit 6
        using BR7 = Field<BSHR, 1, 23, write_only>;  // Reset bit 7
        using BR8 = Field<BSHR, 1, 24, write_only>;  // Reset bit 8
        using BR9 = Field<BSHR, 1, 25, write_only>;  // Reset bit 9
        using BR10 = Field<BSHR, 1, 26, write_only>; // Reset bit 10
        using BR11 = Field<BSHR, 1, 27, write_only>; // Reset bit 11
        using BR12 = Field<BSHR, 1, 28, write_only>; // Reset bit 12
        using BR13 = Field<BSHR, 1, 29, write_only>; // Reset bit 13
        using BR14 = Field<BSHR, 1, 30, write_only>; // Reset bit 14
        using BR15 = Field<BSHR, 1, 31, write_only>; // Reset bit 15
    };
    struct BCR : PackedRegister<GPIOB_pack, RegBitSize::b32, 20 * 8> // Port bit reset register
    {
        using BR0 = Field<BCR, 1, 0, write_only>;   // Reset bit 0
        using BR1 = Field<BCR, 1, 1, write_only>;   // Reset bit 1
        using BR2 = Field<BCR, 1, 2, write_only>;   // Reset bit 1
        using BR3 = Field<BCR, 1, 3, write_only>;   // Reset bit 3
        using BR4 = Field<BCR, 1, 4, write_only>;   // Reset bit 4
        using BR5 = Field<BCR, 1, 5, write_only>;   // Reset bit 5
        using BR6 = Field<BCR, 1, 6, write_only>;   // Reset bit 6
        using BR7 = Field<BCR, 1, 7, write_only>;   // Reset bit 7
        using BR8 = Field<BCR, 1, 8, write_only>;   // Reset bit 8
        using BR9 = Field<BCR, 1, 9, write_only>;   // Reset bit 9
        using BR10 = Field<BCR, 1, 10, write_only>; // Reset bit 10
        using BR11 = Field<BCR, 1, 11, write_only>; // Reset bit 11
        using BR12 = Field<BCR, 1, 12, write_only>; // Reset bit 12
        using BR13 = Field<BCR, 1, 13, write_only>; // Reset bit 13
        using BR14 = Field<BCR, 1, 14, write_only>; // Reset bit 14
        using BR15 = Field<BCR, 1, 15, write_only>; // Reset bit 15
    };
    struct LCKR : PackedRegister<GPIOB_pack, RegBitSize::b32, 24 * 8> // Port configuration lock
    {
        using LCK0 = Field<LCKR, 1, 0, read_write>;   // Port A Lock bit 0
        using LCK1 = Field<LCKR, 1, 1, read_write>;   // Port A Lock bit 1
        using LCK2 = Field<LCKR, 1, 2, read_write>;   // Port A Lock bit 2
        using LCK3 = Field<LCKR, 1, 3, read_write>;   // Port A Lock bit 3
        using LCK4 = Field<LCKR, 1, 4, read_write>;   // Port A Lock bit 4
        using LCK5 = Field<LCKR, 1, 5, read_write>;   // Port A Lock bit 5
        using LCK6 = Field<LCKR, 1, 6, read_write>;   // Port A Lock bit 6
        using LCK7 = Field<LCKR, 1, 7, read_write>;   // Port A Lock bit 7
        using LCK8 = Field<LCKR, 1, 8, read_write>;   // Port A Lock bit 8
        using LCK9 = Field<LCKR, 1, 9, read_write>;   // Port A Lock bit 9
        using LCK10 = Field<LCKR, 1, 10, read_write>; // Port A Lock bit 10
        using LCK11 = Field<LCKR, 1, 11, read_write>; // Port A Lock bit 11
        using LCK12 = Field<LCKR, 1, 12, read_write>; // Port A Lock bit 12
        using LCK13 = Field<LCKR, 1, 13, read_write>; // Port A Lock bit 13
        using LCK14 = Field<LCKR, 1, 14, read_write>; // Port A Lock bit 14
        using LCK15 = Field<LCKR, 1, 15, read_write>; // Port A Lock bit 15
        using LCKK = Field<LCKR, 1, 16, read_write>;  // Lock key
    };
}
namespace GPIOC
{
    using GPIOC_pack = RegisterPack<0x40011000, 1024>;
    struct CFGLR : PackedRegister<GPIOC_pack, RegBitSize::b32, 0 * 8> // Port configuration register low
    {
        using MODE0 = Field<CFGLR, 4, 4 * 0, read_write>;
        using MODE1 = Field<CFGLR, 4, 4 * 1, read_write>;
        using MODE2 = Field<CFGLR, 4, 4 * 2, read_write>;
        using MODE3 = Field<CFGLR, 4, 4 * 3, read_write>;
        using MODE4 = Field<CFGLR, 4, 4 * 4, read_write>;
        using MODE5 = Field<CFGLR, 4, 4 * 5, read_write>;
        using MODE6 = Field<CFGLR, 4, 4 * 6, read_write>;
        using MODE7 = Field<CFGLR, 4, 4 * 7, read_write>;    };
    struct CFGHR : PackedRegister<GPIOC_pack, RegBitSize::b32, 4 * 8> // Port configuration register high
    {
         using MODE8 = Field<CFGHR, 4, 4 * 8, read_write>;
        using MODE9 = Field<CFGHR, 4, 4 * 9, read_write>;
        using MODE10 = Field<CFGHR, 4, 4 * 10, read_write>;
        using MODE11 = Field<CFGHR, 4, 4 * 11, read_write>;
        using MODE12 = Field<CFGHR, 4, 4 * 12, read_write>;
        using MODE13 = Field<CFGHR, 4, 4 * 13, read_write>;
        using MODE14 = Field<CFGHR, 4, 4 * 14, read_write>;
        using MODE15 = Field<CFGHR, 4, 4 * 15, read_write>;   };
    struct INDR : PackedRegister<GPIOC_pack, RegBitSize::b32, 8 * 8> // Port input data register
    {
        using IDR0 = Field<INDR, 1, 0, read_only>;   // Port input data
        using IDR1 = Field<INDR, 1, 1, read_only>;   // Port input data
        using IDR2 = Field<INDR, 1, 2, read_only>;   // Port input data
        using IDR3 = Field<INDR, 1, 3, read_only>;   // Port input data
        using IDR4 = Field<INDR, 1, 4, read_only>;   // Port input data
        using IDR5 = Field<INDR, 1, 5, read_only>;   // Port input data
        using IDR6 = Field<INDR, 1, 6, read_only>;   // Port input data
        using IDR7 = Field<INDR, 1, 7, read_only>;   // Port input data
        using IDR8 = Field<INDR, 1, 8, read_only>;   // Port input data
        using IDR9 = Field<INDR, 1, 9, read_only>;   // Port input data
        using IDR10 = Field<INDR, 1, 10, read_only>; // Port input data
        using IDR11 = Field<INDR, 1, 11, read_only>; // Port input data
        using IDR12 = Field<INDR, 1, 12, read_only>; // Port input data
        using IDR13 = Field<INDR, 1, 13, read_only>; // Port input data
        using IDR14 = Field<INDR, 1, 14, read_only>; // Port input data
        using IDR15 = Field<INDR, 1, 15, read_only>; // Port input data
    };
    struct OUTDR : PackedRegister<GPIOC_pack, RegBitSize::b32, 12 * 8> // Port output data register
    {
        using ODR0 = Field<OUTDR, 1, 0, read_write>;   // Port output data
        using ODR1 = Field<OUTDR, 1, 1, read_write>;   // Port output data
        using ODR2 = Field<OUTDR, 1, 2, read_write>;   // Port output data
        using ODR3 = Field<OUTDR, 1, 3, read_write>;   // Port output data
        using ODR4 = Field<OUTDR, 1, 4, read_write>;   // Port output data
        using ODR5 = Field<OUTDR, 1, 5, read_write>;   // Port output data
        using ODR6 = Field<OUTDR, 1, 6, read_write>;   // Port output data
        using ODR7 = Field<OUTDR, 1, 7, read_write>;   // Port output data
        using ODR8 = Field<OUTDR, 1, 8, read_write>;   // Port output data
        using ODR9 = Field<OUTDR, 1, 9, read_write>;   // Port output data
        using ODR10 = Field<OUTDR, 1, 10, read_write>; // Port output data
        using ODR11 = Field<OUTDR, 1, 11, read_write>; // Port output data
        using ODR12 = Field<OUTDR, 1, 12, read_write>; // Port output data
        using ODR13 = Field<OUTDR, 1, 13, read_write>; // Port output data
        using ODR14 = Field<OUTDR, 1, 14, read_write>; // Port output data
        using ODR15 = Field<OUTDR, 1, 15, read_write>; // Port output data
    };
    struct BSHR : PackedRegister<GPIOC_pack, RegBitSize::b32, 16 * 8> // Port bit set/reset register
    {
        using BS0 = Field<BSHR, 1, 0, write_only>;   // Set bit 0
        using BS1 = Field<BSHR, 1, 1, write_only>;   // Set bit 1
        using BS2 = Field<BSHR, 1, 2, write_only>;   // Set bit 1
        using BS3 = Field<BSHR, 1, 3, write_only>;   // Set bit 3
        using BS4 = Field<BSHR, 1, 4, write_only>;   // Set bit 4
        using BS5 = Field<BSHR, 1, 5, write_only>;   // Set bit 5
        using BS6 = Field<BSHR, 1, 6, write_only>;   // Set bit 6
        using BS7 = Field<BSHR, 1, 7, write_only>;   // Set bit 7
        using BS8 = Field<BSHR, 1, 8, write_only>;   // Set bit 8
        using BS9 = Field<BSHR, 1, 9, write_only>;   // Set bit 9
        using BS10 = Field<BSHR, 1, 10, write_only>; // Set bit 10
        using BS11 = Field<BSHR, 1, 11, write_only>; // Set bit 11
        using BS12 = Field<BSHR, 1, 12, write_only>; // Set bit 12
        using BS13 = Field<BSHR, 1, 13, write_only>; // Set bit 13
        using BS14 = Field<BSHR, 1, 14, write_only>; // Set bit 14
        using BS15 = Field<BSHR, 1, 15, write_only>; // Set bit 15
        using BR0 = Field<BSHR, 1, 16, write_only>;  // Reset bit 0
        using BR1 = Field<BSHR, 1, 17, write_only>;  // Reset bit 1
        using BR2 = Field<BSHR, 1, 18, write_only>;  // Reset bit 2
        using BR3 = Field<BSHR, 1, 19, write_only>;  // Reset bit 3
        using BR4 = Field<BSHR, 1, 20, write_only>;  // Reset bit 4
        using BR5 = Field<BSHR, 1, 21, write_only>;  // Reset bit 5
        using BR6 = Field<BSHR, 1, 22, write_only>;  // Reset bit 6
        using BR7 = Field<BSHR, 1, 23, write_only>;  // Reset bit 7
        using BR8 = Field<BSHR, 1, 24, write_only>;  // Reset bit 8
        using BR9 = Field<BSHR, 1, 25, write_only>;  // Reset bit 9
        using BR10 = Field<BSHR, 1, 26, write_only>; // Reset bit 10
        using BR11 = Field<BSHR, 1, 27, write_only>; // Reset bit 11
        using BR12 = Field<BSHR, 1, 28, write_only>; // Reset bit 12
        using BR13 = Field<BSHR, 1, 29, write_only>; // Reset bit 13
        using BR14 = Field<BSHR, 1, 30, write_only>; // Reset bit 14
        using BR15 = Field<BSHR, 1, 31, write_only>; // Reset bit 15
    };
    struct BCR : PackedRegister<GPIOC_pack, RegBitSize::b32, 20 * 8> // Port bit reset register
    {
        using BR0 = Field<BCR, 1, 0, write_only>;   // Reset bit 0
        using BR1 = Field<BCR, 1, 1, write_only>;   // Reset bit 1
        using BR2 = Field<BCR, 1, 2, write_only>;   // Reset bit 1
        using BR3 = Field<BCR, 1, 3, write_only>;   // Reset bit 3
        using BR4 = Field<BCR, 1, 4, write_only>;   // Reset bit 4
        using BR5 = Field<BCR, 1, 5, write_only>;   // Reset bit 5
        using BR6 = Field<BCR, 1, 6, write_only>;   // Reset bit 6
        using BR7 = Field<BCR, 1, 7, write_only>;   // Reset bit 7
        using BR8 = Field<BCR, 1, 8, write_only>;   // Reset bit 8
        using BR9 = Field<BCR, 1, 9, write_only>;   // Reset bit 9
        using BR10 = Field<BCR, 1, 10, write_only>; // Reset bit 10
        using BR11 = Field<BCR, 1, 11, write_only>; // Reset bit 11
        using BR12 = Field<BCR, 1, 12, write_only>; // Reset bit 12
        using BR13 = Field<BCR, 1, 13, write_only>; // Reset bit 13
        using BR14 = Field<BCR, 1, 14, write_only>; // Reset bit 14
        using BR15 = Field<BCR, 1, 15, write_only>; // Reset bit 15
    };
    struct LCKR : PackedRegister<GPIOC_pack, RegBitSize::b32, 24 * 8> // Port configuration lock
    {
        using LCK0 = Field<LCKR, 1, 0, read_write>;   // Port A Lock bit 0
        using LCK1 = Field<LCKR, 1, 1, read_write>;   // Port A Lock bit 1
        using LCK2 = Field<LCKR, 1, 2, read_write>;   // Port A Lock bit 2
        using LCK3 = Field<LCKR, 1, 3, read_write>;   // Port A Lock bit 3
        using LCK4 = Field<LCKR, 1, 4, read_write>;   // Port A Lock bit 4
        using LCK5 = Field<LCKR, 1, 5, read_write>;   // Port A Lock bit 5
        using LCK6 = Field<LCKR, 1, 6, read_write>;   // Port A Lock bit 6
        using LCK7 = Field<LCKR, 1, 7, read_write>;   // Port A Lock bit 7
        using LCK8 = Field<LCKR, 1, 8, read_write>;   // Port A Lock bit 8
        using LCK9 = Field<LCKR, 1, 9, read_write>;   // Port A Lock bit 9
        using LCK10 = Field<LCKR, 1, 10, read_write>; // Port A Lock bit 10
        using LCK11 = Field<LCKR, 1, 11, read_write>; // Port A Lock bit 11
        using LCK12 = Field<LCKR, 1, 12, read_write>; // Port A Lock bit 12
        using LCK13 = Field<LCKR, 1, 13, read_write>; // Port A Lock bit 13
        using LCK14 = Field<LCKR, 1, 14, read_write>; // Port A Lock bit 14
        using LCK15 = Field<LCKR, 1, 15, read_write>; // Port A Lock bit 15
        using LCKK = Field<LCKR, 1, 16, read_write>;  // Lock key
    };
}
namespace GPIOD
{
    using GPIOD_pack = RegisterPack<0x40011400, 1024>;
    struct CFGLR : PackedRegister<GPIOD_pack, RegBitSize::b32, 0 * 8> // Port configuration register low
    {
        using MODE0 = Field<CFGLR, 4, 4 * 0, read_write>;
        using MODE1 = Field<CFGLR, 4, 4 * 1, read_write>;
        using MODE2 = Field<CFGLR, 4, 4 * 2, read_write>;
        using MODE3 = Field<CFGLR, 4, 4 * 3, read_write>;
        using MODE4 = Field<CFGLR, 4, 4 * 4, read_write>;
        using MODE5 = Field<CFGLR, 4, 4 * 5, read_write>;
        using MODE6 = Field<CFGLR, 4, 4 * 6, read_write>;
        using MODE7 = Field<CFGLR, 4, 4 * 7, read_write>;    };
    struct CFGHR : PackedRegister<GPIOD_pack, RegBitSize::b32, 4 * 8> // Port configuration register high
    {
        using MODE8 = Field<CFGHR, 4, 4 * 8, read_write>;
        using MODE9 = Field<CFGHR, 4, 4 * 9, read_write>;
        using MODE10 = Field<CFGHR, 4, 4 * 10, read_write>;
        using MODE11 = Field<CFGHR, 4, 4 * 11, read_write>;
        using MODE12 = Field<CFGHR, 4, 4 * 12, read_write>;
        using MODE13 = Field<CFGHR, 4, 4 * 13, read_write>;
        using MODE14 = Field<CFGHR, 4, 4 * 14, read_write>;
        using MODE15 = Field<CFGHR, 4, 4 * 15, read_write>;
    };
    struct INDR : PackedRegister<GPIOD_pack, RegBitSize::b32, 8 * 8> // Port input data register
    {
        using IDR0 = Field<INDR, 1, 0, read_only>;   // Port input data
        using IDR1 = Field<INDR, 1, 1, read_only>;   // Port input data
        using IDR2 = Field<INDR, 1, 2, read_only>;   // Port input data
        using IDR3 = Field<INDR, 1, 3, read_only>;   // Port input data
        using IDR4 = Field<INDR, 1, 4, read_only>;   // Port input data
        using IDR5 = Field<INDR, 1, 5, read_only>;   // Port input data
        using IDR6 = Field<INDR, 1, 6, read_only>;   // Port input data
        using IDR7 = Field<INDR, 1, 7, read_only>;   // Port input data
        using IDR8 = Field<INDR, 1, 8, read_only>;   // Port input data
        using IDR9 = Field<INDR, 1, 9, read_only>;   // Port input data
        using IDR10 = Field<INDR, 1, 10, read_only>; // Port input data
        using IDR11 = Field<INDR, 1, 11, read_only>; // Port input data
        using IDR12 = Field<INDR, 1, 12, read_only>; // Port input data
        using IDR13 = Field<INDR, 1, 13, read_only>; // Port input data
        using IDR14 = Field<INDR, 1, 14, read_only>; // Port input data
        using IDR15 = Field<INDR, 1, 15, read_only>; // Port input data
    };
    struct OUTDR : PackedRegister<GPIOD_pack, RegBitSize::b32, 12 * 8> // Port output data register
    {
        using ODR0 = Field<OUTDR, 1, 0, read_write>;   // Port output data
        using ODR1 = Field<OUTDR, 1, 1, read_write>;   // Port output data
        using ODR2 = Field<OUTDR, 1, 2, read_write>;   // Port output data
        using ODR3 = Field<OUTDR, 1, 3, read_write>;   // Port output data
        using ODR4 = Field<OUTDR, 1, 4, read_write>;   // Port output data
        using ODR5 = Field<OUTDR, 1, 5, read_write>;   // Port output data
        using ODR6 = Field<OUTDR, 1, 6, read_write>;   // Port output data
        using ODR7 = Field<OUTDR, 1, 7, read_write>;   // Port output data
        using ODR8 = Field<OUTDR, 1, 8, read_write>;   // Port output data
        using ODR9 = Field<OUTDR, 1, 9, read_write>;   // Port output data
        using ODR10 = Field<OUTDR, 1, 10, read_write>; // Port output data
        using ODR11 = Field<OUTDR, 1, 11, read_write>; // Port output data
        using ODR12 = Field<OUTDR, 1, 12, read_write>; // Port output data
        using ODR13 = Field<OUTDR, 1, 13, read_write>; // Port output data
        using ODR14 = Field<OUTDR, 1, 14, read_write>; // Port output data
        using ODR15 = Field<OUTDR, 1, 15, read_write>; // Port output data
    };
    struct BSHR : PackedRegister<GPIOD_pack, RegBitSize::b32, 16 * 8> // Port bit set/reset register
    {
        using BS0 = Field<BSHR, 1, 0, write_only>;   // Set bit 0
        using BS1 = Field<BSHR, 1, 1, write_only>;   // Set bit 1
        using BS2 = Field<BSHR, 1, 2, write_only>;   // Set bit 1
        using BS3 = Field<BSHR, 1, 3, write_only>;   // Set bit 3
        using BS4 = Field<BSHR, 1, 4, write_only>;   // Set bit 4
        using BS5 = Field<BSHR, 1, 5, write_only>;   // Set bit 5
        using BS6 = Field<BSHR, 1, 6, write_only>;   // Set bit 6
        using BS7 = Field<BSHR, 1, 7, write_only>;   // Set bit 7
        using BS8 = Field<BSHR, 1, 8, write_only>;   // Set bit 8
        using BS9 = Field<BSHR, 1, 9, write_only>;   // Set bit 9
        using BS10 = Field<BSHR, 1, 10, write_only>; // Set bit 10
        using BS11 = Field<BSHR, 1, 11, write_only>; // Set bit 11
        using BS12 = Field<BSHR, 1, 12, write_only>; // Set bit 12
        using BS13 = Field<BSHR, 1, 13, write_only>; // Set bit 13
        using BS14 = Field<BSHR, 1, 14, write_only>; // Set bit 14
        using BS15 = Field<BSHR, 1, 15, write_only>; // Set bit 15
        using BR0 = Field<BSHR, 1, 16, write_only>;  // Reset bit 0
        using BR1 = Field<BSHR, 1, 17, write_only>;  // Reset bit 1
        using BR2 = Field<BSHR, 1, 18, write_only>;  // Reset bit 2
        using BR3 = Field<BSHR, 1, 19, write_only>;  // Reset bit 3
        using BR4 = Field<BSHR, 1, 20, write_only>;  // Reset bit 4
        using BR5 = Field<BSHR, 1, 21, write_only>;  // Reset bit 5
        using BR6 = Field<BSHR, 1, 22, write_only>;  // Reset bit 6
        using BR7 = Field<BSHR, 1, 23, write_only>;  // Reset bit 7
        using BR8 = Field<BSHR, 1, 24, write_only>;  // Reset bit 8
        using BR9 = Field<BSHR, 1, 25, write_only>;  // Reset bit 9
        using BR10 = Field<BSHR, 1, 26, write_only>; // Reset bit 10
        using BR11 = Field<BSHR, 1, 27, write_only>; // Reset bit 11
        using BR12 = Field<BSHR, 1, 28, write_only>; // Reset bit 12
        using BR13 = Field<BSHR, 1, 29, write_only>; // Reset bit 13
        using BR14 = Field<BSHR, 1, 30, write_only>; // Reset bit 14
        using BR15 = Field<BSHR, 1, 31, write_only>; // Reset bit 15
    };
    struct BCR : PackedRegister<GPIOD_pack, RegBitSize::b32, 20 * 8> // Port bit reset register
    {
        using BR0 = Field<BCR, 1, 0, write_only>;   // Reset bit 0
        using BR1 = Field<BCR, 1, 1, write_only>;   // Reset bit 1
        using BR2 = Field<BCR, 1, 2, write_only>;   // Reset bit 1
        using BR3 = Field<BCR, 1, 3, write_only>;   // Reset bit 3
        using BR4 = Field<BCR, 1, 4, write_only>;   // Reset bit 4
        using BR5 = Field<BCR, 1, 5, write_only>;   // Reset bit 5
        using BR6 = Field<BCR, 1, 6, write_only>;   // Reset bit 6
        using BR7 = Field<BCR, 1, 7, write_only>;   // Reset bit 7
        using BR8 = Field<BCR, 1, 8, write_only>;   // Reset bit 8
        using BR9 = Field<BCR, 1, 9, write_only>;   // Reset bit 9
        using BR10 = Field<BCR, 1, 10, write_only>; // Reset bit 10
        using BR11 = Field<BCR, 1, 11, write_only>; // Reset bit 11
        using BR12 = Field<BCR, 1, 12, write_only>; // Reset bit 12
        using BR13 = Field<BCR, 1, 13, write_only>; // Reset bit 13
        using BR14 = Field<BCR, 1, 14, write_only>; // Reset bit 14
        using BR15 = Field<BCR, 1, 15, write_only>; // Reset bit 15
    };
    struct LCKR : PackedRegister<GPIOD_pack, RegBitSize::b32, 24 * 8> // Port configuration lock
    {
        using LCK0 = Field<LCKR, 1, 0, read_write>;   // Port A Lock bit 0
        using LCK1 = Field<LCKR, 1, 1, read_write>;   // Port A Lock bit 1
        using LCK2 = Field<LCKR, 1, 2, read_write>;   // Port A Lock bit 2
        using LCK3 = Field<LCKR, 1, 3, read_write>;   // Port A Lock bit 3
        using LCK4 = Field<LCKR, 1, 4, read_write>;   // Port A Lock bit 4
        using LCK5 = Field<LCKR, 1, 5, read_write>;   // Port A Lock bit 5
        using LCK6 = Field<LCKR, 1, 6, read_write>;   // Port A Lock bit 6
        using LCK7 = Field<LCKR, 1, 7, read_write>;   // Port A Lock bit 7
        using LCK8 = Field<LCKR, 1, 8, read_write>;   // Port A Lock bit 8
        using LCK9 = Field<LCKR, 1, 9, read_write>;   // Port A Lock bit 9
        using LCK10 = Field<LCKR, 1, 10, read_write>; // Port A Lock bit 10
        using LCK11 = Field<LCKR, 1, 11, read_write>; // Port A Lock bit 11
        using LCK12 = Field<LCKR, 1, 12, read_write>; // Port A Lock bit 12
        using LCK13 = Field<LCKR, 1, 13, read_write>; // Port A Lock bit 13
        using LCK14 = Field<LCKR, 1, 14, read_write>; // Port A Lock bit 14
        using LCK15 = Field<LCKR, 1, 15, read_write>; // Port A Lock bit 15
        using LCKK = Field<LCKR, 1, 16, read_write>;  // Lock key
    };
}
namespace GPIOE
{
    using GPIOE_pack = RegisterPack<0x40011800, 1024>;
    struct CFGLR : PackedRegister<GPIOE_pack, RegBitSize::b32, 0 * 8> // Port configuration register low
    {
        using MODE0 = Field<CFGLR, 4, 4 * 0, read_write>;
        using MODE1 = Field<CFGLR, 4, 4 * 1, read_write>;
        using MODE2 = Field<CFGLR, 4, 4 * 2, read_write>;
        using MODE3 = Field<CFGLR, 4, 4 * 3, read_write>;
        using MODE4 = Field<CFGLR, 4, 4 * 4, read_write>;
        using MODE5 = Field<CFGLR, 4, 4 * 5, read_write>;
        using MODE6 = Field<CFGLR, 4, 4 * 6, read_write>;
        using MODE7 = Field<CFGLR, 4, 4 * 7, read_write>;
    };
    struct CFGHR : PackedRegister<GPIOE_pack, RegBitSize::b32, 4 * 8> // Port configuration register high
    {
        using MODE8 = Field<CFGHR, 4, 4 * 8, read_write>;
        using MODE9 = Field<CFGHR, 4, 4 * 9, read_write>;
        using MODE10 = Field<CFGHR, 4, 4 * 10, read_write>;
        using MODE11 = Field<CFGHR, 4, 4 * 11, read_write>;
        using MODE12 = Field<CFGHR, 4, 4 * 12, read_write>;
        using MODE13 = Field<CFGHR, 4, 4 * 13, read_write>;
        using MODE14 = Field<CFGHR, 4, 4 * 14, read_write>;
        using MODE15 = Field<CFGHR, 4, 4 * 15, read_write>;
    };
    struct INDR : PackedRegister<GPIOE_pack, RegBitSize::b32, 8 * 8> // Port input data register
    {
        using IDR0 = Field<INDR, 1, 0, read_only>;   // Port input data
        using IDR1 = Field<INDR, 1, 1, read_only>;   // Port input data
        using IDR2 = Field<INDR, 1, 2, read_only>;   // Port input data
        using IDR3 = Field<INDR, 1, 3, read_only>;   // Port input data
        using IDR4 = Field<INDR, 1, 4, read_only>;   // Port input data
        using IDR5 = Field<INDR, 1, 5, read_only>;   // Port input data
        using IDR6 = Field<INDR, 1, 6, read_only>;   // Port input data
        using IDR7 = Field<INDR, 1, 7, read_only>;   // Port input data
        using IDR8 = Field<INDR, 1, 8, read_only>;   // Port input data
        using IDR9 = Field<INDR, 1, 9, read_only>;   // Port input data
        using IDR10 = Field<INDR, 1, 10, read_only>; // Port input data
        using IDR11 = Field<INDR, 1, 11, read_only>; // Port input data
        using IDR12 = Field<INDR, 1, 12, read_only>; // Port input data
        using IDR13 = Field<INDR, 1, 13, read_only>; // Port input data
        using IDR14 = Field<INDR, 1, 14, read_only>; // Port input data
        using IDR15 = Field<INDR, 1, 15, read_only>; // Port input data
    };
    struct OUTDR : PackedRegister<GPIOE_pack, RegBitSize::b32, 12 * 8> // Port output data register
    {
        using ODR0 = Field<OUTDR, 1, 0, read_write>;   // Port output data
        using ODR1 = Field<OUTDR, 1, 1, read_write>;   // Port output data
        using ODR2 = Field<OUTDR, 1, 2, read_write>;   // Port output data
        using ODR3 = Field<OUTDR, 1, 3, read_write>;   // Port output data
        using ODR4 = Field<OUTDR, 1, 4, read_write>;   // Port output data
        using ODR5 = Field<OUTDR, 1, 5, read_write>;   // Port output data
        using ODR6 = Field<OUTDR, 1, 6, read_write>;   // Port output data
        using ODR7 = Field<OUTDR, 1, 7, read_write>;   // Port output data
        using ODR8 = Field<OUTDR, 1, 8, read_write>;   // Port output data
        using ODR9 = Field<OUTDR, 1, 9, read_write>;   // Port output data
        using ODR10 = Field<OUTDR, 1, 10, read_write>; // Port output data
        using ODR11 = Field<OUTDR, 1, 11, read_write>; // Port output data
        using ODR12 = Field<OUTDR, 1, 12, read_write>; // Port output data
        using ODR13 = Field<OUTDR, 1, 13, read_write>; // Port output data
        using ODR14 = Field<OUTDR, 1, 14, read_write>; // Port output data
        using ODR15 = Field<OUTDR, 1, 15, read_write>; // Port output data
    };
    struct BSHR : PackedRegister<GPIOE_pack, RegBitSize::b32, 16 * 8> // Port bit set/reset register
    {
        using BS0 = Field<BSHR, 1, 0, write_only>;   // Set bit 0
        using BS1 = Field<BSHR, 1, 1, write_only>;   // Set bit 1
        using BS2 = Field<BSHR, 1, 2, write_only>;   // Set bit 1
        using BS3 = Field<BSHR, 1, 3, write_only>;   // Set bit 3
        using BS4 = Field<BSHR, 1, 4, write_only>;   // Set bit 4
        using BS5 = Field<BSHR, 1, 5, write_only>;   // Set bit 5
        using BS6 = Field<BSHR, 1, 6, write_only>;   // Set bit 6
        using BS7 = Field<BSHR, 1, 7, write_only>;   // Set bit 7
        using BS8 = Field<BSHR, 1, 8, write_only>;   // Set bit 8
        using BS9 = Field<BSHR, 1, 9, write_only>;   // Set bit 9
        using BS10 = Field<BSHR, 1, 10, write_only>; // Set bit 10
        using BS11 = Field<BSHR, 1, 11, write_only>; // Set bit 11
        using BS12 = Field<BSHR, 1, 12, write_only>; // Set bit 12
        using BS13 = Field<BSHR, 1, 13, write_only>; // Set bit 13
        using BS14 = Field<BSHR, 1, 14, write_only>; // Set bit 14
        using BS15 = Field<BSHR, 1, 15, write_only>; // Set bit 15
        using BR0 = Field<BSHR, 1, 16, write_only>;  // Reset bit 0
        using BR1 = Field<BSHR, 1, 17, write_only>;  // Reset bit 1
        using BR2 = Field<BSHR, 1, 18, write_only>;  // Reset bit 2
        using BR3 = Field<BSHR, 1, 19, write_only>;  // Reset bit 3
        using BR4 = Field<BSHR, 1, 20, write_only>;  // Reset bit 4
        using BR5 = Field<BSHR, 1, 21, write_only>;  // Reset bit 5
        using BR6 = Field<BSHR, 1, 22, write_only>;  // Reset bit 6
        using BR7 = Field<BSHR, 1, 23, write_only>;  // Reset bit 7
        using BR8 = Field<BSHR, 1, 24, write_only>;  // Reset bit 8
        using BR9 = Field<BSHR, 1, 25, write_only>;  // Reset bit 9
        using BR10 = Field<BSHR, 1, 26, write_only>; // Reset bit 10
        using BR11 = Field<BSHR, 1, 27, write_only>; // Reset bit 11
        using BR12 = Field<BSHR, 1, 28, write_only>; // Reset bit 12
        using BR13 = Field<BSHR, 1, 29, write_only>; // Reset bit 13
        using BR14 = Field<BSHR, 1, 30, write_only>; // Reset bit 14
        using BR15 = Field<BSHR, 1, 31, write_only>; // Reset bit 15
    };
    struct BCR : PackedRegister<GPIOE_pack, RegBitSize::b32, 20 * 8> // Port bit reset register
    {
        using BR0 = Field<BCR, 1, 0, write_only>;   // Reset bit 0
        using BR1 = Field<BCR, 1, 1, write_only>;   // Reset bit 1
        using BR2 = Field<BCR, 1, 2, write_only>;   // Reset bit 1
        using BR3 = Field<BCR, 1, 3, write_only>;   // Reset bit 3
        using BR4 = Field<BCR, 1, 4, write_only>;   // Reset bit 4
        using BR5 = Field<BCR, 1, 5, write_only>;   // Reset bit 5
        using BR6 = Field<BCR, 1, 6, write_only>;   // Reset bit 6
        using BR7 = Field<BCR, 1, 7, write_only>;   // Reset bit 7
        using BR8 = Field<BCR, 1, 8, write_only>;   // Reset bit 8
        using BR9 = Field<BCR, 1, 9, write_only>;   // Reset bit 9
        using BR10 = Field<BCR, 1, 10, write_only>; // Reset bit 10
        using BR11 = Field<BCR, 1, 11, write_only>; // Reset bit 11
        using BR12 = Field<BCR, 1, 12, write_only>; // Reset bit 12
        using BR13 = Field<BCR, 1, 13, write_only>; // Reset bit 13
        using BR14 = Field<BCR, 1, 14, write_only>; // Reset bit 14
        using BR15 = Field<BCR, 1, 15, write_only>; // Reset bit 15
    };
    struct LCKR : PackedRegister<GPIOE_pack, RegBitSize::b32, 24 * 8> // Port configuration lock
    {
        using LCK0 = Field<LCKR, 1, 0, read_write>;   // Port A Lock bit 0
        using LCK1 = Field<LCKR, 1, 1, read_write>;   // Port A Lock bit 1
        using LCK2 = Field<LCKR, 1, 2, read_write>;   // Port A Lock bit 2
        using LCK3 = Field<LCKR, 1, 3, read_write>;   // Port A Lock bit 3
        using LCK4 = Field<LCKR, 1, 4, read_write>;   // Port A Lock bit 4
        using LCK5 = Field<LCKR, 1, 5, read_write>;   // Port A Lock bit 5
        using LCK6 = Field<LCKR, 1, 6, read_write>;   // Port A Lock bit 6
        using LCK7 = Field<LCKR, 1, 7, read_write>;   // Port A Lock bit 7
        using LCK8 = Field<LCKR, 1, 8, read_write>;   // Port A Lock bit 8
        using LCK9 = Field<LCKR, 1, 9, read_write>;   // Port A Lock bit 9
        using LCK10 = Field<LCKR, 1, 10, read_write>; // Port A Lock bit 10
        using LCK11 = Field<LCKR, 1, 11, read_write>; // Port A Lock bit 11
        using LCK12 = Field<LCKR, 1, 12, read_write>; // Port A Lock bit 12
        using LCK13 = Field<LCKR, 1, 13, read_write>; // Port A Lock bit 13
        using LCK14 = Field<LCKR, 1, 14, read_write>; // Port A Lock bit 14
        using LCK15 = Field<LCKR, 1, 15, read_write>; // Port A Lock bit 15
        using LCKK = Field<LCKR, 1, 16, read_write>;  // Lock key
    };
}
namespace AFIO
{
    using AFIO_pack = RegisterPack<0x40010000, 1024>;
    struct ECR : PackedRegister<AFIO_pack, RegBitSize::b32, 0 * 8> // Event Control Register
    {
        using PIN = Field<ECR, 4, 0, read_write>;  // Pin selection
        using PORT = Field<ECR, 3, 4, read_write>; // Port selection
        using EVOE = Field<ECR, 1, 7, read_write>; // Event Output Enable
    };
    struct PCFR : PackedRegister<AFIO_pack, RegBitSize::b32, 4 * 8> // AF remap and debug I/O configuration
    {
        using SPI1RM = Field<PCFR, 1, 0, read_write>;           // SPI1 remapping
        using I2C1RM = Field<PCFR, 1, 1, read_write>;           // I2C1 remapping
        using USART1RM = Field<PCFR, 1, 2, read_write>;         // USART1 remapping
        using USART2RM = Field<PCFR, 1, 3, read_write>;         // USART2 remapping
        using USART3RM = Field<PCFR, 2, 4, read_write>;         // USART3 remapping
        using TIM1RM = Field<PCFR, 2, 6, read_write>;           // TIM1 remapping
        using TIM2RM = Field<PCFR, 2, 8, read_write>;           // TIM2 remapping
        using TIM3RM = Field<PCFR, 2, 10, read_write>;          // TIM3 remapping
        using TIM4RM = Field<PCFR, 1, 12, read_write>;          // TIM4 remapping
        using CAN1RM = Field<PCFR, 2, 13, read_write>;          // CAN1 remapping
        using PD01RM = Field<PCFR, 1, 15, read_write>;          // Port D0/Port D1 mapping on
        using TIM5CH4RM = Field<PCFR, 1, 16, read_write>;       // TIM5 channel4 internal remap
        using ADC1_ETRGINJ_RM = Field<PCFR, 1, 17, read_write>; // ADC 1 External trigger injected conversion remapping
        using ADC1_ETRGREG_RM = Field<PCFR, 1, 18, read_write>; // ADC 1 external trigger regular conversion remapping
        using ADC2_ETRGINJ_RM = Field<PCFR, 1, 19, read_write>; // ADC 2 External trigger injected conversion remapping
        using ADC2_ETRGREG_RM = Field<PCFR, 1, 20, read_write>; // ADC 2 external trigger regular conversion remapping
        using ETHRM = Field<PCFR, 1, 21, read_write>;           // Ethernet remapping
        using CAN2RM = Field<PCFR, 1, 22, read_write>;          // CAN2 remapping
        using MII_RMII_SEL = Field<PCFR, 1, 23, read_write>;    // MII_RMII_SEL
        using SWCFG = Field<PCFR, 3, 24, write_only>;           // Serial wire JTAG
        using SPI3_RM = Field<PCFR, 1, 28, read_write>;         // SPI3 remapping
        using TIM2ITRA_RM = Field<PCFR, 1, 29, read_write>;     // TIM2 internally triggers 1 remapping
        using PTP_PPSP_RM = Field<PCFR, 1, 30, read_write>;     // Ethernet PTP_PPS remapping
    };
    struct EXTICR1 : PackedRegister<AFIO_pack, RegBitSize::b32, 8 * 8> // External interrupt configuration register 1
    {
        using EXTI0 = Field<EXTICR1, 4, 0, read_write>;  // EXTI0 configuration
        using EXTI1 = Field<EXTICR1, 4, 4, read_write>;  // EXTI1 configuration
        using EXTI2 = Field<EXTICR1, 4, 8, read_write>;  // EXTI2 configuration
        using EXTI3 = Field<EXTICR1, 4, 12, read_write>; // EXTI3 configuration
    };
    struct EXTICR2 : PackedRegister<AFIO_pack, RegBitSize::b32, 12 * 8> // External interrupt configuration register 2
    {
        using EXTI4 = Field<EXTICR2, 4, 0, read_write>;  // EXTI4 configuration
        using EXTI5 = Field<EXTICR2, 4, 4, read_write>;  // EXTI5 configuration
        using EXTI6 = Field<EXTICR2, 4, 8, read_write>;  // EXTI6 configuration
        using EXTI7 = Field<EXTICR2, 4, 12, read_write>; // EXTI7 configuration
    };
    struct EXTICR3 : PackedRegister<AFIO_pack, RegBitSize::b32, 16 * 8> // External interrupt configuration register 3
    {
        using EXTI8 = Field<EXTICR3, 4, 0, read_write>;   // EXTI8 configuration
        using EXTI9 = Field<EXTICR3, 4, 4, read_write>;   // EXTI9 configuration
        using EXTI10 = Field<EXTICR3, 4, 8, read_write>;  // EXTI10 configuration
        using EXTI11 = Field<EXTICR3, 4, 12, read_write>; // EXTI11 configuration
    };
    struct EXTICR4 : PackedRegister<AFIO_pack, RegBitSize::b32, 20 * 8> // External interrupt configuration register 4
    {
        using EXTI12 = Field<EXTICR4, 4, 0, read_write>;  // EXTI12 configuration
        using EXTI13 = Field<EXTICR4, 4, 4, read_write>;  // EXTI13 configuration
        using EXTI14 = Field<EXTICR4, 4, 8, read_write>;  // EXTI14 configuration
        using EXTI15 = Field<EXTICR4, 4, 12, read_write>; // EXTI15 configuration
    };
    struct PCFR2 : PackedRegister<AFIO_pack, RegBitSize::b32, 28 * 8> // AF remap and debug I/O configuration
    {
        using TIM8_REMAP = Field<PCFR2, 1, 2, read_write>;    // TIM8 remapping
        using TIM9_REMAP = Field<PCFR2, 2, 3, read_write>;    // TIM9 remapping
        using TIM10_REMAP = Field<PCFR2, 2, 5, read_write>;   // TIM10 remapping
        using FSMC_NADV = Field<PCFR2, 1, 10, read_write>;    // FSMC_NADV
        using UART4_REMAP = Field<PCFR2, 2, 16, read_write>;  // UART4 remapping
        using UART5_REMAP = Field<PCFR2, 2, 18, read_write>;  // UART5 remapping
        using UART6_REMAP = Field<PCFR2, 2, 20, read_write>;  // UART6 remapping
        using UART7_REMAP = Field<PCFR2, 2, 22, read_write>;  // UART7 remapping
        using UART8_REMAP = Field<PCFR2, 2, 24, read_write>;  // UART8 remapping
        using UART1_REMAP2 = Field<PCFR2, 1, 26, read_write>; // UART1 remapping
    };
}
namespace EXTI
{
    using EXTI_pack = RegisterPack<0x40010400, 1024>;
    struct INTENR : PackedRegister<EXTI_pack, RegBitSize::b32, 0 * 8> // Interrupt mask register
    {
        using MR0 = Field<INTENR, 1, 0, read_write>;   // Interrupt Mask on line 0
        using MR1 = Field<INTENR, 1, 1, read_write>;   // Interrupt Mask on line 1
        using MR2 = Field<INTENR, 1, 2, read_write>;   // Interrupt Mask on line 2
        using MR3 = Field<INTENR, 1, 3, read_write>;   // Interrupt Mask on line 3
        using MR4 = Field<INTENR, 1, 4, read_write>;   // Interrupt Mask on line 4
        using MR5 = Field<INTENR, 1, 5, read_write>;   // Interrupt Mask on line 5
        using MR6 = Field<INTENR, 1, 6, read_write>;   // Interrupt Mask on line 6
        using MR7 = Field<INTENR, 1, 7, read_write>;   // Interrupt Mask on line 7
        using MR8 = Field<INTENR, 1, 8, read_write>;   // Interrupt Mask on line 8
        using MR9 = Field<INTENR, 1, 9, read_write>;   // Interrupt Mask on line 9
        using MR10 = Field<INTENR, 1, 10, read_write>; // Interrupt Mask on line 10
        using MR11 = Field<INTENR, 1, 11, read_write>; // Interrupt Mask on line 11
        using MR12 = Field<INTENR, 1, 12, read_write>; // Interrupt Mask on line 12
        using MR13 = Field<INTENR, 1, 13, read_write>; // Interrupt Mask on line 13
        using MR14 = Field<INTENR, 1, 14, read_write>; // Interrupt Mask on line 14
        using MR15 = Field<INTENR, 1, 15, read_write>; // Interrupt Mask on line 15
        using MR16 = Field<INTENR, 1, 16, read_write>; // Interrupt Mask on line 16
        using MR17 = Field<INTENR, 1, 17, read_write>; // Interrupt Mask on line 17
        using MR18 = Field<INTENR, 1, 18, read_write>; // Interrupt Mask on line 18
        using MR19 = Field<INTENR, 1, 19, read_write>; // Interrupt Mask on line 19
    };
    struct EVENR : PackedRegister<EXTI_pack, RegBitSize::b32, 4 * 8> // Event mask register (EXTI_EVENR)
    {
        using MR0 = Field<EVENR, 1, 0, read_write>;   // Event Mask on line 0
        using MR1 = Field<EVENR, 1, 1, read_write>;   // Event Mask on line 1
        using MR2 = Field<EVENR, 1, 2, read_write>;   // Event Mask on line 2
        using MR3 = Field<EVENR, 1, 3, read_write>;   // Event Mask on line 3
        using MR4 = Field<EVENR, 1, 4, read_write>;   // Event Mask on line 4
        using MR5 = Field<EVENR, 1, 5, read_write>;   // Event Mask on line 5
        using MR6 = Field<EVENR, 1, 6, read_write>;   // Event Mask on line 6
        using MR7 = Field<EVENR, 1, 7, read_write>;   // Event Mask on line 7
        using MR8 = Field<EVENR, 1, 8, read_write>;   // Event Mask on line 8
        using MR9 = Field<EVENR, 1, 9, read_write>;   // Event Mask on line 9
        using MR10 = Field<EVENR, 1, 10, read_write>; // Event Mask on line 10
        using MR11 = Field<EVENR, 1, 11, read_write>; // Event Mask on line 11
        using MR12 = Field<EVENR, 1, 12, read_write>; // Event Mask on line 12
        using MR13 = Field<EVENR, 1, 13, read_write>; // Event Mask on line 13
        using MR14 = Field<EVENR, 1, 14, read_write>; // Event Mask on line 14
        using MR15 = Field<EVENR, 1, 15, read_write>; // Event Mask on line 15
        using MR16 = Field<EVENR, 1, 16, read_write>; // Event Mask on line 16
        using MR17 = Field<EVENR, 1, 17, read_write>; // Event Mask on line 17
        using MR18 = Field<EVENR, 1, 18, read_write>; // Event Mask on line 18
        using MR19 = Field<EVENR, 1, 19, read_write>; // Event Mask on line 19
    };
    struct RTENR : PackedRegister<EXTI_pack, RegBitSize::b32, 8 * 8> // Rising Trigger selection register
    {
        using TR0 = Field<RTENR, 1, 0, read_write>;   // Rising trigger event configuration of
        using TR1 = Field<RTENR, 1, 1, read_write>;   // Rising trigger event configuration of
        using TR2 = Field<RTENR, 1, 2, read_write>;   // Rising trigger event configuration of
        using TR3 = Field<RTENR, 1, 3, read_write>;   // Rising trigger event configuration of
        using TR4 = Field<RTENR, 1, 4, read_write>;   // Rising trigger event configuration of
        using TR5 = Field<RTENR, 1, 5, read_write>;   // Rising trigger event configuration of
        using TR6 = Field<RTENR, 1, 6, read_write>;   // Rising trigger event configuration of
        using TR7 = Field<RTENR, 1, 7, read_write>;   // Rising trigger event configuration of
        using TR8 = Field<RTENR, 1, 8, read_write>;   // Rising trigger event configuration of
        using TR9 = Field<RTENR, 1, 9, read_write>;   // Rising trigger event configuration of
        using TR10 = Field<RTENR, 1, 10, read_write>; // Rising trigger event configuration of
        using TR11 = Field<RTENR, 1, 11, read_write>; // Rising trigger event configuration of
        using TR12 = Field<RTENR, 1, 12, read_write>; // Rising trigger event configuration of
        using TR13 = Field<RTENR, 1, 13, read_write>; // Rising trigger event configuration of
        using TR14 = Field<RTENR, 1, 14, read_write>; // Rising trigger event configuration of
        using TR15 = Field<RTENR, 1, 15, read_write>; // Rising trigger event configuration of
        using TR16 = Field<RTENR, 1, 16, read_write>; // Rising trigger event configuration of
        using TR17 = Field<RTENR, 1, 17, read_write>; // Rising trigger event configuration of
        using TR18 = Field<RTENR, 1, 18, read_write>; // Rising trigger event configuration of
        using TR19 = Field<RTENR, 1, 19, read_write>; // Rising trigger event configuration of
    };
    struct FTENR : PackedRegister<EXTI_pack, RegBitSize::b32, 12 * 8> // Falling Trigger selection register
    {
        using TR0 = Field<FTENR, 1, 0, read_write>;   // Falling trigger event configuration of
        using TR1 = Field<FTENR, 1, 1, read_write>;   // Falling trigger event configuration of
        using TR2 = Field<FTENR, 1, 2, read_write>;   // Falling trigger event configuration of
        using TR3 = Field<FTENR, 1, 3, read_write>;   // Falling trigger event configuration of
        using TR4 = Field<FTENR, 1, 4, read_write>;   // Falling trigger event configuration of
        using TR5 = Field<FTENR, 1, 5, read_write>;   // Falling trigger event configuration of
        using TR6 = Field<FTENR, 1, 6, read_write>;   // Falling trigger event configuration of
        using TR7 = Field<FTENR, 1, 7, read_write>;   // Falling trigger event configuration of
        using TR8 = Field<FTENR, 1, 8, read_write>;   // Falling trigger event configuration of
        using TR9 = Field<FTENR, 1, 9, read_write>;   // Falling trigger event configuration of
        using TR10 = Field<FTENR, 1, 10, read_write>; // Falling trigger event configuration of
        using TR11 = Field<FTENR, 1, 11, read_write>; // Falling trigger event configuration of
        using TR12 = Field<FTENR, 1, 12, read_write>; // Falling trigger event configuration of
        using TR13 = Field<FTENR, 1, 13, read_write>; // Falling trigger event configuration of
        using TR14 = Field<FTENR, 1, 14, read_write>; // Falling trigger event configuration of
        using TR15 = Field<FTENR, 1, 15, read_write>; // Falling trigger event configuration of
        using TR16 = Field<FTENR, 1, 16, read_write>; // Falling trigger event configuration of
        using TR17 = Field<FTENR, 1, 17, read_write>; // Falling trigger event configuration of
        using TR18 = Field<FTENR, 1, 18, read_write>; // Falling trigger event configuration of
        using TR19 = Field<FTENR, 1, 19, read_write>; // Falling trigger event configuration of
    };
    struct SWIEVR : PackedRegister<EXTI_pack, RegBitSize::b32, 16 * 8> // Software interrupt event register
    {
        using SWIER0 = Field<SWIEVR, 1, 0, read_write>;   // Software Interrupt on line
        using SWIER1 = Field<SWIEVR, 1, 1, read_write>;   // Software Interrupt on line
        using SWIER2 = Field<SWIEVR, 1, 2, read_write>;   // Software Interrupt on line
        using SWIER3 = Field<SWIEVR, 1, 3, read_write>;   // Software Interrupt on line
        using SWIER4 = Field<SWIEVR, 1, 4, read_write>;   // Software Interrupt on line
        using SWIER5 = Field<SWIEVR, 1, 5, read_write>;   // Software Interrupt on line
        using SWIER6 = Field<SWIEVR, 1, 6, read_write>;   // Software Interrupt on line
        using SWIER7 = Field<SWIEVR, 1, 7, read_write>;   // Software Interrupt on line
        using SWIER8 = Field<SWIEVR, 1, 8, read_write>;   // Software Interrupt on line
        using SWIER9 = Field<SWIEVR, 1, 9, read_write>;   // Software Interrupt on line
        using SWIER10 = Field<SWIEVR, 1, 10, read_write>; // Software Interrupt on line
        using SWIER11 = Field<SWIEVR, 1, 11, read_write>; // Software Interrupt on line
        using SWIER12 = Field<SWIEVR, 1, 12, read_write>; // Software Interrupt on line
        using SWIER13 = Field<SWIEVR, 1, 13, read_write>; // Software Interrupt on line
        using SWIER14 = Field<SWIEVR, 1, 14, read_write>; // Software Interrupt on line
        using SWIER15 = Field<SWIEVR, 1, 15, read_write>; // Software Interrupt on line
        using SWIER16 = Field<SWIEVR, 1, 16, read_write>; // Software Interrupt on line
        using SWIER17 = Field<SWIEVR, 1, 17, read_write>; // Software Interrupt on line
        using SWIER18 = Field<SWIEVR, 1, 18, read_write>; // Software Interrupt on line
        using SWIER19 = Field<SWIEVR, 1, 19, read_write>; // Software Interrupt on line
    };
    struct INTFR : PackedRegister<EXTI_pack, RegBitSize::b32, 20 * 8> // Pending register (EXTI_INTFR)
    {
        using PR0 = Field<INTFR, 1, 0, read_write>;   // Pending bit 0
        using PR1 = Field<INTFR, 1, 1, read_write>;   // Pending bit 1
        using PR2 = Field<INTFR, 1, 2, read_write>;   // Pending bit 2
        using PR3 = Field<INTFR, 1, 3, read_write>;   // Pending bit 3
        using PR4 = Field<INTFR, 1, 4, read_write>;   // Pending bit 4
        using PR5 = Field<INTFR, 1, 5, read_write>;   // Pending bit 5
        using PR6 = Field<INTFR, 1, 6, read_write>;   // Pending bit 6
        using PR7 = Field<INTFR, 1, 7, read_write>;   // Pending bit 7
        using PR8 = Field<INTFR, 1, 8, read_write>;   // Pending bit 8
        using PR9 = Field<INTFR, 1, 9, read_write>;   // Pending bit 9
        using PR10 = Field<INTFR, 1, 10, read_write>; // Pending bit 10
        using PR11 = Field<INTFR, 1, 11, read_write>; // Pending bit 11
        using PR12 = Field<INTFR, 1, 12, read_write>; // Pending bit 12
        using PR13 = Field<INTFR, 1, 13, read_write>; // Pending bit 13
        using PR14 = Field<INTFR, 1, 14, read_write>; // Pending bit 14
        using PR15 = Field<INTFR, 1, 15, read_write>; // Pending bit 15
        using PR16 = Field<INTFR, 1, 16, read_write>; // Pending bit 16
        using PR17 = Field<INTFR, 1, 17, read_write>; // Pending bit 17
        using PR18 = Field<INTFR, 1, 18, read_write>; // Pending bit 18
        using PR19 = Field<INTFR, 1, 19, read_write>; // Pending bit 19
    };
}
namespace DMA1
{
    using DMA1_pack = RegisterPack<0x40020000, 1024>;
    struct INTFR : PackedRegister<DMA1_pack, RegBitSize::b32, 0 * 8> // DMA interrupt status register
    {
        using GIF1 = Field<INTFR, 1, 0, read_only>;   // Channel 1 Global interrupt
        using TCIF1 = Field<INTFR, 1, 1, read_only>;  // Channel 1 Transfer Complete
        using HTIF1 = Field<INTFR, 1, 2, read_only>;  // Channel 1 Half Transfer Complete
        using TEIF1 = Field<INTFR, 1, 3, read_only>;  // Channel 1 Transfer Error
        using GIF2 = Field<INTFR, 1, 4, read_only>;   // Channel 2 Global interrupt
        using TCIF2 = Field<INTFR, 1, 5, read_only>;  // Channel 2 Transfer Complete
        using HTIF2 = Field<INTFR, 1, 6, read_only>;  // Channel 2 Half Transfer Complete
        using TEIF2 = Field<INTFR, 1, 7, read_only>;  // Channel 2 Transfer Error
        using GIF3 = Field<INTFR, 1, 8, read_only>;   // Channel 3 Global interrupt
        using TCIF3 = Field<INTFR, 1, 9, read_only>;  // Channel 3 Transfer Complete
        using HTIF3 = Field<INTFR, 1, 10, read_only>; // Channel 3 Half Transfer Complete
        using TEIF3 = Field<INTFR, 1, 11, read_only>; // Channel 3 Transfer Error
        using GIF4 = Field<INTFR, 1, 12, read_only>;  // Channel 4 Global interrupt
        using TCIF4 = Field<INTFR, 1, 13, read_only>; // Channel 4 Transfer Complete
        using HTIF4 = Field<INTFR, 1, 14, read_only>; // Channel 4 Half Transfer Complete
        using TEIF4 = Field<INTFR, 1, 15, read_only>; // Channel 4 Transfer Error
        using GIF5 = Field<INTFR, 1, 16, read_only>;  // Channel 5 Global interrupt
        using TCIF5 = Field<INTFR, 1, 17, read_only>; // Channel 5 Transfer Complete
        using HTIF5 = Field<INTFR, 1, 18, read_only>; // Channel 5 Half Transfer Complete
        using TEIF5 = Field<INTFR, 1, 19, read_only>; // Channel 5 Transfer Error
        using GIF6 = Field<INTFR, 1, 20, read_only>;  // Channel 6 Global interrupt
        using TCIF6 = Field<INTFR, 1, 21, read_only>; // Channel 6 Transfer Complete
        using HTIF6 = Field<INTFR, 1, 22, read_only>; // Channel 6 Half Transfer Complete
        using TEIF6 = Field<INTFR, 1, 23, read_only>; // Channel 6 Transfer Error
        using GIF7 = Field<INTFR, 1, 24, read_only>;  // Channel 7 Global interrupt
        using TCIF7 = Field<INTFR, 1, 25, read_only>; // Channel 7 Transfer Complete
        using HTIF7 = Field<INTFR, 1, 26, read_only>; // Channel 7 Half Transfer Complete
        using TEIF7 = Field<INTFR, 1, 27, read_only>; // Channel 7 Transfer Error
        using GIF8 = Field<INTFR, 1, 28, read_only>;  // Channel 8 Global interrupt
        using TCIF8 = Field<INTFR, 1, 29, read_only>; // Channel 8 Transfer Complete
        using HTIF8 = Field<INTFR, 1, 30, read_only>; // Channel 8 Half Transfer Complete
        using TEIF8 = Field<INTFR, 1, 31, read_only>; // Channel 8 Transfer Error
    };
    struct INTFCR : PackedRegister<DMA1_pack, RegBitSize::b32, 4 * 8> // DMA interrupt flag clear register
    {
        using CGIF1 = Field<INTFCR, 1, 0, write_only>;   // Channel 1 Global interrupt
        using CGIF2 = Field<INTFCR, 1, 4, write_only>;   // Channel 2 Global interrupt
        using CGIF3 = Field<INTFCR, 1, 8, write_only>;   // Channel 3 Global interrupt
        using CGIF4 = Field<INTFCR, 1, 12, write_only>;  // Channel 4 Global interrupt
        using CGIF5 = Field<INTFCR, 1, 16, write_only>;  // Channel 5 Global interrupt
        using CGIF6 = Field<INTFCR, 1, 20, write_only>;  // Channel 6 Global interrupt
        using CGIF7 = Field<INTFCR, 1, 24, write_only>;  // Channel 7 Global interrupt
        using CGIF8 = Field<INTFCR, 1, 28, write_only>;  // Channel 8 Global interrupt
        using CTCIF1 = Field<INTFCR, 1, 1, write_only>;  // Channel 1 Transfer Complete
        using CTCIF2 = Field<INTFCR, 1, 5, write_only>;  // Channel 2 Transfer Complete
        using CTCIF3 = Field<INTFCR, 1, 9, write_only>;  // Channel 3 Transfer Complete
        using CTCIF4 = Field<INTFCR, 1, 13, write_only>; // Channel 4 Transfer Complete
        using CTCIF5 = Field<INTFCR, 1, 17, write_only>; // Channel 5 Transfer Complete
        using CTCIF6 = Field<INTFCR, 1, 21, write_only>; // Channel 6 Transfer Complete
        using CTCIF7 = Field<INTFCR, 1, 25, write_only>; // Channel 7 Transfer Complete
        using CTCIF8 = Field<INTFCR, 1, 29, write_only>; // Channel 8 Transfer Complete
        using CHTIF1 = Field<INTFCR, 1, 2, write_only>;  // Channel 1 Half Transfer
        using CHTIF2 = Field<INTFCR, 1, 6, write_only>;  // Channel 2 Half Transfer
        using CHTIF3 = Field<INTFCR, 1, 10, write_only>; // Channel 3 Half Transfer
        using CHTIF4 = Field<INTFCR, 1, 14, write_only>; // Channel 4 Half Transfer
        using CHTIF5 = Field<INTFCR, 1, 18, write_only>; // Channel 5 Half Transfer
        using CHTIF6 = Field<INTFCR, 1, 22, write_only>; // Channel 6 Half Transfer
        using CHTIF7 = Field<INTFCR, 1, 26, write_only>; // Channel 7 Half Transfer
        using CHTIF8 = Field<INTFCR, 1, 30, write_only>; // Channel 8 Half Transfer
        using CTEIF1 = Field<INTFCR, 1, 3, write_only>;  // Channel 1 Transfer Error
        using CTEIF2 = Field<INTFCR, 1, 7, write_only>;  // Channel 2 Transfer Error
        using CTEIF3 = Field<INTFCR, 1, 11, write_only>; // Channel 3 Transfer Error
        using CTEIF4 = Field<INTFCR, 1, 15, write_only>; // Channel 4 Transfer Error
        using CTEIF5 = Field<INTFCR, 1, 19, write_only>; // Channel 5 Transfer Error
        using CTEIF6 = Field<INTFCR, 1, 23, write_only>; // Channel 6 Transfer Error
        using CTEIF7 = Field<INTFCR, 1, 27, write_only>; // Channel 7 Transfer Error
        using CTEIF8 = Field<INTFCR, 1, 31, write_only>; // Channel 8 Transfer Error
    };
    struct CFGR1 : PackedRegister<DMA1_pack, RegBitSize::b32, 8 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR1, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR1, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR1, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR1, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR1, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR1, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR1, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR1, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR1, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR1, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR1, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR1, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR1 : PackedRegister<DMA1_pack, RegBitSize::b32, 12 * 8> // DMA channel 1 number of data
    {
        using NDT = Field<CNTR1, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR1 : PackedRegister<DMA1_pack, RegBitSize::b32, 16 * 8> // DMA channel 1 peripheral address
    {
        using PA = Field<PADDR1, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR1 : PackedRegister<DMA1_pack, RegBitSize::b32, 20 * 8> // DMA channel 1 memory address
    {
        using MA = Field<MADDR1, 32, 0, read_write>; // Memory address
    };
    struct CFGR2 : PackedRegister<DMA1_pack, RegBitSize::b32, 28 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR2, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR2, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR2, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR2, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR2, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR2, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR2, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR2, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR2, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR2, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR2, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR2, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR2 : PackedRegister<DMA1_pack, RegBitSize::b32, 32 * 8> // DMA channel 2 number of data
    {
        using NDT = Field<CNTR2, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR2 : PackedRegister<DMA1_pack, RegBitSize::b32, 36 * 8> // DMA channel 2 peripheral address
    {
        using PA = Field<PADDR2, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR2 : PackedRegister<DMA1_pack, RegBitSize::b32, 40 * 8> // DMA channel 2 memory address
    {
        using MA = Field<MADDR2, 32, 0, read_write>; // Memory address
    };
    struct CFGR3 : PackedRegister<DMA1_pack, RegBitSize::b32, 48 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR3, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR3, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR3, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR3, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR3, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR3, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR3, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR3, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR3, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR3, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR3, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR3, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR3 : PackedRegister<DMA1_pack, RegBitSize::b32, 52 * 8> // DMA channel 3 number of data
    {
        using NDT = Field<CNTR3, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR3 : PackedRegister<DMA1_pack, RegBitSize::b32, 56 * 8> // DMA channel 3 peripheral address
    {
        using PA = Field<PADDR3, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR3 : PackedRegister<DMA1_pack, RegBitSize::b32, 60 * 8> // DMA channel 3 memory address
    {
        using MA = Field<MADDR3, 32, 0, read_write>; // Memory address
    };
    struct CFGR4 : PackedRegister<DMA1_pack, RegBitSize::b32, 68 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR4, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR4, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR4, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR4, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR4, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR4, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR4, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR4, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR4, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR4, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR4, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR4, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR4 : PackedRegister<DMA1_pack, RegBitSize::b32, 72 * 8> // DMA channel 4 number of data
    {
        using NDT = Field<CNTR4, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR4 : PackedRegister<DMA1_pack, RegBitSize::b32, 76 * 8> // DMA channel 4 peripheral address
    {
        using PA = Field<PADDR4, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR4 : PackedRegister<DMA1_pack, RegBitSize::b32, 80 * 8> // DMA channel 4 memory address
    {
        using MA = Field<MADDR4, 32, 0, read_write>; // Memory address
    };
    struct CFGR5 : PackedRegister<DMA1_pack, RegBitSize::b32, 88 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR5, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR5, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR5, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR5, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR5, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR5, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR5, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR5, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR5, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR5, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR5, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR5, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR5 : PackedRegister<DMA1_pack, RegBitSize::b32, 92 * 8> // DMA channel 5 number of data
    {
        using NDT = Field<CNTR5, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR5 : PackedRegister<DMA1_pack, RegBitSize::b32, 96 * 8> // DMA channel 5 peripheral address
    {
        using PA = Field<PADDR5, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR5 : PackedRegister<DMA1_pack, RegBitSize::b32, 100 * 8> // DMA channel 5 memory address
    {
        using MA = Field<MADDR5, 32, 0, read_write>; // Memory address
    };
    struct CFGR6 : PackedRegister<DMA1_pack, RegBitSize::b32, 108 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR6, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR6, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR6, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR6, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR6, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR6, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR6, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR6, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR6, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR6, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR6, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR6, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR6 : PackedRegister<DMA1_pack, RegBitSize::b32, 112 * 8> // DMA channel 6 number of data
    {
        using NDT = Field<CNTR6, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR6 : PackedRegister<DMA1_pack, RegBitSize::b32, 116 * 8> // DMA channel 6 peripheral address
    {
        using PA = Field<PADDR6, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR6 : PackedRegister<DMA1_pack, RegBitSize::b32, 120 * 8> // DMA channel 6 memory address
    {
        using MA = Field<MADDR6, 32, 0, read_write>; // Memory address
    };
    struct CFGR7 : PackedRegister<DMA1_pack, RegBitSize::b32, 128 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR7, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR7, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR7, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR7, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR7, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR7, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR7, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR7, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR7, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR7, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR7, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR7, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR7 : PackedRegister<DMA1_pack, RegBitSize::b32, 132 * 8> // DMA channel 7 number of data
    {
        using NDT = Field<CNTR7, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR7 : PackedRegister<DMA1_pack, RegBitSize::b32, 136 * 8> // DMA channel 7 peripheral address
    {
        using PA = Field<PADDR7, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR7 : PackedRegister<DMA1_pack, RegBitSize::b32, 140 * 8> // DMA channel 7 memory address
    {
        using MA = Field<MADDR7, 32, 0, read_write>; // Memory address
    };
    struct CFGR8 : PackedRegister<DMA1_pack, RegBitSize::b32, 148 * 8> // DMA channel configuration register
    {
        using EN = Field<CFGR8, 1, 0, read_write>;       // Channel enable
        using TCIE = Field<CFGR8, 1, 1, read_write>;     // Transfer complete interrupt
        using HTIE = Field<CFGR8, 1, 2, read_write>;     // Half Transfer interrupt
        using TEIE = Field<CFGR8, 1, 3, read_write>;     // Transfer error interrupt
        using DIR = Field<CFGR8, 1, 4, read_write>;      // Data transfer direction
        using CIRC = Field<CFGR8, 1, 5, read_write>;     // Circular mode
        using PINC = Field<CFGR8, 1, 6, read_write>;     // Peripheral increment mode
        using MINC = Field<CFGR8, 1, 7, read_write>;     // Memory increment mode
        using PSIZE = Field<CFGR8, 2, 8, read_write>;    // Peripheral size
        using MSIZE = Field<CFGR8, 2, 10, read_write>;   // Memory size
        using PL = Field<CFGR8, 2, 12, read_write>;      // Channel Priority level
        using MEM2MEM = Field<CFGR8, 1, 14, read_write>; // Memory to memory mode
    };
    struct CNTR8 : PackedRegister<DMA1_pack, RegBitSize::b32, 152 * 8> // DMA channel 8 number of data
    {
        using NDT = Field<CNTR8, 16, 0, read_write>; // Number of data to transfer
    };
    struct PADDR8 : PackedRegister<DMA1_pack, RegBitSize::b32, 156 * 8> // DMA channel 8 peripheral address
    {
        using PA = Field<PADDR8, 32, 0, read_write>; // Peripheral address
    };
    struct MADDR8 : PackedRegister<DMA1_pack, RegBitSize::b32, 160 * 8> // DMA channel 8 memory address
    {
        using MA = Field<MADDR8, 32, 0, read_write>; // Memory address
    };
}
namespace RTC
{
    using RTC_pack = RegisterPack<0x40002800, 1024>;
    struct CTLRH : PackedRegister<RTC_pack, RegBitSize::b32, 0 * 8> // RTC Control Register High
    {
        using SECIE = Field<CTLRH, 1, 0, read_write>; // Second interrupt Enable
        using ALRIE = Field<CTLRH, 1, 1, read_write>; // Alarm interrupt Enable
        using OWIE = Field<CTLRH, 1, 2, read_write>;  // Overflow interrupt Enable
    };
    struct CTLRL : PackedRegister<RTC_pack, RegBitSize::b32, 4 * 8> // RTC Control Register Low
    {
        using SECF = Field<CTLRL, 1, 0, read_write>; // Second Flag
        using ALRF = Field<CTLRL, 1, 1, read_write>; // Alarm Flag
        using OWF = Field<CTLRL, 1, 2, read_write>;  // Overflow Flag
        using RSF = Field<CTLRL, 1, 3, read_write>;  // Registers Synchronized
        using CNF = Field<CTLRL, 1, 4, read_write>;  // Configuration Flag
        using RTOFF = Field<CTLRL, 1, 5, read_only>; // RTC operation OFF
    };
    struct PSCRH : PackedRegister<RTC_pack, RegBitSize::b32, 8 * 8> // RTC Prescaler Load Register
    {
        using PRLH = Field<PSCRH, 4, 0, write_only>; // RTC Prescaler Load Register
    };
    struct PSCRL : PackedRegister<RTC_pack, RegBitSize::b32, 12 * 8> // RTC Prescaler Load Register
    {
        using PRLL = Field<PSCRL, 16, 0, write_only>; // RTC Prescaler Divider Register
    };
    struct DIVH : PackedRegister<RTC_pack, RegBitSize::b32, 16 * 8> // RTC Prescaler Divider Register
    {
        using DIVHfield = Field<DIVH, 4, 0, read_only>; // RTC prescaler divider register
    };
    struct DIVL : PackedRegister<RTC_pack, RegBitSize::b32, 20 * 8> // RTC Prescaler Divider Register
    {
        using DIVLfield = Field<DIVL, 16, 0, read_only>; // RTC prescaler divider register
    };
    struct CNTH : PackedRegister<RTC_pack, RegBitSize::b32, 24 * 8> // RTC Counter Register High
    {
        using CNTHfield = Field<CNTH, 16, 0, read_write>; // RTC counter register high
    };
    struct CNTL : PackedRegister<RTC_pack, RegBitSize::b32, 28 * 8> // RTC Counter Register Low
    {
        using CNTLfield = Field<CNTL, 16, 0, read_write>; // RTC counter register Low
    };
    struct ALRMH : PackedRegister<RTC_pack, RegBitSize::b32, 32 * 8> // RTC Alarm Register High
    {
        using ALRH = Field<ALRMH, 16, 0, write_only>; // RTC alarm register high
    };
    struct ALRML : PackedRegister<RTC_pack, RegBitSize::b32, 36 * 8> // RTC Alarm Register Low
    {
        using ALRL = Field<ALRML, 16, 0, write_only>; // RTC alarm register low
    };
}
namespace BKP
{
    using BKP_pack = RegisterPack<0x40006c00, 1024>;
    struct DATAR1 : PackedRegister<BKP_pack, RegBitSize::b32, 4 * 8> // Backup data register (BKP_DR)
    {
        using D1 = Field<DATAR1, 16, 0, read_write>; // Backup data
    };
    struct DATAR2 : PackedRegister<BKP_pack, RegBitSize::b32, 8 * 8> // Backup data register (BKP_DR)
    {
        using D2 = Field<DATAR2, 16, 0, read_write>; // Backup data
    };
    struct DATAR3 : PackedRegister<BKP_pack, RegBitSize::b32, 12 * 8> // Backup data register (BKP_DR)
    {
        using D3 = Field<DATAR3, 16, 0, read_write>; // Backup data
    };
    struct DATAR4 : PackedRegister<BKP_pack, RegBitSize::b32, 16 * 8> // Backup data register (BKP_DR)
    {
        using D4 = Field<DATAR4, 16, 0, read_write>; // Backup data
    };
    struct DATAR5 : PackedRegister<BKP_pack, RegBitSize::b32, 20 * 8> // Backup data register (BKP_DR)
    {
        using D5 = Field<DATAR5, 16, 0, read_write>; // Backup data
    };
    struct DATAR6 : PackedRegister<BKP_pack, RegBitSize::b32, 24 * 8> // Backup data register (BKP_DR)
    {
        using D6 = Field<DATAR6, 16, 0, read_write>; // Backup data
    };
    struct DATAR7 : PackedRegister<BKP_pack, RegBitSize::b32, 28 * 8> // Backup data register (BKP_DR)
    {
        using D7 = Field<DATAR7, 16, 0, read_write>; // Backup data
    };
    struct DATAR8 : PackedRegister<BKP_pack, RegBitSize::b32, 32 * 8> // Backup data register (BKP_DR)
    {
        using D8 = Field<DATAR8, 16, 0, read_write>; // Backup data
    };
    struct DATAR9 : PackedRegister<BKP_pack, RegBitSize::b32, 36 * 8> // Backup data register (BKP_DR)
    {
        using D9 = Field<DATAR9, 16, 0, read_write>; // Backup data
    };
    struct DATAR10 : PackedRegister<BKP_pack, RegBitSize::b32, 40 * 8> // Backup data register (BKP_DR)
    {
        using D10 = Field<DATAR10, 16, 0, read_write>; // Backup data
    };
    struct DATAR11 : PackedRegister<BKP_pack, RegBitSize::b32, 64 * 8> // Backup data register (BKP_DR)
    {
        using DR11 = Field<DATAR11, 16, 0, read_write>; // Backup data
    };
    struct DATAR12 : PackedRegister<BKP_pack, RegBitSize::b32, 68 * 8> // Backup data register (BKP_DR)
    {
        using DR12 = Field<DATAR12, 16, 0, read_write>; // Backup data
    };
    struct DATAR13 : PackedRegister<BKP_pack, RegBitSize::b32, 72 * 8> // Backup data register (BKP_DR)
    {
        using DR13 = Field<DATAR13, 16, 0, read_write>; // Backup data
    };
    struct DATAR14 : PackedRegister<BKP_pack, RegBitSize::b32, 76 * 8> // Backup data register (BKP_DR)
    {
        using D14 = Field<DATAR14, 16, 0, read_write>; // Backup data
    };
    struct DATAR15 : PackedRegister<BKP_pack, RegBitSize::b32, 80 * 8> // Backup data register (BKP_DR)
    {
        using D15 = Field<DATAR15, 16, 0, read_write>; // Backup data
    };
    struct DATAR16 : PackedRegister<BKP_pack, RegBitSize::b32, 84 * 8> // Backup data register (BKP_DR)
    {
        using D16 = Field<DATAR16, 16, 0, read_write>; // Backup data
    };
    struct DATAR17 : PackedRegister<BKP_pack, RegBitSize::b32, 88 * 8> // Backup data register (BKP_DR)
    {
        using D17 = Field<DATAR17, 16, 0, read_write>; // Backup data
    };
    struct DATAR18 : PackedRegister<BKP_pack, RegBitSize::b32, 92 * 8> // Backup data register (BKP_DR)
    {
        using D18 = Field<DATAR18, 16, 0, read_write>; // Backup data
    };
    struct DATAR19 : PackedRegister<BKP_pack, RegBitSize::b32, 96 * 8> // Backup data register (BKP_DR)
    {
        using D19 = Field<DATAR19, 16, 0, read_write>; // Backup data
    };
    struct DATAR20 : PackedRegister<BKP_pack, RegBitSize::b32, 100 * 8> // Backup data register (BKP_DR)
    {
        using D20 = Field<DATAR20, 16, 0, read_write>; // Backup data
    };
    struct DATAR21 : PackedRegister<BKP_pack, RegBitSize::b32, 104 * 8> // Backup data register (BKP_DR)
    {
        using D21 = Field<DATAR21, 16, 0, read_write>; // Backup data
    };
    struct DATAR22 : PackedRegister<BKP_pack, RegBitSize::b32, 108 * 8> // Backup data register (BKP_DR)
    {
        using D22 = Field<DATAR22, 16, 0, read_write>; // Backup data
    };
    struct DATAR23 : PackedRegister<BKP_pack, RegBitSize::b32, 112 * 8> // Backup data register (BKP_DR)
    {
        using D23 = Field<DATAR23, 16, 0, read_write>; // Backup data
    };
    struct DATAR24 : PackedRegister<BKP_pack, RegBitSize::b32, 116 * 8> // Backup data register (BKP_DR)
    {
        using D24 = Field<DATAR24, 16, 0, read_write>; // Backup data
    };
    struct DATAR25 : PackedRegister<BKP_pack, RegBitSize::b32, 120 * 8> // Backup data register (BKP_DR)
    {
        using D25 = Field<DATAR25, 16, 0, read_write>; // Backup data
    };
    struct DATAR26 : PackedRegister<BKP_pack, RegBitSize::b32, 124 * 8> // Backup data register (BKP_DR)
    {
        using D26 = Field<DATAR26, 16, 0, read_write>; // Backup data
    };
    struct DATAR27 : PackedRegister<BKP_pack, RegBitSize::b32, 128 * 8> // Backup data register (BKP_DR)
    {
        using D27 = Field<DATAR27, 16, 0, read_write>; // Backup data
    };
    struct DATAR28 : PackedRegister<BKP_pack, RegBitSize::b32, 132 * 8> // Backup data register (BKP_DR)
    {
        using D28 = Field<DATAR28, 16, 0, read_write>; // Backup data
    };
    struct DATAR29 : PackedRegister<BKP_pack, RegBitSize::b32, 136 * 8> // Backup data register (BKP_DR)
    {
        using D29 = Field<DATAR29, 16, 0, read_write>; // Backup data
    };
    struct DATAR30 : PackedRegister<BKP_pack, RegBitSize::b32, 140 * 8> // Backup data register (BKP_DR)
    {
        using D30 = Field<DATAR30, 16, 0, read_write>; // Backup data
    };
    struct DATAR31 : PackedRegister<BKP_pack, RegBitSize::b32, 144 * 8> // Backup data register (BKP_DR)
    {
        using D31 = Field<DATAR31, 16, 0, read_write>; // Backup data
    };
    struct DATAR32 : PackedRegister<BKP_pack, RegBitSize::b32, 148 * 8> // Backup data register (BKP_DR)
    {
        using D32 = Field<DATAR32, 16, 0, read_write>; // Backup data
    };
    struct DATAR33 : PackedRegister<BKP_pack, RegBitSize::b32, 152 * 8> // Backup data register (BKP_DR)
    {
        using D33 = Field<DATAR33, 16, 0, read_write>; // Backup data
    };
    struct DATAR34 : PackedRegister<BKP_pack, RegBitSize::b32, 156 * 8> // Backup data register (BKP_DR)
    {
        using D34 = Field<DATAR34, 16, 0, read_write>; // Backup data
    };
    struct DATAR35 : PackedRegister<BKP_pack, RegBitSize::b32, 160 * 8> // Backup data register (BKP_DR)
    {
        using D35 = Field<DATAR35, 16, 0, read_write>; // Backup data
    };
    struct DATAR36 : PackedRegister<BKP_pack, RegBitSize::b32, 164 * 8> // Backup data register (BKP_DR)
    {
        using D36 = Field<DATAR36, 16, 0, read_write>; // Backup data
    };
    struct DATAR37 : PackedRegister<BKP_pack, RegBitSize::b32, 168 * 8> // Backup data register (BKP_DR)
    {
        using D37 = Field<DATAR37, 16, 0, read_write>; // Backup data
    };
    struct DATAR38 : PackedRegister<BKP_pack, RegBitSize::b32, 172 * 8> // Backup data register (BKP_DR)
    {
        using D38 = Field<DATAR38, 16, 0, read_write>; // Backup data
    };
    struct DATAR39 : PackedRegister<BKP_pack, RegBitSize::b32, 176 * 8> // Backup data register (BKP_DR)
    {
        using D39 = Field<DATAR39, 16, 0, read_write>; // Backup data
    };
    struct DATAR40 : PackedRegister<BKP_pack, RegBitSize::b32, 180 * 8> // Backup data register (BKP_DR)
    {
        using D40 = Field<DATAR40, 16, 0, read_write>; // Backup data
    };
    struct DATAR41 : PackedRegister<BKP_pack, RegBitSize::b32, 184 * 8> // Backup data register (BKP_DR)
    {
        using D41 = Field<DATAR41, 16, 0, read_write>; // Backup data
    };
    struct DATAR42 : PackedRegister<BKP_pack, RegBitSize::b32, 188 * 8> // Backup data register (BKP_DR)
    {
        using D42 = Field<DATAR42, 16, 0, read_write>; // Backup data
    };
    struct OCTLR : PackedRegister<BKP_pack, RegBitSize::b32, 44 * 8> // RTC clock calibration register
    {
        using CAL = Field<OCTLR, 7, 0, read_write>;  // Calibration value
        using CCO = Field<OCTLR, 1, 7, read_write>;  // Calibration Clock Output
        using ASOE = Field<OCTLR, 1, 8, read_write>; // Alarm or second output
        using ASOS = Field<OCTLR, 1, 9, read_write>; // Alarm or second output
    };
    struct TPCTLR : PackedRegister<BKP_pack, RegBitSize::b32, 48 * 8> // Backup control register
    {
        using TPE = Field<TPCTLR, 1, 0, read_write>;  // Tamper pin enable
        using TPAL = Field<TPCTLR, 1, 1, read_write>; // Tamper pin active level
    };
    struct TPCSR : PackedRegister<BKP_pack, RegBitSize::b32, 52 * 8> // BKP_TPCSR control/status register
    {
        using CTE = Field<TPCSR, 1, 0, write_only>;  // Clear Tamper event
        using CTI = Field<TPCSR, 1, 1, write_only>;  // Clear Tamper Interrupt
        using TPIE = Field<TPCSR, 1, 2, read_write>; // Tamper Pin interrupt
        using TEF = Field<TPCSR, 1, 8, read_only>;   // Tamper Event Flag
        using TIF = Field<TPCSR, 1, 9, read_only>;   // Tamper Interrupt Flag
    };
}
namespace IWDG
{
    using IWDG_pack = RegisterPack<0x40003000, 1024>;
    struct CTLR : PackedRegister<IWDG_pack, RegBitSize::b32, 0 * 8> // Key register (IWDG_CTLR)
    {
        using KEY = Field<CTLR, 16, 0, write_only>; // Key value
    };
    struct PSCR : PackedRegister<IWDG_pack, RegBitSize::b32, 4 * 8> // Prescaler register (IWDG_PSCR)
    {
        using PR = Field<PSCR, 3, 0, read_write>; // Prescaler divider
    };
    struct RLDR : PackedRegister<IWDG_pack, RegBitSize::b32, 8 * 8> // Reload register (IWDG_RLDR)
    {
        using RL = Field<RLDR, 12, 0, read_write>; // Watchdog counter reload
    };
    struct STATR : PackedRegister<IWDG_pack, RegBitSize::b32, 12 * 8> // Status register (IWDG_SR)
    {
        using PVU = Field<STATR, 1, 0, read_only>; // Watchdog prescaler value
        using RVU = Field<STATR, 1, 1, read_only>; // Watchdog counter reload value
    };
}
namespace WWDG
{
    using WWDG_pack = RegisterPack<0x40002c00, 1024>;
    struct CTLR : PackedRegister<WWDG_pack, RegBitSize::b32, 0 * 8> // Control register (WWDG_CR)
    {
        using T = Field<CTLR, 7, 0, read_write>;    // 7-bit counter (MSB to LSB)
        using WDGA = Field<CTLR, 1, 7, read_write>; // Activation bit
    };
    struct CFGR : PackedRegister<WWDG_pack, RegBitSize::b32, 4 * 8> // Configuration register
    {
        using W = Field<CFGR, 7, 0, read_write>;     // 7-bit window value
        using WDGTB = Field<CFGR, 2, 7, read_write>; // Timer Base
        using EWI = Field<CFGR, 1, 9, read_write>;   // Early Wakeup Interrupt
    };
    struct STATR : PackedRegister<WWDG_pack, RegBitSize::b32, 8 * 8> // Status register (WWDG_SR)
    {
        using WEIF = Field<STATR, 1, 0, read_write>; // Early Wakeup Interrupt Flag
    };
}
namespace TIM1
{
    using TIM1_pack = RegisterPack<0x40012c00, 1024>;
    struct CTLR1 : PackedRegister<TIM1_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM1_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using OIS4 = Field<CTLR2, 1, 14, read_write>;  // Output Idle state 4
        using OIS3N = Field<CTLR2, 1, 13, read_write>; // Output Idle state 3
        using OIS3 = Field<CTLR2, 1, 12, read_write>;  // Output Idle state 3
        using OIS2N = Field<CTLR2, 1, 11, read_write>; // Output Idle state 2
        using OIS2 = Field<CTLR2, 1, 10, read_write>;  // Output Idle state 2
        using OIS1N = Field<CTLR2, 1, 9, read_write>;  // Output Idle state 1
        using OIS1 = Field<CTLR2, 1, 8, read_write>;   // Output Idle state 1
        using TI1S = Field<CTLR2, 1, 7, read_write>;   // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;    // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>;   // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>;   // Capture/compare control update
        using CCPC = Field<CTLR2, 1, 0, read_write>;   // Capture/compare preloaded
    };
    struct SMCFGR : PackedRegister<TIM1_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM1_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request enable
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using BIE = Field<DMAINTENR, 1, 7, read_write>;    // Break interrupt enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using COMIE = Field<DMAINTENR, 1, 5, read_write>;  // COM interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM1_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using BIF = Field<INTFR, 1, 7, read_write>;    // Break interrupt flag
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using COMIF = Field<INTFR, 1, 5, read_write>;  // COM interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM1_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Break generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/Compare control update
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM1_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output Compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output Compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output Compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output Compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output Compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output Compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output Compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output Compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM1_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PCS = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/Compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM1_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM1_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/compare 3
    };
    struct CCER : PackedRegister<TIM1_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>;  // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>;  // Capture/Compare 4 output
        using CC3NP = Field<CCER, 1, 11, read_write>; // Capture/Compare 3 output
        using CC3NE = Field<CCER, 1, 10, read_write>; // Capture/Compare 3 complementary output
        using CC3P = Field<CCER, 1, 9, read_write>;   // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;   // Capture/Compare 3 output
        using CC2NP = Field<CCER, 1, 7, read_write>;  // Capture/Compare 2 output
        using CC2NE = Field<CCER, 1, 6, read_write>;  // Capture/Compare 2 complementary output
        using CC2P = Field<CCER, 1, 5, read_write>;   // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;   // Capture/Compare 2 output
        using CC1NP = Field<CCER, 1, 3, read_write>;  // Capture/Compare 1 output
        using CC1NE = Field<CCER, 1, 2, read_write>;  // Capture/Compare 1 complementary output
        using CC1P = Field<CCER, 1, 1, read_write>;   // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;   // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM1_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM1_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM1_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct RPTCR : PackedRegister<TIM1_pack, RegBitSize::b32, 48 * 8> // repetition counter register
    {
        using RPTCRfield = Field<RPTCR, 8, 0, read_write>; // Repetition counter value
    };
    struct CH1CVR : PackedRegister<TIM1_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM1_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM1_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM1_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct BDTR : PackedRegister<TIM1_pack, RegBitSize::b32, 68 * 8> // break and dead-time register
    {
        using MOE = Field<BDTR, 1, 15, read_write>;  // Main output enable
        using AOE = Field<BDTR, 1, 14, read_write>;  // Automatic output enable
        using BKP = Field<BDTR, 1, 13, read_write>;  // Break polarity
        using BKE = Field<BDTR, 1, 12, read_write>;  // Break enable
        using OSSR = Field<BDTR, 1, 11, read_write>; // Off-state selection for Run
        using OSSI = Field<BDTR, 1, 10, read_write>; // Off-state selection for Idle
        using LOCK = Field<BDTR, 2, 8, read_write>;  // Lock configuration
        using DTG = Field<BDTR, 8, 0, read_write>;   // Dead-time generator setup
    };
    struct DMACFGR : PackedRegister<TIM1_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM1_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace TIM8
{
    using TIM8_pack = RegisterPack<0x40013400, 1024>;
    struct CTLR1 : PackedRegister<TIM8_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM8_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using OIS4 = Field<CTLR2, 1, 14, read_write>;  // Output Idle state 4
        using OIS3N = Field<CTLR2, 1, 13, read_write>; // Output Idle state 3
        using OIS3 = Field<CTLR2, 1, 12, read_write>;  // Output Idle state 3
        using OIS2N = Field<CTLR2, 1, 11, read_write>; // Output Idle state 2
        using OIS2 = Field<CTLR2, 1, 10, read_write>;  // Output Idle state 2
        using OIS1N = Field<CTLR2, 1, 9, read_write>;  // Output Idle state 1
        using OIS1 = Field<CTLR2, 1, 8, read_write>;   // Output Idle state 1
        using TI1S = Field<CTLR2, 1, 7, read_write>;   // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;    // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>;   // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>;   // Capture/compare control update
        using CCPC = Field<CTLR2, 1, 0, read_write>;   // Capture/compare preloaded
    };
    struct SMCFGR : PackedRegister<TIM8_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM8_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request enable
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using BIE = Field<DMAINTENR, 1, 7, read_write>;    // Break interrupt enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using COMIE = Field<DMAINTENR, 1, 5, read_write>;  // COM interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM8_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using BIF = Field<INTFR, 1, 7, read_write>;    // Break interrupt flag
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using COMIF = Field<INTFR, 1, 5, read_write>;  // COM interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM8_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Break generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/Compare control update
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM8_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output Compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output Compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output Compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output Compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output Compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output Compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output Compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output Compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM8_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PCS = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/Compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM8_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM8_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/compare 3
    };
    struct CCER : PackedRegister<TIM8_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>;  // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>;  // Capture/Compare 4 output
        using CC3NP = Field<CCER, 1, 11, read_write>; // Capture/Compare 3 output
        using CC3NE = Field<CCER, 1, 10, read_write>; // Capture/Compare 3 complementary output
        using CC3P = Field<CCER, 1, 9, read_write>;   // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;   // Capture/Compare 3 output
        using CC2NP = Field<CCER, 1, 7, read_write>;  // Capture/Compare 2 output
        using CC2NE = Field<CCER, 1, 6, read_write>;  // Capture/Compare 2 complementary output
        using CC2P = Field<CCER, 1, 5, read_write>;   // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;   // Capture/Compare 2 output
        using CC1NP = Field<CCER, 1, 3, read_write>;  // Capture/Compare 1 output
        using CC1NE = Field<CCER, 1, 2, read_write>;  // Capture/Compare 1 complementary output
        using CC1P = Field<CCER, 1, 1, read_write>;   // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;   // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM8_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM8_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM8_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct RPTCR : PackedRegister<TIM8_pack, RegBitSize::b32, 48 * 8> // repetition counter register
    {
        using RPTCRfield = Field<RPTCR, 8, 0, read_write>; // Repetition counter value
    };
    struct CH1CVR : PackedRegister<TIM8_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM8_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM8_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM8_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct BDTR : PackedRegister<TIM8_pack, RegBitSize::b32, 68 * 8> // break and dead-time register
    {
        using MOE = Field<BDTR, 1, 15, read_write>;  // Main output enable
        using AOE = Field<BDTR, 1, 14, read_write>;  // Automatic output enable
        using BKP = Field<BDTR, 1, 13, read_write>;  // Break polarity
        using BKE = Field<BDTR, 1, 12, read_write>;  // Break enable
        using OSSR = Field<BDTR, 1, 11, read_write>; // Off-state selection for Run
        using OSSI = Field<BDTR, 1, 10, read_write>; // Off-state selection for Idle
        using LOCK = Field<BDTR, 2, 8, read_write>;  // Lock configuration
        using DTG = Field<BDTR, 8, 0, read_write>;   // Dead-time generator setup
    };
    struct DMACFGR : PackedRegister<TIM8_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM8_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace TIM9
{
    using TIM9_pack = RegisterPack<0x40014c00, 1024>;
    struct CTLR1 : PackedRegister<TIM9_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM9_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using OIS4 = Field<CTLR2, 1, 14, read_write>;  // Output Idle state 4
        using OIS3N = Field<CTLR2, 1, 13, read_write>; // Output Idle state 3
        using OIS3 = Field<CTLR2, 1, 12, read_write>;  // Output Idle state 3
        using OIS2N = Field<CTLR2, 1, 11, read_write>; // Output Idle state 2
        using OIS2 = Field<CTLR2, 1, 10, read_write>;  // Output Idle state 2
        using OIS1N = Field<CTLR2, 1, 9, read_write>;  // Output Idle state 1
        using OIS1 = Field<CTLR2, 1, 8, read_write>;   // Output Idle state 1
        using TI1S = Field<CTLR2, 1, 7, read_write>;   // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;    // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>;   // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>;   // Capture/compare control update
        using CCPC = Field<CTLR2, 1, 0, read_write>;   // Capture/compare preloaded
    };
    struct SMCFGR : PackedRegister<TIM9_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM9_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request enable
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using BIE = Field<DMAINTENR, 1, 7, read_write>;    // Break interrupt enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using COMIE = Field<DMAINTENR, 1, 5, read_write>;  // COM interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM9_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using BIF = Field<INTFR, 1, 7, read_write>;    // Break interrupt flag
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using COMIF = Field<INTFR, 1, 5, read_write>;  // COM interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM9_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Break generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/Compare control update
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM9_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output Compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output Compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output Compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output Compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output Compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output Compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output Compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output Compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM9_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PCS = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/Compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM9_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM9_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/compare 3
    };
    struct CCER : PackedRegister<TIM9_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>;  // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>;  // Capture/Compare 4 output
        using CC3NP = Field<CCER, 1, 11, read_write>; // Capture/Compare 3 output
        using CC3NE = Field<CCER, 1, 10, read_write>; // Capture/Compare 3 complementary output
        using CC3P = Field<CCER, 1, 9, read_write>;   // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;   // Capture/Compare 3 output
        using CC2NP = Field<CCER, 1, 7, read_write>;  // Capture/Compare 2 output
        using CC2NE = Field<CCER, 1, 6, read_write>;  // Capture/Compare 2 complementary output
        using CC2P = Field<CCER, 1, 5, read_write>;   // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;   // Capture/Compare 2 output
        using CC1NP = Field<CCER, 1, 3, read_write>;  // Capture/Compare 1 output
        using CC1NE = Field<CCER, 1, 2, read_write>;  // Capture/Compare 1 complementary output
        using CC1P = Field<CCER, 1, 1, read_write>;   // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;   // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM9_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM9_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM9_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct RPTCR : PackedRegister<TIM9_pack, RegBitSize::b32, 48 * 8> // repetition counter register
    {
        using RPTCRfield = Field<RPTCR, 8, 0, read_write>; // Repetition counter value
    };
    struct CH1CVR : PackedRegister<TIM9_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM9_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM9_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM9_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct BDTR : PackedRegister<TIM9_pack, RegBitSize::b32, 68 * 8> // break and dead-time register
    {
        using MOE = Field<BDTR, 1, 15, read_write>;  // Main output enable
        using AOE = Field<BDTR, 1, 14, read_write>;  // Automatic output enable
        using BKP = Field<BDTR, 1, 13, read_write>;  // Break polarity
        using BKE = Field<BDTR, 1, 12, read_write>;  // Break enable
        using OSSR = Field<BDTR, 1, 11, read_write>; // Off-state selection for Run
        using OSSI = Field<BDTR, 1, 10, read_write>; // Off-state selection for Idle
        using LOCK = Field<BDTR, 2, 8, read_write>;  // Lock configuration
        using DTG = Field<BDTR, 8, 0, read_write>;   // Dead-time generator setup
    };
    struct DMACFGR : PackedRegister<TIM9_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM9_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace TIM10
{
    using TIM10_pack = RegisterPack<0x40015000, 1024>;
    struct CTLR1 : PackedRegister<TIM10_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM10_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using OIS4 = Field<CTLR2, 1, 14, read_write>;  // Output Idle state 4
        using OIS3N = Field<CTLR2, 1, 13, read_write>; // Output Idle state 3
        using OIS3 = Field<CTLR2, 1, 12, read_write>;  // Output Idle state 3
        using OIS2N = Field<CTLR2, 1, 11, read_write>; // Output Idle state 2
        using OIS2 = Field<CTLR2, 1, 10, read_write>;  // Output Idle state 2
        using OIS1N = Field<CTLR2, 1, 9, read_write>;  // Output Idle state 1
        using OIS1 = Field<CTLR2, 1, 8, read_write>;   // Output Idle state 1
        using TI1S = Field<CTLR2, 1, 7, read_write>;   // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;    // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>;   // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>;   // Capture/compare control update
        using CCPC = Field<CTLR2, 1, 0, read_write>;   // Capture/compare preloaded
    };
    struct SMCFGR : PackedRegister<TIM10_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM10_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request enable
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using BIE = Field<DMAINTENR, 1, 7, read_write>;    // Break interrupt enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using COMIE = Field<DMAINTENR, 1, 5, read_write>;  // COM interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM10_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using BIF = Field<INTFR, 1, 7, read_write>;    // Break interrupt flag
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using COMIF = Field<INTFR, 1, 5, read_write>;  // COM interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM10_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Break generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/Compare control update
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM10_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output Compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output Compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output Compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output Compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output Compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output Compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output Compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output Compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM10_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PCS = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/Compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM10_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM10_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/compare 3
    };
    struct CCER : PackedRegister<TIM10_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>;  // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>;  // Capture/Compare 4 output
        using CC3NP = Field<CCER, 1, 11, read_write>; // Capture/Compare 3 output
        using CC3NE = Field<CCER, 1, 10, read_write>; // Capture/Compare 3 complementary output
        using CC3P = Field<CCER, 1, 9, read_write>;   // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;   // Capture/Compare 3 output
        using CC2NP = Field<CCER, 1, 7, read_write>;  // Capture/Compare 2 output
        using CC2NE = Field<CCER, 1, 6, read_write>;  // Capture/Compare 2 complementary output
        using CC2P = Field<CCER, 1, 5, read_write>;   // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;   // Capture/Compare 2 output
        using CC1NP = Field<CCER, 1, 3, read_write>;  // Capture/Compare 1 output
        using CC1NE = Field<CCER, 1, 2, read_write>;  // Capture/Compare 1 complementary output
        using CC1P = Field<CCER, 1, 1, read_write>;   // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;   // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM10_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM10_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM10_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct RPTCR : PackedRegister<TIM10_pack, RegBitSize::b32, 48 * 8> // repetition counter register
    {
        using RPTCRfield = Field<RPTCR, 8, 0, read_write>; // Repetition counter value
    };
    struct CH1CVR : PackedRegister<TIM10_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM10_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM10_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM10_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct BDTR : PackedRegister<TIM10_pack, RegBitSize::b32, 68 * 8> // break and dead-time register
    {
        using MOE = Field<BDTR, 1, 15, read_write>;  // Main output enable
        using AOE = Field<BDTR, 1, 14, read_write>;  // Automatic output enable
        using BKP = Field<BDTR, 1, 13, read_write>;  // Break polarity
        using BKE = Field<BDTR, 1, 12, read_write>;  // Break enable
        using OSSR = Field<BDTR, 1, 11, read_write>; // Off-state selection for Run
        using OSSI = Field<BDTR, 1, 10, read_write>; // Off-state selection for Idle
        using LOCK = Field<BDTR, 2, 8, read_write>;  // Lock configuration
        using DTG = Field<BDTR, 8, 0, read_write>;   // Dead-time generator setup
    };
    struct DMACFGR : PackedRegister<TIM10_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM10_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace TIM2
{
    using TIM2_pack = RegisterPack<0x40000000, 1024>;
    struct CTLR1 : PackedRegister<TIM2_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM2_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using TI1S = Field<CTLR2, 1, 7, read_write>; // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;  // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>; // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>; // Update selection
        using CCPC = Field<CTLR2, 1, 0, read_write>; // Compare selection
    };
    struct SMCFGR : PackedRegister<TIM2_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM2_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM2_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM2_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Brake generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/compare
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM2_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM2_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PSC = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM2_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM2_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/Compare 3
    };
    struct CCER : PackedRegister<TIM2_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>; // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>; // Capture/Compare 4 output
        using CC3P = Field<CCER, 1, 9, read_write>;  // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;  // Capture/Compare 3 output
        using CC2P = Field<CCER, 1, 5, read_write>;  // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;  // Capture/Compare 2 output
        using CC1P = Field<CCER, 1, 1, read_write>;  // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;  // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM2_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM2_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM2_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct CH1CVR : PackedRegister<TIM2_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM2_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM2_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM2_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct DMACFGR : PackedRegister<TIM2_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM2_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace TIM3
{
    using TIM3_pack = RegisterPack<0x40000400, 1024>;
    struct CTLR1 : PackedRegister<TIM3_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM3_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using TI1S = Field<CTLR2, 1, 7, read_write>; // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;  // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>; // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>; // Update selection
        using CCPC = Field<CTLR2, 1, 0, read_write>; // Compare selection
    };
    struct SMCFGR : PackedRegister<TIM3_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM3_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM3_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM3_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Brake generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/compare
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM3_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM3_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PSC = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM3_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM3_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/Compare 3
    };
    struct CCER : PackedRegister<TIM3_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>; // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>; // Capture/Compare 4 output
        using CC3P = Field<CCER, 1, 9, read_write>;  // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;  // Capture/Compare 3 output
        using CC2P = Field<CCER, 1, 5, read_write>;  // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;  // Capture/Compare 2 output
        using CC1P = Field<CCER, 1, 1, read_write>;  // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;  // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM3_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM3_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM3_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct CH1CVR : PackedRegister<TIM3_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM3_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM3_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM3_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct DMACFGR : PackedRegister<TIM3_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM3_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace TIM4
{
    using TIM4_pack = RegisterPack<0x40000800, 1024>;
    struct CTLR1 : PackedRegister<TIM4_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM4_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using TI1S = Field<CTLR2, 1, 7, read_write>; // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;  // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>; // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>; // Update selection
        using CCPC = Field<CTLR2, 1, 0, read_write>; // Compare selection
    };
    struct SMCFGR : PackedRegister<TIM4_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM4_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM4_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM4_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Brake generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/compare
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM4_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM4_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PSC = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM4_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM4_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/Compare 3
    };
    struct CCER : PackedRegister<TIM4_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>; // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>; // Capture/Compare 4 output
        using CC3P = Field<CCER, 1, 9, read_write>;  // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;  // Capture/Compare 3 output
        using CC2P = Field<CCER, 1, 5, read_write>;  // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;  // Capture/Compare 2 output
        using CC1P = Field<CCER, 1, 1, read_write>;  // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;  // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM4_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM4_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM4_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct CH1CVR : PackedRegister<TIM4_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM4_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM4_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM4_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct DMACFGR : PackedRegister<TIM4_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM4_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace TIM5
{
    using TIM5_pack = RegisterPack<0x40000c00, 1024>;
    struct CTLR1 : PackedRegister<TIM5_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using CKD = Field<CTLR1, 2, 8, read_write>;  // Clock division
        using ARPE = Field<CTLR1, 1, 7, read_write>; // Auto-reload preload enable
        using CMS = Field<CTLR1, 2, 5, read_write>;  // Center-aligned mode
        using DIR = Field<CTLR1, 1, 4, read_write>;  // Direction
        using OPM = Field<CTLR1, 1, 3, read_write>;  // One-pulse mode
        using URS = Field<CTLR1, 1, 2, read_write>;  // Update request source
        using UDIS = Field<CTLR1, 1, 1, read_write>; // Update disable
        using CEN = Field<CTLR1, 1, 0, read_write>;  // Counter enable
    };
    struct CTLR2 : PackedRegister<TIM5_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using TI1S = Field<CTLR2, 1, 7, read_write>; // TI1 selection
        using MMS = Field<CTLR2, 3, 4, read_write>;  // Master mode selection
        using CCDS = Field<CTLR2, 1, 3, read_write>; // Capture/compare DMA
        using CCUS = Field<CTLR2, 1, 2, read_write>; // Update selection
        using CCPC = Field<CTLR2, 1, 0, read_write>; // Compare selection
    };
    struct SMCFGR : PackedRegister<TIM5_pack, RegBitSize::b32, 8 * 8> // slave mode control register
    {
        using ETP = Field<SMCFGR, 1, 15, read_write>;  // External trigger polarity
        using ECE = Field<SMCFGR, 1, 14, read_write>;  // External clock enable
        using ETPS = Field<SMCFGR, 2, 12, read_write>; // External trigger prescaler
        using ETF = Field<SMCFGR, 4, 8, read_write>;   // External trigger filter
        using MSM = Field<SMCFGR, 1, 7, read_write>;   // Master/Slave mode
        using TS = Field<SMCFGR, 3, 4, read_write>;    // Trigger selection
        using SMS = Field<SMCFGR, 3, 0, read_write>;   // Slave mode selection
    };
    struct DMAINTENR : PackedRegister<TIM5_pack, RegBitSize::b32, 12 * 8> // DMA/Interrupt enable register
    {
        using TDE = Field<DMAINTENR, 1, 14, read_write>;   // Trigger DMA request enable
        using COMDE = Field<DMAINTENR, 1, 13, read_write>; // COM DMA request
        using CC4DE = Field<DMAINTENR, 1, 12, read_write>; // Capture/Compare 4 DMA request
        using CC3DE = Field<DMAINTENR, 1, 11, read_write>; // Capture/Compare 3 DMA request
        using CC2DE = Field<DMAINTENR, 1, 10, read_write>; // Capture/Compare 2 DMA request
        using CC1DE = Field<DMAINTENR, 1, 9, read_write>;  // Capture/Compare 1 DMA request
        using UDE = Field<DMAINTENR, 1, 8, read_write>;    // Update DMA request enable
        using TIE = Field<DMAINTENR, 1, 6, read_write>;    // Trigger interrupt enable
        using CC4IE = Field<DMAINTENR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IE = Field<DMAINTENR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IE = Field<DMAINTENR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IE = Field<DMAINTENR, 1, 1, read_write>;  // Capture/Compare 1 interrupt
        using UIE = Field<DMAINTENR, 1, 0, read_write>;    // Update interrupt enable
    };
    struct INTFR : PackedRegister<TIM5_pack, RegBitSize::b32, 16 * 8> // status register
    {
        using CC4OF = Field<INTFR, 1, 12, read_write>; // Capture/Compare 4 overcapture
        using CC3OF = Field<INTFR, 1, 11, read_write>; // Capture/Compare 3 overcapture
        using CC2OF = Field<INTFR, 1, 10, read_write>; // Capture/compare 2 overcapture
        using CC1OF = Field<INTFR, 1, 9, read_write>;  // Capture/Compare 1 overcapture
        using TIF = Field<INTFR, 1, 6, read_write>;    // Trigger interrupt flag
        using CC4IF = Field<INTFR, 1, 4, read_write>;  // Capture/Compare 4 interrupt
        using CC3IF = Field<INTFR, 1, 3, read_write>;  // Capture/Compare 3 interrupt
        using CC2IF = Field<INTFR, 1, 2, read_write>;  // Capture/Compare 2 interrupt
        using CC1IF = Field<INTFR, 1, 1, read_write>;  // Capture/compare 1 interrupt
        using UIF = Field<INTFR, 1, 0, read_write>;    // Update interrupt flag
    };
    struct SWEVGR : PackedRegister<TIM5_pack, RegBitSize::b32, 20 * 8> // event generation register
    {
        using BG = Field<SWEVGR, 1, 7, write_only>;   // Brake generation
        using TG = Field<SWEVGR, 1, 6, write_only>;   // Trigger generation
        using COMG = Field<SWEVGR, 1, 5, write_only>; // Capture/compare
        using CC4G = Field<SWEVGR, 1, 4, write_only>; // Capture/compare 4
        using CC3G = Field<SWEVGR, 1, 3, write_only>; // Capture/compare 3
        using CC2G = Field<SWEVGR, 1, 2, write_only>; // Capture/compare 2
        using CC1G = Field<SWEVGR, 1, 1, write_only>; // Capture/compare 1
        using UG = Field<SWEVGR, 1, 0, write_only>;   // Update generation
    };
    struct CHCTLR1_Output : PackedRegister<TIM5_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (output
    {
        using OC2CE = Field<CHCTLR1_Output, 1, 15, read_write>; // Output compare 2 clear
        using OC2M = Field<CHCTLR1_Output, 3, 12, read_write>;  // Output compare 2 mode
        using OC2PE = Field<CHCTLR1_Output, 1, 11, read_write>; // Output compare 2 preload
        using OC2FE = Field<CHCTLR1_Output, 1, 10, read_write>; // Output compare 2 fast
        using CC2S = Field<CHCTLR1_Output, 2, 8, read_write>;   // Capture/Compare 2
        using OC1CE = Field<CHCTLR1_Output, 1, 7, read_write>;  // Output compare 1 clear
        using OC1M = Field<CHCTLR1_Output, 3, 4, read_write>;   // Output compare 1 mode
        using OC1PE = Field<CHCTLR1_Output, 1, 3, read_write>;  // Output compare 1 preload
        using OC1FE = Field<CHCTLR1_Output, 1, 2, read_write>;  // Output compare 1 fast
        using CC1S = Field<CHCTLR1_Output, 2, 0, read_write>;   // Capture/Compare 1
    };
    struct CHCTLR1_Input : PackedRegister<TIM5_pack, RegBitSize::b32, 24 * 8> // capture/compare mode register 1 (input
    {
        using IC2F = Field<CHCTLR1_Input, 4, 12, read_write>;   // Input capture 2 filter
        using IC2PSC = Field<CHCTLR1_Input, 2, 10, read_write>; // Input capture 2 prescaler
        using CC2S = Field<CHCTLR1_Input, 2, 8, read_write>;    // Capture/compare 2
        using IC1F = Field<CHCTLR1_Input, 4, 4, read_write>;    // Input capture 1 filter
        using IC1PSC = Field<CHCTLR1_Input, 2, 2, read_write>;  // Input capture 1 prescaler
        using CC1S = Field<CHCTLR1_Input, 2, 0, read_write>;    // Capture/Compare 1
    };
    struct CHCTLR2_Output : PackedRegister<TIM5_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (output
    {
        using OC4CE = Field<CHCTLR2_Output, 1, 15, read_write>; // Output compare 4 clear
        using OC4M = Field<CHCTLR2_Output, 3, 12, read_write>;  // Output compare 4 mode
        using OC4PE = Field<CHCTLR2_Output, 1, 11, read_write>; // Output compare 4 preload
        using OC4FE = Field<CHCTLR2_Output, 1, 10, read_write>; // Output compare 4 fast
        using CC4S = Field<CHCTLR2_Output, 2, 8, read_write>;   // Capture/Compare 4
        using OC3CE = Field<CHCTLR2_Output, 1, 7, read_write>;  // Output compare 3 clear
        using OC3M = Field<CHCTLR2_Output, 3, 4, read_write>;   // Output compare 3 mode
        using OC3PE = Field<CHCTLR2_Output, 1, 3, read_write>;  // Output compare 3 preload
        using OC3FE = Field<CHCTLR2_Output, 1, 2, read_write>;  // Output compare 3 fast
        using CC3S = Field<CHCTLR2_Output, 2, 0, read_write>;   // Capture/Compare 3
    };
    struct CHCTLR2_Input : PackedRegister<TIM5_pack, RegBitSize::b32, 28 * 8> // capture/compare mode register 2 (input
    {
        using IC4F = Field<CHCTLR2_Input, 4, 12, read_write>;   // Input capture 4 filter
        using IC4PSC = Field<CHCTLR2_Input, 2, 10, read_write>; // Input capture 4 prescaler
        using CC4S = Field<CHCTLR2_Input, 2, 8, read_write>;    // Capture/Compare 4
        using IC3F = Field<CHCTLR2_Input, 4, 4, read_write>;    // Input capture 3 filter
        using IC3PSC = Field<CHCTLR2_Input, 2, 2, read_write>;  // Input capture 3 prescaler
        using CC3S = Field<CHCTLR2_Input, 2, 0, read_write>;    // Capture/Compare 3
    };
    struct CCER : PackedRegister<TIM5_pack, RegBitSize::b32, 32 * 8> // capture/compare enable
    {
        using CC4P = Field<CCER, 1, 13, read_write>; // Capture/Compare 3 output
        using CC4E = Field<CCER, 1, 12, read_write>; // Capture/Compare 4 output
        using CC3P = Field<CCER, 1, 9, read_write>;  // Capture/Compare 3 output
        using CC3E = Field<CCER, 1, 8, read_write>;  // Capture/Compare 3 output
        using CC2P = Field<CCER, 1, 5, read_write>;  // Capture/Compare 2 output
        using CC2E = Field<CCER, 1, 4, read_write>;  // Capture/Compare 2 output
        using CC1P = Field<CCER, 1, 1, read_write>;  // Capture/Compare 1 output
        using CC1E = Field<CCER, 1, 0, read_write>;  // Capture/Compare 1 output
    };
    struct CNT : PackedRegister<TIM5_pack, RegBitSize::b32, 36 * 8> // counter
    {
        using CNTfield = Field<CNT, 16, 0, read_write>; // counter value
    };
    struct PSC : PackedRegister<TIM5_pack, RegBitSize::b32, 40 * 8> // prescaler
    {
        using PSCfield = Field<PSC, 16, 0, read_write>; // Prescaler value
    };
    struct ATRLR : PackedRegister<TIM5_pack, RegBitSize::b32, 44 * 8> // auto-reload register
    {
        using ATRLRfield = Field<ATRLR, 16, 0, read_write>; // Auto-reload value
    };
    struct CH1CVR : PackedRegister<TIM5_pack, RegBitSize::b32, 52 * 8> // capture/compare register 1
    {
        using CH1CVRfield = Field<CH1CVR, 16, 0, read_write>; // Capture/Compare 1 value
    };
    struct CH2CVR : PackedRegister<TIM5_pack, RegBitSize::b32, 56 * 8> // capture/compare register 2
    {
        using CH2CVRfield = Field<CH2CVR, 16, 0, read_write>; // Capture/Compare 2 value
    };
    struct CH3CVR : PackedRegister<TIM5_pack, RegBitSize::b32, 60 * 8> // capture/compare register 3
    {
        using CH3CVRfield = Field<CH3CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct CH4CVR : PackedRegister<TIM5_pack, RegBitSize::b32, 64 * 8> // capture/compare register 4
    {
        using CH4CVRfield = Field<CH4CVR, 16, 0, read_write>; // Capture/Compare value
    };
    struct DMACFGR : PackedRegister<TIM5_pack, RegBitSize::b32, 72 * 8> // DMA control register
    {
        using DBL = Field<DMACFGR, 5, 8, read_write>; // DMA burst length
        using DBA = Field<DMACFGR, 5, 0, read_write>; // DMA base address
    };
    struct DMAADR : PackedRegister<TIM5_pack, RegBitSize::b32, 76 * 8> // DMA address for full transfer
    {
        using DMAADRfield = Field<DMAADR, 16, 0, read_write>; // DMA register for burst
    };
}
namespace I2C1
{
    using I2C1_pack = RegisterPack<0x40005400, 1024>;
    struct CTLR1 : PackedRegister<I2C1_pack, RegBitSize::b32, 0 * 8> // Control register 1
    {
        using SWRST = Field<CTLR1, 1, 15, read_write>;    // Software reset
        using ALERT = Field<CTLR1, 1, 13, read_write>;    // SMBus alert
        using PEC = Field<CTLR1, 1, 12, read_write>;      // Packet error checking
        using POS = Field<CTLR1, 1, 11, read_write>;      // Acknowledge/PEC Position (for data
        using ACK = Field<CTLR1, 1, 10, read_write>;      // Acknowledge enable
        using STOP = Field<CTLR1, 1, 9, read_write>;      // Stop generation
        using START = Field<CTLR1, 1, 8, read_write>;     // Start generation
        using NOSTRETCH = Field<CTLR1, 1, 7, read_write>; // Clock stretching disable (Slave
        using ENGC = Field<CTLR1, 1, 6, read_write>;      // General call enable
        using ENPEC = Field<CTLR1, 1, 5, read_write>;     // PEC enable
        using ENARP = Field<CTLR1, 1, 4, read_write>;     // ARP enable
        using SMBTYPE = Field<CTLR1, 1, 3, read_write>;   // SMBus type
        using SMBUS = Field<CTLR1, 1, 1, read_write>;     // SMBus mode
        using PE = Field<CTLR1, 1, 0, read_write>;        // Peripheral enable
    };
    struct CTLR2 : PackedRegister<I2C1_pack, RegBitSize::b32, 4 * 8> // Control register 2
    {
        using LAST = Field<CTLR2, 1, 12, read_write>;    // DMA last transfer
        using DMAEN = Field<CTLR2, 1, 11, read_write>;   // DMA requests enable
        using ITBUFEN = Field<CTLR2, 1, 10, read_write>; // Buffer interrupt enable
        using ITEVTEN = Field<CTLR2, 1, 9, read_write>;  // Event interrupt enable
        using ITERREN = Field<CTLR2, 1, 8, read_write>;  // Error interrupt enable
        using FREQ = Field<CTLR2, 6, 0, read_write>;     // Peripheral clock frequency
    };
    struct OADDR1 : PackedRegister<I2C1_pack, RegBitSize::b32, 8 * 8> // Own address register 1
    {
        using ADDMODE = Field<OADDR1, 1, 15, read_write>; // Addressing mode (slave
        using MUST1 = Field<OADDR1, 1, 14, read_write>;   // Must be 1
        using ADD9_8 = Field<OADDR1, 2, 8, read_write>;   // Interface address
        using ADD7_1 = Field<OADDR1, 7, 1, read_write>;   // Interface address
        using ADD0 = Field<OADDR1, 1, 0, read_write>;     // Interface address
    };
    struct OADDR2 : PackedRegister<I2C1_pack, RegBitSize::b32, 12 * 8> // Own address register 2
    {
        using ADD2 = Field<OADDR2, 7, 1, read_write>;   // Interface address
        using ENDUAL = Field<OADDR2, 1, 0, read_write>; // Dual addressing mode
    };
    struct DATAR : PackedRegister<I2C1_pack, RegBitSize::b32, 16 * 8> // Data register
    {
        using DATARfield = Field<DATAR, 8, 0, read_write>; // 8-bit data register
    };
    struct STAR1 : PackedRegister<I2C1_pack, RegBitSize::b32, 20 * 8> // Status register 1
    {
        using SMBALERT = Field<STAR1, 1, 15, read_write>; // SMBus alert
        using TIMEOUT = Field<STAR1, 1, 14, read_write>;  // Timeout or Tlow error
        using PECERR = Field<STAR1, 1, 12, read_write>;   // PEC Error in reception
        using OVR = Field<STAR1, 1, 11, read_write>;      // Overrun/Underrun
        using AF = Field<STAR1, 1, 10, read_write>;       // Acknowledge failure
        using ARLO = Field<STAR1, 1, 9, read_write>;      // Arbitration lost (master
        using BERR = Field<STAR1, 1, 8, read_write>;      // Bus error
        using TxE = Field<STAR1, 1, 7, read_only>;        // Data register empty
        using RxNE = Field<STAR1, 1, 6, read_only>;       // Data register not empty
        using STOPF = Field<STAR1, 1, 4, read_only>;      // Stop detection (slave
        using ADD10 = Field<STAR1, 1, 3, read_only>;      // 10-bit header sent (Master
        using BTF = Field<STAR1, 1, 2, read_only>;        // Byte transfer finished
        using ADDR = Field<STAR1, 1, 1, read_only>;       // Address sent (master mode)/matched
        using SB = Field<STAR1, 1, 0, read_only>;         // Start bit (Master mode)
    };
    struct STAR2 : PackedRegister<I2C1_pack, RegBitSize::b32, 24 * 8> // Status register 2
    {
        using PEC = Field<STAR2, 8, 8, read_only>;        // acket error checking
        using DUALF = Field<STAR2, 1, 7, read_only>;      // Dual flag (Slave mode)
        using SMBHOST = Field<STAR2, 1, 6, read_only>;    // SMBus host header (Slave
        using SMBDEFAULT = Field<STAR2, 1, 5, read_only>; // SMBus device default address (Slave
        using GENCALL = Field<STAR2, 1, 4, read_only>;    // General call address (Slave
        using TRA = Field<STAR2, 1, 2, read_only>;        // Transmitter/receiver
        using BUSY = Field<STAR2, 1, 1, read_only>;       // Bus busy
        using MSL = Field<STAR2, 1, 0, read_only>;        // Master/slave
    };
    struct CKCFGR : PackedRegister<I2C1_pack, RegBitSize::b32, 28 * 8> // Clock control register
    {
        using F_S = Field<CKCFGR, 1, 15, read_write>;  // I2C master mode selection
        using DUTY = Field<CKCFGR, 1, 14, read_write>; // Fast mode duty cycle
        using CCR = Field<CKCFGR, 12, 0, read_write>;  // Clock control register in Fast/Standard
    };
    struct RTR : PackedRegister<I2C1_pack, RegBitSize::b32, 32 * 8> // Raise time register
    {
        using TRISE = Field<RTR, 6, 0, read_write>; // Maximum rise time in Fast/Standard mode
    };
}
namespace I2C2
{
    using I2C2_pack = RegisterPack<0x40005800, 1024>;
    struct CTLR1 : PackedRegister<I2C2_pack, RegBitSize::b32, 0 * 8> // Control register 1
    {
        using SWRST = Field<CTLR1, 1, 15, read_write>;    // Software reset
        using ALERT = Field<CTLR1, 1, 13, read_write>;    // SMBus alert
        using PEC = Field<CTLR1, 1, 12, read_write>;      // Packet error checking
        using POS = Field<CTLR1, 1, 11, read_write>;      // Acknowledge/PEC Position (for data
        using ACK = Field<CTLR1, 1, 10, read_write>;      // Acknowledge enable
        using STOP = Field<CTLR1, 1, 9, read_write>;      // Stop generation
        using START = Field<CTLR1, 1, 8, read_write>;     // Start generation
        using NOSTRETCH = Field<CTLR1, 1, 7, read_write>; // Clock stretching disable (Slave
        using ENGC = Field<CTLR1, 1, 6, read_write>;      // General call enable
        using ENPEC = Field<CTLR1, 1, 5, read_write>;     // PEC enable
        using ENARP = Field<CTLR1, 1, 4, read_write>;     // ARP enable
        using SMBTYPE = Field<CTLR1, 1, 3, read_write>;   // SMBus type
        using SMBUS = Field<CTLR1, 1, 1, read_write>;     // SMBus mode
        using PE = Field<CTLR1, 1, 0, read_write>;        // Peripheral enable
    };
    struct CTLR2 : PackedRegister<I2C2_pack, RegBitSize::b32, 4 * 8> // Control register 2
    {
        using LAST = Field<CTLR2, 1, 12, read_write>;    // DMA last transfer
        using DMAEN = Field<CTLR2, 1, 11, read_write>;   // DMA requests enable
        using ITBUFEN = Field<CTLR2, 1, 10, read_write>; // Buffer interrupt enable
        using ITEVTEN = Field<CTLR2, 1, 9, read_write>;  // Event interrupt enable
        using ITERREN = Field<CTLR2, 1, 8, read_write>;  // Error interrupt enable
        using FREQ = Field<CTLR2, 6, 0, read_write>;     // Peripheral clock frequency
    };
    struct OADDR1 : PackedRegister<I2C2_pack, RegBitSize::b32, 8 * 8> // Own address register 1
    {
        using ADDMODE = Field<OADDR1, 1, 15, read_write>; // Addressing mode (slave
        using MUST1 = Field<OADDR1, 1, 14, read_write>;   // Must be 1
        using ADD9_8 = Field<OADDR1, 2, 8, read_write>;   // Interface address
        using ADD7_1 = Field<OADDR1, 7, 1, read_write>;   // Interface address
        using ADD0 = Field<OADDR1, 1, 0, read_write>;     // Interface address
    };
    struct OADDR2 : PackedRegister<I2C2_pack, RegBitSize::b32, 12 * 8> // Own address register 2
    {
        using ADD2 = Field<OADDR2, 7, 1, read_write>;   // Interface address
        using ENDUAL = Field<OADDR2, 1, 0, read_write>; // Dual addressing mode
    };
    struct DATAR : PackedRegister<I2C2_pack, RegBitSize::b32, 16 * 8> // Data register
    {
        using DATARfield = Field<DATAR, 8, 0, read_write>; // 8-bit data register
    };
    struct STAR1 : PackedRegister<I2C2_pack, RegBitSize::b32, 20 * 8> // Status register 1
    {
        using SMBALERT = Field<STAR1, 1, 15, read_write>; // SMBus alert
        using TIMEOUT = Field<STAR1, 1, 14, read_write>;  // Timeout or Tlow error
        using PECERR = Field<STAR1, 1, 12, read_write>;   // PEC Error in reception
        using OVR = Field<STAR1, 1, 11, read_write>;      // Overrun/Underrun
        using AF = Field<STAR1, 1, 10, read_write>;       // Acknowledge failure
        using ARLO = Field<STAR1, 1, 9, read_write>;      // Arbitration lost (master
        using BERR = Field<STAR1, 1, 8, read_write>;      // Bus error
        using TxE = Field<STAR1, 1, 7, read_only>;        // Data register empty
        using RxNE = Field<STAR1, 1, 6, read_only>;       // Data register not empty
        using STOPF = Field<STAR1, 1, 4, read_only>;      // Stop detection (slave
        using ADD10 = Field<STAR1, 1, 3, read_only>;      // 10-bit header sent (Master
        using BTF = Field<STAR1, 1, 2, read_only>;        // Byte transfer finished
        using ADDR = Field<STAR1, 1, 1, read_only>;       // Address sent (master mode)/matched
        using SB = Field<STAR1, 1, 0, read_only>;         // Start bit (Master mode)
    };
    struct STAR2 : PackedRegister<I2C2_pack, RegBitSize::b32, 24 * 8> // Status register 2
    {
        using PEC = Field<STAR2, 8, 8, read_only>;        // acket error checking
        using DUALF = Field<STAR2, 1, 7, read_only>;      // Dual flag (Slave mode)
        using SMBHOST = Field<STAR2, 1, 6, read_only>;    // SMBus host header (Slave
        using SMBDEFAULT = Field<STAR2, 1, 5, read_only>; // SMBus device default address (Slave
        using GENCALL = Field<STAR2, 1, 4, read_only>;    // General call address (Slave
        using TRA = Field<STAR2, 1, 2, read_only>;        // Transmitter/receiver
        using BUSY = Field<STAR2, 1, 1, read_only>;       // Bus busy
        using MSL = Field<STAR2, 1, 0, read_only>;        // Master/slave
    };
    struct CKCFGR : PackedRegister<I2C2_pack, RegBitSize::b32, 28 * 8> // Clock control register
    {
        using F_S = Field<CKCFGR, 1, 15, read_write>;  // I2C master mode selection
        using DUTY = Field<CKCFGR, 1, 14, read_write>; // Fast mode duty cycle
        using CCR = Field<CKCFGR, 12, 0, read_write>;  // Clock control register in Fast/Standard
    };
    struct RTR : PackedRegister<I2C2_pack, RegBitSize::b32, 32 * 8> // Raise time register
    {
        using TRISE = Field<RTR, 6, 0, read_write>; // Maximum rise time in Fast/Standard mode
    };
}
namespace SPI1
{
    using SPI1_pack = RegisterPack<0x40013000, 1024>;
    struct CTLR1 : PackedRegister<SPI1_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using BIDIMODE = Field<CTLR1, 1, 15, read_write>; // Bidirectional data mode
        using BIDIOE = Field<CTLR1, 1, 14, read_write>;   // Output enable in bidirectional
        using CRCEN = Field<CTLR1, 1, 13, read_write>;    // Hardware CRC calculation
        using CRCNEXT = Field<CTLR1, 1, 12, read_write>;  // CRC transfer next
        using DFF = Field<CTLR1, 1, 11, read_write>;      // Data frame format
        using RXONLY = Field<CTLR1, 1, 10, read_write>;   // Receive only
        using SSM = Field<CTLR1, 1, 9, read_write>;       // Software slave management
        using SSI = Field<CTLR1, 1, 8, read_write>;       // Internal slave select
        using LSBFIRST = Field<CTLR1, 1, 7, read_write>;  // Frame format
        using SPE = Field<CTLR1, 1, 6, read_write>;       // SPI enable
        using BR = Field<CTLR1, 3, 3, read_write>;        // Baud rate control
        using MSTR = Field<CTLR1, 1, 2, read_write>;      // Master selection
        using CPOL = Field<CTLR1, 1, 1, read_write>;      // Clock polarity
        using CPHA = Field<CTLR1, 1, 0, read_write>;      // Clock phase
    };
    struct CTLR2 : PackedRegister<SPI1_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using TXEIE = Field<CTLR2, 1, 7, read_write>;   // Tx buffer empty interrupt
        using RXNEIE = Field<CTLR2, 1, 6, read_write>;  // RX buffer not empty interrupt
        using ERRIE = Field<CTLR2, 1, 5, read_write>;   // Error interrupt enable
        using SSOE = Field<CTLR2, 1, 2, read_write>;    // SS output enable
        using TXDMAEN = Field<CTLR2, 1, 1, read_write>; // Tx buffer DMA enable
        using RXDMAEN = Field<CTLR2, 1, 0, read_write>; // Rx buffer DMA enable
    };
    struct STATR : PackedRegister<SPI1_pack, RegBitSize::b32, 8 * 8> // status register
    {
        using BSY = Field<STATR, 1, 7, read_only>;     // Busy flag
        using OVR = Field<STATR, 1, 6, read_write>;    // Overrun flag
        using MODF = Field<STATR, 1, 5, read_only>;    // Mode fault
        using CRCERR = Field<STATR, 1, 4, read_write>; // CRC error flag
        using CHSID = Field<STATR, 1, 2, read_only>;   // Channel side
        using UDR = Field<STATR, 1, 3, read_only>;     // Underrun flag
        using TXE = Field<STATR, 1, 1, read_only>;     // Transmit buffer empty
        using RXNE = Field<STATR, 1, 0, read_only>;    // Receive buffer not empty
    };
    struct DATAR : PackedRegister<SPI1_pack, RegBitSize::b32, 12 * 8> // data register
    {
        using DATARfield = Field<DATAR, 16, 0, read_write>; // Data register
    };
    struct CRCR : PackedRegister<SPI1_pack, RegBitSize::b32, 16 * 8> // CRCR polynomial register
    {
        using CRCPOLY = Field<CRCR, 16, 0, read_write>; // CRC polynomial register
    };
    struct RCRCR : PackedRegister<SPI1_pack, RegBitSize::b32, 20 * 8> // RX CRC register
    {
        using RXCRC = Field<RCRCR, 16, 0, read_only>; // Rx CRC register
    };
    struct TCRCR : PackedRegister<SPI1_pack, RegBitSize::b32, 24 * 8> // send CRC register
    {
        using TXCRC = Field<TCRCR, 16, 0, read_only>; // Tx CRC register
    };
    struct SPI_I2S_CFGR : PackedRegister<SPI1_pack, RegBitSize::b32, 28 * 8> // SPI_I2S configure register
    {
        using CHLEN = Field<SPI_I2S_CFGR, 1, 0, read_write>;   // Channel length (number of bits per audio channel)
        using DATLEN = Field<SPI_I2S_CFGR, 2, 1, read_write>;  // DATLEN[1:0] bits (Data length to be transferred)
        using CKPOL = Field<SPI_I2S_CFGR, 1, 3, read_write>;   // steady state clock polarity
        using I2SSTD = Field<SPI_I2S_CFGR, 2, 4, read_write>;  // I2SSTD[1:0] bits (I2S standard selection)
        using PCMSYNC = Field<SPI_I2S_CFGR, 1, 7, read_write>; // PCM frame synchronization
        using I2SCFG = Field<SPI_I2S_CFGR, 2, 8, read_write>;  // I2SCFG[1:0] bits (I2S configuration mode)
        using I2SE = Field<SPI_I2S_CFGR, 1, 10, read_write>;   // I2S Enable
        using I2SMOD = Field<SPI_I2S_CFGR, 1, 11, read_write>; // I2S mode selection
    };
    struct HSCR : PackedRegister<SPI1_pack, RegBitSize::b32, 36 * 8> // high speed control register
    {
        using HSRXEN = Field<HSCR, 1, 0, read_write>; // High speed mode read enable
    };
}
namespace SPI2
{
    using SPI2_pack = RegisterPack<0x40003800, 1024>;
    struct CTLR1 : PackedRegister<SPI2_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using BIDIMODE = Field<CTLR1, 1, 15, read_write>; // Bidirectional data mode
        using BIDIOE = Field<CTLR1, 1, 14, read_write>;   // Output enable in bidirectional
        using CRCEN = Field<CTLR1, 1, 13, read_write>;    // Hardware CRC calculation
        using CRCNEXT = Field<CTLR1, 1, 12, read_write>;  // CRC transfer next
        using DFF = Field<CTLR1, 1, 11, read_write>;      // Data frame format
        using RXONLY = Field<CTLR1, 1, 10, read_write>;   // Receive only
        using SSM = Field<CTLR1, 1, 9, read_write>;       // Software slave management
        using SSI = Field<CTLR1, 1, 8, read_write>;       // Internal slave select
        using LSBFIRST = Field<CTLR1, 1, 7, read_write>;  // Frame format
        using SPE = Field<CTLR1, 1, 6, read_write>;       // SPI enable
        using BR = Field<CTLR1, 3, 3, read_write>;        // Baud rate control
        using MSTR = Field<CTLR1, 1, 2, read_write>;      // Master selection
        using CPOL = Field<CTLR1, 1, 1, read_write>;      // Clock polarity
        using CPHA = Field<CTLR1, 1, 0, read_write>;      // Clock phase
    };
    struct CTLR2 : PackedRegister<SPI2_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using TXEIE = Field<CTLR2, 1, 7, read_write>;   // Tx buffer empty interrupt
        using RXNEIE = Field<CTLR2, 1, 6, read_write>;  // RX buffer not empty interrupt
        using ERRIE = Field<CTLR2, 1, 5, read_write>;   // Error interrupt enable
        using SSOE = Field<CTLR2, 1, 2, read_write>;    // SS output enable
        using TXDMAEN = Field<CTLR2, 1, 1, read_write>; // Tx buffer DMA enable
        using RXDMAEN = Field<CTLR2, 1, 0, read_write>; // Rx buffer DMA enable
    };
    struct STATR : PackedRegister<SPI2_pack, RegBitSize::b32, 8 * 8> // status register
    {
        using BSY = Field<STATR, 1, 7, read_only>;     // Busy flag
        using OVR = Field<STATR, 1, 6, read_only>;     // Overrun flag
        using MODF = Field<STATR, 1, 5, read_only>;    // Mode fault
        using CRCERR = Field<STATR, 1, 4, read_write>; // CRC error flag
        using TXE = Field<STATR, 1, 1, read_only>;     // Transmit buffer empty
        using RXNE = Field<STATR, 1, 0, read_only>;    // Receive buffer not empty
    };
    struct DATAR : PackedRegister<SPI2_pack, RegBitSize::b32, 12 * 8> // data register
    {
        using DATARfield = Field<DATAR, 16, 0, read_write>; // Data register
    };
    struct CRCR : PackedRegister<SPI2_pack, RegBitSize::b32, 16 * 8> // CRCR polynomial register
    {
        using CRCPOLY = Field<CRCR, 16, 0, read_write>; // CRC polynomial register
    };
    struct RCRCR : PackedRegister<SPI2_pack, RegBitSize::b32, 20 * 8> // RX CRC register
    {
        using RXCRC = Field<RCRCR, 16, 0, read_only>; // Rx CRC register
    };
    struct TCRCR : PackedRegister<SPI2_pack, RegBitSize::b32, 24 * 8> // TX CRC register
    {
        using TXCRC = Field<TCRCR, 16, 0, read_only>; // Tx CRC register
    };
    struct I2SCFGR : PackedRegister<SPI2_pack, RegBitSize::b32, 28 * 8> // I2S configuration register
    {
        using I2SMOD = Field<I2SCFGR, 1, 11, read_write>; // I2S mode selection
        using I2SE = Field<I2SCFGR, 1, 10, read_write>;   // I2S Enable
        using I2SCFG = Field<I2SCFGR, 2, 8, read_write>;  // I2S configuration mode
        using PCMSYNC = Field<I2SCFGR, 1, 7, read_write>; // PCM frame synchronization
        using I2SSTD = Field<I2SCFGR, 2, 4, read_write>;  // I2S standard selection
        using CKPOL = Field<I2SCFGR, 1, 3, read_write>;   // Steady state clock
        using DATLEN = Field<I2SCFGR, 2, 1, read_write>;  // Data length to be
        using CHLEN = Field<I2SCFGR, 1, 0, read_write>;   // Channel length (number of bits per audio
    };
    struct I2SPR : PackedRegister<SPI2_pack, RegBitSize::b32, 32 * 8> // I2S prescaler register
    {
        using MCKOE = Field<I2SPR, 1, 9, read_write>;  // Master clock output enable
        using ODD = Field<I2SPR, 1, 8, read_write>;    // Odd factor for the
        using I2SDIV = Field<I2SPR, 8, 0, read_write>; // I2S Linear prescaler
    };
    struct HSCR : PackedRegister<SPI2_pack, RegBitSize::b32, 36 * 8> // high speed control register
    {
        using HSRXEN = Field<HSCR, 1, 0, read_write>; // High speed mode read enable
    };
}
namespace SPI3
{
    using SPI3_pack = RegisterPack<0x40003c00, 1024>;
    struct CTLR1 : PackedRegister<SPI3_pack, RegBitSize::b32, 0 * 8> // control register 1
    {
        using BIDIMODE = Field<CTLR1, 1, 15, read_write>; // Bidirectional data mode
        using BIDIOE = Field<CTLR1, 1, 14, read_write>;   // Output enable in bidirectional
        using CRCEN = Field<CTLR1, 1, 13, read_write>;    // Hardware CRC calculation
        using CRCNEXT = Field<CTLR1, 1, 12, read_write>;  // CRC transfer next
        using DFF = Field<CTLR1, 1, 11, read_write>;      // Data frame format
        using RXONLY = Field<CTLR1, 1, 10, read_write>;   // Receive only
        using SSM = Field<CTLR1, 1, 9, read_write>;       // Software slave management
        using SSI = Field<CTLR1, 1, 8, read_write>;       // Internal slave select
        using LSBFIRST = Field<CTLR1, 1, 7, read_write>;  // Frame format
        using SPE = Field<CTLR1, 1, 6, read_write>;       // SPI enable
        using BR = Field<CTLR1, 3, 3, read_write>;        // Baud rate control
        using MSTR = Field<CTLR1, 1, 2, read_write>;      // Master selection
        using CPOL = Field<CTLR1, 1, 1, read_write>;      // Clock polarity
        using CPHA = Field<CTLR1, 1, 0, read_write>;      // Clock phase
    };
    struct CTLR2 : PackedRegister<SPI3_pack, RegBitSize::b32, 4 * 8> // control register 2
    {
        using TXEIE = Field<CTLR2, 1, 7, read_write>;   // Tx buffer empty interrupt
        using RXNEIE = Field<CTLR2, 1, 6, read_write>;  // RX buffer not empty interrupt
        using ERRIE = Field<CTLR2, 1, 5, read_write>;   // Error interrupt enable
        using SSOE = Field<CTLR2, 1, 2, read_write>;    // SS output enable
        using TXDMAEN = Field<CTLR2, 1, 1, read_write>; // Tx buffer DMA enable
        using RXDMAEN = Field<CTLR2, 1, 0, read_write>; // Rx buffer DMA enable
    };
    struct STATR : PackedRegister<SPI3_pack, RegBitSize::b32, 8 * 8> // status register
    {
        using BSY = Field<STATR, 1, 7, read_only>;     // Busy flag
        using OVR = Field<STATR, 1, 6, read_only>;     // Overrun flag
        using MODF = Field<STATR, 1, 5, read_only>;    // Mode fault
        using CRCERR = Field<STATR, 1, 4, read_write>; // CRC error flag
        using TXE = Field<STATR, 1, 1, read_only>;     // Transmit buffer empty
        using RXNE = Field<STATR, 1, 0, read_only>;    // Receive buffer not empty
    };
    struct DATAR : PackedRegister<SPI3_pack, RegBitSize::b32, 12 * 8> // data register
    {
        using DATARfield = Field<DATAR, 16, 0, read_write>; // Data register
    };
    struct CRCR : PackedRegister<SPI3_pack, RegBitSize::b32, 16 * 8> // CRCR polynomial register
    {
        using CRCPOLY = Field<CRCR, 16, 0, read_write>; // CRC polynomial register
    };
    struct RCRCR : PackedRegister<SPI3_pack, RegBitSize::b32, 20 * 8> // RX CRC register
    {
        using RXCRC = Field<RCRCR, 16, 0, read_only>; // Rx CRC register
    };
    struct TCRCR : PackedRegister<SPI3_pack, RegBitSize::b32, 24 * 8> // TX CRC register
    {
        using TXCRC = Field<TCRCR, 16, 0, read_only>; // Tx CRC register
    };
    struct I2SCFGR : PackedRegister<SPI3_pack, RegBitSize::b32, 28 * 8> // I2S configuration register
    {
        using I2SMOD = Field<I2SCFGR, 1, 11, read_write>; // I2S mode selection
        using I2SE = Field<I2SCFGR, 1, 10, read_write>;   // I2S Enable
        using I2SCFG = Field<I2SCFGR, 2, 8, read_write>;  // I2S configuration mode
        using PCMSYNC = Field<I2SCFGR, 1, 7, read_write>; // PCM frame synchronization
        using I2SSTD = Field<I2SCFGR, 2, 4, read_write>;  // I2S standard selection
        using CKPOL = Field<I2SCFGR, 1, 3, read_write>;   // Steady state clock
        using DATLEN = Field<I2SCFGR, 2, 1, read_write>;  // Data length to be
        using CHLEN = Field<I2SCFGR, 1, 0, read_write>;   // Channel length (number of bits per audio
    };
    struct I2SPR : PackedRegister<SPI3_pack, RegBitSize::b32, 32 * 8> // I2S prescaler register
    {
        using MCKOE = Field<I2SPR, 1, 9, read_write>;  // Master clock output enable
        using ODD = Field<I2SPR, 1, 8, read_write>;    // Odd factor for the
        using I2SDIV = Field<I2SPR, 8, 0, read_write>; // I2S Linear prescaler
    };
    struct HSCR : PackedRegister<SPI3_pack, RegBitSize::b32, 36 * 8> // high speed control register
    {
        using HSRXEN = Field<HSCR, 1, 0, read_write>; // High speed mode read enable
    };
}
namespace USART1
{
    using USART1_pack = RegisterPack<0x40013800, 1024>;
    struct STATR : PackedRegister<USART1_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<USART1_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<USART1_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<USART1_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<USART1_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<USART1_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<USART1_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace USART2
{
    using USART2_pack = RegisterPack<0x40004400, 1024>;
    struct STATR : PackedRegister<USART2_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<USART2_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<USART2_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<USART2_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<USART2_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<USART2_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<USART2_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace USART3
{
    using USART3_pack = RegisterPack<0x40004800, 1024>;
    struct STATR : PackedRegister<USART3_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<USART3_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<USART3_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<USART3_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<USART3_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<USART3_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<USART3_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace UART4
{
    using UART4_pack = RegisterPack<0x40004c00, 1024>;
    struct STATR : PackedRegister<UART4_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<UART4_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<UART4_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<UART4_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<UART4_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<UART4_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<UART4_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace UART5
{
    using UART5_pack = RegisterPack<0x40005000, 1024>;
    struct STATR : PackedRegister<UART5_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<UART5_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<UART5_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<UART5_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<UART5_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<UART5_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<UART5_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace UART6
{
    using UART6_pack = RegisterPack<0x40001800, 1024>;
    struct STATR : PackedRegister<UART6_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<UART6_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<UART6_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<UART6_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<UART6_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<UART6_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<UART6_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace UART7
{
    using UART7_pack = RegisterPack<0x40001c00, 1024>;
    struct STATR : PackedRegister<UART7_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<UART7_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<UART7_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<UART7_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<UART7_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<UART7_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<UART7_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace UART8
{
    using UART8_pack = RegisterPack<0x40002000, 1024>;
    struct STATR : PackedRegister<UART8_pack, RegBitSize::b32, 0 * 8> // Status register
    {
        using CTS = Field<STATR, 1, 9, read_write>;  // CTS flag
        using LBD = Field<STATR, 1, 8, read_write>;  // LIN break detection flag
        using TXE = Field<STATR, 1, 7, read_only>;   // Transmit data register
        using TC = Field<STATR, 1, 6, read_write>;   // Transmission complete
        using RXNE = Field<STATR, 1, 5, read_write>; // Read data register not
        using IDLE = Field<STATR, 1, 4, read_only>;  // IDLE line detected
        using ORE = Field<STATR, 1, 3, read_only>;   // Overrun error
        using NE = Field<STATR, 1, 2, read_only>;    // Noise error flag
        using FE = Field<STATR, 1, 1, read_only>;    // Framing error
        using PE = Field<STATR, 1, 0, read_only>;    // Parity error
    };
    struct DATAR : PackedRegister<UART8_pack, RegBitSize::b32, 4 * 8> // Data register
    {
        using DR = Field<DATAR, 9, 0, read_write>; // Data value
    };
    struct BRR : PackedRegister<UART8_pack, RegBitSize::b32, 8 * 8> // Baud rate register
    {
        using DIV_Mantissa = Field<BRR, 12, 4, read_write>; // mantissa of USARTDIV
        using DIV_Fraction = Field<BRR, 4, 0, read_write>;  // fraction of USARTDIV
    };
    struct CTLR1 : PackedRegister<UART8_pack, RegBitSize::b32, 12 * 8> // Control register 1
    {
        using UE = Field<CTLR1, 1, 13, read_write>;    // USART enable
        using M = Field<CTLR1, 1, 12, read_write>;     // Word length
        using WAKE = Field<CTLR1, 1, 11, read_write>;  // Wakeup method
        using PCE = Field<CTLR1, 1, 10, read_write>;   // Parity control enable
        using PS = Field<CTLR1, 1, 9, read_write>;     // Parity selection
        using PEIE = Field<CTLR1, 1, 8, read_write>;   // PE interrupt enable
        using TXEIE = Field<CTLR1, 1, 7, read_write>;  // TXE interrupt enable
        using TCIE = Field<CTLR1, 1, 6, read_write>;   // Transmission complete interrupt
        using RXNEIE = Field<CTLR1, 1, 5, read_write>; // RXNE interrupt enable
        using IDLEIE = Field<CTLR1, 1, 4, read_write>; // IDLE interrupt enable
        using TE = Field<CTLR1, 1, 3, read_write>;     // Transmitter enable
        using RE = Field<CTLR1, 1, 2, read_write>;     // Receiver enable
        using RWU = Field<CTLR1, 1, 1, read_write>;    // Receiver wakeup
        using SBK = Field<CTLR1, 1, 0, read_write>;    // Send break
    };
    struct CTLR2 : PackedRegister<UART8_pack, RegBitSize::b32, 16 * 8> // Control register 2
    {
        using LINEN = Field<CTLR2, 1, 14, read_write>; // LIN mode enable
        using STOP = Field<CTLR2, 2, 12, read_write>;  // STOP bits
        using CLKEN = Field<CTLR2, 1, 11, read_write>; // Clock enable
        using CPOL = Field<CTLR2, 1, 10, read_write>;  // Clock polarity
        using CPHA = Field<CTLR2, 1, 9, read_write>;   // Clock phase
        using LBCL = Field<CTLR2, 1, 8, read_write>;   // Last bit clock pulse
        using LBDIE = Field<CTLR2, 1, 6, read_write>;  // LIN break detection interrupt
        using LBDL = Field<CTLR2, 1, 5, read_write>;   // lin break detection length
        using ADD = Field<CTLR2, 4, 0, read_write>;    // Address of the USART node
    };
    struct CTLR3 : PackedRegister<UART8_pack, RegBitSize::b32, 20 * 8> // Control register 3
    {
        using CTSIE = Field<CTLR3, 1, 10, read_write>; // CTS interrupt enable
        using CTSE = Field<CTLR3, 1, 9, read_write>;   // CTS enable
        using RTSE = Field<CTLR3, 1, 8, read_write>;   // RTS enable
        using DMAT = Field<CTLR3, 1, 7, read_write>;   // DMA enable transmitter
        using DMAR = Field<CTLR3, 1, 6, read_write>;   // DMA enable receiver
        using SCEN = Field<CTLR3, 1, 5, read_write>;   // Smartcard mode enable
        using NACK = Field<CTLR3, 1, 4, read_write>;   // Smartcard NACK enable
        using HDSEL = Field<CTLR3, 1, 3, read_write>;  // Half-duplex selection
        using IRLP = Field<CTLR3, 1, 2, read_write>;   // IrDA low-power
        using IREN = Field<CTLR3, 1, 1, read_write>;   // IrDA mode enable
        using EIE = Field<CTLR3, 1, 0, read_write>;    // Error interrupt enable
    };
    struct GPR : PackedRegister<UART8_pack, RegBitSize::b32, 24 * 8> // Guard time and prescaler
    {
        using GT = Field<GPR, 8, 8, read_write>;  // Guard time value
        using PSC = Field<GPR, 8, 0, read_write>; // Prescaler value
    };
}
namespace ADC1
{
    using ADC1_pack = RegisterPack<0x40012400, 1024>;
    struct STATR : PackedRegister<ADC1_pack, RegBitSize::b32, 0 * 8> // status register
    {
        using STRT = Field<STATR, 1, 4, read_write>;  // Regular channel start flag
        using JSTRT = Field<STATR, 1, 3, read_write>; // Injected channel start
        using JEOC = Field<STATR, 1, 2, read_write>;  // Injected channel end of
        using EOC = Field<STATR, 1, 1, read_write>;   // Regular channel end of
        using AWD = Field<STATR, 1, 0, read_write>;   // Analog watchdog flag
    };
    struct CTLR1 : PackedRegister<ADC1_pack, RegBitSize::b32, 4 * 8> // control register 1/TKEY_V_CTLR
    {
        using PGA = Field<CTLR1, 2, 27, read_write>;     // ADC_PGA
        using BUFEN = Field<CTLR1, 1, 26, read_write>;   // TKEY_BUF_Enable
        using TKITUNE = Field<CTLR1, 1, 25, read_write>; // TKEY_I enable
        using TKEYEN = Field<CTLR1, 1, 24, read_write>;  // TKEY enable, including TKEY_F and
        using AWDEN = Field<CTLR1, 1, 23, read_write>;   // Analog watchdog enable on regular
        using JAWDEN = Field<CTLR1, 1, 22, read_write>;  // Analog watchdog enable on injected
        using DUALMOD = Field<CTLR1, 4, 16, read_write>; // Dual mode selection
        using DISCNUM = Field<CTLR1, 3, 13, read_write>; // Discontinuous mode channel
        using JDISCEN = Field<CTLR1, 1, 12, read_write>; // Discontinuous mode on injected
        using DISCEN = Field<CTLR1, 1, 11, read_write>;  // Discontinuous mode on regular
        using JAUTO = Field<CTLR1, 1, 10, read_write>;   // Automatic injected group
        using AWDSGL = Field<CTLR1, 1, 9, read_write>;   // Enable the watchdog on a single channel
        using SCAN = Field<CTLR1, 1, 8, read_write>;     // Scan mode enable
        using JEOCIE = Field<CTLR1, 1, 7, read_write>;   // Interrupt enable for injected
        using AWDIE = Field<CTLR1, 1, 6, read_write>;    // Analog watchdog interrupt
        using EOCIE = Field<CTLR1, 1, 5, read_write>;    // Interrupt enable for EOC
        using AWDCH = Field<CTLR1, 5, 0, read_write>;    // Analog watchdog channel select
    };
    struct CTLR2 : PackedRegister<ADC1_pack, RegBitSize::b32, 8 * 8> // control register 2
    {
        using TSVREFE = Field<CTLR2, 1, 23, read_write>;  // Temperature sensor and VREFINT
        using SWSTART = Field<CTLR2, 1, 22, read_write>;  // Start conversion of regular
        using JSWSTART = Field<CTLR2, 1, 21, read_write>; // Start conversion of injected
        using EXTTRIG = Field<CTLR2, 1, 20, read_write>;  // External trigger conversion mode for
        using EXTSEL = Field<CTLR2, 3, 17, read_write>;   // External event select for regular
        using JEXTTRIG = Field<CTLR2, 1, 15, read_write>; // External trigger conversion mode for
        using JEXTSEL = Field<CTLR2, 3, 12, read_write>;  // External event select for injected
        using ALIGN = Field<CTLR2, 1, 11, read_write>;    // Data alignment
        using DMA = Field<CTLR2, 1, 8, read_write>;       // Direct memory access mode
        using RSTCAL = Field<CTLR2, 1, 3, read_write>;    // Reset calibration
        using CAL = Field<CTLR2, 1, 2, read_write>;       // A/D calibration
        using CONT = Field<CTLR2, 1, 1, read_write>;      // Continuous conversion
        using ADON = Field<CTLR2, 1, 0, read_write>;      // A/D converter ON / OFF
    };
    struct SAMPTR1_CHARGE1 : PackedRegister<ADC1_pack, RegBitSize::b32, 12 * 8> // sample time register 1
    {
        using SMP10_TKCG10 = Field<SAMPTR1_CHARGE1, 3, 0, read_write>;  // Channel 10 sample time
        using SMP11_TKCG11 = Field<SAMPTR1_CHARGE1, 3, 3, read_write>;  // Channel 11 sample time
        using SMP12_TKCG12 = Field<SAMPTR1_CHARGE1, 3, 6, read_write>;  // Channel 12 sample time
        using SMP13_TKCG13 = Field<SAMPTR1_CHARGE1, 3, 9, read_write>;  // Channel 13 sample time
        using SMP14_TKCG14 = Field<SAMPTR1_CHARGE1, 3, 12, read_write>; // Channel 14 sample time
        using SMP15_TKCG15 = Field<SAMPTR1_CHARGE1, 3, 15, read_write>; // Channel 15 sample time
        using SMP16_TKCG16 = Field<SAMPTR1_CHARGE1, 3, 18, read_write>; // Channel 16 sample time
        using SMP17_TKCG17 = Field<SAMPTR1_CHARGE1, 3, 21, read_write>; // Channel 17 sample time
    };
    struct SAMPTR2_CHARGE2 : PackedRegister<ADC1_pack, RegBitSize::b32, 16 * 8> // sample time register 2
    {
        using SMP0_TKCG0 = Field<SAMPTR2_CHARGE2, 3, 0, read_write>;  // Channel 0 sample time
        using SMP1_TKCG1 = Field<SAMPTR2_CHARGE2, 3, 3, read_write>;  // Channel 1 sample time
        using SMP2_TKCG2 = Field<SAMPTR2_CHARGE2, 3, 6, read_write>;  // Channel 2 sample time
        using SMP3_TKCG3 = Field<SAMPTR2_CHARGE2, 3, 9, read_write>;  // Channel 3 sample time
        using SMP4_TKCG4 = Field<SAMPTR2_CHARGE2, 3, 12, read_write>; // Channel 4 sample time
        using SMP5_TKCG5 = Field<SAMPTR2_CHARGE2, 3, 15, read_write>; // Channel 5 sample time
        using SMP6_TKCG6 = Field<SAMPTR2_CHARGE2, 3, 18, read_write>; // Channel 6 sample time
        using SMP7_TKCG7 = Field<SAMPTR2_CHARGE2, 3, 21, read_write>; // Channel 7 sample time
        using SMP8_TKCG8 = Field<SAMPTR2_CHARGE2, 3, 24, read_write>; // Channel 8 sample time
        using SMP9_TKCG9 = Field<SAMPTR2_CHARGE2, 3, 27, read_write>; // Channel 9 sample time
    };
    struct IOFR1 : PackedRegister<ADC1_pack, RegBitSize::b32, 20 * 8> // injected channel data offset register
    {
        using JOFFSET1 = Field<IOFR1, 12, 0, read_write>; // Data offset for injected channel
    };
    struct IOFR2 : PackedRegister<ADC1_pack, RegBitSize::b32, 24 * 8> // injected channel data offset register
    {
        using JOFFSET2 = Field<IOFR2, 12, 0, read_write>; // Data offset for injected channel
    };
    struct IOFR3 : PackedRegister<ADC1_pack, RegBitSize::b32, 28 * 8> // injected channel data offset register
    {
        using JOFFSET3 = Field<IOFR3, 12, 0, read_write>; // Data offset for injected channel
    };
    struct IOFR4 : PackedRegister<ADC1_pack, RegBitSize::b32, 32 * 8> // injected channel data offset register
    {
        using JOFFSET4 = Field<IOFR4, 12, 0, read_write>; // Data offset for injected channel
    };
    struct WDHTR : PackedRegister<ADC1_pack, RegBitSize::b32, 36 * 8> // watchdog higher threshold
    {
        using HT = Field<WDHTR, 12, 0, read_write>; // Analog watchdog higher
    };
    struct WDLTR : PackedRegister<ADC1_pack, RegBitSize::b32, 40 * 8> // watchdog lower threshold
    {
        using LT = Field<WDLTR, 12, 0, read_write>; // Analog watchdog lower
    };
    struct RSQR1 : PackedRegister<ADC1_pack, RegBitSize::b32, 44 * 8> // regular sequence register 1
    {
        using L = Field<RSQR1, 4, 20, read_write>;    // Regular channel sequence
        using SQ16 = Field<RSQR1, 5, 15, read_write>; // 16th conversion in regular
        using SQ15 = Field<RSQR1, 5, 10, read_write>; // 15th conversion in regular
        using SQ14 = Field<RSQR1, 5, 5, read_write>;  // 14th conversion in regular
        using SQ13 = Field<RSQR1, 5, 0, read_write>;  // 13th conversion in regular
    };
    struct RSQR2 : PackedRegister<ADC1_pack, RegBitSize::b32, 48 * 8> // regular sequence register 2
    {
        using SQ12 = Field<RSQR2, 5, 25, read_write>; // 12th conversion in regular
        using SQ11 = Field<RSQR2, 5, 20, read_write>; // 11th conversion in regular
        using SQ10 = Field<RSQR2, 5, 15, read_write>; // 10th conversion in regular
        using SQ9 = Field<RSQR2, 5, 10, read_write>;  // 9th conversion in regular
        using SQ8 = Field<RSQR2, 5, 5, read_write>;   // 8th conversion in regular
        using SQ7 = Field<RSQR2, 5, 0, read_write>;   // 7th conversion in regular
    };
    struct RSQR3__CHANNEL : PackedRegister<ADC1_pack, RegBitSize::b32, 52 * 8> // regular sequence register 3;TKEY_V_CHANNEL
    {
        using SQ6 = Field<RSQR3__CHANNEL, 5, 25, read_write>;       // 6th conversion in regular
        using SQ5 = Field<RSQR3__CHANNEL, 5, 20, read_write>;       // 5th conversion in regular
        using SQ4 = Field<RSQR3__CHANNEL, 5, 15, read_write>;       // 4th conversion in regular
        using SQ3 = Field<RSQR3__CHANNEL, 5, 10, read_write>;       // 3rd conversion in regular
        using SQ2 = Field<RSQR3__CHANNEL, 5, 5, read_write>;        // 2nd conversion in regular
        using SQ1__CHSEL = Field<RSQR3__CHANNEL, 5, 0, read_write>; // 1st conversion in regular
    };
    struct ISQR : PackedRegister<ADC1_pack, RegBitSize::b32, 56 * 8> // injected sequence register
    {
        using JL = Field<ISQR, 2, 20, read_write>;   // Injected sequence length
        using JSQ4 = Field<ISQR, 5, 15, read_write>; // 4th conversion in injected
        using JSQ3 = Field<ISQR, 5, 10, read_write>; // 3rd conversion in injected
        using JSQ2 = Field<ISQR, 5, 5, read_write>;  // 2nd conversion in injected
        using JSQ1 = Field<ISQR, 5, 0, read_write>;  // 1st conversion in injected
    };
    struct IDATAR1_CHGOFFSET : PackedRegister<ADC1_pack, RegBitSize::b32, 60 * 8> // injected data register x_Charge data offset for injected channel x
    {
        using IDATA0_7_TKCGOFFSET = Field<IDATAR1_CHGOFFSET, 8, 0, read_only>; // Injected data_Touch key charge data offset for injected channel x
        using IDATA8_15 = Field<IDATAR1_CHGOFFSET, 8, 8, read_only>;           // Injected data
    };
    struct IDATAR2 : PackedRegister<ADC1_pack, RegBitSize::b32, 64 * 8> // injected data register x
    {
        using JDATA = Field<IDATAR2, 16, 0, read_only>; // Injected data
    };
    struct IDATAR3 : PackedRegister<ADC1_pack, RegBitSize::b32, 68 * 8> // injected data register x
    {
        using JDATA = Field<IDATAR3, 16, 0, read_only>; // Injected data
    };
    struct IDATAR4 : PackedRegister<ADC1_pack, RegBitSize::b32, 72 * 8> // injected data register x
    {
        using JDATA = Field<IDATAR4, 16, 0, read_only>; // Injected data
    };
    struct RDATAR_DR_ACT_DCG : PackedRegister<ADC1_pack, RegBitSize::b32, 76 * 8> // regular data register_start and discharge time register
    {
        using DATA0_7_TKACT_DCG = Field<RDATAR_DR_ACT_DCG, 8, 0, read_only>; // Regular data_Touch key start and discharge time register
        using DATA8_15 = Field<RDATAR_DR_ACT_DCG, 8, 8, read_only>;          // Regular data
    };
}
namespace ADC2
{
    using ADC2_pack = RegisterPack<0x40012800, 1024>;
    struct STATR : PackedRegister<ADC2_pack, RegBitSize::b32, 0 * 8> // status register
    {
        using STRT = Field<STATR, 1, 4, read_write>;  // Regular channel start flag
        using JSTRT = Field<STATR, 1, 3, read_write>; // Injected channel start
        using JEOC = Field<STATR, 1, 2, read_write>;  // Injected channel end of
        using EOC = Field<STATR, 1, 1, read_write>;   // Regular channel end of
        using AWD = Field<STATR, 1, 0, read_write>;   // Analog watchdog flag
    };
    struct CTLR1 : PackedRegister<ADC2_pack, RegBitSize::b32, 4 * 8> // control register 1/TKEY_V_CTLR
    {
        using PGA = Field<CTLR1, 2, 27, read_write>;     // ADC_PGA
        using BUFEN = Field<CTLR1, 1, 26, read_write>;   // TKEY_BUF_Enable
        using TKITUNE = Field<CTLR1, 1, 25, read_write>; // TKEY_I enable
        using TKEYEN = Field<CTLR1, 1, 24, read_write>;  // TKEY enable, including TKEY_F and
        using AWDEN = Field<CTLR1, 1, 23, read_write>;   // Analog watchdog enable on regular
        using JAWDEN = Field<CTLR1, 1, 22, read_write>;  // Analog watchdog enable on injected
        using DUALMOD = Field<CTLR1, 4, 16, read_write>; // Dual mode selection
        using DISCNUM = Field<CTLR1, 3, 13, read_write>; // Discontinuous mode channel
        using JDISCEN = Field<CTLR1, 1, 12, read_write>; // Discontinuous mode on injected
        using DISCEN = Field<CTLR1, 1, 11, read_write>;  // Discontinuous mode on regular
        using JAUTO = Field<CTLR1, 1, 10, read_write>;   // Automatic injected group
        using AWDSGL = Field<CTLR1, 1, 9, read_write>;   // Enable the watchdog on a single channel
        using SCAN = Field<CTLR1, 1, 8, read_write>;     // Scan mode enable
        using JEOCIE = Field<CTLR1, 1, 7, read_write>;   // Interrupt enable for injected
        using AWDIE = Field<CTLR1, 1, 6, read_write>;    // Analog watchdog interrupt
        using EOCIE = Field<CTLR1, 1, 5, read_write>;    // Interrupt enable for EOC
        using AWDCH = Field<CTLR1, 5, 0, read_write>;    // Analog watchdog channel select
    };
    struct CTLR2 : PackedRegister<ADC2_pack, RegBitSize::b32, 8 * 8> // control register 2
    {
        using TSVREFE = Field<CTLR2, 1, 23, read_write>;  // Temperature sensor and VREFINT
        using SWSTART = Field<CTLR2, 1, 22, read_write>;  // Start conversion of regular
        using JSWSTART = Field<CTLR2, 1, 21, read_write>; // Start conversion of injected
        using EXTTRIG = Field<CTLR2, 1, 20, read_write>;  // External trigger conversion mode for
        using EXTSEL = Field<CTLR2, 3, 17, read_write>;   // External event select for regular
        using JEXTTRIG = Field<CTLR2, 1, 15, read_write>; // External trigger conversion mode for
        using JEXTSEL = Field<CTLR2, 3, 12, read_write>;  // External event select for injected
        using ALIGN = Field<CTLR2, 1, 11, read_write>;    // Data alignment
        using DMA = Field<CTLR2, 1, 8, read_write>;       // Direct memory access mode
        using RSTCAL = Field<CTLR2, 1, 3, read_write>;    // Reset calibration
        using CAL = Field<CTLR2, 1, 2, read_write>;       // A/D calibration
        using CONT = Field<CTLR2, 1, 1, read_write>;      // Continuous conversion
        using ADON = Field<CTLR2, 1, 0, read_write>;      // A/D converter ON / OFF
    };
    struct SAMPTR1_CHARGE1 : PackedRegister<ADC2_pack, RegBitSize::b32, 12 * 8> // sample time register 1
    {
        using SMP10_TKCG10 = Field<SAMPTR1_CHARGE1, 3, 0, read_write>;  // Channel 10 sample time
        using SMP11_TKCG11 = Field<SAMPTR1_CHARGE1, 3, 3, read_write>;  // Channel 11 sample time
        using SMP12_TKCG12 = Field<SAMPTR1_CHARGE1, 3, 6, read_write>;  // Channel 12 sample time
        using SMP13_TKCG13 = Field<SAMPTR1_CHARGE1, 3, 9, read_write>;  // Channel 13 sample time
        using SMP14_TKCG14 = Field<SAMPTR1_CHARGE1, 3, 12, read_write>; // Channel 14 sample time
        using SMP15_TKCG15 = Field<SAMPTR1_CHARGE1, 3, 15, read_write>; // Channel 15 sample time
        using SMP16_TKCG16 = Field<SAMPTR1_CHARGE1, 3, 18, read_write>; // Channel 16 sample time
        using SMP17_TKCG17 = Field<SAMPTR1_CHARGE1, 3, 21, read_write>; // Channel 17 sample time
    };
    struct SAMPTR2_CHARGE2 : PackedRegister<ADC2_pack, RegBitSize::b32, 16 * 8> // sample time register 2
    {
        using SMP0_TKCG0 = Field<SAMPTR2_CHARGE2, 3, 0, read_write>;  // Channel 0 sample time
        using SMP1_TKCG1 = Field<SAMPTR2_CHARGE2, 3, 3, read_write>;  // Channel 1 sample time
        using SMP2_TKCG2 = Field<SAMPTR2_CHARGE2, 3, 6, read_write>;  // Channel 2 sample time
        using SMP3_TKCG3 = Field<SAMPTR2_CHARGE2, 3, 9, read_write>;  // Channel 3 sample time
        using SMP4_TKCG4 = Field<SAMPTR2_CHARGE2, 3, 12, read_write>; // Channel 4 sample time
        using SMP5_TKCG5 = Field<SAMPTR2_CHARGE2, 3, 15, read_write>; // Channel 5 sample time
        using SMP6_TKCG6 = Field<SAMPTR2_CHARGE2, 3, 18, read_write>; // Channel 6 sample time
        using SMP7_TKCG7 = Field<SAMPTR2_CHARGE2, 3, 21, read_write>; // Channel 7 sample time
        using SMP8_TKCG8 = Field<SAMPTR2_CHARGE2, 3, 24, read_write>; // Channel 8 sample time
        using SMP9_TKCG9 = Field<SAMPTR2_CHARGE2, 3, 27, read_write>; // Channel 9 sample time
    };
    struct IOFR1 : PackedRegister<ADC2_pack, RegBitSize::b32, 20 * 8> // injected channel data offset register
    {
        using JOFFSET1 = Field<IOFR1, 12, 0, read_write>; // Data offset for injected channel
    };
    struct IOFR2 : PackedRegister<ADC2_pack, RegBitSize::b32, 24 * 8> // injected channel data offset register
    {
        using JOFFSET2 = Field<IOFR2, 12, 0, read_write>; // Data offset for injected channel
    };
    struct IOFR3 : PackedRegister<ADC2_pack, RegBitSize::b32, 28 * 8> // injected channel data offset register
    {
        using JOFFSET3 = Field<IOFR3, 12, 0, read_write>; // Data offset for injected channel
    };
    struct IOFR4 : PackedRegister<ADC2_pack, RegBitSize::b32, 32 * 8> // injected channel data offset register
    {
        using JOFFSET4 = Field<IOFR4, 12, 0, read_write>; // Data offset for injected channel
    };
    struct WDHTR : PackedRegister<ADC2_pack, RegBitSize::b32, 36 * 8> // watchdog higher threshold
    {
        using HT = Field<WDHTR, 12, 0, read_write>; // Analog watchdog higher
    };
    struct WDLTR : PackedRegister<ADC2_pack, RegBitSize::b32, 40 * 8> // watchdog lower threshold
    {
        using LT = Field<WDLTR, 12, 0, read_write>; // Analog watchdog lower
    };
    struct RSQR1 : PackedRegister<ADC2_pack, RegBitSize::b32, 44 * 8> // regular sequence register 1
    {
        using L = Field<RSQR1, 4, 20, read_write>;    // Regular channel sequence
        using SQ16 = Field<RSQR1, 5, 15, read_write>; // 16th conversion in regular
        using SQ15 = Field<RSQR1, 5, 10, read_write>; // 15th conversion in regular
        using SQ14 = Field<RSQR1, 5, 5, read_write>;  // 14th conversion in regular
        using SQ13 = Field<RSQR1, 5, 0, read_write>;  // 13th conversion in regular
    };
    struct RSQR2 : PackedRegister<ADC2_pack, RegBitSize::b32, 48 * 8> // regular sequence register 2
    {
        using SQ12 = Field<RSQR2, 5, 25, read_write>; // 12th conversion in regular
        using SQ11 = Field<RSQR2, 5, 20, read_write>; // 11th conversion in regular
        using SQ10 = Field<RSQR2, 5, 15, read_write>; // 10th conversion in regular
        using SQ9 = Field<RSQR2, 5, 10, read_write>;  // 9th conversion in regular
        using SQ8 = Field<RSQR2, 5, 5, read_write>;   // 8th conversion in regular
        using SQ7 = Field<RSQR2, 5, 0, read_write>;   // 7th conversion in regular
    };
    struct RSQR3__CHANNEL : PackedRegister<ADC2_pack, RegBitSize::b32, 52 * 8> // regular sequence register 3;TKEY_V_CHANNEL
    {
        using SQ6 = Field<RSQR3__CHANNEL, 5, 25, read_write>;       // 6th conversion in regular
        using SQ5 = Field<RSQR3__CHANNEL, 5, 20, read_write>;       // 5th conversion in regular
        using SQ4 = Field<RSQR3__CHANNEL, 5, 15, read_write>;       // 4th conversion in regular
        using SQ3 = Field<RSQR3__CHANNEL, 5, 10, read_write>;       // 3rd conversion in regular
        using SQ2 = Field<RSQR3__CHANNEL, 5, 5, read_write>;        // 2nd conversion in regular
        using SQ1__CHSEL = Field<RSQR3__CHANNEL, 5, 0, read_write>; // 1st conversion in regular
    };
    struct ISQR : PackedRegister<ADC2_pack, RegBitSize::b32, 56 * 8> // injected sequence register
    {
        using JL = Field<ISQR, 2, 20, read_write>;   // Injected sequence length
        using JSQ4 = Field<ISQR, 5, 15, read_write>; // 4th conversion in injected
        using JSQ3 = Field<ISQR, 5, 10, read_write>; // 3rd conversion in injected
        using JSQ2 = Field<ISQR, 5, 5, read_write>;  // 2nd conversion in injected
        using JSQ1 = Field<ISQR, 5, 0, read_write>;  // 1st conversion in injected
    };
    struct IDATAR1_CHGOFFSET : PackedRegister<ADC2_pack, RegBitSize::b32, 60 * 8> // injected data register x_Charge data offset for injected channel x
    {
        using IDATA0_7_TKCGOFFSET = Field<IDATAR1_CHGOFFSET, 8, 0, read_only>; // Injected data_Touch key charge data offset for injected channel x
        using IDATA8_15 = Field<IDATAR1_CHGOFFSET, 8, 8, read_only>;           // Injected data
    };
    struct IDATAR2 : PackedRegister<ADC2_pack, RegBitSize::b32, 64 * 8> // injected data register x
    {
        using JDATA = Field<IDATAR2, 16, 0, read_only>; // Injected data
    };
    struct IDATAR3 : PackedRegister<ADC2_pack, RegBitSize::b32, 68 * 8> // injected data register x
    {
        using JDATA = Field<IDATAR3, 16, 0, read_only>; // Injected data
    };
    struct IDATAR4 : PackedRegister<ADC2_pack, RegBitSize::b32, 72 * 8> // injected data register x
    {
        using JDATA = Field<IDATAR4, 16, 0, read_only>; // Injected data
    };
    struct RDATAR_DR_ACT_DCG : PackedRegister<ADC2_pack, RegBitSize::b32, 76 * 8> // regular data register_start and discharge time register
    {
        using DATA0_7_TKACT_DCG = Field<RDATAR_DR_ACT_DCG, 8, 0, read_only>; // Regular data_Touch key start and discharge time register
        using DATA8_15 = Field<RDATAR_DR_ACT_DCG, 8, 8, read_only>;          // Regular data
    };
}
namespace DBG
{
    using DBG_pack = RegisterPack<0xe000d000, 1024>;
    struct CFGR1 : PackedRegister<DBG_pack, RegBitSize::b32, 0 * 8> // DBGMCU_CFGR1
    {
        using DEG_IWDG = Field<CFGR1, 1, 0, read_write>; // DEG_IWDG
        using DEG_WWDG = Field<CFGR1, 1, 1, read_write>; // DEG_WWDG
        using DEG_I2C1 = Field<CFGR1, 1, 2, read_write>; // DEG_I2C1
        using DEG_I2C2 = Field<CFGR1, 1, 3, read_write>; // DEG_I2C2
        using DEG_TIM1 = Field<CFGR1, 1, 4, read_write>; // DEG_TIM1
        using DEG_TIM2 = Field<CFGR1, 1, 5, read_write>; // DEG_TIM2
        using DEG_TIM3 = Field<CFGR1, 1, 6, read_write>; // DEG_TIM3
        using DEG_TIM4 = Field<CFGR1, 1, 7, read_write>; // DEG_TIM4
    };
    struct CFGR2 : PackedRegister<DBG_pack, RegBitSize::b32, 4 * 8> // DBGMCU_CFGR2
    {
        using DBG_SLEEP = Field<CFGR2, 1, 0, read_write>;   // DBG_SLEEP
        using DBG_STOP = Field<CFGR2, 1, 1, read_write>;    // DBG_STOP
        using DBG_STANDBY = Field<CFGR2, 1, 2, read_write>; // DBG_STANDBY
    };
}
namespace USBHD
{
    using USBHD_pack = RegisterPack<0x40023400, 1024>;
    struct USB_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 0 * 8> // USB base control
    {
        using RB_UC_DMA_EN = Field<USB_CTRL, 1, 0, read_write>;     // DMA enable and DMA interrupt enable for USB
        using RB_UC_CLR_ALL = Field<USB_CTRL, 1, 1, read_write>;    // force clear FIFO and count of USB
        using RB_UC_RESET_SIE = Field<USB_CTRL, 1, 2, read_write>;  // force reset USB SIE, need software clear
        using RB_UC_INT_BUSY = Field<USB_CTRL, 1, 3, read_write>;   // enable automatic responding busy for device mode or automatic pause for host mode during interrupt flag UIF_TRANSFER valid
        using RB_UC_DEV_PU_EN = Field<USB_CTRL, 1, 4, read_write>;  // USB device enable and internal pullup resistance enable
        using RB_UC_SPEED_TYPE = Field<USB_CTRL, 2, 5, read_write>; // enable USB low speed: 00=full speed, 01=high speed, 10 =low speed
        using RB_UC_HOST_MODE = Field<USB_CTRL, 1, 7, read_write>;  // enable USB host mode: 0=device mode, 1=host mode
    };
    struct UHOST_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 1 * 8> // USB HOST control
    {
        using bUH_TX_BUS_RESET = Field<UHOST_CTRL, 1, 0, read_write>;   // USB host bus reset status
        using bUH_TX_BUS_SUSPEND = Field<UHOST_CTRL, 1, 1, read_write>; // the host sends hang sigal
        using bUH_TX_BUS_RESUME = Field<UHOST_CTRL, 1, 2, read_write>;  // host wake up device
        using bUH_REMOTE_WKUP = Field<UHOST_CTRL, 1, 3, read_write>;    // the remoke wake-up
        using bUH_PHY_SUSPENDM = Field<UHOST_CTRL, 1, 4, read_write>;   // USB-PHY thesuspended state the internal USB-PLL is turned off
        using bUH_SOF_FREE = Field<UHOST_CTRL, 1, 6, read_only>;        // the bus is idle
        using bUH_SOF_EN = Field<UHOST_CTRL, 1, 7, read_write>;         // automatically generate the SOF packet enabling control bit
    };
    struct USB_INT_EN : PackedRegister<USBHD_pack, RegBitSize::b8, 2 * 8> // USB interrupt enable
    {
        using RB_UIE_BUS_RST__RB_UIE_DETECT = Field<USB_INT_EN, 1, 0, read_write>; // enable interrupt for USB bus reset event for USB device mode;enable interrupt for USB device detected event for USB host mode
        using RB_UIE_TRANSFER = Field<USB_INT_EN, 1, 1, read_write>;               // enable interrupt for USB transfer completion
        using RB_UIE_SUSPEND = Field<USB_INT_EN, 1, 2, read_write>;                // enable interrupt for USB suspend or resume event
        using RB_UIE_SOF_ACT = Field<USB_INT_EN, 1, 3, read_write>;                // indicate host SOF timer action status for USB host
        using RB_UIE_FIFO_OV = Field<USB_INT_EN, 1, 4, read_write>;                // enable interrupt for FIFO overflow
        using RB_UIE_SETUP_ACT = Field<USB_INT_EN, 1, 5, read_write>;              // indicate host SETUP timer action status for USB host
        using RB_UIE_ISO_ACT = Field<USB_INT_EN, 1, 6, read_write>;                // enable interrupt for NAK responded for USB device mode
        using RB_UIE_DEV_NAK = Field<USB_INT_EN, 1, 7, read_write>;                // enable interrupt for NAK responded for USB device mode
    };
    struct USB_DEV_AD : PackedRegister<USBHD_pack, RegBitSize::b8, 3 * 8> // USB device address
    {
        using MASK_USB_ADDR = Field<USB_DEV_AD, 7, 0, read_write>; // bit mask for USB device address
        using RB_UDA_GP_BIT = Field<USB_DEV_AD, 1, 7, read_write>; // general purpose bit
    };
    struct USB_FRAME_NO : PackedRegister<USBHD_pack, RegBitSize::b16, 4 * 8> // USB_FRAME_NO
    {
        using USB_FRAME_NOfield = Field<USB_FRAME_NO, 16, 0, read_only>; // USB_FRAME_NO
    };
    struct USB_USB_SUSPEND : PackedRegister<USBHD_pack, RegBitSize::b8, 6 * 8> // indicate USB suspend status
    {
        using USB_SYS_MOD = Field<USB_USB_SUSPEND, 2, 0, read_write>;   // USB_SYS_MOD
        using USB_WAKEUP = Field<USB_USB_SUSPEND, 1, 2, read_write>;    // remote resume
        using USB_LINESTATE = Field<USB_USB_SUSPEND, 2, 4, read_write>; // USB_LINESTATE
    };
    struct USB_SPEED_TYPE : PackedRegister<USBHD_pack, RegBitSize::b8, 8 * 8> // USB_SPEED_TYPE
    {
        using USB_SPEED_TYPEfield = Field<USB_SPEED_TYPE, 2, 0, read_only>; // USB_SPEED_TYPE
    };
    struct USB_MIS_ST : PackedRegister<USBHD_pack, RegBitSize::b8, 9 * 8> // USB miscellaneous status
    {
        using RB_UMS_SPLIT_CAN = Field<USB_MIS_ST, 1, 0, read_only>;  // RO, indicate device attached status on USB host
        using RB_UMS_ATTACH = Field<USB_MIS_ST, 1, 1, read_only>;     // RO, indicate UDM level saved at device attached to USB host
        using RB_UMS_SUSPEND = Field<USB_MIS_ST, 1, 2, read_only>;    // RO, indicate USB suspend status
        using RB_UMS_BUS_RESET = Field<USB_MIS_ST, 1, 3, read_only>;  // RO, indicate USB bus reset status
        using RB_UMS_R_FIFO_RDY = Field<USB_MIS_ST, 1, 4, read_only>; // RO, indicate USB receiving FIFO ready status (not empty)
        using RB_UMS_SIE_FREE = Field<USB_MIS_ST, 1, 5, read_only>;   // RO, indicate USB SIE free status
        using RB_UMS_SOF_ACT = Field<USB_MIS_ST, 1, 6, read_only>;    // RO, indicate host SOF timer action status for USB host
        using RB_UMS_SOF_PRES = Field<USB_MIS_ST, 1, 7, read_only>;   // RO, indicate host SOF timer presage status
    };
    struct USB_INT_FG : PackedRegister<USBHD_pack, RegBitSize::b8, 10 * 8> // USB interrupt flag
    {
        using RB_UIF_BUS_RST = Field<USB_INT_FG, 1, 0, read_write>;  // RB_UIF_BUS_RST
        using RB_UIF_TRANSFER = Field<USB_INT_FG, 1, 1, read_write>; // USB transfer completion interrupt flag, direct bit address clear or write 1 to clear
        using RB_UIF_SUSPEND = Field<USB_INT_FG, 1, 2, read_write>;  // USB suspend or resume event interrupt flag, direct bit address clear or write 1 to clear
        using RB_UIF_HST_SOF = Field<USB_INT_FG, 1, 3, read_write>;  // host SOF timer interrupt flag for USB host, direct bit address clear or write 1 to clear
        using RB_UIF_FIFO_OV = Field<USB_INT_FG, 1, 4, read_write>;  // FIFO overflow interrupt flag for USB, direct bit address clear or write 1 to clear
        using RB_U_SETUP_ACT = Field<USB_INT_FG, 1, 5, read_only>;   // USB_SETUP_ACT
        using UIF_ISO_ACT = Field<USB_INT_FG, 1, 6, read_only>;      // UIF_ISO_ACT
        using RB_U_IS_NAK = Field<USB_INT_FG, 1, 7, read_only>;      // RO, indicate current USB transfer is NAK received
    };
    struct USB_INT_ST : PackedRegister<USBHD_pack, RegBitSize::b8, 11 * 8> // USB interrupt status
    {
        using MASK_UIS_H_RES__MASK_UIS_ENDP = Field<USB_INT_ST, 4, 0, read_only>; // RO, bit mask of current transfer handshake response for USB host mode: 0000=no response, time out from device, others=handshake response PID received;RO, bit mask of current transfer endpoint number for USB device mode
        using MASK_UIS_TOKEN = Field<USB_INT_ST, 2, 4, read_only>;                // RO, bit mask of current token PID code received for USB device mode
        using RB_UIS_TOG_OK = Field<USB_INT_ST, 1, 6, read_only>;                 // RO, indicate current USB transfer toggle is OK
        using RB_UIS_IS_NAK = Field<USB_INT_ST, 1, 7, read_only>;                 // RO, indicate current USB transfer is NAK received for USB device mode
    };
    struct USB_RX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 12 * 8> // USB receiving length
    {
        using R16_USB_RX_LEN = Field<USB_RX_LEN, 16, 0, read_only>; // length of received bytes
    };
    struct UEP_CONFIG : PackedRegister<USBHD_pack, RegBitSize::b32, 16 * 8> // USB endpoint configuration
    {
        using bUEP_R_EN__UH_EP_MOD = Field<UEP_CONFIG, 15, 17, read_write>; // endpoint RX enable/bUH_TX_EN
        using bUEP_T_EN_bUH_TX_EN = Field<UEP_CONFIG, 15, 1, read_write>;   // endpoint TX enable/bUH_TX_EN
    };
    struct UEP_TYPE : PackedRegister<USBHD_pack, RegBitSize::b32, 20 * 8> // USB endpoint type
    {
        using bUEP_R_TYPE = Field<UEP_TYPE, 15, 17, read_write>; // endpoint RX type
        using bUEP_T_TYPE = Field<UEP_TYPE, 15, 1, read_write>;  // endpoint TX type
    };
    struct UEP_BUF_MOD : PackedRegister<USBHD_pack, RegBitSize::b32, 24 * 8> // USB endpoint buffer mode
    {
        using bUEP_ISO_BUF_MOD = Field<UEP_BUF_MOD, 16, 16, read_write>; // buffer mode of USB endpoint
        using bUEP_BUF_MOD = Field<UEP_BUF_MOD, 16, 0, read_write>;      // buffer mode of USB endpoint
    };
    struct UEP0_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 28 * 8> // B endpoint 0 DMA buffer address
    {
        using UEP0_DMAfield = Field<UEP0_DMA, 16, 0, read_write>; // endpoint 0 DMA buffer address
    };
    struct UEP1_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 32 * 8> // endpoint 1 DMA RX buffer address
    {
        using UEP1_RX_DMAfield = Field<UEP1_RX_DMA, 16, 0, read_write>; // endpoint 1 DMA buffer address
    };
    struct UEP2_RX_DMA__UH_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 36 * 8> // endpoint 2 DMA RX buffer address/UH_RX_DMA
    {
        using UEP2_RX_DMA__UH_RX_DMAfield = Field<UEP2_RX_DMA__UH_RX_DMA, 16, 0, read_write>; // endpoint 2 DMA buffer address
    };
    struct UEP3_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 40 * 8> // endpoint 3 DMA RX buffer address
    {
        using UEP3_RX_DMAfield = Field<UEP3_RX_DMA, 16, 0, read_write>; // endpoint 3 DMA buffer address
    };
    struct UEP4_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 44 * 8> // endpoint 4 DMA RX buffer address
    {
        using UEP4_RX_DMAfield = Field<UEP4_RX_DMA, 16, 0, read_write>; // endpoint 4 DMA buffer address
    };
    struct UEP5_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 48 * 8> // endpoint 5 DMA RX buffer address
    {
        using UEP5_DMA = Field<UEP5_RX_DMA, 16, 0, read_write>; // endpoint 5 DMA buffer address
    };
    struct UEP6_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 52 * 8> // endpoint 6 DMA RX buffer address
    {
        using UEP6_RX_DMAfield = Field<UEP6_RX_DMA, 16, 0, read_write>; // endpoint 6 DMA buffer address
    };
    struct UEP7_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 56 * 8> // endpoint 7 DMA RX buffer address
    {
        using UEP7_RX_DMAfield = Field<UEP7_RX_DMA, 16, 0, read_write>; // endpoint 7 DMA buffer address
    };
    struct UEP8_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 60 * 8> // endpoint 8 DMA RX buffer address
    {
        using UEP8_RX_DMAfield = Field<UEP8_RX_DMA, 16, 0, read_write>; // endpoint 8 DMA buffer address
    };
    struct UEP9_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 64 * 8> // endpoint 9 DMA RX buffer address
    {
        using UEP9_RX_DMAfield = Field<UEP9_RX_DMA, 16, 0, read_write>; // endpoint 9 DMA buffer address
    };
    struct UEP10_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 68 * 8> // endpoint 10 DMA RX buffer address
    {
        using UEP10_RX_DMAfield = Field<UEP10_RX_DMA, 16, 0, read_write>; // endpoint 10 DMA buffer address
    };
    struct UEP11_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 72 * 8> // endpoint 11 DMA RX buffer address
    {
        using UEP11_RX_DMAfield = Field<UEP11_RX_DMA, 16, 0, read_write>; // endpoint 11 DMA buffer address
    };
    struct UEP12_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 76 * 8> // endpoint 12 DMA RX buffer address
    {
        using UEP12_RX_DMAfield = Field<UEP12_RX_DMA, 16, 0, read_write>; // endpoint 12 DMA buffer address
    };
    struct UEP13_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 80 * 8> // endpoint 13 DMA RX buffer address
    {
        using UEP13_RX_DMAfield = Field<UEP13_RX_DMA, 16, 0, read_write>; // endpoint 13 DMA buffer address
    };
    struct UEP14_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 84 * 8> // endpoint 14 DMA RX buffer address
    {
        using UEP14_RX_DMAfield = Field<UEP14_RX_DMA, 16, 0, read_write>; // endpoint 14 DMA buffer address
    };
    struct UEP15_RX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 88 * 8> // endpoint 15 DMA RX buffer address
    {
        using UEP15_RX_DMAfield = Field<UEP15_RX_DMA, 16, 0, read_write>; // endpoint 15 DMA buffer address
    };
    struct UEP1_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 92 * 8> // endpoint 1 DMA TX buffer address
    {
        using UEP1_TX_DMAfield = Field<UEP1_TX_DMA, 16, 0, read_write>; // endpoint 1 DMA buffer address
    };
    struct UEP2_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 96 * 8> // endpoint 2 DMA TX buffer address
    {
        using UEP2_TX_DMAfield = Field<UEP2_TX_DMA, 16, 0, read_write>; // endpoint 2 DMA buffer address
    };
    struct UEP3_TX_DMA__UH_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 100 * 8> // endpoint 3 DMA TX buffer address
    {
        using UEP3_TX_DMA__UH_TX_DMAfield = Field<UEP3_TX_DMA__UH_TX_DMA, 16, 0, read_write>; // endpoint 3 DMA buffer address
    };
    struct UEP4_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 104 * 8> // endpoint 4 DMA TX buffer address
    {
        using UEP4_TX_DMAfield = Field<UEP4_TX_DMA, 16, 0, read_write>; // endpoint 4 DMA buffer address
    };
    struct UEP5_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 108 * 8> // endpoint 5 DMA TX buffer address
    {
        using UEP5_TX_DMAfield = Field<UEP5_TX_DMA, 16, 0, read_write>; // endpoint 5 DMA buffer address
    };
    struct UEP6_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 112 * 8> // endpoint 6 DMA TX buffer address
    {
        using UEP6_TX_DMAfield = Field<UEP6_TX_DMA, 16, 0, read_write>; // endpoint 6 DMA buffer address
    };
    struct UEP7_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 116 * 8> // endpoint 7 DMA TX buffer address
    {
        using UEP7_TX_DMAfield = Field<UEP7_TX_DMA, 16, 0, read_write>; // endpoint 7 DMA buffer address
    };
    struct UEP8_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 120 * 8> // endpoint 8 DMA TX buffer address
    {
        using UEP8_TX_DMAfield = Field<UEP8_TX_DMA, 16, 0, read_write>; // endpoint 8 DMA buffer address
    };
    struct UEP9_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 124 * 8> // endpoint 9 DMA TX buffer address
    {
        using UEP9_TX_DMAfield = Field<UEP9_TX_DMA, 16, 0, read_write>; // endpoint 9 DMA buffer address
    };
    struct UEP10_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 128 * 8> // endpoint 10 DMA TX buffer address
    {
        using UEP10_TX_DMAfield = Field<UEP10_TX_DMA, 16, 0, read_write>; // endpoint 10 DMA buffer address
    };
    struct UEP11_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 132 * 8> // endpoint 11 DMA TX buffer address
    {
        using UEP11_TX_DMAfield = Field<UEP11_TX_DMA, 16, 0, read_write>; // endpoint 11 DMA buffer address
    };
    struct UEP12_TX_DMA____UH_SPLIT_DATA : PackedRegister<USBHD_pack, RegBitSize::b16, 136 * 8> // endpoint 12 DMA TX buffer address
    {
        using UEP12_TX_DMA___UH_SPLIT_DATA = Field<UEP12_TX_DMA____UH_SPLIT_DATA, 16, 0, read_write>; // endpoint 12 DMA buffer address
    };
    struct UEP13_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 140 * 8> // endpoint 13 DMA TX buffer address
    {
        using UEP13_TX_DMAfield = Field<UEP13_TX_DMA, 16, 0, read_write>; // endpoint 13 DMA buffer address
    };
    struct UEP14_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 144 * 8> // endpoint 14 DMA TX buffer address
    {
        using UEP14_TX_DMAfield = Field<UEP14_TX_DMA, 16, 0, read_write>; // endpoint 14 DMA buffer address
    };
    struct UEP15_TX_DMA : PackedRegister<USBHD_pack, RegBitSize::b16, 148 * 8> // endpoint 15 DMA TX buffer address
    {
        using UEP15_TX_DMAfield = Field<UEP15_TX_DMA, 16, 0, read_write>; // endpoint 15 DMA buffer address
    };
    struct UEP0_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 152 * 8> // endpoint 0 max acceptable length
    {
        using UEP0_MAX_LENfield = Field<UEP0_MAX_LEN, 11, 0, read_write>; // endpoint 0 max acceptable length
    };
    struct UEP1_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 156 * 8> // endpoint 1 max acceptable length
    {
        using UEP1_MAX_LENfield = Field<UEP1_MAX_LEN, 11, 0, read_write>; // endpoint 1 max acceptable length
    };
    struct UEP2_MAX_LEN__UH_RX_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 160 * 8> // endpoint 2 max acceptable length
    {
        using UEP2_MAX_LEN__UH_RX_MAX_LENfield = Field<UEP2_MAX_LEN__UH_RX_MAX_LEN, 11, 0, read_write>; // endpoint 2 max acceptable length
    };
    struct UEP3_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 164 * 8> // endpoint 3 MAX_LEN TX
    {
        using UEP3_MAX_LENfield = Field<UEP3_MAX_LEN, 11, 0, read_write>; // endpoint 3 max acceptable length
    };
    struct UEP4_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 168 * 8> // endpoint 4 max acceptable length
    {
        using UEP4_MAX_LENfield = Field<UEP4_MAX_LEN, 11, 0, read_write>; // endpoint 4 max acceptable length
    };
    struct UEP5_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 172 * 8> // endpoint 5 max acceptable length
    {
        using UEP5_MAX_LENfield = Field<UEP5_MAX_LEN, 11, 0, read_write>; // endpoint 5 max acceptable length
    };
    struct UEP6_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 176 * 8> // endpoint 6 max acceptable length
    {
        using UEP6_MAX_LENfield = Field<UEP6_MAX_LEN, 11, 0, read_write>; // endpoint 6 max acceptable length
    };
    struct UEP7_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 180 * 8> // endpoint 7 max acceptable length
    {
        using UEP7_MAX_LENfield = Field<UEP7_MAX_LEN, 11, 0, read_write>; // endpoint 7 max acceptable length
    };
    struct UEP8_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 184 * 8> // endpoint 8 max acceptable length
    {
        using UEP8_MAX_LENfield = Field<UEP8_MAX_LEN, 11, 0, read_write>; // endpoint 8 max acceptable length
    };
    struct UEP9_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 188 * 8> // endpoint 9 max acceptable length
    {
        using UEP9_MAX_LENfield = Field<UEP9_MAX_LEN, 11, 0, read_write>; // endpoint 9 max acceptable length
    };
    struct UEP10_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 192 * 8> // endpoint 10 max acceptable length
    {
        using UEP10_MAX_LENfield = Field<UEP10_MAX_LEN, 11, 0, read_write>; // endpoint 10 max acceptable length
    };
    struct UEP11_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 196 * 8> // endpoint 11 max acceptable length
    {
        using UEP11_MAX_LENfield = Field<UEP11_MAX_LEN, 11, 0, read_write>; // endpoint 11 max acceptable length
    };
    struct UEP12_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 200 * 8> // endpoint 12 max acceptable length
    {
        using UEP12_MAX_LENfield = Field<UEP12_MAX_LEN, 11, 0, read_write>; // endpoint 12 max acceptable length
    };
    struct UEP13_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 204 * 8> // endpoint 13 max acceptable length
    {
        using UEP13_MAX_LENfield = Field<UEP13_MAX_LEN, 11, 0, read_write>; // endpoint 13 max acceptable length
    };
    struct UEP14_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 208 * 8> // endpoint 14 max acceptable length
    {
        using UEP14_MAX_LENfield = Field<UEP14_MAX_LEN, 11, 0, read_write>; // endpoint 14 max acceptable length
    };
    struct UEP15_MAX_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 212 * 8> // endpoint 15 max acceptable length
    {
        using UEP15_MAX_LENfield = Field<UEP15_MAX_LEN, 11, 0, read_write>; // endpoint 15 max acceptable length
    };
    struct UEP0_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 216 * 8> // endpoint 0 send the length
    {
        using UEP0_T_LENfield = Field<UEP0_T_LEN, 11, 0, read_write>; // endpoint 0 send the length
    };
    struct UEP0_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 218 * 8> // endpoint 0 send control
    {
        using MASK_UEP_T_RES = Field<UEP0_T_CTRL, 2, 0, read_write>;  // endpoint 0 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP0_T_CTRL, 2, 3, read_write>;  // endpoint 0 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP0_T_CTRL, 1, 5, read_write>; // endpoint 0 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP0_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 219 * 8> // endpoint 0 send control
    {
        using MASK_UEP_R_RES = Field<UEP0_R_CTRL, 2, 0, read_write>; // endpoint 0 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP0_R_CTRL, 2, 3, read_write>; // endpoint 0 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP0_R_CTRL, 1, 5, read_only>; // endpoint 0 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP1_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 220 * 8> // endpoint 1 send the length
    {
        using UEP1_T_LENfield = Field<UEP1_T_LEN, 11, 0, read_write>; // endpoint 1 send the length
    };
    struct UEP1_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 222 * 8> // endpoint 1 send control
    {
        using MASK_UEP_T_RES = Field<UEP1_T_CTRL, 2, 0, read_write>;  // endpoint 1 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP1_T_CTRL, 2, 3, read_write>;  // endpoint 1 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP1_T_CTRL, 1, 5, read_write>; // endpoint 1 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP1_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 223 * 8> // endpoint 1 send control
    {
        using MASK_UEP_R_RES = Field<UEP1_R_CTRL, 2, 0, read_write>; // endpoint 1 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP1_R_CTRL, 2, 3, read_write>; // endpoint 1 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP1_R_CTRL, 1, 5, read_only>; // endpoint 1 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP2_T_LEN__UH_EP_PID : PackedRegister<USBHD_pack, RegBitSize::b16, 224 * 8> // endpoint 2 send the length
    {
        using UEP2_T_LEN__MASK_UH_ENDP__MASK_UH_TOKEN = Field<UEP2_T_LEN__UH_EP_PID, 11, 0, read_write>; // endpoint 2 send the length
    };
    struct UEP2_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 226 * 8> // endpoint 2 send control
    {
        using MASK_UEP_T_RES = Field<UEP2_T_CTRL, 2, 0, read_write>;  // endpoint 2 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP2_T_CTRL, 2, 3, read_write>;  // endpoint 2 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP2_T_CTRL, 1, 5, read_write>; // endpoint 2 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP2_R_CTRL__UH_RX_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 227 * 8> // endpoint 2 send control
    {
        using MASK_UEP_R_RES__MASK_UH_R_RES = Field<UEP2_R_CTRL__UH_RX_CTRL, 2, 0, read_write>;  // endpoint 2 control of the accept response to OUT transactions
        using bUH_R_RES_NO = Field<UEP2_R_CTRL__UH_RX_CTRL, 1, 2, read_write>;                   // bUH_R_RES_NO
        using MASK_UEP_R_TOG__MASK_UH_R_TOG = Field<UEP2_R_CTRL__UH_RX_CTRL, 2, 3, read_write>;  // endpoint 2 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO__bUH_R_AUTO_TOG = Field<UEP2_R_CTRL__UH_RX_CTRL, 1, 5, read_only>; // endpoint 2 synchronous trigger bit automatic filp enables the control bit
        using bUH_R_DATA_NO = Field<UEP2_R_CTRL__UH_RX_CTRL, 1, 6, read_write>;                  // bUH_R_DATA_NO
    };
    struct UEP3_T_LEN___UH_TX_LEN_H : PackedRegister<USBHD_pack, RegBitSize::b16, 228 * 8> // endpoint 3 send the length
    {
        using UEP3_T_LEN___UH_TX_LEN_Hfield = Field<UEP3_T_LEN___UH_TX_LEN_H, 11, 0, read_write>; // endpoint 3 send the length
    };
    struct UEP3_T_CTRL___UH_TX_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 230 * 8> // endpoint 3 send control
    {
        using MASK_UEP_T_RES_____MASK_UH_T_RES = Field<UEP3_T_CTRL___UH_TX_CTRL, 2, 0, read_write>;  // endpoint 3 control of the send response to IN transactions
        using bUH_T_RES_NO = Field<UEP3_T_CTRL___UH_TX_CTRL, 1, 2, read_write>;                      // bUH_T_RES_NO
        using MASK_UEP_T_TOG____MASK_UH_T_TOG = Field<UEP3_T_CTRL___UH_TX_CTRL, 2, 3, read_write>;   // endpoint 3 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO____bUH_T_AUTO_TOG = Field<UEP3_T_CTRL___UH_TX_CTRL, 1, 5, read_write>; // endpoint 3 synchronous trigger bit automatic filp enables the control bit
        using bUH_T_DATA_NO = Field<UEP3_T_CTRL___UH_TX_CTRL, 1, 6, read_write>;                     // bUH_T_DATA_NO
    };
    struct UEP3_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 231 * 8> // endpoint 3 send control
    {
        using MASK_UEP_R_RES = Field<UEP3_R_CTRL, 2, 0, read_write>; // endpoint 3 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP3_R_CTRL, 2, 3, read_write>; // endpoint 3 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP3_R_CTRL, 1, 5, read_only>; // endpoint 3 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP4_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 232 * 8> // endpoint 4 send the length
    {
        using UEP4_T_LENfield = Field<UEP4_T_LEN, 11, 0, read_write>; // endpoint 0 send the length
    };
    struct UEP4_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 234 * 8> // endpoint 4 send control
    {
        using MASK_UEP_T_RES = Field<UEP4_T_CTRL, 2, 0, read_write>;  // endpoint 4 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP4_T_CTRL, 2, 3, read_write>;  // endpoint 4 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP4_T_CTRL, 1, 5, read_write>; // endpoint 4 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP4_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 235 * 8> // endpoint 4 send control
    {
        using MASK_UEP_R_RES = Field<UEP4_R_CTRL, 2, 0, read_write>; // endpoint 4 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP4_R_CTRL, 2, 3, read_write>; // endpoint 4 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP4_R_CTRL, 1, 5, read_only>; // endpoint 4 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP5_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 236 * 8> // endpoint 5 send the length
    {
        using UEP5_T_LENfield = Field<UEP5_T_LEN, 11, 0, read_write>; // endpoint 5 send the length
    };
    struct UEP5_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 238 * 8> // endpoint 5 send control
    {
        using MASK_UEP_T_RES = Field<UEP5_T_CTRL, 2, 0, read_write>;  // endpoint 5 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP5_T_CTRL, 2, 3, read_write>;  // endpoint 5 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP5_T_CTRL, 1, 5, read_write>; // endpoint 5 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP5_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 239 * 8> // endpoint 5 send control
    {
        using MASK_UEP_R_RES = Field<UEP5_R_CTRL, 2, 0, read_write>; // endpoint 5 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP5_R_CTRL, 2, 3, read_write>; // endpoint 5 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP5_R_CTRL, 1, 5, read_only>; // endpoint 5 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP6_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 240 * 8> // endpoint 6 send the length
    {
        using UEP6_T_LENfield = Field<UEP6_T_LEN, 11, 0, read_write>; // endpoint 6 send the length
    };
    struct UEP6_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 242 * 8> // endpoint 6 send control
    {
        using MASK_UEP_T_RES = Field<UEP6_T_CTRL, 2, 0, read_write>;  // endpoint 6 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP6_T_CTRL, 2, 3, read_write>;  // endpoint 6 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP6_T_CTRL, 1, 5, read_write>; // endpoint 6 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP6_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 243 * 8> // endpoint 6 send control
    {
        using MASK_UEP_R_RES = Field<UEP6_R_CTRL, 2, 0, read_write>; // endpoint 6 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP6_R_CTRL, 2, 3, read_write>; // endpoint 6 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP6_R_CTRL, 1, 5, read_only>; // endpoint 6 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP7_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 244 * 8> // endpoint 7 send the length
    {
        using UEP7_T_LENfield = Field<UEP7_T_LEN, 11, 0, read_write>; // endpoint 7 send the length
    };
    struct UEP7_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 246 * 8> // endpoint 7 send control
    {
        using MASK_UEP_T_RES = Field<UEP7_T_CTRL, 2, 0, read_write>;  // endpoint 7 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP7_T_CTRL, 2, 3, read_write>;  // endpoint 7 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP7_T_CTRL, 1, 5, read_write>; // endpoint 7 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP7_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 247 * 8> // endpoint 7 send control
    {
        using MASK_UEP_R_RES = Field<UEP7_R_CTRL, 2, 0, read_write>; // endpoint 7 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP7_R_CTRL, 2, 3, read_write>; // endpoint 7 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP7_R_CTRL, 1, 5, read_only>; // endpoint 7 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP8_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 248 * 8> // endpoint 8 send the length
    {
        using UEP8_T_LENfield = Field<UEP8_T_LEN, 11, 0, read_write>; // endpoint 8 send the length
    };
    struct UEP8_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 250 * 8> // endpoint 8 send control
    {
        using MASK_UEP_T_RES = Field<UEP8_T_CTRL, 2, 0, read_write>;  // endpoint 8 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP8_T_CTRL, 2, 3, read_write>;  // endpoint 8 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP8_T_CTRL, 1, 5, read_write>; // endpoint 8 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP8_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 251 * 8> // endpoint 8 send control
    {
        using MASK_UEP_R_RES = Field<UEP8_R_CTRL, 2, 0, read_write>; // endpoint 8 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP8_R_CTRL, 2, 3, read_write>; // endpoint 8 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP8_R_CTRL, 1, 5, read_only>; // endpoint 8 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP9_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 252 * 8> // endpoint9 send the length
    {
        using UEP9_T_LENfield = Field<UEP9_T_LEN, 11, 0, read_write>; // endpoint 9 send the length
    };
    struct UEP9_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 254 * 8> // endpoint 9 send control
    {
        using MASK_UEP_T_RES = Field<UEP9_T_CTRL, 2, 0, read_write>;  // endpoint 9 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP9_T_CTRL, 2, 3, read_write>;  // endpoint 9 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP9_T_CTRL, 1, 5, read_write>; // endpoint 9 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP9_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 255 * 8> // endpoint 9 send control
    {
        using MASK_UEP_R_RES = Field<UEP9_R_CTRL, 2, 0, read_write>; // endpoint 9 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP9_R_CTRL, 2, 3, read_write>; // endpoint 9 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP9_R_CTRL, 1, 5, read_only>; // endpoint 9 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP10_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 256 * 8> // endpoint 10 send the length
    {
        using UEP10_T_LENfield = Field<UEP10_T_LEN, 11, 0, read_write>; // endpoint 10 send the length
    };
    struct UEP10_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 258 * 8> // endpoint 10 send control
    {
        using MASK_UEP_T_RES = Field<UEP10_T_CTRL, 2, 0, read_write>;  // endpoint 10 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP10_T_CTRL, 2, 3, read_write>;  // endpoint 10 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP10_T_CTRL, 1, 5, read_write>; // endpoint 10 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP10_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 259 * 8> // endpoint 10 send control
    {
        using MASK_UEP_R_RES = Field<UEP10_R_CTRL, 2, 0, read_write>; // endpoint 10 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP10_R_CTRL, 2, 3, read_write>; // endpoint 10 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP10_R_CTRL, 1, 5, read_only>; // endpoint 10 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP11_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 260 * 8> // endpoint 11 send the length
    {
        using UEP0_T_LEN = Field<UEP11_T_LEN, 11, 0, read_write>; // endpoint 11 send the length
    };
    struct UEP11_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 262 * 8> // endpoint 11 send control
    {
        using MASK_UEP_T_RES = Field<UEP11_T_CTRL, 2, 0, read_write>;  // endpoint 11 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP11_T_CTRL, 2, 3, read_write>;  // endpoint 11 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP11_T_CTRL, 1, 5, read_write>; // endpoint 11 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP11_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 263 * 8> // endpoint 11 send control
    {
        using MASK_UEP_R_RES = Field<UEP11_R_CTRL, 2, 0, read_write>; // endpoint 11 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP11_R_CTRL, 2, 3, read_write>; // endpoint 11 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP11_R_CTRL, 1, 5, read_only>; // endpoint 11 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP12_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 264 * 8> // endpoint 12 send the length
    {
        using UEP0_T_LEN = Field<UEP12_T_LEN, 11, 0, read_write>; // endpoint 12 send the length
    };
    struct UEP12_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 266 * 8> // endpoint 12 send control
    {
        using MASK_UEP_T_RES = Field<UEP12_T_CTRL, 2, 0, read_write>;  // endpoint 12 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP12_T_CTRL, 2, 3, read_write>;  // endpoint 12 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP12_T_CTRL, 1, 5, read_write>; // endpoint 12 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP12_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 267 * 8> // endpoint 12 send control
    {
        using MASK_UEP_R_RES = Field<UEP12_R_CTRL, 2, 0, read_write>; // endpoint 12 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP12_R_CTRL, 2, 3, read_write>; // endpoint 12 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP12_R_CTRL, 1, 5, read_only>; // endpoint 12 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP13_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 268 * 8> // endpoint 13 send the length
    {
        using UEP13_T_LENfield = Field<UEP13_T_LEN, 11, 0, read_write>; // endpoint 13 send the length
    };
    struct UEP13_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 270 * 8> // endpoint 13 send control
    {
        using MASK_UEP_T_RES = Field<UEP13_T_CTRL, 2, 0, read_write>;  // endpoint 13 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP13_T_CTRL, 2, 3, read_write>;  // endpoint 13 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP13_T_CTRL, 1, 5, read_write>; // endpoint 13 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP13_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 271 * 8> // endpoint 13 send control
    {
        using MASK_UEP_R_RES = Field<UEP13_R_CTRL, 2, 0, read_write>; // endpoint 13 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP13_R_CTRL, 2, 3, read_write>; // endpoint 13 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP13_R_CTRL, 1, 5, read_only>; // endpoint 13 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP14_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 272 * 8> // endpoint 14 send the length
    {
        using UEP14_T_LENfield = Field<UEP14_T_LEN, 11, 0, read_write>; // endpoint 14 send the length
    };
    struct UEP14_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 274 * 8> // endpoint 14 send control
    {
        using MASK_UEP_T_RES = Field<UEP14_T_CTRL, 2, 0, read_write>;  // endpoint 14 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP14_T_CTRL, 2, 3, read_write>;  // endpoint 14 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP14_T_CTRL, 1, 5, read_write>; // endpoint 14 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP14_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 275 * 8> // endpoint 14 send control
    {
        using MASK_UEP_R_RES = Field<UEP14_R_CTRL, 2, 0, read_write>; // endpoint 14 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP14_R_CTRL, 2, 3, read_write>; // endpoint 14 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP14_R_CTRL, 1, 5, read_only>; // endpoint 14 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP15_T_LEN : PackedRegister<USBHD_pack, RegBitSize::b16, 276 * 8> // endpoint 15 send the length
    {
        using UEP0_T_LEN = Field<UEP15_T_LEN, 11, 0, read_write>; // endpoint 15 send the length
    };
    struct UEP15_T_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 278 * 8> // endpoint 15 send control
    {
        using MASK_UEP_T_RES = Field<UEP15_T_CTRL, 2, 0, read_write>;  // endpoint 15 control of the send response to IN transactions
        using MASK_UEP_T_TOG = Field<UEP15_T_CTRL, 2, 3, read_write>;  // endpoint 15 synchronous trigger bit for the sender to prepare
        using bUEP_T_TOG_AUTO = Field<UEP15_T_CTRL, 1, 5, read_write>; // endpoint 15 synchronous trigger bit automatic filp enables the control bit
    };
    struct UEP15_R_CTRL : PackedRegister<USBHD_pack, RegBitSize::b8, 279 * 8> // endpoint 15 send control
    {
        using MASK_UEP_R_RES = Field<UEP15_R_CTRL, 2, 0, read_write>; // endpoint 15 control of the accept response to OUT transactions
        using MASK_UEP_R_TOG = Field<UEP15_R_CTRL, 2, 3, read_write>; // endpoint 15 synchronous trigger bit for the accept to prepare
        using bUEP_R_TOG_AUTO = Field<UEP15_R_CTRL, 1, 5, read_only>; // endpoint 15 synchronous trigger bit automatic filp enables the control bit
    };
}
namespace CRC
{
    using CRC_pack = RegisterPack<0x40023000, 1024>;
    struct DATAR : PackedRegister<CRC_pack, RegBitSize::b32, 0 * 8> // Data register
    {
        using DR = Field<DATAR, 32, 0, read_write>; // Data Register
    };
    struct IDATAR : PackedRegister<CRC_pack, RegBitSize::b32, 4 * 8> // Independent Data register
    {
        using IDR = Field<IDATAR, 8, 0, read_write>; // Independent Data register
    };
    struct CTLR : PackedRegister<CRC_pack, RegBitSize::b32, 8 * 8> // Control register
    {
        using RESET = Field<CTLR, 1, 0, write_only>; // Reset bit
    };
}
namespace FLASH
{
    using FLASH_pack = RegisterPack<0x40022000, 1024>;
    struct KEYR : PackedRegister<FLASH_pack, RegBitSize::b32, 4 * 8> // Flash key register
    {
        using KEYRfield = Field<KEYR, 32, 0, write_only>; // FPEC key
    };
    struct OBKEYR : PackedRegister<FLASH_pack, RegBitSize::b32, 8 * 8> // Flash option key register
    {
        using OPTKEY = Field<OBKEYR, 32, 0, write_only>; // Option byte key
    };
    struct STATR : PackedRegister<FLASH_pack, RegBitSize::b32, 12 * 8> // Status register
    {
        using ENHANCE_MOD_STA = Field<STATR, 1, 7, read_only>; // Enhance mode start
        using EOP = Field<STATR, 1, 5, read_write>;            // End of operation
        using WRPRTERR = Field<STATR, 1, 4, read_write>;       // Write protection error
        using WR_BSY = Field<STATR, 1, 1, read_only>;          // Quick page programming
        using BSY = Field<STATR, 1, 0, read_only>;             // Busy
    };
    struct CTLR : PackedRegister<FLASH_pack, RegBitSize::b32, 16 * 8> // Control register
    {
        using PG = Field<CTLR, 1, 0, read_write>;           // Programming
        using PER = Field<CTLR, 1, 1, read_write>;          // Page Erase
        using MER = Field<CTLR, 1, 2, read_write>;          // Mass Erase
        using OBPG = Field<CTLR, 1, 4, read_write>;         // Option byte programming
        using OBER = Field<CTLR, 1, 5, read_write>;         // Option byte erase
        using STRT = Field<CTLR, 1, 6, read_write>;         // Start
        using LOCK = Field<CTLR, 1, 7, read_write>;         // Lock
        using OBWRE = Field<CTLR, 1, 9, read_write>;        // Option bytes write enable
        using ERRIE = Field<CTLR, 1, 10, read_write>;       // Error interrupt enable
        using EOPIE = Field<CTLR, 1, 12, read_write>;       // End of operation interrupt
        using FLOCK = Field<CTLR, 1, 15, read_write>;       // Fast programmable lock
        using PAGE_PG = Field<CTLR, 1, 16, read_write>;     // Fast programming
        using PAGE_ER = Field<CTLR, 1, 17, read_write>;     // Fast erase
        using BER32 = Field<CTLR, 1, 18, read_write>;       // Block Erase 32K
        using BER64 = Field<CTLR, 1, 19, read_write>;       // Block Erase 64K
        using PGSTART = Field<CTLR, 1, 21, read_write>;     // Page Programming Start
        using RSENACT = Field<CTLR, 1, 22, read_write>;     // Reset Flash Enhance read mode
        using ENHANCEMODE = Field<CTLR, 1, 24, read_write>; // Flash Enhance read mode
        using SCKMODE = Field<CTLR, 1, 25, read_write>;     // Flash SCK mode
    };
    struct ADDR : PackedRegister<FLASH_pack, RegBitSize::b32, 20 * 8> // Flash address register
    {
        using FAR = Field<ADDR, 32, 0, write_only>; // Flash Address
    };
    struct OBR : PackedRegister<FLASH_pack, RegBitSize::b32, 28 * 8> // Option byte register
    {
        using OBERR = Field<OBR, 1, 0, read_only>;          // Option byte error
        using RDPRT = Field<OBR, 1, 1, read_only>;          // Read protection
        using IWDG_SW = Field<OBR, 1, 2, read_only>;        // IWDG_SW
        using STOP_RST = Field<OBR, 1, 3, read_only>;       // STOP_RST
        using STANDY_RST = Field<OBR, 1, 4, read_only>;     // STANDY_RST
        using SRAM_CODE_MODE = Field<OBR, 2, 8, read_only>; // SRAM_CODE_MODE
    };
    struct WPR : PackedRegister<FLASH_pack, RegBitSize::b32, 32 * 8> // Write protection register
    {
        using WRP = Field<WPR, 32, 0, read_only>; // Write protect
    };
    struct MODEKEYR : PackedRegister<FLASH_pack, RegBitSize::b32, 36 * 8> // Mode select register
    {
        using MODEKEYRfield = Field<MODEKEYR, 32, 0, write_only>; // Mode select
    };
}
namespace USB_OTG_FS
{
    using USB_OTG_FS_pack = RegisterPack<0x50000000, 262144>;
    struct USBHD_BASE_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 0 * 8> // USB base control
    {
        using USBHD_UC_DMA_EN = Field<USBHD_BASE_CTRL, 1, 0, read_write>;        // DMA enable and DMA interrupt enable for USB
        using USBHD_UC_CLR_ALL = Field<USBHD_BASE_CTRL, 1, 1, read_write>;       // force clear FIFO and count of USB
        using USBHD_UC_RESET_SIE = Field<USBHD_BASE_CTRL, 1, 2, read_write>;     // force reset USB SIE, need software clear
        using USBHD_UC_INT_BUSY = Field<USBHD_BASE_CTRL, 1, 3, read_write>;      // enable automatic responding busy for device mode or automatic pause for host mode during interrupt flag UIF_TRANSFER valid
        using USBHD_UC_SYS_CTRL_MASK = Field<USBHD_BASE_CTRL, 2, 4, read_write>; // USB device enable and internal pullup resistance enable
        using USBHD_UC_LOW_SPEED = Field<USBHD_BASE_CTRL, 1, 6, read_write>;     // enable USB low speed: 0=12Mbps, 1=1.5Mbps
        using RB_UC_HOST_MODE = Field<USBHD_BASE_CTRL, 1, 7, read_write>;        // enable USB host mode: 0=device mode, 1=host mode
    };
    struct USBHD_UDEV_CTRL__USBHD_UHOST_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 1 * 8> // USB device/host physical prot control
    {
        using USBHD_UH_PORT_EN__USBHD_UD_PORT_EN = Field<USBHD_UDEV_CTRL__USBHD_UHOST_CTRL, 1, 0, read_write>;     // enable USB port: 0=disable, 1=enable port, automatic disabled if USB device detached
        using USBHD_UH_BUS_RESET__USBHD_UD_GP_BIT = Field<USBHD_UDEV_CTRL__USBHD_UHOST_CTRL, 1, 1, read_write>;    // force clear FIFO and count of USB
        using USBHD_UH_LOW_SPEED__USBHD_UD_LOW_SPEED = Field<USBHD_UDEV_CTRL__USBHD_UHOST_CTRL, 1, 2, read_write>; // enable USB port low speed: 0=full speed, 1=low speed
        using USBHD_UH_DM_PIN__USBHD_UD_DM_PIN = Field<USBHD_UDEV_CTRL__USBHD_UHOST_CTRL, 1, 4, read_only>;             // ReadOnly: indicate current UDM pin level
        using USBHD_UH_DP_PIN__USBHD_UD_DP_PIN = Field<USBHD_UDEV_CTRL__USBHD_UHOST_CTRL, 1, 5, read_only>;             // USB device enable and internal pullup resistance enable
        using USBHD_UH_PD_DIS__USBHD_UD_PD_DIS = Field<USBHD_UDEV_CTRL__USBHD_UHOST_CTRL, 1, 7, read_write>;       // disable USB UDP/UDM pulldown resistance: 0=enable pulldown, 1=disable
    };
    struct R8_USB_INT_EN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 2 * 8> // USB interrupt enable
    {
        using USBHD_UIE_BUS_RST__USBHD_UIE_DETECT = Field<R8_USB_INT_EN, 1, 0, read_write>; // enable interrupt for USB bus reset event for USB device mode
        using USBHD_UIE_TRANSFER = Field<R8_USB_INT_EN, 1, 1, read_write>;                  // enable interrupt for USB transfer completion
        using USBHD_UIE_SUSPEND = Field<R8_USB_INT_EN, 1, 2, read_write>;                   // enable interrupt for USB suspend or resume event
        using USBHD_UIE_HST_SOF = Field<R8_USB_INT_EN, 1, 3, read_write>;                   // enable interrupt for host SOF timer action for USB host mode
        using USBHD_UIE_FIFO_OV = Field<R8_USB_INT_EN, 1, 4, read_write>;                   // enable interrupt for FIFO overflow
        using USBHD_UIE_DEV_NAK = Field<R8_USB_INT_EN, 1, 6, read_write>;                   // enable interrupt for NAK responded for USB device mode
        using USBHD_UIE_DEV_SOF = Field<R8_USB_INT_EN, 1, 7, read_write>;                   // enable interrupt for SOF received for USB device mode
    };
    struct R8_USB_DEV_AD : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 3 * 8> // USB device address
    {
        using MASK_USB_ADDR = Field<R8_USB_DEV_AD, 7, 0, read_write>; // bit mask for USB device address
        using RB_UDA_GP_BIT = Field<R8_USB_DEV_AD, 1, 7, read_write>; // general purpose bit
    };
    struct R8_USB_MIS_ST : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 5 * 8> // USB miscellaneous status
    {
        using RB_UMS_DEV_ATTACH = Field<R8_USB_MIS_ST, 1, 0, read_only>; // RO, indicate device attached status on USB host
        using RB_UMS_DM_LEVEL = Field<R8_USB_MIS_ST, 1, 1, read_only>;   // RO, indicate UDM level saved at device attached to USB host
        using RB_UMS_SUSPEND = Field<R8_USB_MIS_ST, 1, 2, read_only>;    // RO, indicate USB suspend status
        using RB_UMS_BUS_RESET = Field<R8_USB_MIS_ST, 1, 3, read_only>;  // RO, indicate USB bus reset status
        using RB_UMS_R_FIFO_RDY = Field<R8_USB_MIS_ST, 1, 4, read_only>; // RO, indicate USB receiving FIFO ready status (not empty)
        using RB_UMS_SIE_FREE = Field<R8_USB_MIS_ST, 1, 5, read_only>;   // RO, indicate USB SIE free status
        using RB_UMS_SOF_ACT = Field<R8_USB_MIS_ST, 1, 6, read_only>;    // RO, indicate host SOF timer action status for USB host
        using RB_UMS_SOF_PRES = Field<R8_USB_MIS_ST, 1, 7, read_only>;   // RO, indicate host SOF timer presage status
    };
    struct R8_USB_INT_FG : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 6 * 8> // USB interrupt flag
    {
        using RB_UIF_BUS_RST__RB_UIF_DETECT = Field<R8_USB_INT_FG, 1, 0, read_write>; // bus reset event interrupt flag for USB device mode, direct bit address clear or write 1 to clear;device detected event interrupt flag for USB host mode, direct bit address clear or write 1 to clear
        using RB_UIF_TRANSFER = Field<R8_USB_INT_FG, 1, 1, read_write>;               // USB transfer completion interrupt flag, direct bit address clear or write 1 to clear
        using RB_UIF_SUSPEND = Field<R8_USB_INT_FG, 1, 2, read_write>;                // USB suspend or resume event interrupt flag, direct bit address clear or write 1 to clear
        using RB_UIF_HST_SOF = Field<R8_USB_INT_FG, 1, 3, read_write>;                // host SOF timer interrupt flag for USB host, direct bit address clear or write 1 to clear
        using RB_UIF_FIFO_OV = Field<R8_USB_INT_FG, 1, 4, read_write>;                // FIFO overflow interrupt flag for USB, direct bit address clear or write 1 to clear
        using RB_U_SIE_FREE = Field<R8_USB_INT_FG, 1, 5, read_only>;                  // RO, indicate USB SIE free status
        using RB_U_TOG_OK = Field<R8_USB_INT_FG, 1, 6, read_only>;                    // RO, indicate current USB transfer toggle is OK
        using RB_U_IS_NAK = Field<R8_USB_INT_FG, 1, 7, read_only>;                    // RO, indicate current USB transfer is NAK received
    };
    struct R8_USB_INT_ST : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 7 * 8> // USB interrupt status
    {
        using MASK_UIS_H_RES__MASK_UIS_ENDP = Field<R8_USB_INT_ST, 4, 0, read_only>; // RO, bit mask of current transfer handshake response for USB host mode: 0000=no response, time out from device, others=handshake response PID received;RO, bit mask of current transfer endpoint number for USB device mode
        using MASK_UIS_TOKEN = Field<R8_USB_INT_ST, 2, 4, read_only>;                // RO, bit mask of current token PID code received for USB device mode
        using RB_UIS_TOG_OK = Field<R8_USB_INT_ST, 1, 6, read_only>;                 // RO, indicate current USB transfer toggle is OK
        using RB_UIS_IS_NAK = Field<R8_USB_INT_ST, 1, 7, read_only>;                 // RO, indicate current USB transfer is NAK received for USB device mode
    };
    struct R16_USB_RX_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b16, 8 * 8> // USB receiving length
    {
    };
    struct R8_UEP4_1_MOD : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 12 * 8> // endpoint 4/1 mode
    {
        using RB_UEP4_TX_EN = Field<R8_UEP4_1_MOD, 1, 2, read_write>;   // enable USB endpoint 4 transmittal (IN)
        using RB_UEP4_RX_EN = Field<R8_UEP4_1_MOD, 1, 3, read_write>;   // enable USB endpoint 4 receiving (OUT)
        using RB_UEP1_BUF_MOD = Field<R8_UEP4_1_MOD, 1, 4, read_write>; // buffer mode of USB endpoint 1
        using RB_UEP1_TX_EN = Field<R8_UEP4_1_MOD, 1, 6, read_write>;   // enable USB endpoint 1 transmittal (IN)
        using RB_UEP1_RX_EN = Field<R8_UEP4_1_MOD, 1, 7, read_write>;   // enable USB endpoint 1 receiving (OUT)
    };
    struct R8_UEP2_3_MOD__R8_UH_EP_MOD : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 13 * 8> // endpoint 2/3 mode;host endpoint mode
    {
        using RB_UEP2_BUF_MOD__RB_UH_EP_RBUF_MOD = Field<R8_UEP2_3_MOD__R8_UH_EP_MOD, 1, 0, read_write>; // buffer mode of USB endpoint 2;buffer mode of USB host IN endpoint
        using RB_UEP2_TX_EN = Field<R8_UEP2_3_MOD__R8_UH_EP_MOD, 1, 2, read_write>;                      // enable USB endpoint 2 transmittal (IN)
        using RB_UEP2_RX_EN__RB_UH_EP_RX_EN = Field<R8_UEP2_3_MOD__R8_UH_EP_MOD, 1, 3, read_write>;      // enable USB endpoint 2 receiving (OUT);enable USB host IN endpoint receiving
        using RB_UEP3_BUF_MOD__RB_UH_EP_TBUF_MOD = Field<R8_UEP2_3_MOD__R8_UH_EP_MOD, 1, 4, read_write>; // buffer mode of USB endpoint 3;buffer mode of USB host OUT endpoint
        using RB_UEP3_TX_EN__RB_UH_EP_TX_EN = Field<R8_UEP2_3_MOD__R8_UH_EP_MOD, 1, 6, read_write>;      // enable USB endpoint 3 transmittal (IN);enable USB host OUT endpoint transmittal
        using RB_UEP3_RX_EN = Field<R8_UEP2_3_MOD__R8_UH_EP_MOD, 1, 7, read_write>;                      // enable USB endpoint 3 receiving (OUT)
    };
    struct R8_UEP5_6_MOD : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 14 * 8> // endpoint 5/6 mode
    {
        using RB_UEP5_BUF_MOD = Field<R8_UEP5_6_MOD, 1, 0, read_write>; // buffer mode of USB endpoint 5
        using RB_UEP5_TX_EN = Field<R8_UEP5_6_MOD, 1, 2, read_write>;   // enable USB endpoint 5 transmittal (IN)
        using RB_UEP5_RX_EN = Field<R8_UEP5_6_MOD, 1, 3, read_write>;   // enable USB endpoint 5 receiving (OUT)
        using RB_UEP6_BUF_MOD = Field<R8_UEP5_6_MOD, 1, 4, read_write>; // buffer mode of USB endpoint 6
        using RB_UEP6_TX_EN = Field<R8_UEP5_6_MOD, 1, 6, read_write>;   // enable USB endpoint 6 transmittal (IN)
        using RB_UEP3_RX_EN = Field<R8_UEP5_6_MOD, 1, 7, read_write>;   // enable USB endpoint 6 receiving (OUT)
    };
    struct R8_UEP7_MOD : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 15 * 8> // endpoint 7 mode
    {
        using RB_UEP7_BUF_MOD = Field<R8_UEP7_MOD, 1, 0, read_write>; // buffer mode of USB endpoint 7
        using RB_UEP7_TX_EN = Field<R8_UEP7_MOD, 1, 2, read_write>;   // enable USB endpoint 7 transmittal (IN)
        using RB_UEP7_RX_EN = Field<R8_UEP7_MOD, 1, 3, read_write>;   // enable USB endpoint 7 receiving (OUT)
    };
    struct R32_UEP0_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 16 * 8> // endpoint 0 DMA buffer address
    {
    };
    struct R32_UEP1_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 20 * 8> // endpoint 1 DMA buffer address
    {
    };
    struct R32_UEP2_DMA__R32_UH_RX_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 24 * 8> // endpoint 2 DMA buffer address;host rx endpoint buffer high address
    {
    };
    struct R32_UEP3_DMA__R32_UH_TX_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 28 * 8> // endpoint 3 DMA buffer address;host tx endpoint buffer high address
    {
    };
    struct R32_UEP4_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 32 * 8> // endpoint 4 DMA buffer address
    {
    };
    struct R32_UEP5_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 36 * 8> // endpoint 5 DMA buffer address
    {
    };
    struct R32_UEP6_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 40 * 8> // endpoint 6 DMA buffer address
    {
    };
    struct R32_UEP7_DMA : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 44 * 8> // endpoint 7 DMA buffer address
    {
    };
    struct R8_UEP0_T_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 48 * 8> // endpoint 0 transmittal length
    {
    };
    struct R8_UEP0_T_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 50 * 8> // endpoint 0 control
    {
        using MASK_UEP_T_RES = Field<R8_UEP0_T_CTRL, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG = Field<R8_UEP0_T_CTRL, 1, 2, read_write>;    // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP0_T_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP0_R_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 51 * 8> // endpoint 0 control
    {
        using MASK_UEP_R_RES = Field<R8_UEP0_R_CTRL, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG = Field<R8_UEP0_R_CTRL, 1, 2, read_write>;    // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP0_R_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP1_T_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 52 * 8> // endpoint 1 transmittal length
    {
    };
    struct R8_UEP1_T_CTRL___USBHD_UH_SETUP : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 54 * 8> // endpoint 1 control
    {
        using MASK_UEP_T_RES = Field<R8_UEP1_T_CTRL___USBHD_UH_SETUP, 2, 0, read_write>;      // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG_ = Field<R8_UEP1_T_CTRL___USBHD_UH_SETUP, 1, 2, read_write>;    // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP1_T_CTRL___USBHD_UH_SETUP, 1, 3, read_write>;  // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
        using USBHD_UH_SOF_EN = Field<R8_UEP1_T_CTRL___USBHD_UH_SETUP, 1, 6, read_write>;     // USB host automatic SOF enable
        using USBHD_UH_PRE_PID_EN = Field<R8_UEP1_T_CTRL___USBHD_UH_SETUP, 1, 7, read_write>; // USB host PRE PID enable for low speed device via hub
    };
    struct R8_UEP1_R_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 55 * 8> // endpoint 1 control
    {
        using MASK_UEP_R_RES = Field<R8_UEP1_R_CTRL, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG = Field<R8_UEP1_R_CTRL, 1, 2, read_write>;    // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP1_R_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP2_T_LEN__USBHD_UH_EP_PID : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 56 * 8> // endpoint 2 transmittal length
    {
        using USBHD_UH_ENDP_MASK = Field<R8_UEP2_T_LEN__USBHD_UH_EP_PID, 4, 0, read_write>;  // bit mask of endpoint number for USB host transfer
        using USBHD_UH_TOKEN_MASK = Field<R8_UEP2_T_LEN__USBHD_UH_EP_PID, 4, 4, read_write>; // bit mask of token PID for USB host transfer
    };
    struct R8_UEP2_T_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 58 * 8> // endpoint 2 control
    {
        using MASK_UEP_T_RES = Field<R8_UEP2_T_CTRL, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG_ = Field<R8_UEP2_T_CTRL, 1, 2, read_write>;   // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP2_T_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 59 * 8> // endpoint 2 control
    {
        using MASK_UEP_R_RES___USBHD_UH_R_RES = Field<R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL, 2, 0, read_write>;          // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG___USBHD_UH_R_TOG = Field<R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL, 1, 2, read_write>;         // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG___USBHD_UH_R_AUTO_TOG = Field<R8_UEP2_R_CTRL__USBHD_UH_RX_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP3_T_LEN__USBHD_UH_TX_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 60 * 8> // endpoint 3 transmittal length
    {
    };
    struct R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 62 * 8> // endpoint 3 control
    {
        using MASK_UEP_T_RES___USBHD_UH_T_RES = Field<R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL, 2, 0, read_write>;         // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG___USBHD_UH_T_TOG = Field<R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL, 1, 2, read_write>;        // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG = Field<R8_UEP3_T_CTRL__USBHD_UH_TX_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP3_R_CTRL_ : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 63 * 8> // endpoint 3 control
    {
        using MASK_UEP_R_RES = Field<R8_UEP3_R_CTRL_, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG = Field<R8_UEP3_R_CTRL_, 1, 2, read_write>;    // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP3_R_CTRL_, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP4_T_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 64 * 8> // endpoint 4 transmittal length
    {
    };
    struct R8_UEP4_T_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 66 * 8> // endpoint 4 control
    {
        using MASK_UEP_T_RES = Field<R8_UEP4_T_CTRL, 2, 0, read_write>;                          // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG___USBHD_UH_T_TOG = Field<R8_UEP4_T_CTRL, 1, 2, read_write>;        // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG = Field<R8_UEP4_T_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP4_R_CTRL_ : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 67 * 8> // endpoint 4 control
    {
        using MASK_UEP_R_RES = Field<R8_UEP4_R_CTRL_, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG = Field<R8_UEP4_R_CTRL_, 1, 2, read_write>;    // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP4_R_CTRL_, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP5_T_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 68 * 8> // endpoint 5 transmittal length
    {
    };
    struct R8_UEP5_T_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 70 * 8> // endpoint 5 control
    {
        using MASK_UEP_T_RES = Field<R8_UEP5_T_CTRL, 2, 0, read_write>;                          // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG___USBHD_UH_T_TOG = Field<R8_UEP5_T_CTRL, 1, 2, read_write>;        // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG = Field<R8_UEP5_T_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP5_R_CTRL_ : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 71 * 8> // endpoint 5 control
    {
        using MASK_UEP_R_RES = Field<R8_UEP5_R_CTRL_, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG = Field<R8_UEP5_R_CTRL_, 1, 2, read_write>;    // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP5_R_CTRL_, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP6_T_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 72 * 8> // endpoint 6 transmittal length
    {
    };
    struct R8_UEP6_T_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 74 * 8> // endpoint 6 control
    {
        using MASK_UEP_T_RES = Field<R8_UEP6_T_CTRL, 2, 0, read_write>;                          // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG___USBHD_UH_T_TOG = Field<R8_UEP6_T_CTRL, 1, 2, read_write>;        // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG = Field<R8_UEP6_T_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP6_R_CTRL_ : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 75 * 8> // endpoint 6 control
    {
        using MASK_UEP_R_RES = Field<R8_UEP6_R_CTRL_, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG = Field<R8_UEP6_R_CTRL_, 1, 2, read_write>;    // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP6_R_CTRL_, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP7_T_LEN : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 76 * 8> // endpoint 7 transmittal length
    {
    };
    struct R8_UEP7_T_CTRL : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 78 * 8> // endpoint 7 control
    {
        using MASK_UEP_T_RES = Field<R8_UEP7_T_CTRL, 2, 0, read_write>;                          // bit mask of handshake response type for USB endpoint X transmittal (IN)
        using USBHD_UEP_T_TOG___USBHD_UH_T_TOG = Field<R8_UEP7_T_CTRL, 1, 2, read_write>;        // prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG__USBHD_UH_T_AUTO_TOG = Field<R8_UEP7_T_CTRL, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct R8_UEP7_R_CTRL_ : PackedRegister<USB_OTG_FS_pack, RegBitSize::b8, 79 * 8> // endpoint 7 control
    {
        using MASK_UEP_R_RES = Field<R8_UEP7_R_CTRL_, 2, 0, read_write>;     // bit mask of handshake response type for USB endpoint X receiving (OUT)
        using USBHD_UEP_R_TOG = Field<R8_UEP7_R_CTRL_, 1, 2, read_write>;    // expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
        using USBHD_UEP_AUTO_TOG = Field<R8_UEP7_R_CTRL_, 1, 3, read_write>; // enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
    };
    struct USB_OTG_CR : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 84 * 8> // usb otg control
    {
        using USB_OTG_CR_DISCHARGEVBUS = Field<USB_OTG_CR, 1, 0, read_write>; // usb otg control
        using USB_OTG_CR_CHARGEVBUS = Field<USB_OTG_CR, 1, 1, read_write>;    // usb otg control
        using USB_OTG_CR_IDPU = Field<USB_OTG_CR, 1, 2, read_write>;          // usb otg control
        using USB_OTG_CR_OTG_EN = Field<USB_OTG_CR, 1, 3, read_write>;        // usb otg control
        using USB_OTG_CR_VBUS = Field<USB_OTG_CR, 1, 4, read_write>;          // usb otg control
        using USB_OTG_CR_SESS = Field<USB_OTG_CR, 1, 5, read_write>;          // usb otg control
    };
    struct USB_OTG_SR : PackedRegister<USB_OTG_FS_pack, RegBitSize::b32, 88 * 8> // usb otg status
    {
        using USB_OTG_SR_VBUS_VLD = Field<USB_OTG_SR, 1, 0, read_write>; // usb otg status
        using USB_OTG_SR_SESS_VLD = Field<USB_OTG_SR, 1, 1, read_write>; // usb otg status
        using USB_OTG_SR_SESS_END = Field<USB_OTG_SR, 1, 2, read_write>; // usb otg status
        using USB_OTG_SR_ID_DIG = Field<USB_OTG_SR, 1, 3, read_write>;   // usb otg status
    };
}
namespace PFIC
{
    using PFIC_pack = RegisterPack<0xe000e000, 4352>;
    struct ISR1 : PackedRegister<PFIC_pack, RegBitSize::b32, 0 * 8> // Interrupt Status
    {
        using INTENSTA2_3 = Field<ISR1, 2, 2, read_only>;     // Interrupt ID Status
        using INTENSTA12_31 = Field<ISR1, 20, 12, read_only>; // Interrupt ID Status
    };
    struct ISR2 : PackedRegister<PFIC_pack, RegBitSize::b32, 4 * 8> // Interrupt Status
    {
        using INTENSTA = Field<ISR2, 32, 0, read_only>; // Interrupt ID Status
    };
    struct ISR3 : PackedRegister<PFIC_pack, RegBitSize::b32, 8 * 8> // Interrupt Status
    {
        using INTENSTA = Field<ISR3, 32, 0, read_only>; // Interrupt ID Status
    };
    struct ISR4 : PackedRegister<PFIC_pack, RegBitSize::b32, 12 * 8> // Interrupt Status
    {
        using INTENSTA = Field<ISR4, 8, 0, read_only>; // Interrupt ID Status
    };
    struct IPR1 : PackedRegister<PFIC_pack, RegBitSize::b32, 32 * 8> // Interrupt Pending Register
    {
        using PENDSTA2_3 = Field<IPR1, 2, 2, read_only>;     // PENDSTA
        using PENDSTA12_31 = Field<IPR1, 20, 12, read_only>; // PENDSTA
    };
    struct IPR2 : PackedRegister<PFIC_pack, RegBitSize::b32, 36 * 8> // Interrupt Pending Register
    {
        using PENDSTA = Field<IPR2, 32, 0, read_only>; // PENDSTA
    };
    struct IPR3 : PackedRegister<PFIC_pack, RegBitSize::b32, 40 * 8> // Interrupt Pending Register
    {
        using PENDSTA = Field<IPR3, 32, 0, read_only>; // PENDSTA
    };
    struct IPR4 : PackedRegister<PFIC_pack, RegBitSize::b32, 44 * 8> // Interrupt Pending Register
    {
        using PENDSTA = Field<IPR4, 8, 0, read_only>; // PENDSTA
    };
    struct ITHRESDR : PackedRegister<PFIC_pack, RegBitSize::b32, 64 * 8> // Interrupt Priority
    {
        using THRESHOLD = Field<ITHRESDR, 8, 0, read_write>; // THRESHOLD
    };
    struct CFGR : PackedRegister<PFIC_pack, RegBitSize::b32, 72 * 8> // Interrupt Config Register
    {
        using RESETSYS = Field<CFGR, 1, 7, write_only>;  // RESETSYS
        using KEYCODE = Field<CFGR, 16, 16, write_only>; // KEYCODE
    };
    struct GISR : PackedRegister<PFIC_pack, RegBitSize::b32, 76 * 8> // Interrupt Global Register
    {
        using NESTSTA = Field<GISR, 8, 0, read_only>;  // NESTSTA
        using GACTSTA = Field<GISR, 1, 8, read_only>;  // GACTSTA
        using GPENDSTA = Field<GISR, 1, 9, read_only>; // GPENDSTA
    };
    struct VTFIDR : PackedRegister<PFIC_pack, RegBitSize::b32, 80 * 8> // ID Config Register
    {
        using VTFID0 = Field<VTFIDR, 8, 0, read_write>;  // VTFID0
        using VTFID1 = Field<VTFIDR, 8, 8, read_write>;  // VTFID1
        using VTFID2 = Field<VTFIDR, 8, 16, read_write>; // VTFID2
        using VTFID3 = Field<VTFIDR, 8, 24, read_write>; // VTFID3
    };
    struct VTFADDRR0 : PackedRegister<PFIC_pack, RegBitSize::b32, 96 * 8> // Interrupt 0 address
    {
        using VTF0EN = Field<VTFADDRR0, 1, 0, read_write>; // VTF0EN
        using ADDR0 = Field<VTFADDRR0, 31, 1, read_write>; // ADDR0
    };
    struct VTFADDRR1 : PackedRegister<PFIC_pack, RegBitSize::b32, 100 * 8> // Interrupt 1 address
    {
        using VTF1EN = Field<VTFADDRR1, 1, 0, read_write>; // VTF1EN
        using ADDR1 = Field<VTFADDRR1, 31, 1, read_write>; // ADDR1
    };
    struct VTFADDRR2 : PackedRegister<PFIC_pack, RegBitSize::b32, 104 * 8> // Interrupt 2 address
    {
        using VTF2EN = Field<VTFADDRR2, 1, 0, read_write>; // VTF2EN
        using ADDR2 = Field<VTFADDRR2, 31, 1, read_write>; // ADDR2
    };
    struct VTFADDRR3 : PackedRegister<PFIC_pack, RegBitSize::b32, 108 * 8> // Interrupt 3 address
    {
        using VTF3EN = Field<VTFADDRR3, 1, 0, read_write>; // VTF3EN
        using ADDR3 = Field<VTFADDRR3, 31, 1, read_write>; // ADDR3
    };
    struct IENR1 : PackedRegister<PFIC_pack, RegBitSize::b32, 256 * 8> // Interrupt Setting Register
    {
        using INTEN = Field<IENR1, 20, 12, write_only>; // INTEN
    };
    struct IENR2 : PackedRegister<PFIC_pack, RegBitSize::b32, 260 * 8> // Interrupt Setting Register
    {
        using INTEN = Field<IENR2, 32, 0, write_only>; // INTEN
    };
    struct IENR3 : PackedRegister<PFIC_pack, RegBitSize::b32, 264 * 8> // Interrupt Setting Register
    {
        using INTEN = Field<IENR3, 32, 0, write_only>; // INTEN
    };
    struct IENR4 : PackedRegister<PFIC_pack, RegBitSize::b32, 268 * 8> // Interrupt Setting Register
    {
        using INTEN = Field<IENR4, 8, 0, write_only>; // INTEN
    };
    struct IRER1 : PackedRegister<PFIC_pack, RegBitSize::b32, 384 * 8> // Interrupt Clear Register
    {
        using INTRSET = Field<IRER1, 20, 12, write_only>; // INTRSET
    };
    struct IRER2 : PackedRegister<PFIC_pack, RegBitSize::b32, 388 * 8> // Interrupt Clear Register
    {
        using INTRSET = Field<IRER2, 32, 0, write_only>; // INTRSET
    };
    struct IRER3 : PackedRegister<PFIC_pack, RegBitSize::b32, 392 * 8> // Interrupt Clear Register
    {
        using INTRSET = Field<IRER3, 32, 0, write_only>; // INTRSET
    };
    struct IRER4 : PackedRegister<PFIC_pack, RegBitSize::b32, 396 * 8> // Interrupt Clear Register
    {
        using INTRSET = Field<IRER4, 8, 0, write_only>; // INTRSET
    };
    struct IPSR1 : PackedRegister<PFIC_pack, RegBitSize::b32, 512 * 8> // Interrupt Pending Register
    {
        using PENDSET2_3 = Field<IPSR1, 2, 2, write_only>;     // PENDSET
        using PENDSET12_31 = Field<IPSR1, 20, 12, write_only>; // PENDSET
    };
    struct IPSR2 : PackedRegister<PFIC_pack, RegBitSize::b32, 516 * 8> // Interrupt Pending Register
    {
        using PENDSET = Field<IPSR2, 32, 0, write_only>; // PENDSET
    };
    struct IPSR3 : PackedRegister<PFIC_pack, RegBitSize::b32, 520 * 8> // Interrupt Pending Register
    {
        using PENDSET = Field<IPSR3, 32, 0, write_only>; // PENDSET
    };
    struct IPSR4 : PackedRegister<PFIC_pack, RegBitSize::b32, 524 * 8> // Interrupt Pending Register
    {
        using PENDSET = Field<IPSR4, 8, 0, write_only>; // PENDSET
    };
    struct IPRR1 : PackedRegister<PFIC_pack, RegBitSize::b32, 640 * 8> // Interrupt Pending Clear Register
    {
        using PENDRESET2_3 = Field<IPRR1, 2, 2, write_only>;     // PENDRESET
        using PENDRESET12_31 = Field<IPRR1, 20, 12, write_only>; // PENDRESET
    };
    struct IPRR2 : PackedRegister<PFIC_pack, RegBitSize::b32, 644 * 8> // Interrupt Pending Clear Register
    {
        using PENDRESET = Field<IPRR2, 32, 0, write_only>; // PENDRESET
    };
    struct IPRR3 : PackedRegister<PFIC_pack, RegBitSize::b32, 648 * 8> // Interrupt Pending Clear Register
    {
        using PENDRESET = Field<IPRR3, 32, 0, write_only>; // PENDRESET
    };
    struct IPRR4 : PackedRegister<PFIC_pack, RegBitSize::b32, 652 * 8> // Interrupt Pending Clear Register
    {
        using PENDRESET = Field<IPRR4, 8, 0, write_only>; // PENDRESET
    };
    struct IACTR1 : PackedRegister<PFIC_pack, RegBitSize::b32, 768 * 8> // Interrupt ACTIVE Register
    {
        using IACTS2_3 = Field<IACTR1, 2, 2, write_only>;     // IACTS
        using IACTS12_31 = Field<IACTR1, 20, 12, write_only>; // IACTS
    };
    struct IACTR2 : PackedRegister<PFIC_pack, RegBitSize::b32, 772 * 8> // Interrupt ACTIVE Register
    {
        using IACTS = Field<IACTR2, 32, 0, write_only>; // IACTS
    };
    struct IACTR3 : PackedRegister<PFIC_pack, RegBitSize::b32, 776 * 8> // Interrupt ACTIVE Register
    {
        using IACTS = Field<IACTR3, 32, 0, write_only>; // IACTS
    };
    struct IACTR4 : PackedRegister<PFIC_pack, RegBitSize::b32, 780 * 8> // Interrupt ACTIVE Register
    {
        using IACTS = Field<IACTR4, 8, 0, write_only>; // IACTS
    };
    struct IPRIOR0 : PackedRegister<PFIC_pack, RegBitSize::b8, 1024 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR1 : PackedRegister<PFIC_pack, RegBitSize::b8, 1025 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR2 : PackedRegister<PFIC_pack, RegBitSize::b8, 1026 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR3 : PackedRegister<PFIC_pack, RegBitSize::b8, 1027 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR4 : PackedRegister<PFIC_pack, RegBitSize::b8, 1028 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR5 : PackedRegister<PFIC_pack, RegBitSize::b8, 1029 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR6 : PackedRegister<PFIC_pack, RegBitSize::b8, 1030 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR7 : PackedRegister<PFIC_pack, RegBitSize::b8, 1031 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR8 : PackedRegister<PFIC_pack, RegBitSize::b8, 1032 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR9 : PackedRegister<PFIC_pack, RegBitSize::b8, 1033 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR10 : PackedRegister<PFIC_pack, RegBitSize::b8, 1034 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR11 : PackedRegister<PFIC_pack, RegBitSize::b8, 1035 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR12 : PackedRegister<PFIC_pack, RegBitSize::b8, 1036 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR13 : PackedRegister<PFIC_pack, RegBitSize::b8, 1037 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR14 : PackedRegister<PFIC_pack, RegBitSize::b8, 1038 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR15 : PackedRegister<PFIC_pack, RegBitSize::b8, 1039 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR16 : PackedRegister<PFIC_pack, RegBitSize::b8, 1040 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR17 : PackedRegister<PFIC_pack, RegBitSize::b8, 1041 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR18 : PackedRegister<PFIC_pack, RegBitSize::b8, 1042 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR19 : PackedRegister<PFIC_pack, RegBitSize::b8, 1043 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR20 : PackedRegister<PFIC_pack, RegBitSize::b8, 1044 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR21 : PackedRegister<PFIC_pack, RegBitSize::b8, 1045 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR22 : PackedRegister<PFIC_pack, RegBitSize::b8, 1046 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR23 : PackedRegister<PFIC_pack, RegBitSize::b8, 1047 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR24 : PackedRegister<PFIC_pack, RegBitSize::b8, 1048 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR25 : PackedRegister<PFIC_pack, RegBitSize::b8, 1049 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR26 : PackedRegister<PFIC_pack, RegBitSize::b8, 1050 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR27 : PackedRegister<PFIC_pack, RegBitSize::b8, 1051 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR28 : PackedRegister<PFIC_pack, RegBitSize::b8, 1052 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR29 : PackedRegister<PFIC_pack, RegBitSize::b8, 1053 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR30 : PackedRegister<PFIC_pack, RegBitSize::b8, 1054 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR31 : PackedRegister<PFIC_pack, RegBitSize::b8, 1055 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR32 : PackedRegister<PFIC_pack, RegBitSize::b8, 1056 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR33 : PackedRegister<PFIC_pack, RegBitSize::b8, 1057 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR34 : PackedRegister<PFIC_pack, RegBitSize::b8, 1058 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR35 : PackedRegister<PFIC_pack, RegBitSize::b8, 1059 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR36 : PackedRegister<PFIC_pack, RegBitSize::b8, 1060 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR37 : PackedRegister<PFIC_pack, RegBitSize::b8, 1061 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR38 : PackedRegister<PFIC_pack, RegBitSize::b8, 1062 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR39 : PackedRegister<PFIC_pack, RegBitSize::b8, 1063 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR40 : PackedRegister<PFIC_pack, RegBitSize::b8, 1064 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR41 : PackedRegister<PFIC_pack, RegBitSize::b8, 1065 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR42 : PackedRegister<PFIC_pack, RegBitSize::b8, 1066 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR43 : PackedRegister<PFIC_pack, RegBitSize::b8, 1067 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR44 : PackedRegister<PFIC_pack, RegBitSize::b8, 1068 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR45 : PackedRegister<PFIC_pack, RegBitSize::b8, 1069 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR46 : PackedRegister<PFIC_pack, RegBitSize::b8, 1070 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR47 : PackedRegister<PFIC_pack, RegBitSize::b8, 1071 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR48 : PackedRegister<PFIC_pack, RegBitSize::b8, 1072 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR49 : PackedRegister<PFIC_pack, RegBitSize::b8, 1073 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR50 : PackedRegister<PFIC_pack, RegBitSize::b8, 1074 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR51 : PackedRegister<PFIC_pack, RegBitSize::b8, 1075 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR52 : PackedRegister<PFIC_pack, RegBitSize::b8, 1076 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR53 : PackedRegister<PFIC_pack, RegBitSize::b8, 1077 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR54 : PackedRegister<PFIC_pack, RegBitSize::b8, 1078 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR55 : PackedRegister<PFIC_pack, RegBitSize::b8, 1079 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR56 : PackedRegister<PFIC_pack, RegBitSize::b8, 1080 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR57 : PackedRegister<PFIC_pack, RegBitSize::b8, 1081 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR58 : PackedRegister<PFIC_pack, RegBitSize::b8, 1082 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR59 : PackedRegister<PFIC_pack, RegBitSize::b8, 1083 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR60 : PackedRegister<PFIC_pack, RegBitSize::b8, 1084 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR61 : PackedRegister<PFIC_pack, RegBitSize::b8, 1085 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR62 : PackedRegister<PFIC_pack, RegBitSize::b8, 1086 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR63 : PackedRegister<PFIC_pack, RegBitSize::b8, 1087 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR64 : PackedRegister<PFIC_pack, RegBitSize::b8, 1088 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR65 : PackedRegister<PFIC_pack, RegBitSize::b8, 1089 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR66 : PackedRegister<PFIC_pack, RegBitSize::b8, 1090 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR67 : PackedRegister<PFIC_pack, RegBitSize::b8, 1091 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR68 : PackedRegister<PFIC_pack, RegBitSize::b8, 1092 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR69 : PackedRegister<PFIC_pack, RegBitSize::b8, 1093 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR70 : PackedRegister<PFIC_pack, RegBitSize::b8, 1094 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR71 : PackedRegister<PFIC_pack, RegBitSize::b8, 1095 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR72 : PackedRegister<PFIC_pack, RegBitSize::b8, 1096 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR73 : PackedRegister<PFIC_pack, RegBitSize::b8, 1097 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR74 : PackedRegister<PFIC_pack, RegBitSize::b8, 1098 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR75 : PackedRegister<PFIC_pack, RegBitSize::b8, 1099 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR76 : PackedRegister<PFIC_pack, RegBitSize::b8, 1100 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR77 : PackedRegister<PFIC_pack, RegBitSize::b8, 1101 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR78 : PackedRegister<PFIC_pack, RegBitSize::b8, 1102 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR79 : PackedRegister<PFIC_pack, RegBitSize::b8, 1103 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR80 : PackedRegister<PFIC_pack, RegBitSize::b8, 1104 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR81 : PackedRegister<PFIC_pack, RegBitSize::b8, 1105 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR82 : PackedRegister<PFIC_pack, RegBitSize::b8, 1106 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR83 : PackedRegister<PFIC_pack, RegBitSize::b8, 1107 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR84 : PackedRegister<PFIC_pack, RegBitSize::b8, 1108 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR85 : PackedRegister<PFIC_pack, RegBitSize::b8, 1109 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR86 : PackedRegister<PFIC_pack, RegBitSize::b8, 1110 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR87 : PackedRegister<PFIC_pack, RegBitSize::b8, 1111 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR88 : PackedRegister<PFIC_pack, RegBitSize::b8, 1112 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR89 : PackedRegister<PFIC_pack, RegBitSize::b8, 1113 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR90 : PackedRegister<PFIC_pack, RegBitSize::b8, 1114 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR91 : PackedRegister<PFIC_pack, RegBitSize::b8, 1115 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR92 : PackedRegister<PFIC_pack, RegBitSize::b8, 1116 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR93 : PackedRegister<PFIC_pack, RegBitSize::b8, 1117 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR94 : PackedRegister<PFIC_pack, RegBitSize::b8, 1118 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR95 : PackedRegister<PFIC_pack, RegBitSize::b8, 1119 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR96 : PackedRegister<PFIC_pack, RegBitSize::b8, 1120 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR97 : PackedRegister<PFIC_pack, RegBitSize::b8, 1121 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR98 : PackedRegister<PFIC_pack, RegBitSize::b8, 1122 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR99 : PackedRegister<PFIC_pack, RegBitSize::b8, 1123 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR100 : PackedRegister<PFIC_pack, RegBitSize::b8, 1124 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR101 : PackedRegister<PFIC_pack, RegBitSize::b8, 1125 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR102 : PackedRegister<PFIC_pack, RegBitSize::b8, 1126 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR103 : PackedRegister<PFIC_pack, RegBitSize::b8, 1127 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR104 : PackedRegister<PFIC_pack, RegBitSize::b8, 1128 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR105 : PackedRegister<PFIC_pack, RegBitSize::b8, 1129 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR106 : PackedRegister<PFIC_pack, RegBitSize::b8, 1130 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR107 : PackedRegister<PFIC_pack, RegBitSize::b8, 1131 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR108 : PackedRegister<PFIC_pack, RegBitSize::b8, 1132 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR109 : PackedRegister<PFIC_pack, RegBitSize::b8, 1133 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR110 : PackedRegister<PFIC_pack, RegBitSize::b8, 1134 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR111 : PackedRegister<PFIC_pack, RegBitSize::b8, 1135 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR112 : PackedRegister<PFIC_pack, RegBitSize::b8, 1136 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR113 : PackedRegister<PFIC_pack, RegBitSize::b8, 1137 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR114 : PackedRegister<PFIC_pack, RegBitSize::b8, 1138 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR115 : PackedRegister<PFIC_pack, RegBitSize::b8, 1139 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR116 : PackedRegister<PFIC_pack, RegBitSize::b8, 1140 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR117 : PackedRegister<PFIC_pack, RegBitSize::b8, 1141 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR118 : PackedRegister<PFIC_pack, RegBitSize::b8, 1142 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR119 : PackedRegister<PFIC_pack, RegBitSize::b8, 1143 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR120 : PackedRegister<PFIC_pack, RegBitSize::b8, 1144 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR121 : PackedRegister<PFIC_pack, RegBitSize::b8, 1145 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR122 : PackedRegister<PFIC_pack, RegBitSize::b8, 1146 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR123 : PackedRegister<PFIC_pack, RegBitSize::b8, 1147 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR124 : PackedRegister<PFIC_pack, RegBitSize::b8, 1148 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR125 : PackedRegister<PFIC_pack, RegBitSize::b8, 1149 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR126 : PackedRegister<PFIC_pack, RegBitSize::b8, 1150 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR127 : PackedRegister<PFIC_pack, RegBitSize::b8, 1151 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR128 : PackedRegister<PFIC_pack, RegBitSize::b8, 1152 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR129 : PackedRegister<PFIC_pack, RegBitSize::b8, 1153 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR130 : PackedRegister<PFIC_pack, RegBitSize::b8, 1154 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR131 : PackedRegister<PFIC_pack, RegBitSize::b8, 1155 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR132 : PackedRegister<PFIC_pack, RegBitSize::b8, 1156 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR133 : PackedRegister<PFIC_pack, RegBitSize::b8, 1157 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR134 : PackedRegister<PFIC_pack, RegBitSize::b8, 1158 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR135 : PackedRegister<PFIC_pack, RegBitSize::b8, 1159 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR136 : PackedRegister<PFIC_pack, RegBitSize::b8, 1160 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR137 : PackedRegister<PFIC_pack, RegBitSize::b8, 1161 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR138 : PackedRegister<PFIC_pack, RegBitSize::b8, 1162 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR139 : PackedRegister<PFIC_pack, RegBitSize::b8, 1163 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR140 : PackedRegister<PFIC_pack, RegBitSize::b8, 1164 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR141 : PackedRegister<PFIC_pack, RegBitSize::b8, 1165 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR142 : PackedRegister<PFIC_pack, RegBitSize::b8, 1166 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR143 : PackedRegister<PFIC_pack, RegBitSize::b8, 1167 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR144 : PackedRegister<PFIC_pack, RegBitSize::b8, 1168 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR145 : PackedRegister<PFIC_pack, RegBitSize::b8, 1169 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR146 : PackedRegister<PFIC_pack, RegBitSize::b8, 1170 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR147 : PackedRegister<PFIC_pack, RegBitSize::b8, 1171 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR148 : PackedRegister<PFIC_pack, RegBitSize::b8, 1172 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR149 : PackedRegister<PFIC_pack, RegBitSize::b8, 1173 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR150 : PackedRegister<PFIC_pack, RegBitSize::b8, 1174 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR151 : PackedRegister<PFIC_pack, RegBitSize::b8, 1175 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR152 : PackedRegister<PFIC_pack, RegBitSize::b8, 1176 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR153 : PackedRegister<PFIC_pack, RegBitSize::b8, 1177 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR154 : PackedRegister<PFIC_pack, RegBitSize::b8, 1178 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR155 : PackedRegister<PFIC_pack, RegBitSize::b8, 1179 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR156 : PackedRegister<PFIC_pack, RegBitSize::b8, 1180 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR157 : PackedRegister<PFIC_pack, RegBitSize::b8, 1181 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR158 : PackedRegister<PFIC_pack, RegBitSize::b8, 1182 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR159 : PackedRegister<PFIC_pack, RegBitSize::b8, 1183 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR160 : PackedRegister<PFIC_pack, RegBitSize::b8, 1184 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR161 : PackedRegister<PFIC_pack, RegBitSize::b8, 1185 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR162 : PackedRegister<PFIC_pack, RegBitSize::b8, 1186 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR163 : PackedRegister<PFIC_pack, RegBitSize::b8, 1187 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR164 : PackedRegister<PFIC_pack, RegBitSize::b8, 1188 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR165 : PackedRegister<PFIC_pack, RegBitSize::b8, 1189 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR166 : PackedRegister<PFIC_pack, RegBitSize::b8, 1190 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR167 : PackedRegister<PFIC_pack, RegBitSize::b8, 1191 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR168 : PackedRegister<PFIC_pack, RegBitSize::b8, 1192 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR169 : PackedRegister<PFIC_pack, RegBitSize::b8, 1193 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR170 : PackedRegister<PFIC_pack, RegBitSize::b8, 1194 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR171 : PackedRegister<PFIC_pack, RegBitSize::b8, 1195 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR172 : PackedRegister<PFIC_pack, RegBitSize::b8, 1196 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR173 : PackedRegister<PFIC_pack, RegBitSize::b8, 1197 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR174 : PackedRegister<PFIC_pack, RegBitSize::b8, 1198 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR175 : PackedRegister<PFIC_pack, RegBitSize::b8, 1199 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR176 : PackedRegister<PFIC_pack, RegBitSize::b8, 1200 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR177 : PackedRegister<PFIC_pack, RegBitSize::b8, 1201 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR178 : PackedRegister<PFIC_pack, RegBitSize::b8, 1202 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR179 : PackedRegister<PFIC_pack, RegBitSize::b8, 1203 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR180 : PackedRegister<PFIC_pack, RegBitSize::b8, 1204 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR181 : PackedRegister<PFIC_pack, RegBitSize::b8, 1205 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR182 : PackedRegister<PFIC_pack, RegBitSize::b8, 1206 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR183 : PackedRegister<PFIC_pack, RegBitSize::b8, 1207 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR184 : PackedRegister<PFIC_pack, RegBitSize::b8, 1208 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR185 : PackedRegister<PFIC_pack, RegBitSize::b8, 1209 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR186 : PackedRegister<PFIC_pack, RegBitSize::b8, 1210 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR187 : PackedRegister<PFIC_pack, RegBitSize::b8, 1211 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR188 : PackedRegister<PFIC_pack, RegBitSize::b8, 1212 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR189 : PackedRegister<PFIC_pack, RegBitSize::b8, 1213 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR190 : PackedRegister<PFIC_pack, RegBitSize::b8, 1214 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR191 : PackedRegister<PFIC_pack, RegBitSize::b8, 1215 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR192 : PackedRegister<PFIC_pack, RegBitSize::b8, 1216 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR193 : PackedRegister<PFIC_pack, RegBitSize::b8, 1217 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR194 : PackedRegister<PFIC_pack, RegBitSize::b8, 1218 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR195 : PackedRegister<PFIC_pack, RegBitSize::b8, 1219 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR196 : PackedRegister<PFIC_pack, RegBitSize::b8, 1220 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR197 : PackedRegister<PFIC_pack, RegBitSize::b8, 1221 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR198 : PackedRegister<PFIC_pack, RegBitSize::b8, 1222 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR199 : PackedRegister<PFIC_pack, RegBitSize::b8, 1223 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR200 : PackedRegister<PFIC_pack, RegBitSize::b8, 1224 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR201 : PackedRegister<PFIC_pack, RegBitSize::b8, 1225 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR202 : PackedRegister<PFIC_pack, RegBitSize::b8, 1226 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR203 : PackedRegister<PFIC_pack, RegBitSize::b8, 1227 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR204 : PackedRegister<PFIC_pack, RegBitSize::b8, 1228 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR205 : PackedRegister<PFIC_pack, RegBitSize::b8, 1229 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR206 : PackedRegister<PFIC_pack, RegBitSize::b8, 1230 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR207 : PackedRegister<PFIC_pack, RegBitSize::b8, 1231 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR208 : PackedRegister<PFIC_pack, RegBitSize::b8, 1232 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR209 : PackedRegister<PFIC_pack, RegBitSize::b8, 1233 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR210 : PackedRegister<PFIC_pack, RegBitSize::b8, 1234 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR211 : PackedRegister<PFIC_pack, RegBitSize::b8, 1235 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR212 : PackedRegister<PFIC_pack, RegBitSize::b8, 1236 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR213 : PackedRegister<PFIC_pack, RegBitSize::b8, 1237 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR214 : PackedRegister<PFIC_pack, RegBitSize::b8, 1238 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR215 : PackedRegister<PFIC_pack, RegBitSize::b8, 1239 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR216 : PackedRegister<PFIC_pack, RegBitSize::b8, 1240 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR217 : PackedRegister<PFIC_pack, RegBitSize::b8, 1241 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR218 : PackedRegister<PFIC_pack, RegBitSize::b8, 1242 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR219 : PackedRegister<PFIC_pack, RegBitSize::b8, 1243 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR220 : PackedRegister<PFIC_pack, RegBitSize::b8, 1244 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR221 : PackedRegister<PFIC_pack, RegBitSize::b8, 1245 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR222 : PackedRegister<PFIC_pack, RegBitSize::b8, 1246 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR223 : PackedRegister<PFIC_pack, RegBitSize::b8, 1247 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR224 : PackedRegister<PFIC_pack, RegBitSize::b8, 1248 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR225 : PackedRegister<PFIC_pack, RegBitSize::b8, 1249 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR226 : PackedRegister<PFIC_pack, RegBitSize::b8, 1250 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR227 : PackedRegister<PFIC_pack, RegBitSize::b8, 1251 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR228 : PackedRegister<PFIC_pack, RegBitSize::b8, 1252 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR229 : PackedRegister<PFIC_pack, RegBitSize::b8, 1253 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR230 : PackedRegister<PFIC_pack, RegBitSize::b8, 1254 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR231 : PackedRegister<PFIC_pack, RegBitSize::b8, 1255 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR232 : PackedRegister<PFIC_pack, RegBitSize::b8, 1256 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR233 : PackedRegister<PFIC_pack, RegBitSize::b8, 1257 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR234 : PackedRegister<PFIC_pack, RegBitSize::b8, 1258 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR235 : PackedRegister<PFIC_pack, RegBitSize::b8, 1259 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR236 : PackedRegister<PFIC_pack, RegBitSize::b8, 1260 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR237 : PackedRegister<PFIC_pack, RegBitSize::b8, 1261 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR238 : PackedRegister<PFIC_pack, RegBitSize::b8, 1262 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR239 : PackedRegister<PFIC_pack, RegBitSize::b8, 1263 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR240 : PackedRegister<PFIC_pack, RegBitSize::b8, 1264 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR241 : PackedRegister<PFIC_pack, RegBitSize::b8, 1265 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR242 : PackedRegister<PFIC_pack, RegBitSize::b8, 1266 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR243 : PackedRegister<PFIC_pack, RegBitSize::b8, 1267 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR244 : PackedRegister<PFIC_pack, RegBitSize::b8, 1268 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR245 : PackedRegister<PFIC_pack, RegBitSize::b8, 1269 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR246 : PackedRegister<PFIC_pack, RegBitSize::b8, 1270 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR247 : PackedRegister<PFIC_pack, RegBitSize::b8, 1271 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR248 : PackedRegister<PFIC_pack, RegBitSize::b8, 1272 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR249 : PackedRegister<PFIC_pack, RegBitSize::b8, 1273 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR250 : PackedRegister<PFIC_pack, RegBitSize::b8, 1274 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR251 : PackedRegister<PFIC_pack, RegBitSize::b8, 1275 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR252 : PackedRegister<PFIC_pack, RegBitSize::b8, 1276 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR253 : PackedRegister<PFIC_pack, RegBitSize::b8, 1277 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR254 : PackedRegister<PFIC_pack, RegBitSize::b8, 1278 * 8> // Interrupt Priority Register
    {
    };
    struct IPRIOR255 : PackedRegister<PFIC_pack, RegBitSize::b8, 1279 * 8> // Interrupt Priority Register
    {
    };
    struct SCTLR : PackedRegister<PFIC_pack, RegBitSize::b32, 3344 * 8> // System Control Register
    {
        using SLEEPONEXIT = Field<SCTLR, 1, 1, read_write>; // SLEEPONEXIT
        using SLEEPDEEP = Field<SCTLR, 1, 2, read_write>;   // SLEEPDEEP
        using WFITOWFE = Field<SCTLR, 1, 3, read_write>;    // WFITOWFE
        using SEVONPEND = Field<SCTLR, 1, 4, read_write>;   // SEVONPEND
        using SETEVENT = Field<SCTLR, 1, 5, read_write>;    // SETEVENT
        using SYSRESET = Field<SCTLR, 1, 31, read_write>;   // SYSRESET
    };
    struct STK_CTLR : PackedRegister<PFIC_pack, RegBitSize::b32, 4096 * 8> // System counter control register
    {
        using STE = Field<STK_CTLR, 1, 0, read_write>;   // System counter enable
        using STIE = Field<STK_CTLR, 1, 1, read_write>;  // System counter interrupt enable
        using STCLK = Field<STK_CTLR, 1, 2, read_write>; // System selects the clock source
        using STRE = Field<STK_CTLR, 1, 3, read_write>;  // System reload register
        using MODE = Field<STK_CTLR, 1, 4, read_write>;  // System Mode
        using INIT = Field<STK_CTLR, 1, 5, read_write>;  // System Initialization update
        using SWIE = Field<STK_CTLR, 1, 31, read_write>; // System software triggered interrupts enable
    };
    struct STK_SR : PackedRegister<PFIC_pack, RegBitSize::b32, 4100 * 8> // System START
    {
        using CNTIF = Field<STK_SR, 1, 0, read_write>; // CNTIF
    };
    struct STK_CNTL : PackedRegister<PFIC_pack, RegBitSize::b32, 4104 * 8> // System counter low register
    {
        using CNTL = Field<STK_CNTL, 32, 0, read_write>; // CNTL
    };
    struct STK_CNTH : PackedRegister<PFIC_pack, RegBitSize::b32, 4108 * 8> // System counter high register
    {
        using CNTH = Field<STK_CNTH, 32, 0, read_write>; // CNTH
    };
    struct STK_CMPLR : PackedRegister<PFIC_pack, RegBitSize::b32, 4112 * 8> // System compare low register
    {
        using CMPL = Field<STK_CMPLR, 32, 0, read_write>; // CMPL
    };
    struct STK_CMPHR : PackedRegister<PFIC_pack, RegBitSize::b32, 4116 * 8> // System compare high register
    {
        using CMPH = Field<STK_CMPHR, 32, 0, read_write>; // CMPH
    };
}

namespace GPIO
{
    typedef enum
    {
        IN_ANALOG = 0,
        IN_FLOAT = 4,
        IN_PUPD = 8,
        OUT_10Mhz_PP = 1,
        OUT_2Mhz_PP = 2,
        OUT_50Mhz_PP = 3,
        OUT_10Mhz_OD = 5,
        OUT_2Mhz_OD = 6,
        OUT_50Mhz_OD = 7,
        OUT_10Mhz_AF_PP = 9,
        OUT_2Mhz_AF_PP = 10,
        OUT_50Mhz_AF_PP = 11,
        OUT_10Mhz_AF_OD = 13,
        OUT_2Mhz_AF_OD = 14,
        OUT_50Mhz_AF_OD = 15,
    } GPIO_PIN_MODE_Typedef;
}

namespace Clock
{
    static uint32_t ticksPerUs = 3;
    static inline void init(bool pll)
    {
        PFIC::STK_CTLR::merge_write<PFIC::STK_CTLR::STE, 1>()
                              .with<PFIC::STK_CTLR::STCLK, 1>()
                              .done();
        if (pll)
        {
        RCC::CFGR0::merge_write<RCC::CFGR0::SW, 0>()
                          .with<RCC::CFGR0::HPRE, 0>()
                          .with<RCC::CFGR0::PPRE1, 0>()
                          .with<RCC::CFGR0::PPRE2, 0>()
                          .with<RCC::CFGR0::ADCPRE, 0>()
                          .with<RCC::CFGR0::PLLSRC, 0>() /* 0: HSI */
                          .with<RCC::CFGR0::PLLXTPRE, 0>()
                          .with<RCC::CFGR0::PLLMUL, 0b1111>() /* x18 -> 144 MHz */
                          .with<RCC::CFGR0::USBPRE, 0b10>() // 144 MHz -> 48 MHz USB
                          .done();
            RCC::CTLR::merge_write<RCC::CTLR::HSION, 1>()
                             .with<RCC::CTLR::HSITRIM, 0x10>()
                             .with<RCC::CTLR::HSEON, 0>()
                             .with<RCC::CTLR::PLLON, 1>()
                             .done();
            RCC::INTR::merge_write<RCC::INTR::LSIRDYC, 1>()
                             .with<RCC::INTR::HSERDYC, 1>()
                             .with<RCC::INTR::HSIRDYC, 1>()
                             .with<RCC::INTR::HSERDYC, 1>()
                             .with<RCC::INTR::PLLRDYC, 1>()
                             .with<RCC::INTR::CSSC, 1>()
                             .done();
            while (RCC::CTLR::PLLRDY::read() == 0);
            RCC::CFGR0::SW::write<0b10>();
            while (RCC::CFGR0::SWS::read() != 0b10);
            ticksPerUs = 144;
        }
        else
        {
            RCC::CTLR::merge_write<RCC::CTLR::HSION, 1>()
                             .with<RCC::CTLR::HSITRIM, 0x10>()
                             .with<RCC::CTLR::PLLON, 0>()
                             .done();
            ticksPerUs = 8;
        }
    }
    static inline uint32_t getSystick()
    {
        return PFIC::STK_CNTL::CNTL::read();
    }
    static inline uint64_t getSystick64()
    {
        return PFIC::STK_CNTL::CNTL::read() + (((uint64_t)PFIC::STK_CNTH::CNTH::read())<<32);
    }
    static inline void delayTicks(uint32_t n)
    {
        uint32_t targend = getSystick() + n;
        while (((int32_t)(getSystick() - targend)) < 0)
            ;
    }
    static inline void delayUntil(uint32_t *last, uint32_t diff)
    {
        *last += diff;
        while (((int32_t)(getSystick() - *last)) < 0)
            ;
    }
    static inline uint32_t msToTicks(uint32_t ms)
    {
        return ms * ticksPerUs * 1000;
    }
    static inline uint32_t usToTicks(uint32_t us)
    {
        return us * ticksPerUs;
    }
} // namespace Clock

#endif