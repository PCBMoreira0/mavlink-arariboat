#pragma once
// MESSAGE INSTRUMENTATION PACKING

#define MAVLINK_MSG_ID_INSTRUMENTATION 171


typedef struct __mavlink_instrumentation_t {
 float battery_voltage; /*< [V] .*/
 float motor_current_left; /*< [A] */
 float motor_current_right; /*< [A] */
 float mppt_current; /*< [A] */
 uint32_t timestamp; /*<  Timestamp.*/
} mavlink_instrumentation_t;

#define MAVLINK_MSG_ID_INSTRUMENTATION_LEN 20
#define MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN 20
#define MAVLINK_MSG_ID_171_LEN 20
#define MAVLINK_MSG_ID_171_MIN_LEN 20

#define MAVLINK_MSG_ID_INSTRUMENTATION_CRC 132
#define MAVLINK_MSG_ID_171_CRC 132



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_INSTRUMENTATION { \
    171, \
    "INSTRUMENTATION", \
    5, \
    {  { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_instrumentation_t, battery_voltage) }, \
         { "motor_current_left", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_instrumentation_t, motor_current_left) }, \
         { "motor_current_right", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_instrumentation_t, motor_current_right) }, \
         { "mppt_current", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_instrumentation_t, mppt_current) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_instrumentation_t, timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_INSTRUMENTATION { \
    "INSTRUMENTATION", \
    5, \
    {  { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_instrumentation_t, battery_voltage) }, \
         { "motor_current_left", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_instrumentation_t, motor_current_left) }, \
         { "motor_current_right", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_instrumentation_t, motor_current_right) }, \
         { "mppt_current", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_instrumentation_t, mppt_current) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_instrumentation_t, timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a instrumentation message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_voltage [V] .
 * @param motor_current_left [A] 
 * @param motor_current_right [A] 
 * @param mppt_current [A] 
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_instrumentation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float battery_voltage, float motor_current_left, float motor_current_right, float mppt_current, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_INSTRUMENTATION_LEN];
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_uint32_t(buf, 16, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_INSTRUMENTATION_LEN);
#else
    mavlink_instrumentation_t packet;
    packet.battery_voltage = battery_voltage;
    packet.motor_current_left = motor_current_left;
    packet.motor_current_right = motor_current_right;
    packet.mppt_current = mppt_current;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_INSTRUMENTATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_INSTRUMENTATION;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_CRC);
}

