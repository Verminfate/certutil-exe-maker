![image](https://user-images.githubusercontent.com/72428571/168156046-5400f8b5-0a2d-47ed-b9b3-173c1b6e2cc9.png)



# Info/Basics
Windows has a command called certutil that lets you convert an exe to a text file. You can also convert that text file back into an exe

here is the process
Take an exe, convert it to text with certutil
Make an application in cpp that will write that text down line by line
The cpp application will then convert that text back into an exe and run it
The cpp applications source code can be hundreds of thousands of lines depending on the size of the starting exe 


# Steps
Download and run Offline_dropper_builder.exe
Drag your target file into the console window or type out the path to the exe you want to convert/obfuscate
Press enter.
Close the window and open source.cpp
Copy all the code in source.cpp 
Make a new project with visual studio 2022.
Make the project a c++ console window
Paste all the source code from the source.cpp file into the main.cpp file in the visual studio project
Set the mode to release and run it.

Boom all done.
if you encounter issues right click on the project and make sure your cpp version is set to c++17


# Cons/issues
It will multiply the file size by 2.3x -2.8x
The executable you choose to drop can still be detected by a antivirus this will just get you past a virustotal scan

# Example File/Built logger
Pyinstaller file obfuscate/converted using this method
https://www.virustotal.com/gui/file/7fae10695b4fc92258b93bb622078b709cc6b0be03b9c18479041133a1bb82db/community

