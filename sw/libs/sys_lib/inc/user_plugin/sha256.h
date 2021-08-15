#ifndef _USER_PLUGIN_APB_H_
#define _USER_PLUGIN_APB_H_

#include <pulpino.h>

#define UP_APB_REG_CTRL   ( USER_PLUGIN_APB_BASE_ADDR + 0x0C )
#define UP_APB_REG_CMD    ( USER_PLUGIN_APB_BASE_ADDR + 0x10 )
#define UP_APB_REG_STATUS ( USER_PLUGIN_APB_BASE_ADDR + 0x14 )

#define SHA256_REG_MESSAGE ( USER_PLUGIN_APB_BASE_ADDR + 0x30 )
#define SHA256_REG_OUT0   ( USER_PLUGIN_APB_BASE_ADDR + 0x34 )
#define SHA256_REG_OUT1   ( USER_PLUGIN_APB_BASE_ADDR + 0x38 )
#define SHA256_REG_OUT2   ( USER_PLUGIN_APB_BASE_ADDR + 0x3c )
#define SHA256_REG_OUT3   ( USER_PLUGIN_APB_BASE_ADDR + 0x40 )
#define SHA256_REG_OUT4   ( USER_PLUGIN_APB_BASE_ADDR + 0x44 )
#define SHA256_REG_OUT5   ( USER_PLUGIN_APB_BASE_ADDR + 0x48 )
#define SHA256_REG_OUT6   ( USER_PLUGIN_APB_BASE_ADDR + 0x4c )
#define SHA256_REG_OUT7   ( USER_PLUGIN_APB_BASE_ADDR + 0x50 )

#define UP_APB_CTRL       REG(UP_APB_REG_CTRL)
#define UP_APB_CMD        REG(UP_APB_REG_CMD)
#define UP_APB_STATUS     REG(UP_APB_REG_STATUS)

#define SHA256_MESSAGE	  REG(SHA256_REG_MESSAGE)
#define SHA256_OUT0	  REG(SHA256_REG_OUT0)
#define SHA256_OUT1	  REG(SHA256_REG_OUT1)
#define SHA256_OUT2	  REG(SHA256_REG_OUT2)
#define SHA256_OUT3	  REG(SHA256_REG_OUT3)
#define SHA256_OUT4	  REG(SHA256_REG_OUT4)
#define SHA256_OUT5	  REG(SHA256_REG_OUT5)
#define SHA256_OUT6	  REG(SHA256_REG_OUT6)
#define SHA256_OUT7	  REG(SHA256_REG_OUT7)


#define UP_CTRL_INT_EN_BIT (1 << 0)

#define UP_CMD_CLR_INT_BIT (1 << 0)
#define UP_CMD_SET_INT_BIT (1 << 1)

#define UP_STATUS_INT_BIT  (1 << 0)

#define CTRL_HASH_EN_INT_EN 0x03
#define CTRL_HASH_CLR_INT_CLR 0x00

#endif
