# OpenKeypad
## What is it?
 An open source and fully customizable keypad for osu. (based on the arduino pro micro and it's atmega32u4 chip.)  

# General information stuff for how to do everything

## TLDR/shorter version and FAQ at the end:  

# Print info/settings:

### NOTE: LID MUST BE FLIPPED 180° ON THE X OR Y AXIS SUCH THAT IT LAYS FLAT.

All prototypes and models were printed on a prusa i3mk2s.
.2mm layer height with 3 top and bottom solid layers and 4 perimiter/shells.
first layer height is set to 200% with the first layer width at 100%
Infill was set to 100% With the rectelinear pattern. No supports needed!
more details in the simplify3d profile.

# Pins to solder to and how to change them:
 
Solder your positive pins to 5 and 15 (or what they are defined to in the code)
and the negative pins to any of the GND pins. When doing to ensure that none of the wire 
pokes out of the bottom of the board. You can also solder both negative pins to one GND 
if you want, however both positive pins must be connected to separate pins. 
You can also change what pins you'd like to solder to (with the exception of GND) 
on lines 41-56. Un-comment the pin that you want to solder to/use 
 (remove the // on the left) and change the binding on the left side in the empty ' '.

# How to solder and install Kailh hot swap sockets:

### NOTE:  THICK SIDE (LEFT) GOES TO GROUND AND SKINNY SIDE (RIGHT) GOES TO THE PINOUT (5, 15 EXT.)

Solder the wires to the defined pins in the code (default is 5 and 15) as well as the GND/ground pins
(any will work) I used the pins that came with the board and used them as leads to solder to.
Add a ball of solder to your iron and gently drop it into one of the two metal 
bits on the side of the socket. If the peice melts the plastic and sags down, you
can heat it and push it back up. To solder the wire hold the socket so that it's facing 
bottom up. Solder the wire directly perpendicular to the socket such that it sticks straight 
down (otherwise there will be spacing issues with the walls of the keypad). 

### NOTE: You might have to glue the hotswap sockets down otherwise they might come out when removing the switch. Super glue woks well and is still somewhat removable.
     
# How to change what keys you want bound:

On lines 41-56 in the code you can change each pin to a different letter 
or modifier. To do this, simply add your key/letter in the empty ' ' on the 
corresponding line of the pin you have soldered to.

# How to install the Arduino Pro Micro:
     
If your board has a flange/lip around the port that will need to be clipped
in order for it to fit into the hole. position the board such that the port 
is alligned with the hole at a slight angle. Then push the port gently into the hole
(may use pliars if necessary).once seated press the board down such that it sits in the
lip/border to hold it in place.  
(If it doesn't get held in place or the border broke off somehow, you can glue it down or use a thin double sided tape.)

# How to upload code to the arduino:

Connect the arduino to your pc and select arduino leonardo in the tools drop down menu and install all the required libraries. 
Make sure you selected the right COM port in the tools menu if it's not already selected. Click the upload button and let it finish.

# TLDR;/short and concise version:

Solder wires to pins 5 and 15 (default) and GND/ground. If using hot swap sockets left (thick side) is gnd.
To change the keys/pins change the definitions on lines 41-56. To insert the arduino
line up the port with the hole and push it in and down. then upload the code and you're done.

# FAQ:

Q: Do i have to upload the code every time i plug it in?  
A: Nope! uploading code is a one time thing! (unless it gets updated or needs to be changed)

Q: Can i use this on other computers?  
A: Yes! Just remember to set your binds correctly in osu!.  

Q: What switches can i use?
A: Yes! all gateron style switches are compatible.  
(if you are using v2.5 without hotswap socket support you may have to solder directly to the pins of the switch)  
