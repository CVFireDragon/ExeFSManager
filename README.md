# ExeFS-Manager
An app that can enable or disable your ExeFS mods

(this is an example app. it only works with SMO + atmosphere but you can learn how to do other games and CFWs in the next section)

## Changing Games and CFW

### Games
Go to either [This](https://switchbrew.org/wiki/Title_list/Games) or [This](http://nswdb.com/) Website and find the "Title ID" of the game.

Make sure you have [Notepad++](https://notepad-plus-plus.org/) installed.

Download [The Source Code](https://github.com/CVFireDragon/ExeFS-Manager/archive/master.zip) of this Repo and open "Makefile" in Notepad++.

Go to Line 33 and change "SMO" to whatever game you want.

Go to Line 34 and change "CVFD" to whatever your Username is.

Save "Makefile".

Open the "source" folder and open "main.cpp" in Notepad++.

Go to Line 12 and change "SMO" to whatever game you want and "CVFD" to whatever your Username is.

Go to Line 25 and change "0100000000010000" (on both sides) to the "Title ID" you got earlier.

Go to Line 35 and change "0100000000010000" (on both sides) to the "Title ID" you got earlier.

Save "main.cpp".
