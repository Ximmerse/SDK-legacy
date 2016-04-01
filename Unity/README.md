Ximmerse SDK Unity Package
============

This folder contains our SDK Unity package. Please refer to the [SDK doc](http://ximmerse.github.io/SDK_Doc/) (Chapter 2 SDK Setup) to learn how to use it.

Changelog
----
- **v2.0.1**
	- Add native Andriod library `XHawkApi.jar` for USB API.
	- Add ID calibration for IMU of lighting blobs.
	- Add UI feedback for X-Hawk if disconnected.
	- Add vibration API.
	- Change position info of `XCobraController` from world space to local space (under `VRContext.trackingSpace`).
	- Replace `PoseMover.cs` by `PoseTransform` for space transform of `XCobraController`.

	- - -
	*Known issues:*
	- Due to hardware issues, vibration may be inaccurate.

	* * *

- **v2.0**
	- Support Google Cardboard.
	- Support Windows 10.

	* * *

- **v1.0**
	- Initial release.
