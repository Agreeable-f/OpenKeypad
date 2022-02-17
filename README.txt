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
     
How to change what keys you want binded:

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



FAQ:

Q: do i have to upload the code every time i plug it in?
A: Nope! this is a one time code upload

Q: can i use this on other computers?
A: Yes! as long as you set your binds correctly in osu!.


