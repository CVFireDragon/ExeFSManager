# ExeFSManager
An app that can enable or disable your ExeFS mods

(this is an example app. it only works with SMO + atmosphere but you can learn how to do other games and CFWs in the next section)

# Changing Games and CFW (.nro)

## Games
Go to either [This](https://switchbrew.org/wiki/Title_list/Games) or [This](http://nswdb.com/) Website and find the "Title ID" of the game.

Make sure you have [Notepad++](https://notepad-plus-plus.org/) installed.

Download [The Source Code](https://github.com/CVFireDragon/ExeFS-Manager/archive/master.zip) of this Repo (if you haven't already) and open "Makefile" in Notepad++.

Go to Line 33 and change "SMO" to whatever game you want.

Go to Line 34 and change "CVFD" to whatever your Username is.

Save "Makefile".

Open the "source" folder and open "main.cpp" in Notepad++.

Go to Line 12 and change "SMO" to whatever game you want and "CVFD" to whatever your Username is.

Press CTRL + F and Select the "Replace" tab.

Enter "0100000000010000" into "Find what :".

Enter the "Title ID" you got earlier into "Replace with :".

Click "Replace All" and Save the file.

Move on to the "Compiling" or "CFW" Section

## CFW
Make sure you have [Notepad++](https://notepad-plus-plus.org/) installed.

Download [The Source Code](https://github.com/CVFireDragon/ExeFS-Manager/archive/master.zip) of this Repo. (if you haven't already)

Open the "source" folder and open "main.cpp" in Notepad++.

Press CTRL + F and Select the "Replace" tab.

Enter "atmosphere" into "Find what :".

Enter whatever CFW you want to change to into "Replace with :".

Click "Replace All" and Save the file.

Move on to the "Compiling" Section.

# Compiling
Make sure [devkitPro](https://github.com/devkitPro/installer/releases) with Switch Support is installed.

Download [The Source Code](https://github.com/CVFireDragon/ExeFS-Manager/archive/master.zip) of this Repo. (if you haven't already)

Open "Build.bat"

It will auto-build for you!

# Credits
[CaptinNemrac](https://github.com/CaptinNemrac) For the original Closed-Source app (sparked this idea)

[HippyDave](https://gbatemp.net/threads/how-can-i-rename-a-specific-file-with-homebrew.526737/) For help with renaming the files

[The-4n](https://github.com/The-4n) and [XorTroll](https://github.com/XorTroll) For their amazing help with Building the NSP.

# Story
Once upon a time, I was downloading the SMO Moonjump ExeFS Mod. I found a file in the .zip called "odyssey.nro" and I tried booting it up with Homebrew. It was pretty cool, because I found out it was a ExeFS enabler / disabler. I studied what the app did and I found out that it renamed the ExeFS Mod to something else and Vice-Versa. I couldn't find any source code, so I forgot about it for a couple months. Until today! (12/20/18) When I remembered about this and posted [This](https://gbatemp.net/threads/how-can-i-rename-a-specific-file-with-homebrew.526737/) to GBATemp. A nice guy named HippyDave gave me a few tips, so I went out and wrote this app. The End!
