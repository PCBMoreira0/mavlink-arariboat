#pragma once
// MESSAGE RPM_INFO PACKING

#define MAVLINK_MSG_ID_RPM_INFO 174


typedef struct __mavlink_rpm_info_t {
 float rpm_left; /*<  RPM value for left motor*/
 float rpm_right; /*<  RPM value for right motor*/
 uint32_t timestamp; /*<  Timestamp.*/
} mavlink_rpm_info_t;

#define MAVLINK_MSG_ID_RPM_INFO_LEN 12
#define MAVLINK_MSG_ID_RPM_INFO_MIN_LEN 12
#define MAVLINK_MSG_ID_174_LEN 12
#define MAVLINK_MSG_ID_174_MIN_LEN 12

#define MAVLINK_MSG_ID_RPM_INFO_CRC 185
#define MAVLINK_MSG_ID_174_CRC 185



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RPM_INFO { \
    174, \
    "RPM_INFO", \
    3, \
    {  { "rpm_left", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rpm_info_t, rpm_left) }, \
         { "rpm_right", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_rpm_info_t, rpm_right) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rpm_info_t, timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RPM_INFO { \
    "RPM_INFO", \
    3, \
    {  { "rpm_left", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_rpm_info_t, rpm_left) }, \
         { "rpm_right", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_rpm_info_t, rpm_right) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_rpm_info_t, timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a rpm_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rpm_left  RPM value for left motor
 * @param rpm_right  RPM value for right motor
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpm_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float rpm_left, float rpm_right, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RPM_INFO_LEN];
    _mav_put_float(buf, 0, rpm_left);
    _mav_put_float(buf, 4, rpm_right);
    _mav_put_uint32_t(buf, 8, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPM_INFO_LEN);
#else
    mavlink_rpm_info_t packet;
    packet.rpm_left = rpm_left;
    packet.rpm_right = rpm_right;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPM_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RPM_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RPM_INFO_MIN_LEN, MAVLINK_MSG_ID_RPM_INFO_LEN, MAVLINK_MSG_ID_RPM_INFO_CRC);
}

/**
 * @brief Pack a rpm_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rpm_left  RPM value for left motor
 * @param rpm_right  RPM value for right motor
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rpm_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float rpm_left,float rpm_right,uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RPM_INFO_LEN];
    _mav_put_float(buf, 0, rpm_left);
    _mav_put_float(buf, 4, rpm_right);
    _mav_put_uint32_t(buf, 8, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RPM_INFO_LEN);
#else
    mavlink_rpm_info_t packet;
    packet.rpm_left = rpm_left;
    packet.rpm_right = rpm_right;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RPM_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RPM_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RPM_INFO_MIN_LEN, MAVLINK_MSG_ID_RPM_INFO_LEN, MAVLINK_MSG_ID_RPM_INFO_CRC);
}

/**
 * @brief Encode a rpm_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rpm_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpm_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rpm_info_t* rpm_info)
{
    return mavlink_msg_rpm_info_pack(system_id, component_id, msg, rpm_info->rpm_left, rpm_info->rpm_right, rpm_info->timestamp);
}

/**
 * @brief Encode a rpm_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rpm_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rpm_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rpm_info_t* rpm_info)
{
    return mavlink_msg_rpm_info_pack_chan(system_id, component_id, chan, msg, rpm_info->rpm_left, rpm_info->rpm_right, rpm_info->timestamp);
}

/**
 * @brief Send a rpm_info message
 * @param chan MAVLink channel to send the message
 *
 * @param rpm_left  RPM value for left motor
 * @param rpm_right  RPM value for right motor
 * @param timestamp  Timestamp.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rpm_info_send(mavlink_channel_t chan, float rpm_left, float rpm_right, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RPM_INFO_LEN];
    _mav_put_float(buf, 0, rpm_left);
    _mav_put_float(buf, 4, rpm_right);
    _mav_put_uint32_t(buf, 8, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPM_INFO, buf, MAVLINK_MSG_ID_RPM_INFO_MIN_LEN, MAVLINK_MSG_ID_RPM_INFO_LEN, MAVLINK_MSG_ID_RPM_INFO_CRC);
#else
    mavlink_rpm_info_t packet;
    packet.rpm_left = rpm_left;
    packet.rpm_right = rpm_right;
    packet.timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPM_INFO, (const char *)&packet, MAVLINK_MSG_ID_RPM_INFO_MIN_LEN, MAVLINK_MSG_ID_RPM_INFO_LEN, MAVLINK_MSG_ID_RPM_INFO_CRC);
#endif
}

/**
 * @brief Send a rpm_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rpm_info_send_struct(mavlink_channel_t chan, const mavlink_rpm_info_t* rpm_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rpm_info_send(chan, rpm_info->rpm_left, rpm_info->rpm_right, rpm_info->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPM_INFO, (const char *)rpm_info, MAVLINK_MSG_ID_RPM_INFO_MIN_LEN, MAVLINK_MSG_ID_RPM_INFO_LEN, MAVLINK_MSG_ID_RPM_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_RPM_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rpm_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float rpm_left, float rpm_right, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, rpm_left);
    _mav_put_float(buf, 4, rpm_right);
    _mav_put_uint32_t(buf, 8, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPM_INFO, buf, MAVLINK_MSG_ID_RPM_INFO_MIN_LEN, MAVLINK_MSG_ID_RPM_INFO_LEN, MAVLINK_MSG_ID_RPM_INFO_CRC);
#else
    mavlink_rpm_info_t *packet = (mavlink_rpm_info_t *)msgbuf;
    packet->rpm_left = rpm_left;
    packet->rpm_right = rpm_right;
    packet->timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RPM_INFO, (const char *)packet, MAVLINK_MSG_ID_RPM_INFO_MIN_LEN, MAVLINK_MSG_ID_RPM_INFO_LEN, MAVLINK_MSG_ID_RPM_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE RPM_INFO UNPACKING


/**
 * @brief Get field rpm_left from rpm_info message
 *
 * @return  RPM value for left motor
 */
static inline float mavlink_msg_rpm_info_get_rpm_left(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field rpm_right from rpm_info message
 *
 * @return  RPM value for right motor
 */
static inline float mavlink_msg_rpm_info_get_rpm_right(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field timestamp from rpm_info message
 *
 * @return  Timestamp.
 */
static inline uint32_t mavlink_msg_rpm_info_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a rpm_info message into a struct
 *
 * @param msg The message to decode
 * @param rpm_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_rpm_info_decode(const mavlink_message_t* msg, mavlink_rpm_info_t* rpm_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rpm_info->rpm_left = mavlink_msg_rpm_info_get_rpm_left(msg);
    rpm_info->rpm_right = mavlink_msg_rpm_info_get_rpm_right(msg);
    rpm_info->timestamp = mavlink_msg_rpm_info_get_timestamp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RPM_INFO_LEN? msg->len : MAVLINK_MSG_ID_RPM_INFO_LEN;
        memset(rpm_info, 0, MAVLINK_MSG_ID_RPM_INFO_LEN);
    memcpy(rpm_info, _MAV_PAYLOAD(msg), len);
#endif
}
