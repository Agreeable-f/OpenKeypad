TLDR/shorter version and FAQ at the end:

NOTE: You might have to glue the hotswap sockets down otherwise they might come out when removing the switch.

Print info/settings:

NOTE: LID MUST BE FLIPPED 180° ON THE X OR Y AXIS SUCH THAT IT LAYS FLAT.

          All prototypes and models were printed on a prusa i3mk2s.
     .2mm layer height with 3 top and bottom solid layers and 4 perimiter/shells.
     first layer height is set to 200% with the first layer width at 100%
     Infill was set to 100% With the rectelinear pattern. No supports needed!
     more details in the simplify3d profile.

Pins to solder to and how to change them:

          Solder your positive pins to 5 and 15 and the negative pins
     to any of the  pins. When doing to ensure that none of the wire 
     pokes out of the bottom of the board. 
     (it is reccommended that you do this on a flat surface/soldering mat)
     You can also solder both negative pins to one ground 
     if you want, however both positive pins must be connected
     to separate pins. you can also change what pins you'd like to solder to 
     (with the exception of gnd) on lines 15-25. chose the corresponding pin
     for the key you binded on lines 5-13 and un-comment them. Also remember to 
     un-comment the pins on lines 61-69.

How to solder and install Kailh hot swap sockets:

NOTE:  THICK SIDE (LEFT) GOES TO GROUND AND SKINNY SIDE (RIGHT) GOES TO THE PINOUT (5, 15 EXT.)

          Solder the wires to the defined pins in the code (default is 5 and 15) as well as the ground pins
     (any will work) I used the pins that came with the board and used them as leads to solder to.
     Add a ball of solder to your iron and gently drop it into one of the two metal 
     bits on the side of the socket. If the peice melts the plastic and sags down, you
     can heat it and push it back up. To solder the wire hold the socket so that it's facing 
     bottom up. solder the wire directly perpendicular to the socket such that it sticks straight 
     down (otherwise there will be spacing issues with the walls of the keypad). 
     
How to change what keys you want bound:

     On lines 5-13 in the code you can change each pin to a different letter 
     however since there are only two buttons you should only need to change
     the non commented lines (5 and 7). if you do change any of the other keys
     make sure to un-comment the correct pins on lines 61-69. 

How to install the Arduino Pro Micro:
     
          If your board has a flange/lip around the port that will need to be clipped
     in order for it to fit into the hole. position the board such that the port 
     is alligned with the hole at a slight angle. Then push the port gently into the hole
     (may use pliars if necessary).once seated press the board down such that it sits in the
     lip/border to hold it in place.

How to upload code to the arduino:

          Connect the arduino to your pc and make sure it shows up in device manager (as well as it's com port).
     select the correct com port (that you got from device manager) 
     and arduino leonardo in the tools drop down menu. Install all the required libraries. 
     Click the upload button and let it finish.

TLDR;/short and concise version:

          Solder wires to pins 5 and 15 (default) and gnd/ground. If using hot swap sockets left is gnd.
     to change the keys change the definitions on lines 5-13. To change the pins change the definitions
     on lines 15-25 also uncomment the right pins on lines 61-69 (nice). to insert the arduino
     line up the port with the hole and push it in and down. then upload the code and you're done.

NOTE: You might have to glue the hot swap sockets down otherwise they might come out when removing the switch.


FAQ:

Q: do i have to upload the code every time i plug it in?
A: Nope! this is a one time code upload

Q: can i use this on other computers?
A: Yes! as long as you set your binds correctly in osu!.

Q: can i use any switch?
A: Yes! however if you are using hot swap sockets then only gateron style switches.


