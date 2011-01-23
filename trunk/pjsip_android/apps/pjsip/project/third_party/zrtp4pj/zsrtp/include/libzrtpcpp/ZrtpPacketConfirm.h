/*
  Copyright (C) 2006-2010 Werner Dittmann

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _ZRTPPACKETCONFIRM_H_
#define _ZRTPPACKETCONFIRM_H_

/**
 * @file ZrtpPacketConfirm.h
 * @brief The ZRTP Confirm message
 *  
 * @ingroup GNU_ZRTP
 * @{
 */

#include <libzrtpcpp/ZrtpPacketBase.h>

/**
 * Implement the Confirm packet.
 *
 * The ZRTP message Confirm. The implementation sends this
 * to confirm the switch to SRTP (encrypted) mode. The contents of
 * the Confirm message are encrypted, thus the implementation
 * can check if the secret keys work.
 *
 * @author Werner Dittmann <Werner.Dittmann@t-online.de>
 */

class ZrtpPacketConfirm : public ZrtpPacketBase {

    private:
        Confirm_t* confirmHeader;   ///< Point to the Confirm message part

    public:
        /// Creates a Confirm packet with default data
        ZrtpPacketConfirm();
        
        /// Creates a Confirm packet with default data and a given signature length
        ZrtpPacketConfirm(uint32_t sl);

        /// Creates a Confirm packet from received data
        ZrtpPacketConfirm(uint8_t* d);

        /// Normal destructor
        virtual ~ZrtpPacketConfirm();

        /// Check is SAS verify flag is set
        const bool isSASFlag()            { return confirmHeader->flags & 0x4; }

        /// Get pointer to filler bytes (contains one bit of signature length)
        const uint8_t* getFiller()        { return confirmHeader->filler; }

        /// Get pointer to IV data, fixed byte array
        const uint8_t* getIv()            { return confirmHeader->iv; }

        /// Get pointer to MAC data, fixed byte array
        const uint8_t* getHmac()          { return confirmHeader->hmac; }

        /// Get Expiration time data
        const uint32_t getExpTime()       { return ntohl(confirmHeader->expTime); }

        /// Get pointer to initial hash chain (H0) data, fixed byte array
        uint8_t* getHashH0()              { return confirmHeader->hashH0; }

        /// get the signature length in words
        uint32_t getSignatureLength();

        /// set SAS verified flag
        void setSASFlag()            { confirmHeader->flags |= 0x4; }
        
        /// Set MAC data, fixed length byte array
        void setHmac(uint8_t* text)  { memcpy(confirmHeader->hmac, text, sizeof(confirmHeader->hmac)); }

        /// Set IV data, fixed length byte array
        void setIv(uint8_t* text)    { memcpy(confirmHeader->iv, text, sizeof(confirmHeader->iv)); }
        
        /// Set expiration time data
        void setExpTime(uint32_t t)  { confirmHeader->expTime = htonl(t); }

        /// Set initial hash chain (H0) data, fixed length byte array
        void setHashH0(uint8_t* t)   { memcpy(confirmHeader->hashH0, t, sizeof(confirmHeader->hashH0)); }

        /// Set signature length in words
        void setSignatureLength(uint32_t sl);

    private:
        void initialize();
     // Confirm packet is of variable length. It maximum size is 524 words:
     // - 11 words fixed size 
     // - up to 513 words variable part, depending if signature is present and its length. 
     // This leads to a maximum of 4*524=2096 bytes.
        uint8_t data[2100];       // large enough to hold a full blown Confirm packet

};

/**
 * @}
 */
#endif // ZRTPPACKETCONFIRM

