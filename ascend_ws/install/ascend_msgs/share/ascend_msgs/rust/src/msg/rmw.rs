#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "ascend_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__TargetDetection() -> *const std::ffi::c_void;
}

#[link(name = "ascend_msgs__rosidl_generator_c")]
extern "C" {
    fn ascend_msgs__msg__TargetDetection__init(msg: *mut TargetDetection) -> bool;
    fn ascend_msgs__msg__TargetDetection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TargetDetection>, size: usize) -> bool;
    fn ascend_msgs__msg__TargetDetection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TargetDetection>);
    fn ascend_msgs__msg__TargetDetection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TargetDetection>, out_seq: *mut rosidl_runtime_rs::Sequence<TargetDetection>) -> bool;
}

// Corresponds to ascend_msgs__msg__TargetDetection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Target detected by Siamese network

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TargetDetection {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feature_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub image_path: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub validated: bool,

}



impl Default for TargetDetection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ascend_msgs__msg__TargetDetection__init(&mut msg as *mut _) {
        panic!("Call to ascend_msgs__msg__TargetDetection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TargetDetection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__TargetDetection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__TargetDetection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__TargetDetection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TargetDetection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TargetDetection where Self: Sized {
  const TYPE_NAME: &'static str = "ascend_msgs/msg/TargetDetection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__TargetDetection() }
  }
}


#[link(name = "ascend_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__MissionState() -> *const std::ffi::c_void;
}

#[link(name = "ascend_msgs__rosidl_generator_c")]
extern "C" {
    fn ascend_msgs__msg__MissionState__init(msg: *mut MissionState) -> bool;
    fn ascend_msgs__msg__MissionState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MissionState>, size: usize) -> bool;
    fn ascend_msgs__msg__MissionState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MissionState>);
    fn ascend_msgs__msg__MissionState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MissionState>, out_seq: *mut rosidl_runtime_rs::Sequence<MissionState>) -> bool;
}

// Corresponds to ascend_msgs__msg__MissionState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Current phase of the ASCEND mission

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MissionState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    pub status_message: rosidl_runtime_rs::String,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ascend_msgs__msg__MissionState__init(&mut msg as *mut _) {
        panic!("Call to ascend_msgs__msg__MissionState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MissionState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__MissionState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__MissionState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__MissionState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MissionState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MissionState where Self: Sized {
  const TYPE_NAME: &'static str = "ascend_msgs/msg/MissionState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__MissionState() }
  }
}


#[link(name = "ascend_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__DockStatus() -> *const std::ffi::c_void;
}

#[link(name = "ascend_msgs__rosidl_generator_c")]
extern "C" {
    fn ascend_msgs__msg__DockStatus__init(msg: *mut DockStatus) -> bool;
    fn ascend_msgs__msg__DockStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DockStatus>, size: usize) -> bool;
    fn ascend_msgs__msg__DockStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DockStatus>);
    fn ascend_msgs__msg__DockStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DockStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<DockStatus>) -> bool;
}

// Corresponds to ascend_msgs__msg__DockStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Status of the ground dock

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ascend_msgs__msg__DockStatus__init(&mut msg as *mut _) {
        panic!("Call to ascend_msgs__msg__DockStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DockStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__DockStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__DockStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__DockStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DockStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DockStatus where Self: Sized {
  const TYPE_NAME: &'static str = "ascend_msgs/msg/DockStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__DockStatus() }
  }
}


#[link(name = "ascend_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__Telemetry() -> *const std::ffi::c_void;
}

#[link(name = "ascend_msgs__rosidl_generator_c")]
extern "C" {
    fn ascend_msgs__msg__Telemetry__init(msg: *mut Telemetry) -> bool;
    fn ascend_msgs__msg__Telemetry__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Telemetry>, size: usize) -> bool;
    fn ascend_msgs__msg__Telemetry__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Telemetry>);
    fn ascend_msgs__msg__Telemetry__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Telemetry>, out_seq: *mut rosidl_runtime_rs::Sequence<Telemetry>) -> bool;
}

// Corresponds to ascend_msgs__msg__Telemetry
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Consolidated telemetry for ISRO qualification requirement

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Telemetry {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


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
    pub flight_mode: rosidl_runtime_rs::String,


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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ascend_msgs__msg__Telemetry__init(&mut msg as *mut _) {
        panic!("Call to ascend_msgs__msg__Telemetry__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Telemetry {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__Telemetry__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__Telemetry__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ascend_msgs__msg__Telemetry__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Telemetry {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Telemetry where Self: Sized {
  const TYPE_NAME: &'static str = "ascend_msgs/msg/Telemetry";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ascend_msgs__msg__Telemetry() }
  }
}


