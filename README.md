# cso2-launcher

[![Build status](https://ci.appveyor.com/api/projects/status/6ehjwfyekyfd9ipx/branch/master?svg=true)](https://ci.appveyor.com/project/L-Leite/cso2-launcher/branch/master)

![cso2-launcher's logo](./.readme/logo-128.png)

A custom client launcher for Nexon's Counter-Strike: Online 2, written in C++.

You may find a [custom CSO2 master server here](https://github.com/L-Leite/cso2-master-server/).

## Installation

### Before starting

You ***must*** **allow `launcher.exe` in your firewall** and, either **port forward ports 27015 to 27020** or **open your router's NAT**, in order to play with others.

### Obtaining CSO2

You can grab a copy of **Nexon's Counter-Strike: Online 2** through:

- [BitTorrent](magnet:?xt=urn:btih:7BUJS77RR2AYAXCFPF7TSSSRF2NWUOU6), magnet link: `magnet:?xt=urn:btih:7BUJS77RR2AYAXCFPF7TSSSRF2NWUOU6`
- [IPFS](https://ipfs.io/ipfs/QmQcam3bRr2xBDC81dJAYEoKz8tr32RoDsZNjb7rA6iEjL) (hash: `QmQcam3bRr2xBDC81dJAYEoKz8tr32RoDsZNjb7rA6iEjL`)
- [MEGA](https://mega.nz/#!nhgnBJgD!iR57D5Mf3_1GCcAR36tqFQ7H7KN_F0e3XicD2JBoSN4);
- [Google Drive](https://drive.google.com/open?id=1y0diL2nTERlOaJZQTA3xPb8owx82GjtB). 

SHA-256 of `cso2_nexon_v24406.7z`: `02F76DBDD083EF78ECC92EB963C7C7A7576FF2E2C695671A4F358C2580584965`

### Obtaining the launcher

- Download a copy of the [launcher](https://github.com/L-Leite/cso2-launcher/releases);
- Then extract the files inside to ```[your CSO2 game folder]/Bin```.

## Starting the game

Run ```start-cso2.bat``` and enter the master server's IP address to start the game.

### Available command line arguments

- ```-lang [some language]``` - Sets the game's language to *some language*'s (considering you have the language files)
- ```-masterip [some ip]``` - Sets the master server's IP address to *some ip*
- ```-masterport [some port]``` - Sets the master server's port number to *some port*
- ```-unpackedfiles``` - Uses unpacked game files extracted in the Data directory
- ```-username [your username]``` - Specify login user name, in order to skip the login screen. **Must** be used with ```-password```
- ```-password [your password]``` - Specify login password , in order to skip the login screen. **Must** be used with ```-username```

## Building

### Build requirements

- [CMake](https://cmake.org/download)
- [Visual Studio 2017](https://www.visualstudio.com/downloads)
- [Windows PowerShell](https://docs.microsoft.com/en-us/powershell/scripting/setup/installing-windows-powershell)

Tested with Visual Studio 2017. Support for other compilers is unknown.

### Starting the build

cso2-launcher uses CMake to generate project files and to build itself.

You can **build it through *CMake*** or **generate its project files**.

For example: to generate Visual Studio 2017 project files, **open a terminal instance** in the project's directory and run

```powershell
# in powershell or in standard Windows cmd
cmake -G "Visual Studio 15 2017" ./
```

Or use the ```cmake-gui``` tool bundled with CMake for a more user friendly experience.

Once successfully generated, you can open ```CSO2Launcher.sln``` and build the project in your preferred configuration.

If built successfully, you will find the launcher inside ```out/bin/Win32/[your configuration]```.

## Libraries used

- **[fmt](https://github.com/fmtlib/fmt)** by [Victor Zverovich](https://github.com/vitaut)
- **[PolyHook 2.0](https://github.com/stevemk14ebr/PolyHook_2_0)** by [Stephen Eckels](https://github.com/stevemk14ebr)
- **[Source SDK](https://github.com/ValveSoftware/source-sdk-2013)** by Valve Software

## Contributors

- [GEEKiDoS](https://github.com/GEEKiDoS)
- [cs-student101](https://github.com/cs-student101)

## Thank you's

- To **[UserU](https://www.youtube.com/user/GoodbyeSpy)**
- To **[SHI_KU](https://www.youtube.com/channel/UC2HZo-HFOuxmS6zWYPMD0hQ)**
- To **ReddUT** from [Counter-Strike Online Wikia](https://cso.wikia.com/)'s Discord
- To **Frostie** from [Counter-Strike Online Wikia](https://cso.wikia.com/)'s Discord

## License

Licensed under the MIT license, see ```COPYING``` for more information.

This project is not affiliated with Nexon Co., Ltd. or Valve Corporation.

## Screenshots

![First screenshot](./.readme/screenshot-01.png)

![Second screenshot](./.readme/screenshot-02.png)

![Third screenshot](./.readme/screenshot-03.png)
