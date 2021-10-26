# reduino
This repository has been made in the hope that a device like this becomes simpler to make.
```
I present to you: The Reduino Uno - A PCB-less Arduino Microcontroller Board...
...made from a sheet of translucent red Perspex/Plexiglass and some standard Pin Headers.
```
![board](https://github.com/themindvirus/reduino/blob/main/photos/board.jpg)
```
Why make a transparent Arduino? Mainly as an engineering challenge to see if
a microcontroller could be built 100% out of spare recycled parts from old projects.
```
![translucent](https://github.com/themindvirus/reduino/blob/main/photos/translucent.png)
```
Most microcontroller boards are printed with layers and layers of copper and silk screen.
This board has done away with that completely so it's able to let light pass through it.
```
![board2](https://github.com/themindvirus/reduino/blob/main/photos/board2.jpg)
```
Another thing that blocks the light is all those electronic components scattered around
everywhere for different purposes. This board has a really low component count compared.
```
![board3](https://github.com/themindvirus/reduino/blob/main/photos/board3.jpg)
```
How did this all start happening? I had made some one-off unique Arduino boards before.
I went to the garage one day and found some spare Perspex left over from a project.
```
![perspex](https://github.com/themindvirus/reduino/blob/main/photos/perspex.jpg)
```
I decided very quickly that it should not be thrown away or left to rot in the garage
but instead remade into something useful. Here it is next to its siblings:
```
![siblings](https://github.com/themindvirus/reduino/blob/main/photos/siblings.jpg)
```
In many ways this is an unlikely successor to the one-off Cyberpunk Uno board I designed
to have a really low component count. The Reduino even omits the MCP2221-I so no USB Port!
```
![cyberpunkuno](https://github.com/themindvirus/reduino/blob/main/photos/cyberpunkuno.png)
```
A lot of the wiring was reused from the original Eagle file, but this time I hand-drew
the diagram that I would later use to painstakingly hand-solder all the wires to the pins.
```
![wiring](https://github.com/themindvirus/reduino/blob/main/photos/wiring.jpg)
```
There are no solder pads on a blank sheet of Perspex/Plexiglass/Plastic, so I convened
whichever components I had. This included a 16MHz Crystal Oscillator and many Pin Headers.
```
![parts](https://github.com/themindvirus/reduino/blob/main/photos/parts.jpg)
```
Usually at this stage I would have to print out a stencil to scale for tracing around.
I already had a handy stencil in the shape of a Cyberpunk Uno to pencil through dots with.
```
![stencil](https://github.com/themindvirus/reduino/blob/main/photos/stencil.jpg)
```
Before this project I had never had a reason to use a 1mm drill bit, but here we go.
The diameter of each pin is just that small so a Pillar Drill was required. (Safety First!)
```
![1mmdrill](https://github.com/themindvirus/reduino/blob/main/photos/1mmdrill.jpg)
```
Once the holes were drilled, the pin headers fit cleanly into the gaps in the Perspex.
There is a little room for it to rotate but that is soon fixed with some light soldering.
```
![seethrough](https://github.com/themindvirus/reduino/blob/main/photos/seethrough.jpg)
```
Perspex makes sheets with a protective film useful for preventing scratches and burn marks.
The wires are so close together that it is essential to use a multimeter to check for shorts.
```
![multimeter](https://github.com/themindvirus/reduino/blob/main/photos/multimeter.jpg)
```
The CPU for this project is a standalone ATMEGA328P, as found on the Arduino Uno Rev3 board.
To factory program it, some specialised proprietary hardware and software tools are required.
```
![studio](https://github.com/themindvirus/reduino/blob/main/photos/studio.png)
```
This is Microchip Studio, formerly Atmel Studio 7 and based on Microsoft Visual Studio 2015.
It supports many AVR-based Microcontrollers as well as several Smart ARM devices (SAM).
```
![umbilical](https://github.com/themindvirus/reduino/blob/main/photos/umbilical.jpg)
```
A proprietary JTAG Debugger for the specific model of microcontroller is required.
This one is an Atmel ICE, but an Arduino Uno can also be used for ISP/ICSP programming.
```
![socket](https://github.com/themindvirus/reduino/blob/main/photos/socket.jpg)
```
Many hours into the project I realised my CPU chips weren't identifying. The reason is daft.
IC pins are flat and don't connect well to pin headers. A round-pin socket assists with this.
```
![signature](https://github.com/themindvirus/reduino/blob/main/photos/signature.png)
```
I finally got a signature reading back from my custom board, but only after correcting the fuses,
reseating the flimsy crystal oscillator and using AVCC instead of the normal VCC for power.
```
![legoled](https://github.com/themindvirus/reduino/blob/main/photos/legoled.jpg)
```
Overjoyed that my custom board worked, I connected an LED to pins 7 and 8 to make it blink.
I also added a Lego 1x1 Transparent Red Brick and Tile on top of it for full effect.
```
![atmelice](https://github.com/themindvirus/reduino/blob/main/photos/atmelice.jpg)
```
Building microcontrollers is often exceedingly overcomplicated and could be a lot simpler.
I hope that this gave you some inspiration to build your own microcontroller-based projects.
```
## See it in action:
### WARNING: The following videos may contain strobing effects. Please view with caution.
https://github.com/TheMindVirus/reduino/tree/main/videos/IMG_5042.mov
https://github.com/TheMindVirus/reduino/tree/main/videos/IMG_5028_converted_1.mp4
