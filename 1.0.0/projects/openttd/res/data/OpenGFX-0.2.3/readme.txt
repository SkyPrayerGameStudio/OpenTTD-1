OpenGFX Readme - 8bpp Graphics Replacement Project

==============================
Current Version: OpenGFX 0.2.3
==============================

Contents
0 About OpenGFX
1 Downloading OpenGFX
2 Installing OpenGFX Manually
3 Installing or Updating OpenGFX using the Online Content service
4 Reporting bugs and Contributing
5 Building of OpenGFX
    5.1 Notes for package maintainers
6 License
    6.1 Obtaining the source
7 Credits



0 About OpenGFX
===============

OpenGFX is an open source replacement for the original Transport Tycoon Deluxe
(TTD) graphics used by OpenTTD. The main goal of OpenGFX therefore is to provide
a set of free base graphics which make it possible to play OpenTTD without
requiring the (copyright protected) files from the TTD CD. This potentially
increases the OpenTTD fanbase and makes it a true free game (with "free" as in
both "free beer" and "open source").



1 Downloading OpenGFX
=====================

OpenGFX is available from a few locations. This readme will only cover the
official download locations.

We cannot support third party download locations and we cannot refund your money
if you have paid money for OpenGFX.

- If you're new to OpenTTD, the easiest way is to use the installer (windows) or
your packet manager (linux) and install OpenTTD and OpenGFX and also OpenSFX.
- If you're new to OpenTTD, you cannot use an installer and don't have access to
the original TTD files, you'll have to follow the manual installation procedure.
This is really not that difficult as it may sound, so don't worry too much about
that.
- If you already have OpenTTD up and running using the original TTD base
graphics, Installing OpenGFX using the Online Content Service is the easy way to
obtain OpenGFX.

If you want to check the integrity of your grf or check wether your
self-compiled grf is the the same as it should, have a look at opengfx.obg



2 Installing OpenGFX Manually
=============================

1. First, make sure that you downloaded and installed at least OpenTTD version
0.7.0 or later.

2. Next, download the latest OpenGFX package. There are a few sources:
- the development homepage http://bundles.openttdcoop.org/opengfx
- Look for "OpenGFX" on one of the OpenTTD binaries servers, it is found in the
"bananas" section: http://binaries.openttd.org/bananas/OpenGFX-0.2.1.tar.gz (or
possibly with a newer version).

3. Unpack the zip file into the OpenTTD /data directory (see section 4.2 of the
OpenTTD readme for a detailed treatise on all data dirs OpenTTD recognizes).
There's no need to unpack the tar, so just leave it as it is.
- An OpenTTD folder in your user account's home directory:
    Windows: C:\My Documents (95, 98, ME)
             C:\Documents and Settings\<username>\My Documents\OpenTTD (2000, XP)
             C:\Users\<username>\Documents\OpenTTD (Vista, 7)
    Mac OSX: ~/Documents/OpenTTD
    Linux:   ~/.openttd
- The OpenTTD installation directory.

4. Run OpenTTD. Chances are that you'll miss a sound set. Get one (we recommend
our sister project OpenSFX) and install it into the same directory as OpenGFX.

5. In the main menu of the game, click the Game Options  button. The Game
Options  dialog will appear.

6. Select OpenGFX  from the drop-down list below Base graphics set  if that's
not selected already (bottom left of window). Close the window using the × in
the upper left corner.
- If you did not install the original TTD base graphics during the installation
of OpenTTD, you can skip this step.
- If you installed the original TTD base graphics as well, this is where you can
switch base graphic sets.

Now that wasn't so hard, was it? Anyways, if you're having trouble getting
OpenGFX to work, please file a detailed report on what you did, what error
messages you got and where you got stuck in the OpenGFX release topic
at TT-forums: http://www.tt-forums.net/viewtopic.php?f=36&t=40162 or
(preferrably) at our bug tracker at http://dev.openttdcoop.org/projects/opengfx



3 Installing or Updating OpenGFX using the Online Content service
=================================================================

This method uses the Online content service (BaNaNaS) to download OpenGFX. In
order to use this, you need a working OpenTTD and again at least OpenTTD version
0.7.0 or a recent nightly.

1. Start OpenTTD and on the main menu click the Check online content  button. A
new window will pop up. If OpenTTD doesn't start, follow the manual installation
procedure.

2. Find the OpenGFX entry from the list at the left. You can use the search box
in the upper right corner of the window.

3. Click the little square in front of the OpenGFX entry in order to mark it for
download.

4. Click the Download  button in the bottom right corner. After download, close
the open windows.

5. In the main menu of the game, click the Game Options  button. The Game
Options  dialog will appear.

6. Select OpenGFX  from the drop-down list below Base graphics set  if that's
not selected already (bottom left of window). Close the window using the × in
the upper left corner.



4 Reporting bugs and Contributing
=================================

If you spot any grapical bugs or glitches in the available graphics, please let
us know preferrably via our bug
tracker http://dev.openttdcoop.org/projects/opengfx/issues
or via the OpenGFX release topic at TT-forums.net:
http://www.tt-forums.net/viewtopic.php?f=36&t=40162 . Please make sure
that you're using the latest available version before reporting a bug. You can
check the Issue Tracker to see if the bug you've found is already reported (or
fixed!).

