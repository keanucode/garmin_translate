#region Copyright
////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2017 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.41Release
// Tag = production/akw/20.41.00-0-gfbba504
////////////////////////////////////////////////////////////////////////////////

#endregion

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using System.IO;
using System.Linq;

namespace Dynastream.Fit
{
    /// <summary>
    /// Implements the WeatherConditions profile message.
    /// </summary>
    public class WeatherConditionsMesg : Mesg
    {
        #region Fields
        #endregion

        /// <summary>
        /// Field Numbers for <see cref="WeatherConditionsMesg"/>
        /// </summary>
        public sealed class FieldDefNum
        {
            public const byte Timestamp = 253;
            public const byte WeatherReport = 0;
            public const byte Temperature = 1;
            public const byte Condition = 2;
            public const byte WindDirection = 3;
            public const byte WindSpeed = 4;
            public const byte PrecipitationProbability = 5;
            public const byte TemperatureFeelsLike = 6;
            public const byte RelativeHumidity = 7;
            public const byte Location = 8;
            public const byte ObservedAtTime = 9;
            public const byte ObservedLocationLat = 10;
            public const byte ObservedLocationLong = 11;
            public const byte DayOfWeek = 12;
            public const byte HighTemperature = 13;
            public const byte LowTemperature = 14;
            public const byte Invalid = Fit.FieldNumInvalid;
        }

        #region Constructors
        public WeatherConditionsMesg() : base(Profile.GetMesg(MesgNum.WeatherConditions))
        {
        }

        public WeatherConditionsMesg(Mesg mesg) : base(mesg)
        {
        }
        #endregion // Constructors

