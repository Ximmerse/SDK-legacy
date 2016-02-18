Ximmerse Drivers
============

This folder contains our drivers, currently including

- `CSR8510 Bluetooth USB Adapter.zip`: Bluetooth USB Adapter driver. This should be installed  first in order to successfully connect X-Hawk and X-Cobra.

## How to Install
1. Plugin Bluetooth USB Adapter to PC.

 	<div align = center>
	<img src="../Tools/imgs/BluetoothUSBDongle.png" width="100" >
	</div>

	> Normally, the driver will be installed automatically, which can be verified by checking whether there is a `CSR BlueCore Bluetooth` under `Device Manager -> Universal Serial Bus controllers`.
	> ![](../Tools/imgs/BluetoothUSBDriver.png)

	If you can not find it there, you will need to install the driver mannually. Steps are:

1. Download the driver from [here](https://github.com/Ximmerse/SDK/blob/master/Driver/CSR8510%20Bluetooth%20USB%20Adapter.zip?raw=true) (ZIP file).
2. Unzip the file to your PC.
3. Depending on your PC system:
	- For Win7: `CSR8510 Bluetooth USB Adapter -> Windows 7 -> win32/64 -> CSRBlueCoreUSB.inf ->` right click `-> Install`.
	- For Win8 or Win10: `CSR8510 Bluetooth USB Adapter -> Windows 8 -> win32/64 -> CSRBlueCoreUSB.inf ->` right click `-> Install`.

		![](../Tools/imgs/InstallBluetoothUSBDriver.png)
