# ExeFS-Manager
An app that can enable or disable your ExeFS mods

(this is an example app. it only works with SMO + atmosphere but you can learn how to do other games and CFWs in the next section)

# Changing Games and CFW

## Games
Go to either [This](https://switchbrew.org/wiki/Title_list/Games) or [This](http://nswdb.com/) Website and find the "Title ID" of the game.

Make sure you have [Notepad++](https://notepad-plus-plus.org/) installed.

Download [The Source Code](https://github.com/CVFireDragon/ExeFS-Manager/archive/master.zip) of this Repo and open "Makefile" in Notepad++.

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

Download [The Source Code](https://github.com/CVFireDragon/ExeFS-Manager/archive/master.zip) of this Repo.

Open the "source" folder and open "main.cpp" in Notepad++.

Press CTRL + F and Select the "Replace" tab.

Enter "atmosphere" into "Find what :".

Enter whatever CFW you want to change to into "Replace with :".

Click "Replace All" and Save the file.

Move on to the "Compiling" Section