/**
 * @brief Pack a instrumentation message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_voltage [V] .
 * @param motor_current_left [A] 
 * @param motor_current_right [A] 
 * @param mppt_current [A] 
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_instrumentation_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float battery_voltage,float motor_current_left,float motor_current_right,float mppt_current,uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_INSTRUMENTATION_LEN];
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_uint32_t(buf, 16, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_INSTRUMENTATION_LEN);
#else
    mavlink_instrumentation_t packet;
    packet.battery_voltage = battery_voltage;
    packet.motor_current_left = motor_current_left;
    packet.motor_current_right = motor_current_right;
    packet.mppt_current = mppt_current;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_INSTRUMENTATION_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_INSTRUMENTATION;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_CRC);
}

/**
 * @brief Encode a instrumentation struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param instrumentation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_instrumentation_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_instrumentation_t* instrumentation)
{
    return mavlink_msg_instrumentation_pack(system_id, component_id, msg, instrumentation->battery_voltage, instrumentation->motor_current_left, instrumentation->motor_current_right, instrumentation->mppt_current, instrumentation->timestamp);
}

/**
 * @brief Encode a instrumentation struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param instrumentation C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_instrumentation_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_instrumentation_t* instrumentation)
{
    return mavlink_msg_instrumentation_pack_chan(system_id, component_id, chan, msg, instrumentation->battery_voltage, instrumentation->motor_current_left, instrumentation->motor_current_right, instrumentation->mppt_current, instrumentation->timestamp);
}

/**
 * @brief Send a instrumentation message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_voltage [V] .
 * @param motor_current_left [A] 
 * @param motor_current_right [A] 
 * @param mppt_current [A] 
 * @param timestamp  Timestamp.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_instrumentation_send(mavlink_channel_t chan, float battery_voltage, float motor_current_left, float motor_current_right, float mppt_current, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_INSTRUMENTATION_LEN];
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_uint32_t(buf, 16, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INSTRUMENTATION, buf, MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_CRC);
#else
    mavlink_instrumentation_t packet;
    packet.battery_voltage = battery_voltage;
    packet.motor_current_left = motor_current_left;
    packet.motor_current_right = motor_current_right;
    packet.mppt_current = mppt_current;
    packet.timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INSTRUMENTATION, (const char *)&packet, MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_CRC);
#endif
}

/**
 * @brief Send a instrumentation message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_instrumentation_send_struct(mavlink_channel_t chan, const mavlink_instrumentation_t* instrumentation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_instrumentation_send(chan, instrumentation->battery_voltage, instrumentation->motor_current_left, instrumentation->motor_current_right, instrumentation->mppt_current, instrumentation->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INSTRUMENTATION, (const char *)instrumentation, MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_CRC);
#endif
}

#if MAVLINK_MSG_ID_INSTRUMENTATION_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_instrumentation_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float battery_voltage, float motor_current_left, float motor_current_right, float mppt_current, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_uint32_t(buf, 16, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INSTRUMENTATION, buf, MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_CRC);
#else
    mavlink_instrumentation_t *packet = (mavlink_instrumentation_t *)msgbuf;
    packet->battery_voltage = battery_voltage;
    packet->motor_current_left = motor_current_left;
    packet->motor_current_right = motor_current_right;
    packet->mppt_current = mppt_current;
    packet->timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_INSTRUMENTATION, (const char *)packet, MAVLINK_MSG_ID_INSTRUMENTATION_MIN_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_LEN, MAVLINK_MSG_ID_INSTRUMENTATION_CRC);
#endif
}
#endif

#endif

// MESSAGE INSTRUMENTATION UNPACKING


/**
 * @brief Get field battery_voltage from instrumentation message
 *
 * @return [V] .
 */
static inline float mavlink_msg_instrumentation_get_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field motor_current_left from instrumentation message
 *
 * @return [A] 
 */
static inline float mavlink_msg_instrumentation_get_motor_current_left(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field motor_current_right from instrumentation message
 *
 * @return [A] 
 */
static inline float mavlink_msg_instrumentation_get_motor_current_right(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field mppt_current from instrumentation message
 *
 * @return [A] 
 */
static inline float mavlink_msg_instrumentation_get_mppt_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field timestamp from instrumentation message
 *
 * @return  Timestamp.
 */
static inline uint32_t mavlink_msg_instrumentation_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Decode a instrumentation message into a struct
 *
 * @param msg The message to decode
 * @param instrumentation C-struct to decode the message contents into
 */
static inline void mavlink_msg_instrumentation_decode(const mavlink_message_t* msg, mavlink_instrumentation_t* instrumentation)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    instrumentation->battery_voltage = mavlink_msg_instrumentation_get_battery_voltage(msg);
    instrumentation->motor_current_left = mavlink_msg_instrumentation_get_motor_current_left(msg);
    instrumentation->motor_current_right = mavlink_msg_instrumentation_get_motor_current_right(msg);
    instrumentation->mppt_current = mavlink_msg_instrumentation_get_mppt_current(msg);
    instrumentation->timestamp = mavlink_msg_instrumentation_get_timestamp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_INSTRUMENTATION_LEN? msg->len : MAVLINK_MSG_ID_INSTRUMENTATION_LEN;
        memset(instrumentation, 0, MAVLINK_MSG_ID_INSTRUMENTATION_LEN);
    memcpy(instrumentation, _MAV_PAYLOAD(msg), len);
#endif
}
