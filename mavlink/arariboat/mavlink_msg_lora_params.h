#pragma once
// MESSAGE LORA_PARAMS PACKING

#define MAVLINK_MSG_ID_LORA_PARAMS 175


typedef struct __mavlink_lora_params_t {
 uint32_t bandwidth; /*<  Bandwidth of modem*/
 uint8_t spreading_factor; /*<  Spreading factor of modem*/
 uint8_t coding_rate; /*<  Coding rate of modem*/
 uint8_t crc; /*<  CRC of modem*/
} mavlink_lora_params_t;

#define MAVLINK_MSG_ID_LORA_PARAMS_LEN 7
#define MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN 7
#define MAVLINK_MSG_ID_175_LEN 7
#define MAVLINK_MSG_ID_175_MIN_LEN 7

#define MAVLINK_MSG_ID_LORA_PARAMS_CRC 77
#define MAVLINK_MSG_ID_175_CRC 77



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_LORA_PARAMS { \
    175, \
    "LORA_PARAMS", \
    4, \
    {  { "bandwidth", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_lora_params_t, bandwidth) }, \
         { "spreading_factor", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_lora_params_t, spreading_factor) }, \
         { "coding_rate", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_lora_params_t, coding_rate) }, \
         { "crc", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_lora_params_t, crc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_LORA_PARAMS { \
    "LORA_PARAMS", \
    4, \
    {  { "bandwidth", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_lora_params_t, bandwidth) }, \
         { "spreading_factor", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_lora_params_t, spreading_factor) }, \
         { "coding_rate", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_lora_params_t, coding_rate) }, \
         { "crc", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_lora_params_t, crc) }, \
         } \
}
#endif