If you have made yourself improvements to either graphics or the source code
itself, please also share that with us either via the bug tracker or the
development discussion thread
http://www.tt-forums.net/viewtopic.php?f=26&t=38122&start=0



5 Building OpenGFX
=========================================

The OpenGFX source is available in a Mercurial repository or as gzip'ed tarball.
You can do an anonymous checkout from http://mz.openttdcoop.org/hg/opengfx ,
e.g. using
   hg clone http://mz.openttdcoop.org/hg/opengfx or obtain the tarball from
http://bundles.openttdcoop.org/opengfx/releases.
   
Prerequisites to building OpenGFX:
- mercurial (only when not building from a tarball, available from
http://mercurial.selenic.com/wiki/Download?action=show&redirect=BinaryPackages)
- gcc (the pre-processor is needed)
- md5sum (linux, mingw) or md5 (mac)
- nforenum r2281 or better (available from http://www.openttd.org/download-nforenum)
- grfcodec r2245 or better (available from http://www.openttd.org/download-grfcodec)
- some gnu utils: make, cat, sed, awk
and you might additionally want a text editor of your choice and a graphics
programme suitable to handle palettes. 

On Windows: we advise to get a mingw development environment, download grfcodec,
nforenum and mercurial from the sources mentioned above)
For more detailed instructions see our guide at
http://dev.openttdcoop.org/projects/home/wiki and the very extensive and
detailed installation instructions on the mingw wiki at
http://www.mingw.org/wiki/Getting_Started

On Linux: your system should already have most tools, you'll probably only need
nforenum, grfcodec and mercurial available from the source mentioned above. For
installation instructions concerning mercurial refer to the manual of your
distribution.

On Mac: Install the developers tools and get grfcodec and nforenum from the
source mentioned above. Mercurial is easiest installed via macports: sudo port
install mercurial

The use of mercurial is strongly encouraged as only that allows to keep track of
changes.

Once all tools are installed, get a checkout of the repository and you can build
OpenGFX using make. The following targets are available:
- all: builds all grfs and the obg file
- install: build and then copy OpenGFX in your OpenTTD data directory. Use
Makefile.local to specify a different path.
- clean: cleans all generated files
- mrproper: also cleans generated directories
- bundle_src: create a source tarball
- bundle_zip: create a zip archive of OpenGFX
- bundle_bz2: create a bzip2 archive of OpenGFX
- bundle_tar: create a tar archive of OpenGFX
- check: checks the md5 sums of the built grf and obg files against those of
the official release versions

Given the usual case that you modify something within OpenGFX and want to test
that, a simple 'make install' should suffice and you can immediately test the
changes ingame, if you selected the nightly version of OpenGFX. Given default
paths, a 'make install' will overwrite a previous nightly version of OpenGFX.
Mind to re-start OpenTTD as it needs to re-read the grf files.

5.1 Notes for package maintainers:
---------------------------------
- Checking for build success: The source releases contain an additional file
opengfx-<version>.md5 which indicates the md5 sums of the generated files as
released in the binary release. You can check your build by running
'make check'. Mind that you'll overwrite the file with the original md5 sums,
if you call 'make bundle_src' or 'make md5'.
- The source release also contains a Makefile.local and a slightly appended
Makefile.def, both supplying additional variable definitions which otherwise
would be determined by accessing repository properties.
- The variable which supplies the install path changed for the sake of
consistency and better readability to INSTALL_DIR. The old INSTALLDIR still
works but is deprecated.



6 License
=========

OpenGFX Graphics Replacement Set for OpenTTD Copyright (C) 2007-2009 OpenGFX
Authors (see below)

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License version 2 as published by the Free
Software Foundation.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free
Software Foundation, Inc., 1 Franklin Street, Fifth Floor, Boston, MA 02110-1301
USA.



7 Credits
=========

OpenGFX is created by the following people (in reverse alphabetical order):

* Zuu (Leif Linse)
* Zephyris (Richard Wheeler)
* Varivar
* uzurpator
* Spaz O Mataz
* Soeb (Stanislaw Gackowski)
* skidd13 (Benedikt Brüggemeier)
* Rubidium (Remko Bijker)
* Roujin (Manuel Wolf)
* Red*Star (David Krebs)
* Raumkraut (Mel Collins)
* Purno (Mark Leppen)
* planetmaker (Ingo von Borstel)
* PikkaBird (David Dallaston)
* northstar2
* Mr. X
* mph (Matthew Haines)
* mb (Michael Blunck)
* molace (Zoltán Molnár)
* Lawton27 (Jack Lawton)
* LordAzamath (Johannes Madis Aasmäe)
* lead@inbox (Serge Saphronov)
* Jonha
* Irwe (Alexander Irwe)
* Gen.Sniper
* FooBar (Jasper Vries)
* erikjanp
* EdorFaus (Frode Austvik)
* drginaldee
* DJ Nekkid (Thomas Mjelva)
* DanMacK (Dan MacKellar)
* buttercup
* bubersson (Petr Mikota)
* Born Acorn (Chris Jones)
* Bilbo
* Ben_Robbins_ (Ben Robbins)
* athanasios (Athanasios Arthur Palaiologos)
* andythenorth (Andrew Parkhouse)
* AndersI (Anders Isaksson)
* Ammler (Marcel Gmür)

A detailed list of who worked on what is available in the file
docs/authoroverview.csv in the source repository.

Thanks go out to the guys at #openttdcoop for providing the source repository
and bug tracking services.
