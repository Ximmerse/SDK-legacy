#ifndef __XIM_HAWK_H__
#define __XIM_HAWK_H__

#define XIM_API __declspec(dllexport)

#define ERROR_NO_DEVICE -1

#define MASK_NOT_FOUND       0x0
#define MASK_POSITION_FOUND  0x1
#define MASK_ROTATION_FOUND  0x2
#define MASK_POSE_FOUND      0x3

#define MAX_BUTTONS          0x5

typedef struct JOY_INFO_TAG
{
  /** Flags **/
  unsigned char  id;              // 0 for left-hand joystick, 1 for right-hand one
  unsigned char  found_mask;      // flag of {MASK_NOT_FOUND, MASK_POSITION_FOUND, MASK_ROTATION_FOUND, MASK_POSE_FOUND}

  /** Gamepad **/
  float          joystick_x;      // value of x-axis
  float          joystick_y;      // value of y-axis
  float          trigger;         // trigger value
  int            buttons;         // button mask
  
  /** Motion **/
  float          position[3];     // 3d position of joystick
  float          rotation[4];     // rotation of joystick
  float          eulerAngles[3];  // euler angles of joystick
} JOY_INFO;

typedef void (*void_delegate)();

/** Common **/
extern "C" XIM_API int XHawkInit(void);
extern "C" XIM_API int XHawkExit(void);

/** Read **/
// Get the number of joysticks
extern "C" XIM_API int XHawkGetJoystickCount(void);
// Get a joystick info from read cache
extern "C" XIM_API int XHawkGetJoystick(int index, JOY_INFO *joystick);
// Get all joystick infos
extern "C" XIM_API int XHawkGetAllJoysticks(JOY_INFO *joysticks);
// Get a newest joystick info from read cache
extern "C" XIM_API int XHawkGetNewestJoystick(int index, JOY_INFO *joystick);
// Get all newest joystick infos
extern "C" XIM_API int XHawkGetAllNewestJoysticks(JOY_INFO *joysticks);

/** Write **/
// send message to joystick, reserved, not implemented yet
extern "C" XIM_API int XHawkSendMessage(int index, int Msg, int wParam, int lParam);

/** Events **/
// set a read listener, if you use this function, use XHawkGetJoystick or XHawkGetAllJoysticks on callback function
extern "C" XIM_API int XHawkSetReadListener(void_delegate read_callback);
// read the first frame if true, read last frame if false
extern "C" XIM_API int XHawkSetReadFirstFrame(bool is_first_frame);

#endif