        #region Methods
        ///<summary>
        /// Retrieves the Timestamp field
        /// Comment: time of update for current conditions, else forecast time</summary>
        /// <returns>Returns DateTime representing the Timestamp field</returns>
        public DateTime GetTimestamp()
        {
            Object val = GetFieldValue(253, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return TimestampToDateTime(Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set Timestamp field
        /// Comment: time of update for current conditions, else forecast time</summary>
        /// <param name="timestamp_">Nullable field value to be set</param>
        public void SetTimestamp(DateTime timestamp_)
        {
            SetFieldValue(253, 0, timestamp_.GetTimeStamp(), Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the WeatherReport field
        /// Comment: Current or forecast</summary>
        /// <returns>Returns nullable WeatherReport enum representing the WeatherReport field</returns>
        public WeatherReport? GetWeatherReport()
        {
            object obj = GetFieldValue(0, 0, Fit.SubfieldIndexMainField);
            WeatherReport? value = obj == null ? (WeatherReport?)null : (WeatherReport)obj;
            return value;
        }

        /// <summary>
        /// Set WeatherReport field
        /// Comment: Current or forecast</summary>
        /// <param name="weatherReport_">Nullable field value to be set</param>
        public void SetWeatherReport(WeatherReport? weatherReport_)
        {
            SetFieldValue(0, 0, weatherReport_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the Temperature field
        /// Units: C</summary>
        /// <returns>Returns nullable sbyte representing the Temperature field</returns>
        public sbyte? GetTemperature()
        {
            Object val = GetFieldValue(1, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToSByte(val));
            
        }

        /// <summary>
        /// Set Temperature field
        /// Units: C</summary>
        /// <param name="temperature_">Nullable field value to be set</param>
        public void SetTemperature(sbyte? temperature_)
        {
            SetFieldValue(1, 0, temperature_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the Condition field
        /// Comment: Corresponds to GSC Response weatherIcon field</summary>
        /// <returns>Returns nullable WeatherStatus enum representing the Condition field</returns>
        public WeatherStatus? GetCondition()
        {
            object obj = GetFieldValue(2, 0, Fit.SubfieldIndexMainField);
            WeatherStatus? value = obj == null ? (WeatherStatus?)null : (WeatherStatus)obj;
            return value;
        }

        /// <summary>
        /// Set Condition field
        /// Comment: Corresponds to GSC Response weatherIcon field</summary>
        /// <param name="condition_">Nullable field value to be set</param>
        public void SetCondition(WeatherStatus? condition_)
        {
            SetFieldValue(2, 0, condition_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the WindDirection field
        /// Units: degrees</summary>
        /// <returns>Returns nullable ushort representing the WindDirection field</returns>
        public ushort? GetWindDirection()
        {
            Object val = GetFieldValue(3, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set WindDirection field
        /// Units: degrees</summary>
        /// <param name="windDirection_">Nullable field value to be set</param>
        public void SetWindDirection(ushort? windDirection_)
        {
            SetFieldValue(3, 0, windDirection_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the WindSpeed field
        /// Units: m/s</summary>
        /// <returns>Returns nullable float representing the WindSpeed field</returns>
        public float? GetWindSpeed()
        {
            Object val = GetFieldValue(4, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToSingle(val));
            
        }

        /// <summary>
        /// Set WindSpeed field
        /// Units: m/s</summary>
        /// <param name="windSpeed_">Nullable field value to be set</param>
        public void SetWindSpeed(float? windSpeed_)
        {
            SetFieldValue(4, 0, windSpeed_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the PrecipitationProbability field
        /// Comment: range 0-100</summary>
        /// <returns>Returns nullable byte representing the PrecipitationProbability field</returns>
        public byte? GetPrecipitationProbability()
        {
            Object val = GetFieldValue(5, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToByte(val));
            
        }

        /// <summary>
        /// Set PrecipitationProbability field
        /// Comment: range 0-100</summary>
        /// <param name="precipitationProbability_">Nullable field value to be set</param>
        public void SetPrecipitationProbability(byte? precipitationProbability_)
        {
            SetFieldValue(5, 0, precipitationProbability_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the TemperatureFeelsLike field
        /// Units: C
        /// Comment: Heat Index if  GCS heatIdx above or equal to 90F or wind chill if GCS windChill below or equal to 32F</summary>
        /// <returns>Returns nullable sbyte representing the TemperatureFeelsLike field</returns>
        public sbyte? GetTemperatureFeelsLike()
        {
            Object val = GetFieldValue(6, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToSByte(val));
            
        }

        /// <summary>
        /// Set TemperatureFeelsLike field
        /// Units: C
        /// Comment: Heat Index if  GCS heatIdx above or equal to 90F or wind chill if GCS windChill below or equal to 32F</summary>
        /// <param name="temperatureFeelsLike_">Nullable field value to be set</param>
        public void SetTemperatureFeelsLike(sbyte? temperatureFeelsLike_)
        {
            SetFieldValue(6, 0, temperatureFeelsLike_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the RelativeHumidity field</summary>
        /// <returns>Returns nullable byte representing the RelativeHumidity field</returns>
        public byte? GetRelativeHumidity()
        {
            Object val = GetFieldValue(7, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToByte(val));
            
        }

        /// <summary>
        /// Set RelativeHumidity field</summary>
        /// <param name="relativeHumidity_">Nullable field value to be set</param>
        public void SetRelativeHumidity(byte? relativeHumidity_)
        {
            SetFieldValue(7, 0, relativeHumidity_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the Location field
        /// Comment: string corresponding to GCS response location string</summary>
        /// <returns>Returns byte[] representing the Location field</returns>
        public byte[] GetLocation()
        {
            byte[] data = (byte[])GetFieldValue(8, 0, Fit.SubfieldIndexMainField);
            return data.Take(data.Length - 1).ToArray();
        }

        ///<summary>
        /// Retrieves the Location field
        /// Comment: string corresponding to GCS response location string</summary>
        /// <returns>Returns String representing the Location field</returns>
        public String GetLocationAsString()
        {
            byte[] data = (byte[])GetFieldValue(8, 0, Fit.SubfieldIndexMainField);
            return data != null ? Encoding.UTF8.GetString(data, 0, data.Length - 1) : null;
        }

        ///<summary>
        /// Set Location field
        /// Comment: string corresponding to GCS response location string</summary>
        /// <param name="location_"> field value to be set</param>
        public void SetLocation(String location_)
        {
            byte[] data = Encoding.UTF8.GetBytes(location_);
            byte[] zdata = new byte[data.Length + 1];
            data.CopyTo(zdata, 0);
            SetFieldValue(8, 0, zdata, Fit.SubfieldIndexMainField);
        }

        
        /// <summary>
        /// Set Location field
        /// Comment: string corresponding to GCS response location string</summary>
        /// <param name="location_">field value to be set</param>
        public void SetLocation(byte[] location_)
        {
            SetFieldValue(8, 0, location_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the ObservedAtTime field</summary>
        /// <returns>Returns DateTime representing the ObservedAtTime field</returns>
        public DateTime GetObservedAtTime()
        {
            Object val = GetFieldValue(9, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return TimestampToDateTime(Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set ObservedAtTime field</summary>
        /// <param name="observedAtTime_">Nullable field value to be set</param>
        public void SetObservedAtTime(DateTime observedAtTime_)
        {
            SetFieldValue(9, 0, observedAtTime_.GetTimeStamp(), Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the ObservedLocationLat field
        /// Units: semicircles</summary>
        /// <returns>Returns nullable int representing the ObservedLocationLat field</returns>
        public int? GetObservedLocationLat()
        {
            Object val = GetFieldValue(10, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToInt32(val));
            
        }

        /// <summary>
        /// Set ObservedLocationLat field
        /// Units: semicircles</summary>
        /// <param name="observedLocationLat_">Nullable field value to be set</param>
        public void SetObservedLocationLat(int? observedLocationLat_)
        {
            SetFieldValue(10, 0, observedLocationLat_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the ObservedLocationLong field
        /// Units: semicircles</summary>
        /// <returns>Returns nullable int representing the ObservedLocationLong field</returns>
        public int? GetObservedLocationLong()
        {
            Object val = GetFieldValue(11, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToInt32(val));
            
        }

        /// <summary>
        /// Set ObservedLocationLong field
        /// Units: semicircles</summary>
        /// <param name="observedLocationLong_">Nullable field value to be set</param>
        public void SetObservedLocationLong(int? observedLocationLong_)
        {
            SetFieldValue(11, 0, observedLocationLong_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the DayOfWeek field</summary>
        /// <returns>Returns nullable DayOfWeek enum representing the DayOfWeek field</returns>
        public DayOfWeek? GetDayOfWeek()
        {
            object obj = GetFieldValue(12, 0, Fit.SubfieldIndexMainField);
            DayOfWeek? value = obj == null ? (DayOfWeek?)null : (DayOfWeek)obj;
            return value;
        }

        /// <summary>
        /// Set DayOfWeek field</summary>
        /// <param name="dayOfWeek_">Nullable field value to be set</param>
        public void SetDayOfWeek(DayOfWeek? dayOfWeek_)
        {
            SetFieldValue(12, 0, dayOfWeek_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the HighTemperature field
        /// Units: C</summary>
        /// <returns>Returns nullable sbyte representing the HighTemperature field</returns>
        public sbyte? GetHighTemperature()
        {
            Object val = GetFieldValue(13, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToSByte(val));
            
        }

        /// <summary>
        /// Set HighTemperature field
        /// Units: C</summary>
        /// <param name="highTemperature_">Nullable field value to be set</param>
        public void SetHighTemperature(sbyte? highTemperature_)
        {
            SetFieldValue(13, 0, highTemperature_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the LowTemperature field
        /// Units: C</summary>
        /// <returns>Returns nullable sbyte representing the LowTemperature field</returns>
        public sbyte? GetLowTemperature()
        {
            Object val = GetFieldValue(14, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToSByte(val));
            
        }

        /// <summary>
        /// Set LowTemperature field
        /// Units: C</summary>
        /// <param name="lowTemperature_">Nullable field value to be set</param>
        public void SetLowTemperature(sbyte? lowTemperature_)
        {
            SetFieldValue(14, 0, lowTemperature_, Fit.SubfieldIndexMainField);
        }
        
        #endregion // Methods
    } // Class
} // namespace
