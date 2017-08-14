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
    /// Implements the VideoClip profile message.
    /// </summary>
    public class VideoClipMesg : Mesg
    {
        #region Fields
        #endregion

        /// <summary>
        /// Field Numbers for <see cref="VideoClipMesg"/>
        /// </summary>
        public sealed class FieldDefNum
        {
            public const byte ClipNumber = 0;
            public const byte StartTimestamp = 1;
            public const byte StartTimestampMs = 2;
            public const byte EndTimestamp = 3;
            public const byte EndTimestampMs = 4;
            public const byte ClipStart = 6;
            public const byte ClipEnd = 7;
            public const byte Invalid = Fit.FieldNumInvalid;
        }

        #region Constructors
        public VideoClipMesg() : base(Profile.GetMesg(MesgNum.VideoClip))
        {
        }

        public VideoClipMesg(Mesg mesg) : base(mesg)
        {
        }
        #endregion // Constructors

        #region Methods
        ///<summary>
        /// Retrieves the ClipNumber field</summary>
        /// <returns>Returns nullable ushort representing the ClipNumber field</returns>
        public ushort? GetClipNumber()
        {
            Object val = GetFieldValue(0, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set ClipNumber field</summary>
        /// <param name="clipNumber_">Nullable field value to be set</param>
        public void SetClipNumber(ushort? clipNumber_)
        {
            SetFieldValue(0, 0, clipNumber_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the StartTimestamp field</summary>
        /// <returns>Returns DateTime representing the StartTimestamp field</returns>
        public DateTime GetStartTimestamp()
        {
            Object val = GetFieldValue(1, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return TimestampToDateTime(Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set StartTimestamp field</summary>
        /// <param name="startTimestamp_">Nullable field value to be set</param>
        public void SetStartTimestamp(DateTime startTimestamp_)
        {
            SetFieldValue(1, 0, startTimestamp_.GetTimeStamp(), Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the StartTimestampMs field</summary>
        /// <returns>Returns nullable ushort representing the StartTimestampMs field</returns>
        public ushort? GetStartTimestampMs()
        {
            Object val = GetFieldValue(2, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set StartTimestampMs field</summary>
        /// <param name="startTimestampMs_">Nullable field value to be set</param>
        public void SetStartTimestampMs(ushort? startTimestampMs_)
        {
            SetFieldValue(2, 0, startTimestampMs_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the EndTimestamp field</summary>
        /// <returns>Returns DateTime representing the EndTimestamp field</returns>
        public DateTime GetEndTimestamp()
        {
            Object val = GetFieldValue(3, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return TimestampToDateTime(Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set EndTimestamp field</summary>
        /// <param name="endTimestamp_">Nullable field value to be set</param>
        public void SetEndTimestamp(DateTime endTimestamp_)
        {
            SetFieldValue(3, 0, endTimestamp_.GetTimeStamp(), Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the EndTimestampMs field</summary>
        /// <returns>Returns nullable ushort representing the EndTimestampMs field</returns>
        public ushort? GetEndTimestampMs()
        {
            Object val = GetFieldValue(4, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt16(val));
            
        }

        /// <summary>
        /// Set EndTimestampMs field</summary>
        /// <param name="endTimestampMs_">Nullable field value to be set</param>
        public void SetEndTimestampMs(ushort? endTimestampMs_)
        {
            SetFieldValue(4, 0, endTimestampMs_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the ClipStart field
        /// Units: ms
        /// Comment: Start of clip in video time</summary>
        /// <returns>Returns nullable uint representing the ClipStart field</returns>
        public uint? GetClipStart()
        {
            Object val = GetFieldValue(6, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set ClipStart field
        /// Units: ms
        /// Comment: Start of clip in video time</summary>
        /// <param name="clipStart_">Nullable field value to be set</param>
        public void SetClipStart(uint? clipStart_)
        {
            SetFieldValue(6, 0, clipStart_, Fit.SubfieldIndexMainField);
        }
        
        ///<summary>
        /// Retrieves the ClipEnd field
        /// Units: ms
        /// Comment: End of clip in video time</summary>
        /// <returns>Returns nullable uint representing the ClipEnd field</returns>
        public uint? GetClipEnd()
        {
            Object val = GetFieldValue(7, 0, Fit.SubfieldIndexMainField);
            if(val == null)
            {
                return null;
            }

            return (Convert.ToUInt32(val));
            
        }

        /// <summary>
        /// Set ClipEnd field
        /// Units: ms
        /// Comment: End of clip in video time</summary>
        /// <param name="clipEnd_">Nullable field value to be set</param>
        public void SetClipEnd(uint? clipEnd_)
        {
            SetFieldValue(7, 0, clipEnd_, Fit.SubfieldIndexMainField);
        }
        
        #endregion // Methods
    } // Class
} // namespace
