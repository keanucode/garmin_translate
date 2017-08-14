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


#if !defined(FIT_MESG_BROADCASTER_HPP)
#define FIT_MESG_BROADCASTER_HPP

#include <iosfwd>
#include <vector>
#include "fit_mesg.hpp"
#include "fit_mesg_definition.hpp"
#include "fit_mesg_definition_listener.hpp"
#include "fit_mesg_listener.hpp"
#include "fit_mesg_with_event_broadcaster.hpp"
#include "fit_buffered_record_mesg_broadcaster.hpp"
#include "fit_decode.hpp"
#include "fit_file_id_mesg_listener.hpp"
#include "fit_file_creator_mesg_listener.hpp"
#include "fit_timestamp_correlation_mesg_listener.hpp"
#include "fit_software_mesg_listener.hpp"
#include "fit_slave_device_mesg_listener.hpp"
#include "fit_capabilities_mesg_listener.hpp"
#include "fit_file_capabilities_mesg_listener.hpp"
#include "fit_mesg_capabilities_mesg_listener.hpp"
#include "fit_field_capabilities_mesg_listener.hpp"
#include "fit_device_settings_mesg_listener.hpp"
#include "fit_user_profile_mesg_listener.hpp"
#include "fit_hrm_profile_mesg_listener.hpp"
#include "fit_sdm_profile_mesg_listener.hpp"
#include "fit_bike_profile_mesg_listener.hpp"
#include "fit_connectivity_mesg_listener.hpp"
#include "fit_watchface_settings_mesg_listener.hpp"
#include "fit_ohr_settings_mesg_listener.hpp"
#include "fit_zones_target_mesg_listener.hpp"
#include "fit_sport_mesg_listener.hpp"
#include "fit_hr_zone_mesg_listener.hpp"
#include "fit_speed_zone_mesg_listener.hpp"
#include "fit_cadence_zone_mesg_listener.hpp"
#include "fit_power_zone_mesg_listener.hpp"
#include "fit_met_zone_mesg_listener.hpp"
#include "fit_goal_mesg_listener.hpp"
#include "fit_activity_mesg_listener.hpp"
#include "fit_session_mesg_listener.hpp"
#include "fit_lap_mesg_listener.hpp"
#include "fit_length_mesg_listener.hpp"
#include "fit_record_mesg_listener.hpp"
#include "fit_event_mesg_listener.hpp"
#include "fit_device_info_mesg_listener.hpp"
#include "fit_training_file_mesg_listener.hpp"
#include "fit_hrv_mesg_listener.hpp"
#include "fit_weather_conditions_mesg_listener.hpp"
#include "fit_weather_alert_mesg_listener.hpp"
#include "fit_gps_metadata_mesg_listener.hpp"
#include "fit_camera_event_mesg_listener.hpp"
#include "fit_gyroscope_data_mesg_listener.hpp"
#include "fit_accelerometer_data_mesg_listener.hpp"
#include "fit_magnetometer_data_mesg_listener.hpp"
#include "fit_three_d_sensor_calibration_mesg_listener.hpp"
#include "fit_video_frame_mesg_listener.hpp"
#include "fit_obdii_data_mesg_listener.hpp"
#include "fit_nmea_sentence_mesg_listener.hpp"
#include "fit_aviation_attitude_mesg_listener.hpp"
#include "fit_video_mesg_listener.hpp"
#include "fit_video_title_mesg_listener.hpp"
#include "fit_video_description_mesg_listener.hpp"
#include "fit_video_clip_mesg_listener.hpp"
#include "fit_course_mesg_listener.hpp"
#include "fit_course_point_mesg_listener.hpp"
#include "fit_segment_id_mesg_listener.hpp"
#include "fit_segment_leaderboard_entry_mesg_listener.hpp"
#include "fit_segment_point_mesg_listener.hpp"
#include "fit_segment_lap_mesg_listener.hpp"
#include "fit_segment_file_mesg_listener.hpp"
#include "fit_workout_mesg_listener.hpp"
#include "fit_workout_session_mesg_listener.hpp"
#include "fit_workout_step_mesg_listener.hpp"
#include "fit_schedule_mesg_listener.hpp"
#include "fit_totals_mesg_listener.hpp"
#include "fit_weight_scale_mesg_listener.hpp"
#include "fit_blood_pressure_mesg_listener.hpp"
#include "fit_monitoring_info_mesg_listener.hpp"
#include "fit_monitoring_mesg_listener.hpp"
#include "fit_hr_mesg_listener.hpp"
#include "fit_memo_glob_mesg_listener.hpp"
#include "fit_ant_channel_id_mesg_listener.hpp"
#include "fit_ant_rx_mesg_listener.hpp"
#include "fit_ant_tx_mesg_listener.hpp"
#include "fit_exd_screen_configuration_mesg_listener.hpp"
#include "fit_exd_data_field_configuration_mesg_listener.hpp"
#include "fit_exd_data_concept_configuration_mesg_listener.hpp"
#include "fit_field_description_mesg_listener.hpp"
#include "fit_developer_data_id_mesg_listener.hpp"
#include "fit_pad_mesg_listener.hpp"

