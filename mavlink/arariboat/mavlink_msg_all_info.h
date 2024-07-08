#pragma once
// MESSAGE ALL_INFO PACKING

#define MAVLINK_MSG_ID_ALL_INFO 175


typedef struct __mavlink_all_info_t {
 float battery_voltage; /*< [V] .*/
 float motor_current_left; /*< [A] */
 float motor_current_right; /*< [A] */
 float mppt_current; /*< [A] */
 float temperature_battery_left; /*< [degC] Left side of battery pack*/
 float temperature_battery_right; /*< [degC] Right side of battery pack*/
 float temperature_mppt; /*< [degC] MPPT temperature.*/
 float latitude; /*<  Latitude info. Sixth decimal digit represents 11cm resolution*/
 float longitude; /*<  Longitude info. Sixth decimal digit represents 11cm resolution*/
 float rpm_left; /*<  RPM value for left motor*/
 float rpm_right; /*<  RPM value for right motor*/
 uint32_t timestamp; /*<  Timestamp.*/
} mavlink_all_info_t;

#define MAVLINK_MSG_ID_ALL_INFO_LEN 48
#define MAVLINK_MSG_ID_ALL_INFO_MIN_LEN 48
#define MAVLINK_MSG_ID_175_LEN 48
#define MAVLINK_MSG_ID_175_MIN_LEN 48

