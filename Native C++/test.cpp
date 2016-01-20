#include "X-Hawk.h"

#include <iostream>
#include <windows.h>

int main()
{
  // init X-Hawk
  XHawkInit();

  for (;;) {
    // get all joysticks
    JOY_INFO joysticks[2];
    XHawkGetAllNewestJoysticks(joysticks);

    // print info of joysticks
    std::cout << "===========================> new run <===========================\n";
    for (int i = 0; i < 2; ++i) {      
      std::cout << "---> Info of Joystick #" << i << " <---\n";

      std::cout << "\t Flag info:\n";
      std::cout << "\t\t Id: " << (int)joysticks[i].id << "\n";
      std::cout << "\t\t Found_mask: " << (int)joysticks[i].found_mask << "\n";

      std::cout << "\t Gamepad info:\n";
      std::cout << "\t\t Position of joystick: (" << joysticks[i].joystick_x << ", " << joysticks[i].joystick_y << ")\n";
      std::cout << "\t\t Trigger: " << joysticks[i].trigger << "\n";
      std::cout << "\t\t Buttons: " << joysticks[i].buttons << "\n";

      std::cout << "\t Motion info:\n";
      std::cout << "\t\t Position: ("
        << joysticks[i].position[0] << ", "
        << joysticks[i].position[1] << ", "
        << joysticks[i].position[2] << ")\n";
      std::cout << "\t\t Rotation: ("
        << joysticks[i].rotation[0] << ", "
        << joysticks[i].rotation[1] << ", "
        << joysticks[i].rotation[2] << ", "
        << joysticks[i].rotation[3] << ")\n";
      std::cout << "\t\t Euler angles: ("
        << joysticks[i].eulerAngles[0] << ", "
        << joysticks[i].eulerAngles[1] << ", "
        << joysticks[i].eulerAngles[2] << ")\n";

      std::cout << "\n";
    }

    // wait 1s to fresh
    Sleep(1000);
  }

  // exit X-Hawk
  XHawkExit();

  return 0;
}
