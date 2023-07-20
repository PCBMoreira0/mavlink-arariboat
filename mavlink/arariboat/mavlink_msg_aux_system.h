#pragma once
// MESSAGE AUX_SYSTEM PACKING

#define MAVLINK_MSG_ID_AUX_SYSTEM 174


typedef struct __mavlink_aux_system_t {
 float voltage; /*<  Voltage of auxiliary battery*/
 float current; /*<  Current of auxiliary battery*/
 float pumps; /*<  Bitfield that represents the logical state of the pumps*/
} mavlink_aux_system_t;

#define MAVLINK_MSG_ID_AUX_SYSTEM_LEN 12
#define MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN 12
#define MAVLINK_MSG_ID_174_LEN 12
#define MAVLINK_MSG_ID_174_MIN_LEN 12

#define MAVLINK_MSG_ID_AUX_SYSTEM_CRC 28
#define MAVLINK_MSG_ID_174_CRC 28



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AUX_SYSTEM { \
    174, \
    "AUX_SYSTEM", \
    3, \
    {  { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aux_system_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_aux_system_t, current) }, \
         { "pumps", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aux_system_t, pumps) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AUX_SYSTEM { \
    "AUX_SYSTEM", \
    3, \
    {  { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_aux_system_t, voltage) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_aux_system_t, current) }, \
         { "pumps", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aux_system_t, pumps) }, \
         } \
}
#endif

/**
 * @brief Pack a aux_system message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param voltage  Voltage of auxiliary battery
 * @param current  Current of auxiliary battery
 * @param pumps  Bitfield that represents the logical state of the pumps
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_system_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float voltage, float current, float pumps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUX_SYSTEM_LEN];
    _mav_put_float(buf, 0, voltage);
    _mav_put_float(buf, 4, current);
    _mav_put_float(buf, 8, pumps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_SYSTEM_LEN);
#else
    mavlink_aux_system_t packet;
    packet.voltage = voltage;
    packet.current = current;
    packet.pumps = pumps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_SYSTEM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUX_SYSTEM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_CRC);
}

/**
 * @brief Pack a aux_system message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voltage  Voltage of auxiliary battery
 * @param current  Current of auxiliary battery
 * @param pumps  Bitfield that represents the logical state of the pumps
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aux_system_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float voltage,float current,float pumps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUX_SYSTEM_LEN];
    _mav_put_float(buf, 0, voltage);
    _mav_put_float(buf, 4, current);
    _mav_put_float(buf, 8, pumps);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUX_SYSTEM_LEN);
#else
    mavlink_aux_system_t packet;
    packet.voltage = voltage;
    packet.current = current;
    packet.pumps = pumps;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AUX_SYSTEM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AUX_SYSTEM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_CRC);
}

/**
 * @brief Encode a aux_system struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aux_system C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_system_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aux_system_t* aux_system)
{
    return mavlink_msg_aux_system_pack(system_id, component_id, msg, aux_system->voltage, aux_system->current, aux_system->pumps);
}

/**
 * @brief Encode a aux_system struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aux_system C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aux_system_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aux_system_t* aux_system)
{
    return mavlink_msg_aux_system_pack_chan(system_id, component_id, chan, msg, aux_system->voltage, aux_system->current, aux_system->pumps);
}

/**
 * @brief Send a aux_system message
 * @param chan MAVLink channel to send the message
 *
 * @param voltage  Voltage of auxiliary battery
 * @param current  Current of auxiliary battery
 * @param pumps  Bitfield that represents the logical state of the pumps
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aux_system_send(mavlink_channel_t chan, float voltage, float current, float pumps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AUX_SYSTEM_LEN];
    _mav_put_float(buf, 0, voltage);
    _mav_put_float(buf, 4, current);
    _mav_put_float(buf, 8, pumps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_SYSTEM, buf, MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_CRC);
#else
    mavlink_aux_system_t packet;
    packet.voltage = voltage;
    packet.current = current;
    packet.pumps = pumps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_SYSTEM, (const char *)&packet, MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_CRC);
#endif
}

/**
 * @brief Send a aux_system message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aux_system_send_struct(mavlink_channel_t chan, const mavlink_aux_system_t* aux_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aux_system_send(chan, aux_system->voltage, aux_system->current, aux_system->pumps);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_SYSTEM, (const char *)aux_system, MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_CRC);
#endif
}

#if MAVLINK_MSG_ID_AUX_SYSTEM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aux_system_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float voltage, float current, float pumps)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, voltage);
    _mav_put_float(buf, 4, current);
    _mav_put_float(buf, 8, pumps);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_SYSTEM, buf, MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_CRC);
#else
    mavlink_aux_system_t *packet = (mavlink_aux_system_t *)msgbuf;
    packet->voltage = voltage;
    packet->current = current;
    packet->pumps = pumps;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AUX_SYSTEM, (const char *)packet, MAVLINK_MSG_ID_AUX_SYSTEM_MIN_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_LEN, MAVLINK_MSG_ID_AUX_SYSTEM_CRC);
#endif
}
#endif

#endif

// MESSAGE AUX_SYSTEM UNPACKING


/**
 * @brief Get field voltage from aux_system message
 *
 * @return  Voltage of auxiliary battery
 */
static inline float mavlink_msg_aux_system_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field current from aux_system message
 *
 * @return  Current of auxiliary battery
 */
static inline float mavlink_msg_aux_system_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pumps from aux_system message
 *
 * @return  Bitfield that represents the logical state of the pumps
 */
static inline float mavlink_msg_aux_system_get_pumps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a aux_system message into a struct
 *
 * @param msg The message to decode
 * @param aux_system C-struct to decode the message contents into
 */
static inline void mavlink_msg_aux_system_decode(const mavlink_message_t* msg, mavlink_aux_system_t* aux_system)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aux_system->voltage = mavlink_msg_aux_system_get_voltage(msg);
    aux_system->current = mavlink_msg_aux_system_get_current(msg);
    aux_system->pumps = mavlink_msg_aux_system_get_pumps(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AUX_SYSTEM_LEN? msg->len : MAVLINK_MSG_ID_AUX_SYSTEM_LEN;
        memset(aux_system, 0, MAVLINK_MSG_ID_AUX_SYSTEM_LEN);
    memcpy(aux_system, _MAV_PAYLOAD(msg), len);
#endif
}