namespace fit
{

class MesgBroadcaster : public MesgListener, public MesgDefinitionListener
{
public:
    MesgBroadcaster(void);
    FIT_BOOL Run(std::istream& file);
    void AddListener(MesgDefinitionListener& mesgDefinitionListener);
    void RemoveListener(MesgDefinitionListener& mesgDefinitionListener);
    void AddListener(MesgListener& mesgListener);
    void RemoveListener(MesgListener& mesgListener);
    void AddListener(MesgWithEventListener& mesgListener);
    void RemoveListener(MesgWithEventListener& mesgListener);
    void AddListener(BufferedRecordMesgListener& bufferedRecordMesgListener);
    void RemoveListener(BufferedRecordMesgListener& bufferedRecordMesgListener);
    void AddListener(FileIdMesgListener& fileIdMesgListener);
    void RemoveListener(FileIdMesgListener& fileIdMesgListener);
    void AddListener(FileCreatorMesgListener& fileCreatorMesgListener);
    void RemoveListener(FileCreatorMesgListener& fileCreatorMesgListener);
    void AddListener(TimestampCorrelationMesgListener& timestampCorrelationMesgListener);
    void RemoveListener(TimestampCorrelationMesgListener& timestampCorrelationMesgListener);
    void AddListener(SoftwareMesgListener& softwareMesgListener);
    void RemoveListener(SoftwareMesgListener& softwareMesgListener);
    void AddListener(SlaveDeviceMesgListener& slaveDeviceMesgListener);
    void RemoveListener(SlaveDeviceMesgListener& slaveDeviceMesgListener);
    void AddListener(CapabilitiesMesgListener& capabilitiesMesgListener);
    void RemoveListener(CapabilitiesMesgListener& capabilitiesMesgListener);
    void AddListener(FileCapabilitiesMesgListener& fileCapabilitiesMesgListener);
    void RemoveListener(FileCapabilitiesMesgListener& fileCapabilitiesMesgListener);
    void AddListener(MesgCapabilitiesMesgListener& mesgCapabilitiesMesgListener);
    void RemoveListener(MesgCapabilitiesMesgListener& mesgCapabilitiesMesgListener);
    void AddListener(FieldCapabilitiesMesgListener& fieldCapabilitiesMesgListener);
    void RemoveListener(FieldCapabilitiesMesgListener& fieldCapabilitiesMesgListener);
    void AddListener(DeviceSettingsMesgListener& deviceSettingsMesgListener);
    void RemoveListener(DeviceSettingsMesgListener& deviceSettingsMesgListener);
    void AddListener(UserProfileMesgListener& userProfileMesgListener);
    void RemoveListener(UserProfileMesgListener& userProfileMesgListener);
    void AddListener(HrmProfileMesgListener& hrmProfileMesgListener);
    void RemoveListener(HrmProfileMesgListener& hrmProfileMesgListener);
    void AddListener(SdmProfileMesgListener& sdmProfileMesgListener);
    void RemoveListener(SdmProfileMesgListener& sdmProfileMesgListener);
    void AddListener(BikeProfileMesgListener& bikeProfileMesgListener);
    void RemoveListener(BikeProfileMesgListener& bikeProfileMesgListener);
    void AddListener(ConnectivityMesgListener& connectivityMesgListener);
    void RemoveListener(ConnectivityMesgListener& connectivityMesgListener);
    void AddListener(WatchfaceSettingsMesgListener& watchfaceSettingsMesgListener);
    void RemoveListener(WatchfaceSettingsMesgListener& watchfaceSettingsMesgListener);
    void AddListener(OhrSettingsMesgListener& ohrSettingsMesgListener);
    void RemoveListener(OhrSettingsMesgListener& ohrSettingsMesgListener);
    void AddListener(ZonesTargetMesgListener& zonesTargetMesgListener);
    void RemoveListener(ZonesTargetMesgListener& zonesTargetMesgListener);
    void AddListener(SportMesgListener& sportMesgListener);
    void RemoveListener(SportMesgListener& sportMesgListener);
    void AddListener(HrZoneMesgListener& hrZoneMesgListener);
    void RemoveListener(HrZoneMesgListener& hrZoneMesgListener);
    void AddListener(SpeedZoneMesgListener& speedZoneMesgListener);
    void RemoveListener(SpeedZoneMesgListener& speedZoneMesgListener);
    void AddListener(CadenceZoneMesgListener& cadenceZoneMesgListener);
    void RemoveListener(CadenceZoneMesgListener& cadenceZoneMesgListener);
    void AddListener(PowerZoneMesgListener& powerZoneMesgListener);
    void RemoveListener(PowerZoneMesgListener& powerZoneMesgListener);
    void AddListener(MetZoneMesgListener& metZoneMesgListener);
    void RemoveListener(MetZoneMesgListener& metZoneMesgListener);
    void AddListener(GoalMesgListener& goalMesgListener);
    void RemoveListener(GoalMesgListener& goalMesgListener);
    void AddListener(ActivityMesgListener& activityMesgListener);
    void RemoveListener(ActivityMesgListener& activityMesgListener);
    void AddListener(SessionMesgListener& sessionMesgListener);
    void RemoveListener(SessionMesgListener& sessionMesgListener);
    void AddListener(LapMesgListener& lapMesgListener);
    void RemoveListener(LapMesgListener& lapMesgListener);
    void AddListener(LengthMesgListener& lengthMesgListener);
    void RemoveListener(LengthMesgListener& lengthMesgListener);
    void AddListener(RecordMesgListener& recordMesgListener);
    void RemoveListener(RecordMesgListener& recordMesgListener);
    void AddListener(EventMesgListener& eventMesgListener);
    void RemoveListener(EventMesgListener& eventMesgListener);
    void AddListener(DeviceInfoMesgListener& deviceInfoMesgListener);
    void RemoveListener(DeviceInfoMesgListener& deviceInfoMesgListener);
    void AddListener(TrainingFileMesgListener& trainingFileMesgListener);
    void RemoveListener(TrainingFileMesgListener& trainingFileMesgListener);
    void AddListener(HrvMesgListener& hrvMesgListener);
    void RemoveListener(HrvMesgListener& hrvMesgListener);
    void AddListener(WeatherConditionsMesgListener& weatherConditionsMesgListener);
    void RemoveListener(WeatherConditionsMesgListener& weatherConditionsMesgListener);
    void AddListener(WeatherAlertMesgListener& weatherAlertMesgListener);
    void RemoveListener(WeatherAlertMesgListener& weatherAlertMesgListener);
    void AddListener(GpsMetadataMesgListener& gpsMetadataMesgListener);
    void RemoveListener(GpsMetadataMesgListener& gpsMetadataMesgListener);
    void AddListener(CameraEventMesgListener& cameraEventMesgListener);
    void RemoveListener(CameraEventMesgListener& cameraEventMesgListener);
    void AddListener(GyroscopeDataMesgListener& gyroscopeDataMesgListener);
    void RemoveListener(GyroscopeDataMesgListener& gyroscopeDataMesgListener);
    void AddListener(AccelerometerDataMesgListener& accelerometerDataMesgListener);
    void RemoveListener(AccelerometerDataMesgListener& accelerometerDataMesgListener);
    void AddListener(MagnetometerDataMesgListener& magnetometerDataMesgListener);
    void RemoveListener(MagnetometerDataMesgListener& magnetometerDataMesgListener);
    void AddListener(ThreeDSensorCalibrationMesgListener& threeDSensorCalibrationMesgListener);
    void RemoveListener(ThreeDSensorCalibrationMesgListener& threeDSensorCalibrationMesgListener);
    void AddListener(VideoFrameMesgListener& videoFrameMesgListener);
    void RemoveListener(VideoFrameMesgListener& videoFrameMesgListener);
    void AddListener(ObdiiDataMesgListener& obdiiDataMesgListener);
    void RemoveListener(ObdiiDataMesgListener& obdiiDataMesgListener);
    void AddListener(NmeaSentenceMesgListener& nmeaSentenceMesgListener);
    void RemoveListener(NmeaSentenceMesgListener& nmeaSentenceMesgListener);
    void AddListener(AviationAttitudeMesgListener& aviationAttitudeMesgListener);
    void RemoveListener(AviationAttitudeMesgListener& aviationAttitudeMesgListener);
    void AddListener(VideoMesgListener& videoMesgListener);
    void RemoveListener(VideoMesgListener& videoMesgListener);
    void AddListener(VideoTitleMesgListener& videoTitleMesgListener);
    void RemoveListener(VideoTitleMesgListener& videoTitleMesgListener);
    void AddListener(VideoDescriptionMesgListener& videoDescriptionMesgListener);
    void RemoveListener(VideoDescriptionMesgListener& videoDescriptionMesgListener);
    void AddListener(VideoClipMesgListener& videoClipMesgListener);
    void RemoveListener(VideoClipMesgListener& videoClipMesgListener);
    void AddListener(CourseMesgListener& courseMesgListener);
    void RemoveListener(CourseMesgListener& courseMesgListener);
    void AddListener(CoursePointMesgListener& coursePointMesgListener);
    void RemoveListener(CoursePointMesgListener& coursePointMesgListener);
    void AddListener(SegmentIdMesgListener& segmentIdMesgListener);
    void RemoveListener(SegmentIdMesgListener& segmentIdMesgListener);
    void AddListener(SegmentLeaderboardEntryMesgListener& segmentLeaderboardEntryMesgListener);
    void RemoveListener(SegmentLeaderboardEntryMesgListener& segmentLeaderboardEntryMesgListener);
    void AddListener(SegmentPointMesgListener& segmentPointMesgListener);
    void RemoveListener(SegmentPointMesgListener& segmentPointMesgListener);
    void AddListener(SegmentLapMesgListener& segmentLapMesgListener);
    void RemoveListener(SegmentLapMesgListener& segmentLapMesgListener);
    void AddListener(SegmentFileMesgListener& segmentFileMesgListener);
    void RemoveListener(SegmentFileMesgListener& segmentFileMesgListener);
    void AddListener(WorkoutMesgListener& workoutMesgListener);
    void RemoveListener(WorkoutMesgListener& workoutMesgListener);
    void AddListener(WorkoutSessionMesgListener& workoutSessionMesgListener);
    void RemoveListener(WorkoutSessionMesgListener& workoutSessionMesgListener);
    void AddListener(WorkoutStepMesgListener& workoutStepMesgListener);
    void RemoveListener(WorkoutStepMesgListener& workoutStepMesgListener);
    void AddListener(ScheduleMesgListener& scheduleMesgListener);
    void RemoveListener(ScheduleMesgListener& scheduleMesgListener);
    void AddListener(TotalsMesgListener& totalsMesgListener);
    void RemoveListener(TotalsMesgListener& totalsMesgListener);
    void AddListener(WeightScaleMesgListener& weightScaleMesgListener);
    void RemoveListener(WeightScaleMesgListener& weightScaleMesgListener);
    void AddListener(BloodPressureMesgListener& bloodPressureMesgListener);
    void RemoveListener(BloodPressureMesgListener& bloodPressureMesgListener);
    void AddListener(MonitoringInfoMesgListener& monitoringInfoMesgListener);
    void RemoveListener(MonitoringInfoMesgListener& monitoringInfoMesgListener);
    void AddListener(MonitoringMesgListener& monitoringMesgListener);
    void RemoveListener(MonitoringMesgListener& monitoringMesgListener);
    void AddListener(HrMesgListener& hrMesgListener);
    void RemoveListener(HrMesgListener& hrMesgListener);
    void AddListener(MemoGlobMesgListener& memoGlobMesgListener);
    void RemoveListener(MemoGlobMesgListener& memoGlobMesgListener);
    void AddListener(AntChannelIdMesgListener& antChannelIdMesgListener);
    void RemoveListener(AntChannelIdMesgListener& antChannelIdMesgListener);
    void AddListener(AntRxMesgListener& antRxMesgListener);
    void RemoveListener(AntRxMesgListener& antRxMesgListener);
    void AddListener(AntTxMesgListener& antTxMesgListener);
    void RemoveListener(AntTxMesgListener& antTxMesgListener);
    void AddListener(ExdScreenConfigurationMesgListener& exdScreenConfigurationMesgListener);
    void RemoveListener(ExdScreenConfigurationMesgListener& exdScreenConfigurationMesgListener);
    void AddListener(ExdDataFieldConfigurationMesgListener& exdDataFieldConfigurationMesgListener);
    void RemoveListener(ExdDataFieldConfigurationMesgListener& exdDataFieldConfigurationMesgListener);
    void AddListener(ExdDataConceptConfigurationMesgListener& exdDataConceptConfigurationMesgListener);
    void RemoveListener(ExdDataConceptConfigurationMesgListener& exdDataConceptConfigurationMesgListener);
    void AddListener(FieldDescriptionMesgListener& fieldDescriptionMesgListener);
    void RemoveListener(FieldDescriptionMesgListener& fieldDescriptionMesgListener);
    void AddListener(DeveloperDataIdMesgListener& developerDataIdMesgListener);
    void RemoveListener(DeveloperDataIdMesgListener& developerDataIdMesgListener);
    void AddListener(PadMesgListener& padMesgListener);
    void RemoveListener(PadMesgListener& padMesgListener);
    void OnMesg(Mesg& mesg);
    void OnMesgDefinition(MesgDefinition& mesgDef);

private:
    MesgWithEventBroadcaster mesgWithEventBroadcaster;
    BufferedRecordMesgBroadcaster bufferedRecordMesgBroadcaster;
    std::vector<MesgDefinitionListener *> mesgDefinitionListeners;
    std::vector<MesgListener *> mesgListeners;
    std::vector<FileIdMesgListener *> fileIdMesgListeners;
    std::vector<FileCreatorMesgListener *> fileCreatorMesgListeners;
    std::vector<TimestampCorrelationMesgListener *> timestampCorrelationMesgListeners;
    std::vector<SoftwareMesgListener *> softwareMesgListeners;
    std::vector<SlaveDeviceMesgListener *> slaveDeviceMesgListeners;
    std::vector<CapabilitiesMesgListener *> capabilitiesMesgListeners;
    std::vector<FileCapabilitiesMesgListener *> fileCapabilitiesMesgListeners;
    std::vector<MesgCapabilitiesMesgListener *> mesgCapabilitiesMesgListeners;
    std::vector<FieldCapabilitiesMesgListener *> fieldCapabilitiesMesgListeners;
    std::vector<DeviceSettingsMesgListener *> deviceSettingsMesgListeners;
    std::vector<UserProfileMesgListener *> userProfileMesgListeners;
    std::vector<HrmProfileMesgListener *> hrmProfileMesgListeners;
    std::vector<SdmProfileMesgListener *> sdmProfileMesgListeners;
    std::vector<BikeProfileMesgListener *> bikeProfileMesgListeners;
    std::vector<ConnectivityMesgListener *> connectivityMesgListeners;
    std::vector<WatchfaceSettingsMesgListener *> watchfaceSettingsMesgListeners;
    std::vector<OhrSettingsMesgListener *> ohrSettingsMesgListeners;
    std::vector<ZonesTargetMesgListener *> zonesTargetMesgListeners;
    std::vector<SportMesgListener *> sportMesgListeners;
    std::vector<HrZoneMesgListener *> hrZoneMesgListeners;
    std::vector<SpeedZoneMesgListener *> speedZoneMesgListeners;
    std::vector<CadenceZoneMesgListener *> cadenceZoneMesgListeners;
    std::vector<PowerZoneMesgListener *> powerZoneMesgListeners;
    std::vector<MetZoneMesgListener *> metZoneMesgListeners;
    std::vector<GoalMesgListener *> goalMesgListeners;
    std::vector<ActivityMesgListener *> activityMesgListeners;
    std::vector<SessionMesgListener *> sessionMesgListeners;
    std::vector<LapMesgListener *> lapMesgListeners;
    std::vector<LengthMesgListener *> lengthMesgListeners;
    std::vector<RecordMesgListener *> recordMesgListeners;
    std::vector<EventMesgListener *> eventMesgListeners;
    std::vector<DeviceInfoMesgListener *> deviceInfoMesgListeners;
    std::vector<TrainingFileMesgListener *> trainingFileMesgListeners;
    std::vector<HrvMesgListener *> hrvMesgListeners;
    std::vector<WeatherConditionsMesgListener *> weatherConditionsMesgListeners;
    std::vector<WeatherAlertMesgListener *> weatherAlertMesgListeners;
    std::vector<GpsMetadataMesgListener *> gpsMetadataMesgListeners;
    std::vector<CameraEventMesgListener *> cameraEventMesgListeners;
    std::vector<GyroscopeDataMesgListener *> gyroscopeDataMesgListeners;
    std::vector<AccelerometerDataMesgListener *> accelerometerDataMesgListeners;
    std::vector<MagnetometerDataMesgListener *> magnetometerDataMesgListeners;
    std::vector<ThreeDSensorCalibrationMesgListener *> threeDSensorCalibrationMesgListeners;
    std::vector<VideoFrameMesgListener *> videoFrameMesgListeners;
    std::vector<ObdiiDataMesgListener *> obdiiDataMesgListeners;
    std::vector<NmeaSentenceMesgListener *> nmeaSentenceMesgListeners;
    std::vector<AviationAttitudeMesgListener *> aviationAttitudeMesgListeners;
    std::vector<VideoMesgListener *> videoMesgListeners;
    std::vector<VideoTitleMesgListener *> videoTitleMesgListeners;
    std::vector<VideoDescriptionMesgListener *> videoDescriptionMesgListeners;
    std::vector<VideoClipMesgListener *> videoClipMesgListeners;
    std::vector<CourseMesgListener *> courseMesgListeners;
    std::vector<CoursePointMesgListener *> coursePointMesgListeners;
    std::vector<SegmentIdMesgListener *> segmentIdMesgListeners;
    std::vector<SegmentLeaderboardEntryMesgListener *> segmentLeaderboardEntryMesgListeners;
    std::vector<SegmentPointMesgListener *> segmentPointMesgListeners;
    std::vector<SegmentLapMesgListener *> segmentLapMesgListeners;
    std::vector<SegmentFileMesgListener *> segmentFileMesgListeners;
    std::vector<WorkoutMesgListener *> workoutMesgListeners;
    std::vector<WorkoutSessionMesgListener *> workoutSessionMesgListeners;
    std::vector<WorkoutStepMesgListener *> workoutStepMesgListeners;
    std::vector<ScheduleMesgListener *> scheduleMesgListeners;
    std::vector<TotalsMesgListener *> totalsMesgListeners;
    std::vector<WeightScaleMesgListener *> weightScaleMesgListeners;
    std::vector<BloodPressureMesgListener *> bloodPressureMesgListeners;
    std::vector<MonitoringInfoMesgListener *> monitoringInfoMesgListeners;
    std::vector<MonitoringMesgListener *> monitoringMesgListeners;
    std::vector<HrMesgListener *> hrMesgListeners;
    std::vector<MemoGlobMesgListener *> memoGlobMesgListeners;
    std::vector<AntChannelIdMesgListener *> antChannelIdMesgListeners;
    std::vector<AntRxMesgListener *> antRxMesgListeners;
    std::vector<AntTxMesgListener *> antTxMesgListeners;
    std::vector<ExdScreenConfigurationMesgListener *> exdScreenConfigurationMesgListeners;
    std::vector<ExdDataFieldConfigurationMesgListener *> exdDataFieldConfigurationMesgListeners;
    std::vector<ExdDataConceptConfigurationMesgListener *> exdDataConceptConfigurationMesgListeners;
    std::vector<FieldDescriptionMesgListener *> fieldDescriptionMesgListeners;
    std::vector<DeveloperDataIdMesgListener *> developerDataIdMesgListeners;
    std::vector<PadMesgListener *> padMesgListeners;
};

} // namespace fit

#endif // !defined(FIT_MESG_BROADCASTER_HPP)
