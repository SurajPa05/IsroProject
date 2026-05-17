#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to ascend_msgs__msg__TargetDetection
/// Target detected by Siamese network

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TargetDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feature_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_path: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub validated: bool,

}



impl Default for TargetDetection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TargetDetection::default())
  }
}

impl rosidl_runtime_rs::Message for TargetDetection {
  type RmwMsg = super::msg::rmw::TargetDetection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        confidence: msg.confidence,
        feature_type: msg.feature_type.as_str().into(),
        image_path: msg.image_path.as_str().into(),
        validated: msg.validated,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      confidence: msg.confidence,
        feature_type: msg.feature_type.as_str().into(),
        image_path: msg.image_path.as_str().into(),
      validated: msg.validated,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      confidence: msg.confidence,
      feature_type: msg.feature_type.to_string(),
      image_path: msg.image_path.to_string(),
      validated: msg.validated,
    }
  }
}


// Corresponds to ascend_msgs__msg__MissionState
/// Current phase of the ASCEND mission

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_phase: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub previous_phase: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sortie_number: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub targets_found: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub targets_validated: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_validation_result: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status_message: std::string::String,

}

impl MissionState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SEEDING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TAKEOFF: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SEARCHING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TARGET_FOUND: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAPTURING: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RETURNING: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOCKING: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHARGING: u8 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DATA_TRANSFER: u8 = 9;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const VALIDATING: u8 = 10;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SORTIE_COMPLETE: u8 = 11;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const LOW_BATTERY: u8 = 12;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EMERGENCY: u8 = 13;

}


impl Default for MissionState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MissionState::default())
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = super::msg::rmw::MissionState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        current_phase: msg.current_phase,
        previous_phase: msg.previous_phase,
        sortie_number: msg.sortie_number,
        targets_found: msg.targets_found,
        targets_validated: msg.targets_validated,
        last_validation_result: msg.last_validation_result,
        status_message: msg.status_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      current_phase: msg.current_phase,
      previous_phase: msg.previous_phase,
      sortie_number: msg.sortie_number,
      targets_found: msg.targets_found,
      targets_validated: msg.targets_validated,
      last_validation_result: msg.last_validation_result,
        status_message: msg.status_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      current_phase: msg.current_phase,
      previous_phase: msg.previous_phase,
      sortie_number: msg.sortie_number,
      targets_found: msg.targets_found,
      targets_validated: msg.targets_validated,
      last_validation_result: msg.last_validation_result,
      status_message: msg.status_message.to_string(),
    }
  }
}


// Corresponds to ascend_msgs__msg__DockStatus
/// Status of the ground dock

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cover_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub charging_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dock_battery_percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub drone_battery_percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pogo_connected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data_transfer_active: bool,

}

impl DockStatus {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COVER_OPEN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COVER_CLOSED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const COVER_MOVING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const NOT_CHARGING: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHARGING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CHARGE_COMPLETE: u8 = 2;

}


impl Default for DockStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DockStatus::default())
  }
}

impl rosidl_runtime_rs::Message for DockStatus {
  type RmwMsg = super::msg::rmw::DockStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        cover_state: msg.cover_state,
        charging_state: msg.charging_state,
        dock_battery_percentage: msg.dock_battery_percentage,
        drone_battery_percentage: msg.drone_battery_percentage,
        pogo_connected: msg.pogo_connected,
        data_transfer_active: msg.data_transfer_active,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      cover_state: msg.cover_state,
      charging_state: msg.charging_state,
      dock_battery_percentage: msg.dock_battery_percentage,
      drone_battery_percentage: msg.drone_battery_percentage,
      pogo_connected: msg.pogo_connected,
      data_transfer_active: msg.data_transfer_active,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      cover_state: msg.cover_state,
      charging_state: msg.charging_state,
      dock_battery_percentage: msg.dock_battery_percentage,
      drone_battery_percentage: msg.drone_battery_percentage,
      pogo_connected: msg.pogo_connected,
      data_transfer_active: msg.data_transfer_active,
    }
  }
}


// Corresponds to ascend_msgs__msg__Telemetry
/// Consolidated telemetry for ISRO qualification requirement

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Telemetry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pos_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vel_z: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percentage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub flight_mode: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub armed: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sortie_number: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub targets_found: i32,

}



impl Default for Telemetry {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Telemetry::default())
  }
}

impl rosidl_runtime_rs::Message for Telemetry {
  type RmwMsg = super::msg::rmw::Telemetry;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        pos_x: msg.pos_x,
        pos_y: msg.pos_y,
        pos_z: msg.pos_z,
        vel_x: msg.vel_x,
        vel_y: msg.vel_y,
        vel_z: msg.vel_z,
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        battery_percentage: msg.battery_percentage,
        battery_voltage: msg.battery_voltage,
        flight_mode: msg.flight_mode.as_str().into(),
        armed: msg.armed,
        sortie_number: msg.sortie_number,
        targets_found: msg.targets_found,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      pos_x: msg.pos_x,
      pos_y: msg.pos_y,
      pos_z: msg.pos_z,
      vel_x: msg.vel_x,
      vel_y: msg.vel_y,
      vel_z: msg.vel_z,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      battery_percentage: msg.battery_percentage,
      battery_voltage: msg.battery_voltage,
        flight_mode: msg.flight_mode.as_str().into(),
      armed: msg.armed,
      sortie_number: msg.sortie_number,
      targets_found: msg.targets_found,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      pos_x: msg.pos_x,
      pos_y: msg.pos_y,
      pos_z: msg.pos_z,
      vel_x: msg.vel_x,
      vel_y: msg.vel_y,
      vel_z: msg.vel_z,
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      battery_percentage: msg.battery_percentage,
      battery_voltage: msg.battery_voltage,
      flight_mode: msg.flight_mode.to_string(),
      armed: msg.armed,
      sortie_number: msg.sortie_number,
      targets_found: msg.targets_found,
    }
  }
}