#define MAVLINK_MSG_ID_ALL_INFO_CRC 192
#define MAVLINK_MSG_ID_175_CRC 192



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ALL_INFO { \
    175, \
    "ALL_INFO", \
    12, \
    {  { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_all_info_t, battery_voltage) }, \
         { "motor_current_left", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_all_info_t, motor_current_left) }, \
         { "motor_current_right", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_all_info_t, motor_current_right) }, \
         { "mppt_current", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_all_info_t, mppt_current) }, \
         { "temperature_battery_left", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_all_info_t, temperature_battery_left) }, \
         { "temperature_battery_right", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_all_info_t, temperature_battery_right) }, \
         { "temperature_mppt", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_all_info_t, temperature_mppt) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_all_info_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_all_info_t, longitude) }, \
         { "rpm_left", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_all_info_t, rpm_left) }, \
         { "rpm_right", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_all_info_t, rpm_right) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_all_info_t, timestamp) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ALL_INFO { \
    "ALL_INFO", \
    12, \
    {  { "battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_all_info_t, battery_voltage) }, \
         { "motor_current_left", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_all_info_t, motor_current_left) }, \
         { "motor_current_right", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_all_info_t, motor_current_right) }, \
         { "mppt_current", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_all_info_t, mppt_current) }, \
         { "temperature_battery_left", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_all_info_t, temperature_battery_left) }, \
         { "temperature_battery_right", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_all_info_t, temperature_battery_right) }, \
         { "temperature_mppt", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_all_info_t, temperature_mppt) }, \
         { "latitude", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_all_info_t, latitude) }, \
         { "longitude", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_all_info_t, longitude) }, \
         { "rpm_left", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_all_info_t, rpm_left) }, \
         { "rpm_right", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_all_info_t, rpm_right) }, \
         { "timestamp", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_all_info_t, timestamp) }, \
         } \
}
#endif

/**
 * @brief Pack a all_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param battery_voltage [V] .
 * @param motor_current_left [A] 
 * @param motor_current_right [A] 
 * @param mppt_current [A] 
 * @param temperature_battery_left [degC] Left side of battery pack
 * @param temperature_battery_right [degC] Right side of battery pack
 * @param temperature_mppt [degC] MPPT temperature.
 * @param latitude  Latitude info. Sixth decimal digit represents 11cm resolution
 * @param longitude  Longitude info. Sixth decimal digit represents 11cm resolution
 * @param rpm_left  RPM value for left motor
 * @param rpm_right  RPM value for right motor
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_all_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               float battery_voltage, float motor_current_left, float motor_current_right, float mppt_current, float temperature_battery_left, float temperature_battery_right, float temperature_mppt, float latitude, float longitude, float rpm_left, float rpm_right, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ALL_INFO_LEN];
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_float(buf, 16, temperature_battery_left);
    _mav_put_float(buf, 20, temperature_battery_right);
    _mav_put_float(buf, 24, temperature_mppt);
    _mav_put_float(buf, 28, latitude);
    _mav_put_float(buf, 32, longitude);
    _mav_put_float(buf, 36, rpm_left);
    _mav_put_float(buf, 40, rpm_right);
    _mav_put_uint32_t(buf, 44, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALL_INFO_LEN);
#else
    mavlink_all_info_t packet;
    packet.battery_voltage = battery_voltage;
    packet.motor_current_left = motor_current_left;
    packet.motor_current_right = motor_current_right;
    packet.mppt_current = mppt_current;
    packet.temperature_battery_left = temperature_battery_left;
    packet.temperature_battery_right = temperature_battery_right;
    packet.temperature_mppt = temperature_mppt;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.rpm_left = rpm_left;
    packet.rpm_right = rpm_right;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALL_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ALL_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALL_INFO_MIN_LEN, MAVLINK_MSG_ID_ALL_INFO_LEN, MAVLINK_MSG_ID_ALL_INFO_CRC);
}

/**
 * @brief Pack a all_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param battery_voltage [V] .
 * @param motor_current_left [A] 
 * @param motor_current_right [A] 
 * @param mppt_current [A] 
 * @param temperature_battery_left [degC] Left side of battery pack
 * @param temperature_battery_right [degC] Right side of battery pack
 * @param temperature_mppt [degC] MPPT temperature.
 * @param latitude  Latitude info. Sixth decimal digit represents 11cm resolution
 * @param longitude  Longitude info. Sixth decimal digit represents 11cm resolution
 * @param rpm_left  RPM value for left motor
 * @param rpm_right  RPM value for right motor
 * @param timestamp  Timestamp.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_all_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   float battery_voltage,float motor_current_left,float motor_current_right,float mppt_current,float temperature_battery_left,float temperature_battery_right,float temperature_mppt,float latitude,float longitude,float rpm_left,float rpm_right,uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ALL_INFO_LEN];
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_float(buf, 16, temperature_battery_left);
    _mav_put_float(buf, 20, temperature_battery_right);
    _mav_put_float(buf, 24, temperature_mppt);
    _mav_put_float(buf, 28, latitude);
    _mav_put_float(buf, 32, longitude);
    _mav_put_float(buf, 36, rpm_left);
    _mav_put_float(buf, 40, rpm_right);
    _mav_put_uint32_t(buf, 44, timestamp);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALL_INFO_LEN);
#else
    mavlink_all_info_t packet;
    packet.battery_voltage = battery_voltage;
    packet.motor_current_left = motor_current_left;
    packet.motor_current_right = motor_current_right;
    packet.mppt_current = mppt_current;
    packet.temperature_battery_left = temperature_battery_left;
    packet.temperature_battery_right = temperature_battery_right;
    packet.temperature_mppt = temperature_mppt;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.rpm_left = rpm_left;
    packet.rpm_right = rpm_right;
    packet.timestamp = timestamp;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ALL_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ALL_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ALL_INFO_MIN_LEN, MAVLINK_MSG_ID_ALL_INFO_LEN, MAVLINK_MSG_ID_ALL_INFO_CRC);
}

/**
 * @brief Encode a all_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param all_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_all_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_all_info_t* all_info)
{
    return mavlink_msg_all_info_pack(system_id, component_id, msg, all_info->battery_voltage, all_info->motor_current_left, all_info->motor_current_right, all_info->mppt_current, all_info->temperature_battery_left, all_info->temperature_battery_right, all_info->temperature_mppt, all_info->latitude, all_info->longitude, all_info->rpm_left, all_info->rpm_right, all_info->timestamp);
}

/**
 * @brief Encode a all_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param all_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_all_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_all_info_t* all_info)
{
    return mavlink_msg_all_info_pack_chan(system_id, component_id, chan, msg, all_info->battery_voltage, all_info->motor_current_left, all_info->motor_current_right, all_info->mppt_current, all_info->temperature_battery_left, all_info->temperature_battery_right, all_info->temperature_mppt, all_info->latitude, all_info->longitude, all_info->rpm_left, all_info->rpm_right, all_info->timestamp);
}

/**
 * @brief Send a all_info message
 * @param chan MAVLink channel to send the message
 *
 * @param battery_voltage [V] .
 * @param motor_current_left [A] 
 * @param motor_current_right [A] 
 * @param mppt_current [A] 
 * @param temperature_battery_left [degC] Left side of battery pack
 * @param temperature_battery_right [degC] Right side of battery pack
 * @param temperature_mppt [degC] MPPT temperature.
 * @param latitude  Latitude info. Sixth decimal digit represents 11cm resolution
 * @param longitude  Longitude info. Sixth decimal digit represents 11cm resolution
 * @param rpm_left  RPM value for left motor
 * @param rpm_right  RPM value for right motor
 * @param timestamp  Timestamp.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_all_info_send(mavlink_channel_t chan, float battery_voltage, float motor_current_left, float motor_current_right, float mppt_current, float temperature_battery_left, float temperature_battery_right, float temperature_mppt, float latitude, float longitude, float rpm_left, float rpm_right, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ALL_INFO_LEN];
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_float(buf, 16, temperature_battery_left);
    _mav_put_float(buf, 20, temperature_battery_right);
    _mav_put_float(buf, 24, temperature_mppt);
    _mav_put_float(buf, 28, latitude);
    _mav_put_float(buf, 32, longitude);
    _mav_put_float(buf, 36, rpm_left);
    _mav_put_float(buf, 40, rpm_right);
    _mav_put_uint32_t(buf, 44, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALL_INFO, buf, MAVLINK_MSG_ID_ALL_INFO_MIN_LEN, MAVLINK_MSG_ID_ALL_INFO_LEN, MAVLINK_MSG_ID_ALL_INFO_CRC);
#else
    mavlink_all_info_t packet;
    packet.battery_voltage = battery_voltage;
    packet.motor_current_left = motor_current_left;
    packet.motor_current_right = motor_current_right;
    packet.mppt_current = mppt_current;
    packet.temperature_battery_left = temperature_battery_left;
    packet.temperature_battery_right = temperature_battery_right;
    packet.temperature_mppt = temperature_mppt;
    packet.latitude = latitude;
    packet.longitude = longitude;
    packet.rpm_left = rpm_left;
    packet.rpm_right = rpm_right;
    packet.timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALL_INFO, (const char *)&packet, MAVLINK_MSG_ID_ALL_INFO_MIN_LEN, MAVLINK_MSG_ID_ALL_INFO_LEN, MAVLINK_MSG_ID_ALL_INFO_CRC);
#endif
}

/**
 * @brief Send a all_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_all_info_send_struct(mavlink_channel_t chan, const mavlink_all_info_t* all_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_all_info_send(chan, all_info->battery_voltage, all_info->motor_current_left, all_info->motor_current_right, all_info->mppt_current, all_info->temperature_battery_left, all_info->temperature_battery_right, all_info->temperature_mppt, all_info->latitude, all_info->longitude, all_info->rpm_left, all_info->rpm_right, all_info->timestamp);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALL_INFO, (const char *)all_info, MAVLINK_MSG_ID_ALL_INFO_MIN_LEN, MAVLINK_MSG_ID_ALL_INFO_LEN, MAVLINK_MSG_ID_ALL_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_ALL_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_all_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float battery_voltage, float motor_current_left, float motor_current_right, float mppt_current, float temperature_battery_left, float temperature_battery_right, float temperature_mppt, float latitude, float longitude, float rpm_left, float rpm_right, uint32_t timestamp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, battery_voltage);
    _mav_put_float(buf, 4, motor_current_left);
    _mav_put_float(buf, 8, motor_current_right);
    _mav_put_float(buf, 12, mppt_current);
    _mav_put_float(buf, 16, temperature_battery_left);
    _mav_put_float(buf, 20, temperature_battery_right);
    _mav_put_float(buf, 24, temperature_mppt);
    _mav_put_float(buf, 28, latitude);
    _mav_put_float(buf, 32, longitude);
    _mav_put_float(buf, 36, rpm_left);
    _mav_put_float(buf, 40, rpm_right);
    _mav_put_uint32_t(buf, 44, timestamp);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALL_INFO, buf, MAVLINK_MSG_ID_ALL_INFO_MIN_LEN, MAVLINK_MSG_ID_ALL_INFO_LEN, MAVLINK_MSG_ID_ALL_INFO_CRC);
#else
    mavlink_all_info_t *packet = (mavlink_all_info_t *)msgbuf;
    packet->battery_voltage = battery_voltage;
    packet->motor_current_left = motor_current_left;
    packet->motor_current_right = motor_current_right;
    packet->mppt_current = mppt_current;
    packet->temperature_battery_left = temperature_battery_left;
    packet->temperature_battery_right = temperature_battery_right;
    packet->temperature_mppt = temperature_mppt;
    packet->latitude = latitude;
    packet->longitude = longitude;
    packet->rpm_left = rpm_left;
    packet->rpm_right = rpm_right;
    packet->timestamp = timestamp;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ALL_INFO, (const char *)packet, MAVLINK_MSG_ID_ALL_INFO_MIN_LEN, MAVLINK_MSG_ID_ALL_INFO_LEN, MAVLINK_MSG_ID_ALL_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE ALL_INFO UNPACKING


/**
 * @brief Get field battery_voltage from all_info message
 *
 * @return [V] .
 */
static inline float mavlink_msg_all_info_get_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field motor_current_left from all_info message
 *
 * @return [A] 
 */
static inline float mavlink_msg_all_info_get_motor_current_left(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field motor_current_right from all_info message
 *
 * @return [A] 
 */
static inline float mavlink_msg_all_info_get_motor_current_right(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field mppt_current from all_info message
 *
 * @return [A] 
 */
static inline float mavlink_msg_all_info_get_mppt_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field temperature_battery_left from all_info message
 *
 * @return [degC] Left side of battery pack
 */
static inline float mavlink_msg_all_info_get_temperature_battery_left(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field temperature_battery_right from all_info message
 *
 * @return [degC] Right side of battery pack
 */
static inline float mavlink_msg_all_info_get_temperature_battery_right(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field temperature_mppt from all_info message
 *
 * @return [degC] MPPT temperature.
 */
static inline float mavlink_msg_all_info_get_temperature_mppt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field latitude from all_info message
 *
 * @return  Latitude info. Sixth decimal digit represents 11cm resolution
 */
static inline float mavlink_msg_all_info_get_latitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field longitude from all_info message
 *
 * @return  Longitude info. Sixth decimal digit represents 11cm resolution
 */
static inline float mavlink_msg_all_info_get_longitude(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field rpm_left from all_info message
 *
 * @return  RPM value for left motor
 */
static inline float mavlink_msg_all_info_get_rpm_left(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field rpm_right from all_info message
 *
 * @return  RPM value for right motor
 */
static inline float mavlink_msg_all_info_get_rpm_right(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field timestamp from all_info message
 *
 * @return  Timestamp.
 */
static inline uint32_t mavlink_msg_all_info_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  44);
}

/**
 * @brief Decode a all_info message into a struct
 *
 * @param msg The message to decode
 * @param all_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_all_info_decode(const mavlink_message_t* msg, mavlink_all_info_t* all_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    all_info->battery_voltage = mavlink_msg_all_info_get_battery_voltage(msg);
    all_info->motor_current_left = mavlink_msg_all_info_get_motor_current_left(msg);
    all_info->motor_current_right = mavlink_msg_all_info_get_motor_current_right(msg);
    all_info->mppt_current = mavlink_msg_all_info_get_mppt_current(msg);
    all_info->temperature_battery_left = mavlink_msg_all_info_get_temperature_battery_left(msg);
    all_info->temperature_battery_right = mavlink_msg_all_info_get_temperature_battery_right(msg);
    all_info->temperature_mppt = mavlink_msg_all_info_get_temperature_mppt(msg);
    all_info->latitude = mavlink_msg_all_info_get_latitude(msg);
    all_info->longitude = mavlink_msg_all_info_get_longitude(msg);
    all_info->rpm_left = mavlink_msg_all_info_get_rpm_left(msg);
    all_info->rpm_right = mavlink_msg_all_info_get_rpm_right(msg);
    all_info->timestamp = mavlink_msg_all_info_get_timestamp(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ALL_INFO_LEN? msg->len : MAVLINK_MSG_ID_ALL_INFO_LEN;
        memset(all_info, 0, MAVLINK_MSG_ID_ALL_INFO_LEN);
    memcpy(all_info, _MAV_PAYLOAD(msg), len);
#endif
}
