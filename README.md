# IR Remote PC
Lay down, grab your Android smartphone and control remotely and easily your PC.

## Final project & requirements
<img weight="600em" height="360em" src="https://raw.githubusercontent.com/BlueArduino20/IR_Remote_PC/master/img/frontal.jpg">

1. <b>IR sensor: TSOP4838 DIP-3.</b></br></br>
<img src="https://raw.githubusercontent.com/BlueArduino20/IR_Remote_PC/master/img/ir_features.PNG">

2. <b>Pro Micro 16MHz, 5V</b>

3. <b>OTG adapter</b>

4. <b>USB extension</b> (Optional)

## Connections

<img weight="750em" height="421em" src="https://raw.githubusercontent.com/BlueArduino20/IR_Remote_PC/master/img/rear.jpg">

<table><tr><th>Pro Micro</th><th>TSOP4838</th></tr>
  <tr><td>VCC</td><td>Vs (3)</td></tr>
  <tr><td>GND</td><td>GND (2)</td></tr>
  <tr><td>D2</td><td>OUT (1)</td></tr>
</table>

## Setup

Upload the following code into your Pro Micro with your Arduino IDE. Make sure that you select the "Arduino Micro".
<a href="https://github.com/BlueArduino20/IR_Remote_PC/blob/master/IR_Remote_PC.ino">Go to IR_Remote_PC.ino</a>

## Android "irplus" APP setup

1. Install the APP into your phone: <a href="https://play.google.com/store/apps/details?id=net.binarymode.android.irplus">Irplus</a>

2. Add a new device and select the brand and the device that you want.

3. Go to "Edit" and press the "XML" button <img weight="18em" height="18em" src="https://raw.githubusercontent.com/BlueArduino20/IR_Remote_PC/master/img/xml_icon.jpg">.

4. Paste the following code: <a href="https://github.com/BlueArduino20/IR_Remote_PC/blob/master/irplus.xml">irplus.xml</a> into the application.

5. Save the file.

6. Test your setup.

## Functions

<img weight="300em" height="406em" src="https://raw.githubusercontent.com/BlueArduino20/IR_Remote_PC/master/img/irplus.jpg">

<table>
  <tr><td>1. Shutdown</td><td>2. System test</td><td>3. Minimize all windows</td></tr>
  <tr><td>4. Left arrow</td><td>5. Show all windows<td>6. Right arrow</td></tr>
  <tr><td>7. Page UP</td><td>8. Home + Refresh</td><td>9. Page DOWN</td></tr>
  <tr><td>10. Previous song</td><td>11. Play/Pause song</td><td>12. Next song</td></tr>
  <tr><td>13. Rewind video (Left arrow)</td><td>14. Play/Pause video</td><td>15. Flash forward video (Right arrow)</td></tr>
  <tr><td>16. Decrease volume</td><td>17. Increase volume</td><td>18. Mute</td></tr>
  <tr><td>19. Minimize all windows</td><td>20. Enter</td><td>21. Focus on the current window</td></tr>
  <tr><td>22. ESC</td><td>23. Alternate full screen</td></tr>
</table>
