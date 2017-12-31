#include <HID-Project.h>
#include <HID-Settings.h>
#include <IRremote.h>

int IR_PIN = 2;
int TEST_LED = 17;
IRrecv irrecv(IR_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value);
    irrecv.resume();
    if (results.value == 3664915664) {
      Serial.println(" -> SHUTDOWN (Button 1)");
      System.write(SYSTEM_POWER_DOWN);
    }
    if (results.value == 1501530768) {
      Serial.println(" -> SYSTEM TEST (Button 2)");
      digitalWrite(TEST_LED, HIGH);
      delay(200);
      digitalWrite(TEST_LED, LOW);
      delay(200);
      digitalWrite(TEST_LED, HIGH);
      delay(200);
      digitalWrite(TEST_LED, LOW);
    }
    else if (results.value == 3308637412) {
        Serial.println(" -> GUI + M I (Button 3)");
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press('m');
    }
    else if (results.value ==  3717821821) {
        Serial.println(" -> LEFT (Button 4)");
        Keyboard.press(KEY_LEFT_ARROW);
        Keyboard.releaseAll();
    }
    else if (results.value == 3768154676) {
        Serial.println(" -> GUI + TAB (Button 5)");
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press(KEY_TAB);
        Keyboard.releaseAll();
    }  
    else if (results.value == 925512504) {
        Serial.println(" -> RIGHT (Button 6)");
        Keyboard.press(KEY_RIGHT_ARROW);
        Keyboard.releaseAll();
    }
    else if (results.value == 1725592501) {
        Serial.println(" -> PAGE UP (Button 7)");
        Keyboard.press(KEY_PAGE_UP);
        Keyboard.releaseAll();
    }
    else if (results.value == 4124247567) {
        Serial.println(" -> HOME AND REFRESH (Button 8)");
        Keyboard.press(KEY_HOME);
        Keyboard.releaseAll();
        Keyboard.press(KEY_F5);
        Keyboard.releaseAll();
    }
    else if (results.value == 4107469948) {
        Serial.println(" -> PAGE DOWN (Button 9)");
        Keyboard.press(KEY_PAGE_DOWN);
        Keyboard.releaseAll();
    }

    else if (results.value == 492960252) {
      Serial.println(" -> PREVIOUS SONG (Button 10)");
      Consumer.write(MEDIA_PREVIOUS);
    }
    else if (results.value == 1520310368) {
      Serial.println(" -> PLAY/PAUSE MUSIC (Button 11)");
      Consumer.write(MEDIA_PLAY_PAUSE);
    }
    else if (results.value == 2417041971) {
      Serial.println(" -> NEXT SONG (Button 12)");
      Consumer.write(MEDIA_NEXT);
    }
    else if (results.value == 2400264350) {
      Serial.println(" -> REWIND VIDEO (Button 13)");
      Keyboard.write(KEY_LEFT);
      // If you are using Netflix, you should press ENTER after that (Button 20).
    }
    else if (results.value == 920877268) {
      Serial.println(" -> PLAY/PAUSE VIDEO (Button 14)");
      Keyboard.write(' ');
    }
    else if (results.value == 4097163505) {
      Serial.println(" -> FLASH FORWARD VIDEO (Button 15)");
      Keyboard.write(KEY_RIGHT);
      // If you are using Netflix, you should press ENTER after that (Button 20).
    }
    else if (results.value == 1732063681) {
        Serial.println(" -> VOL - (Button 16)");
        delay(50);
        Consumer.write(MEDIA_VOLUME_DOWN);
    }
    else if (results.value == 1681730824) {
        Serial.println(" -> VOL + (Button 17)");
        delay(50);
        Consumer.write(MEDIA_VOLUME_UP);
    }
    else if (results.value == 207085782) {
        Serial.println(" -> MUTE (Button 18)");
        Consumer.write(MEDIA_VOLUME_MUTE);
    }
    else if (results.value == 832280894) {
        Serial.println(" -> GUI + M (Button 19)");
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press('m');
        Keyboard.releaseAll();
    }
    else if (results.value == 1228837117) {
        Serial.println(" -> ENTER (Button 20");
        Keyboard.press(KEY_RETURN);
        Keyboard.releaseAll();
    }
    else if (results.value == 1279169972) {
        Serial.println(" -> FOCUS ON THE CURRENT WINDOW (Button 21)");
        Mouse.move(-400, -200, 0);
        Mouse.move(-400, -200, 0);
        Mouse.move(-400, -200, 0);
        Mouse.move(-400, -200, 0);
        Mouse.move(-400, -200, 0);
        Mouse.move(-400, -200, 0);
        Mouse.move(-15, -30, 0);
        Mouse.click();
    }
    else if (results.value == 1092910182) {
        Serial.println(" -> ESC (Button 22)");
        Keyboard.write('f');
    }
    else if (results.value == 2936799671) {
        Serial.println(" -> FULL SCREEN (Button 23)");
        Keyboard.write('F');
        // You can even use: Keyboard.write(F11);
    }
}
  delay(10);
}