/**
 * @brief Pack a lora_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param bandwidth  Bandwidth of modem
 * @param spreading_factor  Spreading factor of modem
 * @param coding_rate  Coding rate of modem
 * @param crc  CRC of modem
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lora_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t bandwidth, uint8_t spreading_factor, uint8_t coding_rate, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LORA_PARAMS_LEN];
    _mav_put_uint32_t(buf, 0, bandwidth);
    _mav_put_uint8_t(buf, 4, spreading_factor);
    _mav_put_uint8_t(buf, 5, coding_rate);
    _mav_put_uint8_t(buf, 6, crc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LORA_PARAMS_LEN);
#else
    mavlink_lora_params_t packet;
    packet.bandwidth = bandwidth;
    packet.spreading_factor = spreading_factor;
    packet.coding_rate = coding_rate;
    packet.crc = crc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LORA_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LORA_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN, MAVLINK_MSG_ID_LORA_PARAMS_LEN, MAVLINK_MSG_ID_LORA_PARAMS_CRC);
}

/**
 * @brief Pack a lora_params message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bandwidth  Bandwidth of modem
 * @param spreading_factor  Spreading factor of modem
 * @param coding_rate  Coding rate of modem
 * @param crc  CRC of modem
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_lora_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t bandwidth,uint8_t spreading_factor,uint8_t coding_rate,uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LORA_PARAMS_LEN];
    _mav_put_uint32_t(buf, 0, bandwidth);
    _mav_put_uint8_t(buf, 4, spreading_factor);
    _mav_put_uint8_t(buf, 5, coding_rate);
    _mav_put_uint8_t(buf, 6, crc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LORA_PARAMS_LEN);
#else
    mavlink_lora_params_t packet;
    packet.bandwidth = bandwidth;
    packet.spreading_factor = spreading_factor;
    packet.coding_rate = coding_rate;
    packet.crc = crc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_LORA_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_LORA_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN, MAVLINK_MSG_ID_LORA_PARAMS_LEN, MAVLINK_MSG_ID_LORA_PARAMS_CRC);
}

/**
 * @brief Encode a lora_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param lora_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lora_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_lora_params_t* lora_params)
{
    return mavlink_msg_lora_params_pack(system_id, component_id, msg, lora_params->bandwidth, lora_params->spreading_factor, lora_params->coding_rate, lora_params->crc);
}

/**
 * @brief Encode a lora_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param lora_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_lora_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_lora_params_t* lora_params)
{
    return mavlink_msg_lora_params_pack_chan(system_id, component_id, chan, msg, lora_params->bandwidth, lora_params->spreading_factor, lora_params->coding_rate, lora_params->crc);
}

/**
 * @brief Send a lora_params message
 * @param chan MAVLink channel to send the message
 *
 * @param bandwidth  Bandwidth of modem
 * @param spreading_factor  Spreading factor of modem
 * @param coding_rate  Coding rate of modem
 * @param crc  CRC of modem
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_lora_params_send(mavlink_channel_t chan, uint32_t bandwidth, uint8_t spreading_factor, uint8_t coding_rate, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_LORA_PARAMS_LEN];
    _mav_put_uint32_t(buf, 0, bandwidth);
    _mav_put_uint8_t(buf, 4, spreading_factor);
    _mav_put_uint8_t(buf, 5, coding_rate);
    _mav_put_uint8_t(buf, 6, crc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LORA_PARAMS, buf, MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN, MAVLINK_MSG_ID_LORA_PARAMS_LEN, MAVLINK_MSG_ID_LORA_PARAMS_CRC);
#else
    mavlink_lora_params_t packet;
    packet.bandwidth = bandwidth;
    packet.spreading_factor = spreading_factor;
    packet.coding_rate = coding_rate;
    packet.crc = crc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LORA_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN, MAVLINK_MSG_ID_LORA_PARAMS_LEN, MAVLINK_MSG_ID_LORA_PARAMS_CRC);
#endif
}

/**
 * @brief Send a lora_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_lora_params_send_struct(mavlink_channel_t chan, const mavlink_lora_params_t* lora_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_lora_params_send(chan, lora_params->bandwidth, lora_params->spreading_factor, lora_params->coding_rate, lora_params->crc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LORA_PARAMS, (const char *)lora_params, MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN, MAVLINK_MSG_ID_LORA_PARAMS_LEN, MAVLINK_MSG_ID_LORA_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_LORA_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_lora_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t bandwidth, uint8_t spreading_factor, uint8_t coding_rate, uint8_t crc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, bandwidth);
    _mav_put_uint8_t(buf, 4, spreading_factor);
    _mav_put_uint8_t(buf, 5, coding_rate);
    _mav_put_uint8_t(buf, 6, crc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LORA_PARAMS, buf, MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN, MAVLINK_MSG_ID_LORA_PARAMS_LEN, MAVLINK_MSG_ID_LORA_PARAMS_CRC);
#else
    mavlink_lora_params_t *packet = (mavlink_lora_params_t *)msgbuf;
    packet->bandwidth = bandwidth;
    packet->spreading_factor = spreading_factor;
    packet->coding_rate = coding_rate;
    packet->crc = crc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_LORA_PARAMS, (const char *)packet, MAVLINK_MSG_ID_LORA_PARAMS_MIN_LEN, MAVLINK_MSG_ID_LORA_PARAMS_LEN, MAVLINK_MSG_ID_LORA_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE LORA_PARAMS UNPACKING


/**
 * @brief Get field bandwidth from lora_params message
 *
 * @return  Bandwidth of modem
 */
static inline uint32_t mavlink_msg_lora_params_get_bandwidth(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field spreading_factor from lora_params message
 *
 * @return  Spreading factor of modem
 */
static inline uint8_t mavlink_msg_lora_params_get_spreading_factor(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field coding_rate from lora_params message
 *
 * @return  Coding rate of modem
 */
static inline uint8_t mavlink_msg_lora_params_get_coding_rate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field crc from lora_params message
 *
 * @return  CRC of modem
 */
static inline uint8_t mavlink_msg_lora_params_get_crc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a lora_params message into a struct
 *
 * @param msg The message to decode
 * @param lora_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_lora_params_decode(const mavlink_message_t* msg, mavlink_lora_params_t* lora_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    lora_params->bandwidth = mavlink_msg_lora_params_get_bandwidth(msg);
    lora_params->spreading_factor = mavlink_msg_lora_params_get_spreading_factor(msg);
    lora_params->coding_rate = mavlink_msg_lora_params_get_coding_rate(msg);
    lora_params->crc = mavlink_msg_lora_params_get_crc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_LORA_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_LORA_PARAMS_LEN;
        memset(lora_params, 0, MAVLINK_MSG_ID_LORA_PARAMS_LEN);
    memcpy(lora_params, _MAV_PAYLOAD(msg), len);
#endif
}
