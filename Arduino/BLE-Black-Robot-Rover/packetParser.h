#ifndef __PACKETPARSER_H__
#define __PACKETPARSER_H__

// function prototypes over in packetparser.cpp

/*!
    @brief  Waits for incoming data and parses it
*/
uint8_t readPacket(Adafruit_BLE *ble, uint16_t timeout);

/*!
    @brief Casts the four bytes at the specified address to a float
*/
float parsefloat(uint8_t *buffer);

/*! 
    @brief  Prints a hexadecimal value in plain characters
    @param  data      Pointer to the byte data
    @param  numBytes  Data length in bytes
*/
void printHex(const uint8_t *data, const uint32_t numBytes);

// the packet buffer (holds incoming characters)
extern uint8_t packetbuffer[];

#endif