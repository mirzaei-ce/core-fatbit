
Debian
====================
This directory contains files used to package fatbitd/fatbit-qt
for Debian-based Linux systems. If you compile fatbitd/fatbit-qt yourself, there are some useful files here.

## fatbit: URI support ##


fatbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fatbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fatbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/fatbit128.png` to `/usr/share/pixmaps`

fatbit-qt.protocol (KDE)

